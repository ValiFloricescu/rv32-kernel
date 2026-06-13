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

    output reg         done,
    output reg  [31:0] paddr,
    output reg         fault,
    output reg  [3:0]  fault_cause,

    output reg         mem_req,
    output reg  [31:0] mem_addr,
    input  wire [31:0] mem_rdata,
    input  wire        mem_ack
);
    localparam S_IDLE = 2'd0, S_L1 = 2'd1, S_L0 = 2'd2, S_DONE = 2'd3;
    reg [1:0]  state;
    reg [31:0] vaddr_q;
    reg [1:0]  access_q;

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

    wire l1_invalid = !mem_rdata[0] || (!mem_rdata[1] && mem_rdata[2]);
    wire l1_leaf    =  mem_rdata[1] || mem_rdata[3];

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE; done <= 1'b0; fault <= 1'b0;
            mem_req <= 1'b0; paddr <= 32'b0; fault_cause <= 4'b0;
        end else begin
            done <= 1'b0; fault <= 1'b0;
            case (state)
                S_IDLE: if (req) begin
                    vaddr_q  <= vaddr;
                    access_q <= access;
                    mem_addr <= {satp[21:0], 12'b0} + {20'b0, vaddr[31:22], 2'b0};
                    mem_req  <= 1'b1;
                    state    <= S_L1;
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
                    end else begin
                        mem_addr <= {mem_rdata[31:10], 12'b0} + {20'b0, vaddr_q[21:12], 2'b0};
                        mem_req  <= 1'b1;
                        state    <= S_L0;
                    end
                end
                S_L0: if (mem_ack) begin
                    mem_req <= 1'b0;
                    done <= 1'b1; state <= S_DONE;
                    fault <= !mem_rdata[0] || (!mem_rdata[1] && mem_rdata[2])
                          || !(mem_rdata[1] || mem_rdata[3])
                          || bad_leaf(mem_rdata, access_q);
                    fault_cause <= pf_cause(access_q);
                    paddr <= {mem_rdata[29:10], vaddr_q[11:0]};
                end
                S_DONE: state <= S_IDLE;
                default: state <= S_IDLE;
            endcase
        end
    end
endmodule
