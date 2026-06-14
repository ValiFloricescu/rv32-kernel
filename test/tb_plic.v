`timescale 1ns / 1ps

`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_plic.vcd"
`endif

module tb_plic;
    localparam N = 4;
    reg         clk=0, rst_n;
    reg         sel, we;
    reg  [23:0] off;
    reg  [31:0] wdata;
    wire [31:0] rdata;
    reg  [N:1]  src;
    wire        meip;
    integer     errors=0;

    always #5 clk=~clk;

    plic #(.N(N)) dut (
        .clk(clk), .rst_n(rst_n), .sel(sel), .we(we),
        .off(off), .wdata(wdata), .rdata(rdata), .src(src), .meip(meip)
    );

    task pwrite;
        input [23:0] o; input [31:0] d;
        begin @(negedge clk); sel=1; we=1; off=o; wdata=d; @(negedge clk); sel=0; we=0; end
    endtask

    task pclaim;            // citire claim cu efect (sterge pending)
        output [31:0] d;
        begin
            @(negedge clk); sel=1; we=0; off=24'h200004;
            #1 d=rdata;                 // lasa combinational sa se aseze
            @(negedge clk); sel=0;
        end
    endtask

    task chk;
        input integer id; input [31:0] got, exp;
        begin
            if (got !== exp) begin
                errors=errors+1; $display("  FAIL %0d: got=%h exp=%h", id, got, exp);
            end
        end
    endtask

    reg [31:0] c;
    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_plic);
        sel=0; we=0; off=0; wdata=0; src=0;
        rst_n=0; repeat(3) @(negedge clk); rst_n=1; @(negedge clk);

        // prioritati: src1=1, src2=2, src3=3, src4=1
        pwrite(24'h000004, 1); pwrite(24'h000008, 2);
        pwrite(24'h00000C, 3); pwrite(24'h000010, 1);
        pwrite(24'h002000, 32'h0000_001E);   // enable src1..4
        pwrite(24'h200000, 0);                // threshold 0

        // Test 1: o sursa
        src=4'b0001; @(negedge clk); @(negedge clk);
        chk(1, {31'b0, meip}, 1);             // meip ridicat
        pclaim(c); chk(2, c, 1);              // claim -> sursa 1
        @(negedge clk);
        chk(3, {31'b0, meip}, 0);             // pending sters
        pwrite(24'h200004, 1);                // complete 1
        src=0; @(negedge clk);

        // Test 2: prioritate (src1+src2 -> intai 2, apoi 1)
        src=4'b0011; @(negedge clk); @(negedge clk);
        pclaim(c); chk(4, c, 2);              // prioritatea mai mare castiga
        @(negedge clk);
        pclaim(c); chk(5, c, 1);
        pwrite(24'h200004, 2); pwrite(24'h200004, 1);
        src=0; @(negedge clk);

        // Test 3: threshold (prag 2: src1 mascat, src3 trece)
        pwrite(24'h200000, 2);
        src=4'b0001; @(negedge clk); @(negedge clk);
        chk(6, {31'b0, meip}, 0);             // prio 1 nu > 2
        src=4'b0100; @(negedge clk); @(negedge clk);
        chk(7, {31'b0, meip}, 1);             // prio 3 > 2
        pclaim(c); chk(8, c, 3);

        if (errors==0) $display("[PLIC] >>> PASS <<< (prioritati + threshold + claim/complete)");
        else           $display("[PLIC] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
