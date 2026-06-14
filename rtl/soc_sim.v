`timescale 1ns / 1ps

// Harta de memorie (stil QEMU virt):
//   CLINT 0x0200_0000  (intern in nucleu)
//   UART  0x1000_0000
//   RAM   0x8000_0000
module soc_sim #(
    parameter integer RAM_WORDS = 65536,          // 256 KB
    parameter [31:0]  RESET_PC  = 32'h8000_0000
)(
    input  wire       clk,
    input  wire       rst_n,
    input  wire [3:0] irq_in,
    output wire       uart_tx_stb,
    output wire [7:0] uart_tx_byte
);
    wire [31:0] imem_addr, imem_rdata;
    wire [31:0] dmem_addr, dmem_wdata, dmem_rdata;
    wire [3:0]  dmem_wstrb;
    wire        dmem_we, dmem_re;
    wire        plic_meip;

    riscv_core_pipe #(.RESET_PC(RESET_PC)) u_core (
        .clk(clk), .rst_n(rst_n),
        .imem_addr(imem_addr), .imem_rdata(imem_rdata),
        .dmem_addr(dmem_addr), .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb), .dmem_we(dmem_we), .dmem_rdata(dmem_rdata),
        .dmem_re(dmem_re), .ext_irq(plic_meip)
    );

    reg [31:0] ram [0:RAM_WORDS-1];
    localparam integer IDXW = $clog2(RAM_WORDS);

    wire        ram_sel  = (dmem_addr[31:28] == 4'h8);
    wire        uart_sel = (dmem_addr[31:28] == 4'h1);
    wire        plic_sel = (dmem_addr[31:24] == 8'h0C);
    wire [IDXW-1:0] ram_widx = dmem_addr[IDXW+1:2];
    wire [IDXW-1:0] ram_ridx = imem_addr[IDXW+1:2];

    assign imem_rdata = ram[ram_ridx];

    always @(posedge clk) begin
        if (dmem_we & ram_sel) begin
            if (dmem_wstrb[0]) ram[ram_widx][7:0]   <= dmem_wdata[7:0];
            if (dmem_wstrb[1]) ram[ram_widx][15:8]  <= dmem_wdata[15:8];
            if (dmem_wstrb[2]) ram[ram_widx][23:16] <= dmem_wdata[23:16];
            if (dmem_wstrb[3]) ram[ram_widx][31:24] <= dmem_wdata[31:24];
        end
    end

    wire [31:0] uart_rdata;
    soc_uart u_uart (
        .clk(clk), .rst_n(rst_n),
        .sel(uart_sel), .we(dmem_we & uart_sel),
        .off(dmem_addr[3:0]), .wdata(dmem_wdata[7:0]), .rdata(uart_rdata),
        .tx_stb(uart_tx_stb), .tx_byte(uart_tx_byte)
    );

    wire [31:0] plic_rdata;
    plic #(.N(4)) u_plic (
        .clk(clk), .rst_n(rst_n),
        .sel(plic_sel & (dmem_re | dmem_we)), .we(dmem_we & plic_sel),
        .off(dmem_addr[23:0]), .wdata(dmem_wdata), .rdata(plic_rdata),
        .src(irq_in), .meip(plic_meip)
    );

    assign dmem_rdata = ram_sel  ? ram[ram_widx]
                      : uart_sel ? uart_rdata
                      : plic_sel ? plic_rdata
                      :            32'b0;
endmodule
