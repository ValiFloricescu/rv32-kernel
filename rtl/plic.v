`timescale 1ns / 1ps

// PLIC minimal: N surse (id 1..N), un singur context (M-mode, hart 0).
// Harta (offset fata de baza, stil standard):
//   0x000004 + 4*(id-1) : prioritate sursa id   (3 biti)
//   0x001000            : pending (read-only, bit/sursa)
//   0x002000            : enable context 0       (bit/sursa)
//   0x200000            : threshold context 0
//   0x200004            : claim (citire) / complete (scriere)
module plic #(parameter integer N = 4) (
    input  wire        clk,
    input  wire        rst_n,
    input  wire        sel,
    input  wire        we,
    input  wire [23:0] off,
    input  wire [31:0] wdata,
    output reg  [31:0] rdata,

    input  wire [N:1]  src,
    output wire        meip
);
    localparam [23:0] O_PENDING = 24'h001000;
    localparam [23:0] O_ENABLE  = 24'h002000;
    localparam [23:0] O_THRESH  = 24'h200000;
    localparam [23:0] O_CLAIM   = 24'h200004;

    reg [2:0]  prio [1:N];
    reg [N:1]  ip;
    reg [N:1]  enable;
    reg [N:1]  inservice;
    reg [2:0]  threshold;
    integer    i;

    // selectie: cea mai mare prioritate printre sursele pending+enabled peste prag
    reg [2:0] best_id, best_pri;
    always @* begin
        best_id = 3'd0; best_pri = 3'd0;
        for (i = 1; i <= N; i = i + 1)
            if (ip[i] & enable[i] & (prio[i] > threshold) & (prio[i] > best_pri)) begin
                best_pri = prio[i];
                best_id  = i[2:0];
            end
    end
    assign meip = (best_id != 3'd0);

    wire prio_acc = sel & (off >= 24'h000004) & (off <= (24'h000004 + 4*(N-1)));
    wire [31:0] prio_id = (off - 24'h000004) >> 2;   // 0..N-1

    always @* begin
        rdata = 32'b0;
        if (prio_acc)               rdata = {29'b0, prio[prio_id[2:0] + 1]};
        else if (off == O_PENDING)  rdata = {{(32-N){1'b0}}, ip, 1'b0};
        else if (off == O_ENABLE)   rdata = {{(32-N){1'b0}}, enable, 1'b0};
        else if (off == O_THRESH)   rdata = {29'b0, threshold};
        else if (off == O_CLAIM)    rdata = {29'b0, best_id};
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ip <= 0; enable <= 0; inservice <= 0; threshold <= 3'b0;
            for (i = 1; i <= N; i = i + 1) prio[i] <= 3'b0;
        end else begin
            // gateway: ridica pending cat timp sursa e activa si nu e in tratare
            for (i = 1; i <= N; i = i + 1)
                if (src[i] & ~inservice[i]) ip[i] <= 1'b1;

            if (sel & we) begin
                if (prio_acc)              prio[prio_id[2:0] + 1] <= wdata[2:0];
                else if (off == O_ENABLE)  enable    <= wdata[N:1];
                else if (off == O_THRESH)  threshold <= wdata[2:0];
                else if (off == O_CLAIM)   inservice[wdata[2:0]] <= 1'b0;   // complete
            end

            // claim (citire): preia sursa, sterge pending, marcheaza in tratare
            if (sel & ~we & (off == O_CLAIM) & (best_id != 3'd0)) begin
                ip[best_id]        <= 1'b0;
                inservice[best_id] <= 1'b1;
            end
        end
    end
endmodule
