`timescale 1ns / 1ps
`include "riscv_defs.vh"
// ============================================================
//  tb_atomic.v  -  Test dedicat extensiei A (AMO + LR/SC)
// ------------------------------------------------------------
//  Incarca un mic program in memorie (unificata) si verifica
//  rezultatele atomicelor citind regfile-ul si memoria la final.
//  Self-checking: afiseaza >>> PASS <<< daca toate verificarile trec.
// ============================================================
module tb_atomic;
    localparam WORDS = 4096;
    reg clk = 0, rst_n;
    always #5 clk = ~clk;

    reg [31:0] mem [0:WORDS-1];
    wire [31:0] imem_addr, imem_rdata, dmem_addr, dmem_wdata, dmem_rdata;
    wire [3:0]  dmem_wstrb; wire dmem_we;
    wire [31:0] iidx = imem_addr[31:2], didx = dmem_addr[31:2];
    assign imem_rdata = mem[iidx & (WORDS-1)];
    assign dmem_rdata = mem[didx & (WORDS-1)];
    always @(posedge clk) if (dmem_we) begin
        if (dmem_wstrb[0]) mem[didx & (WORDS-1)][7:0]   <= dmem_wdata[7:0];
        if (dmem_wstrb[1]) mem[didx & (WORDS-1)][15:8]  <= dmem_wdata[15:8];
        if (dmem_wstrb[2]) mem[didx & (WORDS-1)][23:16] <= dmem_wdata[23:16];
        if (dmem_wstrb[3]) mem[didx & (WORDS-1)][31:24] <= dmem_wdata[31:24];
    end

    riscv_core_pipe #(.RESET_PC(32'h0)) dut (
        .clk(clk), .rst_n(rst_n),
        .imem_addr(imem_addr), .imem_rdata(imem_rdata),
        .dmem_addr(dmem_addr), .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb), .dmem_we(dmem_we), .dmem_rdata(dmem_rdata), .ext_irq(1'b0)
    );

    // helper: codare instructiuni
    function [31:0] amo(input [4:0] f5, input [4:0] rd, rs1, rs2);
        amo = {f5, 2'b00, rs2, rs1, `F3_AMO_W, rd, `OPC_AMO}; endfunction
    function [31:0] addi(input [4:0] rd, rs1, input [11:0] imm);
        addi = {imm, rs1, 3'b000, rd, `OPC_OP_IMM}; endfunction
    function [31:0] lui(input [4:0] rd, input [19:0] imm);
        lui = {imm, rd, `OPC_LUI}; endfunction

    integer i, errors = 0;
    // adresa de lucru in memorie: 0x100 (cuvant 64)
    localparam [11:0] ADDR = 12'h100;

    task chk_reg(input [4:0] r, input [31:0] exp, input [127:0] nume);
        begin
            if (dut.u_rf.regs[r] !== exp) begin
                $display("  [X] %0s: x%0d = %08x (asteptat %08x)", nume, r, dut.u_rf.regs[r], exp);
                errors = errors + 1;
            end else
                $display("  [ok] %0s: x%0d = %08x", nume, r, exp);
        end
    endtask
    task chk_mem(input [31:0] wa, input [31:0] exp, input [127:0] nume);
        begin
            if (mem[(wa>>2) & (WORDS-1)] !== exp) begin
                $display("  [X] %0s: mem[%08x] = %08x (asteptat %08x)", nume, wa, mem[(wa>>2)&(WORDS-1)], exp);
                errors = errors + 1;
            end else
                $display("  [ok] %0s: mem[%08x] = %08x", nume, wa, exp);
        end
    endtask

    initial begin
        for (i = 0; i < WORDS; i = i + 1) mem[i] = `RV_NOP;

        // x1 = ADDR (0x100)
        mem[0]  = addi(1, 0, ADDR);
        // mem[ADDR] = 100 ; x2=100 ; sw x2,(x1)
        mem[1]  = addi(2, 0, 12'd100);
        mem[2]  = {7'b0, 5'd2, 5'd1, `F3_SW, 5'b0, `OPC_STORE};   // sw x2,0(x1)
        // x3 = 10
        mem[3]  = addi(3, 0, 12'd10);
        // amoadd.w x4, x3, (x1)  -> x4=100(old), mem=110
        mem[4]  = amo(`AMO_ADD, 4, 1, 3);
        // amoswap.w x5, x3, (x1) -> x5=110(old), mem=10
        mem[5]  = amo(`AMO_SWAP, 5, 1, 3);
        // x6=0xF0 ; amoor.w x7,x6,(x1) -> x7=10(old), mem=10|F0=FA
        mem[6]  = addi(6, 0, 12'h0F0);
        mem[7]  = amo(`AMO_OR, 7, 1, 6);
        // amomax.w x8,x3,(x1): max(0xFA=250, 10)=250 -> x8=250(old=mem), mem ramane 0xFA
        mem[8]  = amo(`AMO_MAX, 8, 1, 3);
        // lr.w x9,(x1) -> x9=0xFA ; sc.w x10,x3,(x1) -> succes: x10=0, mem=10
        mem[9]  = amo(`AMO_LR, 9, 1, 0);
        mem[10] = amo(`AMO_SC, 10, 1, 3);
        // sc.w x11,x6,(x1) fara lr in prealabil -> esec: x11=1, mem ramane 10
        mem[11] = amo(`AMO_SC, 11, 1, 6);
        // bucla terminala
        mem[12] = {25'b0, `OPC_JAL & 7'h7f} | 32'h0000006f; // j .  (0x6f)

        rst_n = 0; repeat(3) @(negedge clk); rst_n = 1;
        repeat(200) @(negedge clk);

        $display("=== Verificari extensia A ===");
        chk_reg(4,  32'd100,    "amoadd old");
        chk_reg(5,  32'd110,    "amoswap old");
        chk_reg(7,  32'd10,     "amoor old");
        chk_reg(8,  32'h000000FA,"amomax old(mem)");
        chk_reg(9,  32'h000000FA,"lr.w val");
        chk_reg(10, 32'd0,      "sc.w succes (0)");
        chk_reg(11, 32'd1,      "sc.w esec (1)");
        chk_mem({20'b0,ADDR}, 32'd10, "mem final dupa sc reusit");

        if (errors == 0) $display(">>> PASS <<<");
        else             $display(">>> FAIL (%0d erori) <<<", errors);
        $finish;
    end

    initial begin #100000; $display("TIMEOUT"); $finish; end
endmodule
