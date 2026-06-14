`timescale 1ns / 1ps
`include "riscv_defs.vh"

module mmu (
    input  wire        clk,
    input  wire        rst_n,

    input  wire        req,
    input  wire [31:0] vaddr,
    input  wire [1:0]  access,
    input  wire [31:0] satp,
    input  wire [1:0]  priv,
    input  wire        sum,
    input  wire        mxr,
    input  wire        flush,

    output reg         done,
    output reg  [31:0] paddr,
    output reg         fault,
    output reg  [3:0]  fault_cause,
    output reg  [31:0] leaf_pte,

    output reg         mem_req,
    output reg  [31:0] mem_addr,
    input  wire [31:0] mem_rdata,
    input  wire        mem_ack
);
    localparam TLBN = 8;
    localparam S_IDLE = 2'd0, S_L1 = 2'd1, S_L0 = 2'd2, S_DONE = 2'd3;
    reg [1:0]  state;
    reg [31:0] vaddr_q;
    reg [1:0]  access_q;

    reg        tlb_v   [0:TLBN-1];
    reg [19:0] tlb_tag [0:TLBN-1];
    reg [31:0] tlb_pte [0:TLBN-1];
    reg        tlb_sup [0:TLBN-1];
    reg [2:0]  rr;
    integer    i;

    function [3:0] pf_cause(input [1:0] acc);
        case (acc)
            2'd0:    pf_cause = 4'd12;
            2'd1:    pf_cause = 4'd13;
            default: pf_cause = 4'd15;
        endcase
    endfunction

    function bad_leaf(input [31:0] p, input [1:0] acc);
        reg ok;
        reg r, w, x, u, a, d;
        begin
            r=p[1]; w=p[2]; x=p[3]; u=p[4]; a=p[6]; d=p[7];
            if      (acc == 2'd0) ok = x;
            else if (acc == 2'd1) ok = r | (mxr & x);
            else                  ok = w;
            if (priv == `PRIV_U && !u)                       ok = 1'b0;
            if (priv == `PRIV_S &&  u && acc != 2'd0 && !sum) ok = 1'b0;
            if (priv == `PRIV_S &&  u && acc == 2'd0)         ok = 1'b0;
            if (!a)                                          ok = 1'b0;
            if (acc == 2'd2 && !d)                           ok = 1'b0;
            bad_leaf = ~ok;
        end
    endfunction

    // cautare asociativa in TLB pe adresa ceruta
    reg        hit;
    reg [2:0]  hidx;
    reg [31:0] hit_pte;
    reg        hit_sup;
    always @* begin
        hit = 1'b0; hidx = 3'd0; hit_pte = 32'b0; hit_sup = 1'b0;
        for (i = 0; i < TLBN; i = i + 1)
            if (tlb_v[i] && (tlb_sup[i] ? (tlb_tag[i][19:10] == vaddr[31:22])
                                        : (tlb_tag[i] == vaddr[31:12]))) begin
                hit = 1'b1; hidx = i[2:0]; hit_pte = tlb_pte[i]; hit_sup = tlb_sup[i];
            end
    end
    wire [31:0] hit_paddr = hit_sup ? {hit_pte[29:20], vaddr[21:0]}
                                    : {hit_pte[29:10], vaddr[11:0]};

    wire l1_invalid = !mem_rdata[0] || (!mem_rdata[1] && mem_rdata[2]);
    wire l1_leaf    =  mem_rdata[1] || mem_rdata[3];
    wire l0_invalid = !mem_rdata[0] || (!mem_rdata[1] && mem_rdata[2])
                    || !(mem_rdata[1] || mem_rdata[3]);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE; done <= 1'b0; fault <= 1'b0;
            mem_req <= 1'b0; paddr <= 32'b0; fault_cause <= 4'b0;
            rr <= 3'b0;
            for (i = 0; i < TLBN; i = i + 1) tlb_v[i] <= 1'b0;
        end else begin
            done <= 1'b0; fault <= 1'b0;
            if (flush) for (i = 0; i < TLBN; i = i + 1) tlb_v[i] <= 1'b0;
            case (state)
                S_IDLE: if (req) begin
                    vaddr_q  <= vaddr;
                    access_q <= access;
                    if (hit) begin
                        paddr       <= hit_paddr;
                        fault       <= bad_leaf(hit_pte, access);
                        fault_cause <= pf_cause(access);
                        leaf_pte    <= hit_pte;
                        done        <= 1'b1;
                        state       <= S_DONE;
                    end else begin
                        mem_addr <= {satp[21:0], 12'b0} + {20'b0, vaddr[31:22], 2'b0};
                        mem_req  <= 1'b1;
                        state    <= S_L1;
                    end
                end
                S_L1: if (mem_ack) begin
                    mem_req <= 1'b0;
                    if (l1_invalid) begin
                        fault <= 1'b1; fault_cause <= pf_cause(access_q);
                        done  <= 1'b1; state <= S_DONE;
                    end else if (l1_leaf) begin
                        done <= 1'b1; state <= S_DONE;
                        fault <= (mem_rdata[19:10] != 10'b0) | bad_leaf(mem_rdata, access_q);
                        fault_cause <= pf_cause(access_q);
                        paddr <= {mem_rdata[29:20], vaddr_q[21:0]};
                        leaf_pte <= mem_rdata;
                        if (!((mem_rdata[19:10] != 10'b0) | bad_leaf(mem_rdata, access_q)) & ~flush) begin
                            tlb_v[rr]   <= 1'b1; tlb_tag[rr] <= vaddr_q[31:12];
                            tlb_pte[rr] <= mem_rdata; tlb_sup[rr] <= 1'b1;
                            rr <= rr + 3'd1;
                        end
                    end else begin
                        mem_addr <= {mem_rdata[31:10], 12'b0} + {20'b0, vaddr_q[21:12], 2'b0};
                        mem_req  <= 1'b1;
                        state    <= S_L0;
                    end
                end
                S_L0: if (mem_ack) begin
                    mem_req <= 1'b0;
                    done <= 1'b1; state <= S_DONE;
                    fault <= l0_invalid | bad_leaf(mem_rdata, access_q);
                    fault_cause <= pf_cause(access_q);
                    paddr <= {mem_rdata[29:10], vaddr_q[11:0]};
                    leaf_pte <= mem_rdata;
                    if (!(l0_invalid | bad_leaf(mem_rdata, access_q)) & ~flush) begin
                        tlb_v[rr]   <= 1'b1; tlb_tag[rr] <= vaddr_q[31:12];
                        tlb_pte[rr] <= mem_rdata; tlb_sup[rr] <= 1'b0;
                        rr <= rr + 3'd1;
                    end
                end
                S_DONE: state <= S_IDLE;
                default: state <= S_IDLE;
            endcase
        end
    end
endmodule
