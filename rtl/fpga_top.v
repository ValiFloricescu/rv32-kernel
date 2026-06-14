`timescale 1ns / 1ps
// ============================================================
//  fpga_top.v  -  Top STANDALONE (pur PL) pentru PYNQ-Z2
// ------------------------------------------------------------
//  Fara PS, fara AXI: nucleul ruleaza un program pre-incarcat in
//  memoria on-chip si publica rezultatul pe LED-uri.
//
//    clk        - ceas PL (vezi nota de timing din raspuns)
//    btn_reset  - buton: APASAT = reset (activ pe 1); sincronizat intern
//    led[3:0]   - 4 biti inferiori ai ultimei valori scrise la RESULT_ADDR
//
//  Cum vezi rezultatul: programul calculeaza ceva, il scrie la
//  RESULT_ADDR (0x100), apoi intra in bucla infinita. Un registru
//  "snoop" pe magistrala de scriere retine valoarea => LED-urile
//  raman pe rezultat dupa ce programul s-a terminat.
//
//  RESET ACTIV PE 0 in interiorul nucleului.  Sintetizabil.
// ============================================================
module fpga_top #(
    parameter integer ADDR_WIDTH  = 12,                 // 4 KB memorie
    parameter [31:0]  RESULT_ADDR = 32'h0000_0100,      // adresa rezultatului
    parameter         MEM_FILE    = "fpga_demo.mem"
)(
    input  wire       clk,
    input  wire       btn_reset,
    output wire [3:0] led
);
    // ---- sincronizator de reset (2 FF) -> activ pe 0 pentru nucleu ----
    reg [1:0] rst_sync = 2'b11;
    always @(posedge clk) rst_sync <= {rst_sync[0], btn_reset};
    wire rst_n = ~rst_sync[1];

    // ---- magistrale CPU <-> memorie ----
    wire [31:0] imem_addr, imem_rdata;
    wire [31:0] dmem_addr, dmem_wdata, dmem_rdata;
    wire [3:0]  dmem_wstrb;
    wire        dmem_we;

    riscv_core_pipe #(.RESET_PC(32'h0000_0000)) u_core (
        .clk(clk), .rst_n(rst_n),
        .imem_addr(imem_addr), .imem_rdata(imem_rdata),
        .dmem_addr(dmem_addr), .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb), .dmem_we(dmem_we), .dmem_rdata(dmem_rdata),
        .ext_irq(1'b0)
    );

    fpga_mem #(.ADDR_WIDTH(ADDR_WIDTH), .MEM_FILE(MEM_FILE)) u_mem (
        .clk(clk),
        .imem_addr(imem_addr), .imem_rdata(imem_rdata),
        .dmem_addr(dmem_addr), .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb), .dmem_we(dmem_we), .dmem_rdata(dmem_rdata)
    );

    // ---- captura rezultatului (snoop pe scriere la RESULT_ADDR) ----
    reg [31:0] result_reg;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            result_reg <= 32'b0;
        else if (dmem_we && (dmem_addr == RESULT_ADDR))
            result_reg <= dmem_wdata;
    end

    assign led = result_reg[3:0];
endmodule
