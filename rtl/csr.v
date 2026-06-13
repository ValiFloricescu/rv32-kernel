`timescale 1ns / 1ps
`include "riscv_defs.vh"

module csr (
    input  wire        clk,
    input  wire        rst_n,

    input  wire        rd_en,
    input  wire        wr_en,
    input  wire [11:0] addr,
    input  wire [31:0] wdata,
    output reg  [31:0] rdata,
    output reg         addr_valid,

    input  wire        trap_en,
    input  wire [31:0] trap_cause,
    input  wire [31:0] trap_epc,
    input  wire [31:0] trap_val,
    input  wire        mret_en,
    input  wire        sret_en,

    output wire [31:0] trap_vec_o,
    output wire [31:0] ret_pc_o,
    output wire [1:0]  priv_o
);

    reg [1:0]  priv;
    reg        mie, mpie, sie, spie, spp;
    reg [1:0]  mpp;
    reg [31:0] mtvec, mscratch, mepc, mcause, mtval, mie_r, mip_r;
    reg [31:0] medeleg, mideleg;
    reg [31:0] stvec, sscratch, sepc, scause, stval, satp;

    wire [31:0] mstatus = {19'b0, mpp, 2'b0, spp, mpie, 1'b0, spie,
                           1'b0, mie, 1'b0, sie, 1'b0};
    wire [31:0] sstatus = {23'b0, spp, 2'b0, spie, 3'b0, sie, 1'b0};
    wire [31:0] sie_v   = mie_r & mideleg;
    wire [31:0] sip_v   = mip_r & mideleg;

    assign priv_o = priv;

    wire deleg  = medeleg[trap_cause[4:0]];
    wire to_s   = (priv != `PRIV_M) & deleg;

    assign trap_vec_o = to_s ? {stvec[31:2], 2'b00} : {mtvec[31:2], 2'b00};
    assign ret_pc_o   = sret_en ? sepc : mepc;

    always @(*) begin
        addr_valid = 1'b1;
        case (addr)
            `CSR_MSTATUS : rdata = mstatus;
            `CSR_MISA    : rdata = `MISA_RV32IMA;
            `CSR_MIE     : rdata = mie_r;
            `CSR_MTVEC   : rdata = mtvec;
            `CSR_MSCRATCH: rdata = mscratch;
            `CSR_MEPC    : rdata = mepc;
            `CSR_MCAUSE  : rdata = mcause;
            `CSR_MTVAL   : rdata = mtval;
            `CSR_MIP     : rdata = mip_r;
            `CSR_MEDELEG : rdata = medeleg;
            `CSR_MIDELEG : rdata = mideleg;
            `CSR_MVENDORID,
            `CSR_MARCHID,
            `CSR_MIMPID,
            `CSR_MHARTID : rdata = 32'b0;
            `CSR_SSTATUS : rdata = sstatus;
            `CSR_SIE     : rdata = sie_v;
            `CSR_STVEC   : rdata = stvec;
            `CSR_SSCRATCH: rdata = sscratch;
            `CSR_SEPC    : rdata = sepc;
            `CSR_SCAUSE  : rdata = scause;
            `CSR_STVAL   : rdata = stval;
            `CSR_SIP     : rdata = sip_v;
            `CSR_SATP    : rdata = satp;
            default      : begin rdata = 32'b0; addr_valid = 1'b0; end
        endcase
        if (rd_en && priv < addr[9:8])      addr_valid = 1'b0;
        if (wr_en && addr[11:10] == 2'b11)  addr_valid = 1'b0;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            priv <= `PRIV_M;
            mie <= 1'b0; mpie <= 1'b0; sie <= 1'b0; spie <= 1'b0; spp <= 1'b0;
            mpp <= 2'b0;
            mtvec <= 32'b0; mscratch <= 32'b0; mepc <= 32'b0; mcause <= 32'b0;
            mtval <= 32'b0; mie_r <= 32'b0; mip_r <= 32'b0;
            medeleg <= 32'b0; mideleg <= 32'b0;
            stvec <= 32'b0; sscratch <= 32'b0; sepc <= 32'b0; scause <= 32'b0;
            stval <= 32'b0; satp <= 32'b0;
        end else if (trap_en) begin
            if (to_s) begin
                sepc   <= trap_epc;
                scause <= trap_cause;
                stval  <= trap_val;
                spie   <= sie;
                sie    <= 1'b0;
                spp    <= priv[0];
                priv   <= `PRIV_S;
            end else begin
                mepc   <= trap_epc;
                mcause <= trap_cause;
                mtval  <= trap_val;
                mpie   <= mie;
                mie    <= 1'b0;
                mpp    <= priv;
                priv   <= `PRIV_M;
            end
        end else if (mret_en) begin
            mie  <= mpie;
            mpie <= 1'b1;
            priv <= mpp;
            mpp  <= `PRIV_U;
        end else if (sret_en) begin
            sie  <= spie;
            spie <= 1'b1;
            priv <= {1'b0, spp};
            spp  <= 1'b0;
        end else if (wr_en && addr_valid) begin
            case (addr)
                `CSR_MSTATUS : begin
                    sie  <= wdata[1];  mie  <= wdata[3];
                    spie <= wdata[5];  mpie <= wdata[7];
                    spp  <= wdata[8];  mpp  <= wdata[12:11];
                end
                `CSR_MIE     : mie_r    <= wdata;
                `CSR_MTVEC   : mtvec    <= wdata;
                `CSR_MSCRATCH: mscratch <= wdata;
                `CSR_MEPC    : mepc     <= wdata;
                `CSR_MCAUSE  : mcause   <= wdata;
                `CSR_MTVAL   : mtval    <= wdata;
                `CSR_MIP     : mip_r    <= wdata;
                `CSR_MEDELEG : medeleg  <= wdata;
                `CSR_MIDELEG : mideleg  <= wdata;
                `CSR_SSTATUS : begin
                    sie  <= wdata[1];
                    spie <= wdata[5];
                    spp  <= wdata[8];
                end
                `CSR_SIE     : mie_r    <= (mie_r & ~mideleg) | (wdata & mideleg);
                `CSR_STVEC   : stvec    <= wdata;
                `CSR_SSCRATCH: sscratch <= wdata;
                `CSR_SEPC    : sepc     <= wdata;
                `CSR_SCAUSE  : scause   <= wdata;
                `CSR_STVAL   : stval    <= wdata;
                `CSR_SATP    : satp     <= wdata;
                default      : ;
            endcase
        end
    end

endmodule
