`timescale 1ns / 1ps
`include "riscv_defs.vh"

`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_priv.vcd"
`endif

module tb_priv;
    reg         clk = 0, rst_n;
    reg         rd_en, wr_en, trap_en, mret_en, sret_en;
    reg  [11:0] addr;
    reg  [31:0] wdata, trap_cause, trap_epc, trap_val;
    wire [31:0] rdata, trap_vec_o, ret_pc_o;
    wire [1:0]  priv_o;
    wire        addr_valid;
    integer     errors = 0;
    always #5 clk = ~clk;

    csr dut (.clk(clk), .rst_n(rst_n), .rd_en(rd_en), .wr_en(wr_en),
             .addr(addr), .wdata(wdata), .rdata(rdata), .addr_valid(addr_valid),
             .trap_en(trap_en), .trap_cause(trap_cause), .trap_epc(trap_epc),
             .trap_val(trap_val), .mret_en(mret_en), .sret_en(sret_en),
             .trap_vec_o(trap_vec_o), .ret_pc_o(ret_pc_o), .priv_o(priv_o));

    task wr(input [11:0] a, input [31:0] d);
        begin
            @(negedge clk); addr=a; wdata=d; wr_en=1;
            @(negedge clk); wr_en=0;
        end
    endtask

    task pulse_trap(input [31:0] c, input [31:0] epc);
        begin
            @(negedge clk); trap_en=1; trap_cause=c; trap_epc=epc; trap_val=0;
            @(negedge clk); trap_en=0;
        end
    endtask

    task pulse_mret;
        begin
            @(negedge clk); mret_en=1;
            @(negedge clk); mret_en=0;
        end
    endtask

    task pulse_sret;
        begin
            @(negedge clk); sret_en=1;
            @(negedge clk); sret_en=0;
        end
    endtask

    task chk(input integer id, input [31:0] got, input [31:0] exp);
        begin
            if (got !== exp) begin
                errors=errors+1;
                $display("  FAIL %0d: got=%h exp=%h", id, got, exp);
            end
        end
    endtask

    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_priv);
        rd_en=0; wr_en=0; trap_en=0; mret_en=0; sret_en=0;
        addr=0; wdata=0; trap_cause=0; trap_epc=0; trap_val=0;
        rst_n=0; @(negedge clk); @(negedge clk); rst_n=1;

        chk(1, {30'b0, priv_o}, `PRIV_M);

        wr(`CSR_MTVEC, 32'h0000_1000);
        wr(`CSR_STVEC, 32'h0000_2000);
        wr(`CSR_MEDELEG, (32'b1 << 8) | (32'b1 << 9));  // deleg ECALL_U, ECALL_S

        // coboara in U: mstatus.MPP=U, apoi mret
        wr(`CSR_MSTATUS, 32'h0000_0000);
        pulse_mret;
        chk(2, {30'b0, priv_o}, `PRIV_U);

        // ECALL din U: cauza 8, delegata -> trap in S
        pulse_trap(`CAUSE_ECALL_U, 32'h0000_0080);
        chk(3, {30'b0, priv_o}, `PRIV_S);
        chk(4, trap_vec_o, 32'h0000_2000);   // stvec
        @(negedge clk); addr=`CSR_SCAUSE; rd_en=1; #1; chk(5, rdata, `CAUSE_ECALL_U); rd_en=0;
        @(negedge clk); addr=`CSR_SEPC;   rd_en=1; #1; chk(6, rdata, 32'h0000_0080);  rd_en=0;

        // sret -> revine in U (spp era 0)
        pulse_sret;
        chk(7, {30'b0, priv_o}, `PRIV_U);

        // cauza NEdelegata din U (illegal=2) -> trap in M
        pulse_trap(`CAUSE_ILLEGAL, 32'h0000_00C0);
        chk(8, {30'b0, priv_o}, `PRIV_M);
        @(negedge clk); addr=`CSR_MCAUSE; rd_en=1; #1; chk(9, rdata, `CAUSE_ILLEGAL); rd_en=0;

        // acces CSR de masina din M: permis (addr_valid=1)
        @(negedge clk); addr=`CSR_MTVEC; rd_en=1; #1;
        if (addr_valid !== 1'b1) begin errors=errors+1; $display("  FAIL 10: M-CSR din M interzis"); end
        rd_en=0;

        // coboara in U si verifica: acces M-CSR din U -> interzis
        wr(`CSR_MSTATUS, 32'h0000_0000); pulse_mret;
        @(negedge clk); addr=`CSR_MTVEC; rd_en=1; #1;
        if (addr_valid !== 1'b0) begin errors=errors+1; $display("  FAIL 11: M-CSR accesibil din U"); end
        rd_en=0;

        if (errors==0) $display("[PRIV] >>> PASS <<< (privilegii M/S/U + delegare + sret)");
        else           $display("[PRIV] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
