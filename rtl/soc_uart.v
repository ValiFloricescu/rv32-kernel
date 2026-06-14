`timescale 1ns / 1ps

module soc_uart (
    input  wire        clk,
    input  wire        rst_n,
    input  wire        sel,
    input  wire        we,
    input  wire [3:0]  off,
    input  wire [7:0]  wdata,
    output wire [31:0] rdata,

    output reg         tx_stb,
    output reg  [7:0]  tx_byte
);
    // 16550-lite: THR la offset 0 (scriere = transmite), LSR la offset 5.
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            tx_stb <= 1'b0; tx_byte <= 8'b0;
        end else begin
            tx_stb <= 1'b0;
            if (sel & we & (off == 4'h0)) begin
                tx_byte <= wdata;
                tx_stb  <= 1'b1;
            end
        end
    end

    // LSR (offset 5) traieste in cuvantul offset-urilor 4..7, pe octetul 1.
    // Nucleul extrage octetul dupa addr[1:0], deci punem 0x60 pe lane-ul 1.
    assign rdata = (off[3:2] == 2'b01) ? 32'h0000_6000 : 32'b0;
endmodule
