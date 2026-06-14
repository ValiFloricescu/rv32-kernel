`timescale 1ns / 1ps
`include "riscv_defs.vh"

`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_irq_prog.vcd"
`endif
`ifndef PROG_HEX
 `define PROG_HEX "sw/prog_irq.hex"
`endif

module sim_imem_ip #(parameter WORDS=256)(input wire [31:0] addr, output wire [31:0] rdata);
    reg [31:0] mem [0:WORDS-1]; integer k;
    initial begin for (k=0;k<WORDS;k=k+1) mem[k]=`RV_NOP; $readmemh(`PROG_HEX, mem); end
    assign rdata = mem[addr[9:2]];
endmodule

module sim_dmem_ip #(parameter WORDS=256)(
    input wire clk, input wire [31:0] addr, wdata, input wire [3:0] wstrb,
    input wire we, output wire [31:0] rdata);
    reg [31:0] mem [0:WORDS-1]; integer k;
    initial for (k=0;k<WORDS;k=k+1) mem[k]=32'b0;
    wire [7:0] idx = addr[9:2];
    always @(posedge clk) if (we) begin
        if(wstrb[0]) mem[idx][7:0]<=wdata[7:0];     if(wstrb[1]) mem[idx][15:8]<=wdata[15:8];
        if(wstrb[2]) mem[idx][23:16]<=wdata[23:16]; if(wstrb[3]) mem[idx][31:24]<=wdata[31:24];
    end
    assign rdata = mem[idx];
endmodule

module tb_irq_prog;
    reg clk = 0, rst_n;
    wire [31:0] imem_addr, imem_rdata, dmem_addr, dmem_wdata, dmem_rdata;
    wire [3:0]  dmem_wstrb;
    wire        dmem_we;
    integer     errors = 0, i;
    always #5 clk = ~clk;

    sim_imem_ip imem (.addr(imem_addr), .rdata(imem_rdata));
    sim_dmem_ip dmem (.clk(clk), .addr(dmem_addr), .wdata(dmem_wdata),
                      .wstrb(dmem_wstrb), .we(dmem_we), .rdata(dmem_rdata));

    riscv_core_pipe dut (
        .clk(clk), .rst_n(rst_n),
        .imem_addr(imem_addr), .imem_rdata(imem_rdata),
        .dmem_addr(dmem_addr), .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb), .dmem_we(dmem_we), .dmem_rdata(dmem_rdata), .ext_irq(1'b0));

    task chk;
        input integer id;
        input [31:0] got;
        input [31:0] exp;
        begin
            if (got !== exp) begin
                errors=errors+1;
                $display("  FAIL %0d: got=%h exp=%h", id, got, exp);
            end
        end
    endtask

    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_irq_prog);
        rst_n=0; repeat(4) @(negedge clk); rst_n=1;
        for (i=0; i<1000; i=i+1) @(negedge clk);

        chk(1, dut.u_rf.regs[20], 32'd1);    // handler a rulat
        chk(2, dut.u_rf.regs[21], 32'd7);    // mcause = 0x80000007 (timer masina)
        chk(3, dut.u_rf.regs[10], 32'd100);  // bucla s-a incheiat dupa revenirea din trap

        if (errors==0) $display("[IRQ_PROG] >>> PASS <<< (intrerupere de timer prin pipeline)");
        else           $display("[IRQ_PROG] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
