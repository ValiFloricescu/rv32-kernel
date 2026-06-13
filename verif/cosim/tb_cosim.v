`timescale 1ns / 1ps
`include "riscv_defs.vh"
// ============================================================
//  tb_cosim.v  -  Harness de co-simulare (lockstep cu Spike)
// ------------------------------------------------------------
//  Identic ca model de executie cu tb_compliance, dar in plus
//  scrie un LOG DE COMMIT: cate o linie pentru fiecare instructiune
//  retrasa (etapa WB), in format canonic comparabil cu trace-ul
//  produs de `spike --log-commits`:
//
//      <pc8> <insn8> <rd2> <wdata8>
//
//  unde rd/wdata apar doar daca instructiunea scrie un registru
//  nenul; altfel "-- --------". PC-ul retras = memwb_pc4 - 4.
//  Sondam ierarhic semnalele de retragere din nucleu (RVFI-lite),
//  fara a modifica comportamentul.
// ============================================================
`ifndef PROG_HEX
 `define PROG_HEX "sw/prog1.hex"
`endif
`ifndef DUT_TRACE
 `define DUT_TRACE "verif/cosim/dut.trace"
`endif
`ifndef TOHOST
 `define TOHOST 32'h00000300
`endif
`ifndef MAX_CYCLES
 `define MAX_CYCLES 200000
`endif
`ifndef RESET_PC_TB
 `define RESET_PC_TB `RESET_PC
`endif
`ifndef WORDS_TB
 `define WORDS_TB 65536
`endif

module tb_cosim;
    localparam WORDS = `WORDS_TB;
    reg         clk = 1'b0, rst_n;
    integer     cyc = 0;
    integer     tf;
    always #5 clk = ~clk;

    reg [31:0] mem [0:WORDS-1];
    wire [31:0] imem_addr, imem_rdata, dmem_addr, dmem_wdata, dmem_rdata;
    wire [3:0]  dmem_wstrb;
    wire        dmem_we;
    wire [31:0] iidx = imem_addr[31:2];
    wire [31:0] didx = dmem_addr[31:2];
    assign imem_rdata = mem[iidx & (WORDS-1)];
    assign dmem_rdata = mem[didx & (WORDS-1)];

    always @(posedge clk) if (dmem_we) begin
        if (dmem_wstrb[0]) mem[didx & (WORDS-1)][7:0]   <= dmem_wdata[7:0];
        if (dmem_wstrb[1]) mem[didx & (WORDS-1)][15:8]  <= dmem_wdata[15:8];
        if (dmem_wstrb[2]) mem[didx & (WORDS-1)][23:16] <= dmem_wdata[23:16];
        if (dmem_wstrb[3]) mem[didx & (WORDS-1)][31:24] <= dmem_wdata[31:24];
    end

    riscv_core_pipe #(.RESET_PC(`RESET_PC_TB)) dut (
        .clk(clk), .rst_n(rst_n),
        .imem_addr(imem_addr), .imem_rdata(imem_rdata),
        .dmem_addr(dmem_addr), .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb), .dmem_we(dmem_we), .dmem_rdata(dmem_rdata)
    );

    integer k;
    initial begin
        for (k = 0; k < WORDS; k = k + 1) mem[k] = `RV_NOP;
        $readmemh(`PROG_HEX, mem);
        tf = $fopen(`DUT_TRACE, "w");
        $display("[COSIM] rulez %s -> %s", `PROG_HEX, `DUT_TRACE);
        rst_n = 1'b0; @(negedge clk); @(negedge clk); rst_n = 1'b1;
    end

    // --- log de commit: o linie per instructiune retrasa ---
    always @(posedge clk) if (rst_n) begin
        if (dut.memwb_valid) begin
            if (dut.memwb_reg_write && (dut.memwb_rd != 5'd0))
                $fwrite(tf, "%08x %08x %02d %08x\n",
                        dut.memwb_pc4 - 32'd4, dut.memwb_instr,
                        dut.memwb_rd, dut.wb_data);
            else
                $fwrite(tf, "%08x %08x -- --------\n",
                        dut.memwb_pc4 - 32'd4, dut.memwb_instr);
        end
    end

    always @(posedge clk) if (rst_n) begin
        cyc <= cyc + 1;
        if (dmem_we && (didx & (WORDS-1)) == ((`TOHOST >> 2) & (WORDS-1))) begin
            $display("[COSIM] halt la tohost dupa %0d cicluri", cyc);
            $fclose(tf); $finish;
        end
        if (cyc > `MAX_CYCLES) begin
            $display("[COSIM] STOP (timeout %0d cicluri)", cyc);
            $fclose(tf); $finish;
        end
    end
endmodule
