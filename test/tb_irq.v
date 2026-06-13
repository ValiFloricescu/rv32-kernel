`timescale 1ns / 1ps
`include "riscv_defs.vh"

`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_irq.vcd"
`endif

module tb_irq;
    reg         clk = 0, rst_n;
    reg         rd_en, wr_en, trap_en, mret_en, sret_en;
    reg  [11:0] addr;
    reg  [31:0] wdata, trap_cause, trap_epc, trap_val;
    wire [31:0] rdata, trap_vec_o, ret_pc_o, irq_cause;
    wire [1:0]  priv_o;
    wire        addr_valid, irq_pending;
    integer     errors = 0;

    reg         cl_sel, cl_we;
    reg  [15:0] cl_off;
    reg  [31:0] cl_wdata;
    wire [31:0] cl_rdata;
    wire        mtip;

    always #5 clk = ~clk;

    clint u_clint (.clk(clk), .rst_n(rst_n), .sel(cl_sel), .we(cl_we),
                   .off(cl_off), .wdata(cl_wdata), .rdata(cl_rdata), .mtip(mtip));

    csr dut (.clk(clk), .rst_n(rst_n), .rd_en(rd_en), .wr_en(wr_en),
             .addr(addr), .wdata(wdata), .rdata(rdata), .addr_valid(addr_valid),
             .trap_en(trap_en), .trap_cause(trap_cause), .trap_epc(trap_epc),
             .trap_val(trap_val), .mret_en(mret_en), .sret_en(sret_en), .mtip_i(mtip),
             .trap_vec_o(trap_vec_o), .ret_pc_o(ret_pc_o), .priv_o(priv_o),
             .irq_pending(irq_pending), .irq_cause(irq_cause));

    task wr;
        input [11:0] a;
        input [31:0] d;
        begin
            @(negedge clk); addr=a; wdata=d; wr_en=1;
            @(negedge clk); wr_en=0;
        end
    endtask

    task cl_write;
        input [15:0] o;
        input [31:0] d;
        begin
            @(negedge clk); cl_sel=1; cl_we=1; cl_off=o; cl_wdata=d;
            @(negedge clk); cl_sel=0; cl_we=0;
        end
    endtask

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

    integer i;
    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_irq);
        rd_en=0; wr_en=0; trap_en=0; mret_en=0; sret_en=0;
        addr=0; wdata=0; trap_cause=0; trap_epc=0; trap_val=0;
        cl_sel=0; cl_we=0; cl_off=0; cl_wdata=0;
        rst_n=0; @(negedge clk); @(negedge clk); rst_n=1;

        // timer dezactivat la reset -> fara intrerupere
        chk(1, {31'b0, mtip}, 32'b0);

        wr(`CSR_MTVEC, 32'h0000_1000);
        wr(`CSR_MIE,   (32'b1 << 7));          // MTIE
        wr(`CSR_MSTATUS, (32'b1 << 3));        // MIE global

        // programez mtimecmp mic -> mtime il depaseste -> mtip
        cl_write(16'h4004, 32'd0);
        cl_write(16'h4000, 32'd8);
        for (i=0; i<12; i=i+1) @(negedge clk);
        chk(2, {31'b0, mtip}, 32'b1);

        // intreruperea trebuie semnalata: cauza = timer masina (bit31 | 7)
        chk(3, {31'b0, irq_pending}, 32'b1);
        chk(4, irq_cause, 32'h8000_0007);

        // nucleul ia intreruperea: trap cu cauza de la csr, epc = pc curent
        @(negedge clk); trap_en=1; trap_cause=irq_cause; trap_epc=32'h0000_2000; trap_val=0;
        @(negedge clk); trap_en=0;
        chk(5, {30'b0, priv_o}, `PRIV_M);
        @(negedge clk); addr=`CSR_MCAUSE; rd_en=1; #1; chk(6, rdata, 32'h8000_0007); rd_en=0;
        @(negedge clk); addr=`CSR_MEPC;   rd_en=1; #1; chk(7, rdata, 32'h0000_2000); rd_en=0;

        // dupa intrare in trap, MIE=0 -> nicio alta intrerupere desi mtip ramane 1
        chk(8, {31'b0, irq_pending}, 32'b0);

        // handler dezarmeaza timer-ul (mtimecmp mare) -> mtip cade
        cl_write(16'h4000, 32'hFFFF_FFFF);
        cl_write(16'h4004, 32'hFFFF_FFFF);
        @(negedge clk);
        chk(9, {31'b0, mtip}, 32'b0);

        // mret -> MIE restaurat
        @(negedge clk); mret_en=1; @(negedge clk); mret_en=0;
        @(negedge clk); addr=`CSR_MSTATUS; rd_en=1; #1; chk(10, rdata[3], 1'b1); rd_en=0;

        if (errors==0) $display("[IRQ] >>> PASS <<< (timer CLINT + intrerupere masina)");
        else           $display("[IRQ] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
