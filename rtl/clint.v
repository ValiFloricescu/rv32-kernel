`timescale 1ns / 1ps
`include "riscv_defs.vh"

module clint (
    input  wire        clk,
    input  wire        rst_n,
    input  wire        sel,
    input  wire        we,
    input  wire [15:0] off,
    input  wire [31:0] wdata,
    output reg  [31:0] rdata,
    output wire        mtip
);
    reg [63:0] mtime;
    reg [63:0] mtimecmp;

    assign mtip = (mtime >= mtimecmp);

    always @(*) begin
        case (off)
            16'h4000: rdata = mtimecmp[31:0];
            16'h4004: rdata = mtimecmp[63:32];
            16'hBFF8: rdata = mtime[31:0];
            16'hBFFC: rdata = mtime[63:32];
            default:  rdata = 32'b0;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mtime    <= 64'b0;
            mtimecmp <= {64{1'b1}};
        end else begin
            mtime <= mtime + 64'b1;
            if (sel & we) begin
                case (off)
                    16'h4000: mtimecmp[31:0]  <= wdata;
                    16'h4004: mtimecmp[63:32] <= wdata;
                    16'hBFF8: mtime[31:0]     <= wdata;
                    16'hBFFC: mtime[63:32]    <= wdata;
                    default: ;
                endcase
            end
        end
    end
endmodule
