`timescale 1ns / 1ps
`include "riscv_defs.vh"

`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_mmu.vcd"
`endif

module tb_mmu;
    reg         clk = 0, rst_n;
    reg         req;
    reg  [31:0] vaddr, satp;
    reg  [1:0]  access, priv;
    reg         sum, mxr;
    wire        done, fault;
    wire [31:0] paddr;
    wire [3:0]  fault_cause;

    wire        mem_req;
    wire [31:0] mem_addr;
    reg  [31:0] pmem [0:16383];
    wire [31:0] mem_rdata = pmem[mem_addr[15:2]];
    wire        mem_ack   = mem_req;

    integer errors = 0;
    always #5 clk = ~clk;

    mmu dut (.clk(clk), .rst_n(rst_n), .req(req), .vaddr(vaddr), .access(access),
             .satp(satp), .priv(priv), .sum(sum), .mxr(mxr),
             .done(done), .paddr(paddr), .fault(fault), .fault_cause(fault_cause),
             .mem_req(mem_req), .mem_addr(mem_addr), .mem_rdata(mem_rdata), .mem_ack(mem_ack));

    task xlate;
        input [31:0] va;
        input [1:0]  acc;
        begin
            @(negedge clk); req=1; vaddr=va; access=acc;
            @(negedge clk); req=0;
            while (!done) @(negedge clk);
        end
    endtask

    task chk;
        input integer id;
        input [31:0] got, exp;
        begin
            if (got !== exp) begin
                errors=errors+1;
                $display("  FAIL %0d: got=%h exp=%h", id, got, exp);
            end
        end
    endtask

    integer i;
    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_mmu);
        for (i=0;i<16384;i=i+1) pmem[i]=32'b0;

        // tabel nivel 1 la 0x1000 (PPN=1): intrarea VPN1=1 -> pointer la tabel nivel 0 (PPN=2)
        pmem[32'h1004>>2] = (32'd2 << 10) | 32'h001;          // pointer, V
        // intrarea VPN1=2 ramane 0 (invalida)

        // tabel nivel 0 la 0x2000 (PPN=2)
        pmem[32'h2000>>2] = (32'd5 << 10) | 32'h0DF;          // frunza PPN=5, V|R|W|X|U|A|D
        pmem[32'h2004>>2] = (32'd6 << 10) | 32'h05B;          // frunza PPN=6, V|R|X|U|A (fara W)

        satp = 32'h8000_0001;  // MODE=1, root PPN=1
        priv = `PRIV_U; sum=0; mxr=0; req=0; access=0; vaddr=0;
        rst_n=0; @(negedge clk); @(negedge clk); rst_n=1;

        // 1) traducere load reusita: VA 0x00400ABC -> PA 0x5ABC
        xlate(32'h0040_0ABC, 2'd1);
        chk(1, {31'b0, fault}, 32'b0);
        chk(2, paddr, 32'h0000_5ABC);

        // 2) store pe pagina fara W -> store page fault (cauza 15)
        xlate(32'h0040_1000, 2'd2);
        chk(3, {31'b0, fault}, 32'b1);
        chk(4, {28'b0, fault_cause}, 32'd15);

        // 3) load pe aceeasi pagina (are R) -> PA 0x6000
        xlate(32'h0040_1000, 2'd1);
        chk(5, {31'b0, fault}, 32'b0);
        chk(6, paddr, 32'h0000_6000);

        // 4) VA cu intrare nivel 1 invalida -> load page fault (cauza 13)
        xlate(32'h0080_0000, 2'd1);
        chk(7, {31'b0, fault}, 32'b1);
        chk(8, {28'b0, fault_cause}, 32'd13);

        // 5) fetch pe pagina fara X (frunza PPN=5 are X, deci testez pe pagina R/X) -> ok
        xlate(32'h0040_1000, 2'd0);
        chk(9, {31'b0, fault}, 32'b0);
        chk(10, paddr, 32'h0000_6000);

        if (errors==0) $display("[MMU] >>> PASS <<< (traducere Sv32 + page fault)");
        else           $display("[MMU] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
