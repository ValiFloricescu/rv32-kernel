`timescale 1ns / 1ps
`include "riscv_defs.vh"
// ============================================================
//  imm_gen.v  -  Generator de immediate (combinational)
// ------------------------------------------------------------
//  Extrage si extinde cu semn immediate-ul din instructiune,
//  in functie de formatul selectat de unitatea de control
//  (imm_sel). Bitul de semn este intotdeauna instr[31].
//
//  Layout-uri (conform manualului RISC-V, vol. I):
//    I: imm[11:0]  = instr[31:20]
//    S: imm[11:5]  = instr[31:25], imm[4:0] = instr[11:7]
//    B: imm[12]=instr[31], imm[11]=instr[7],
//       imm[10:5]=instr[30:25], imm[4:1]=instr[11:8], imm[0]=0
//    U: imm[31:12] = instr[31:12], imm[11:0] = 0
//    J: imm[20]=instr[31], imm[19:12]=instr[19:12],
//       imm[11]=instr[20], imm[10:1]=instr[30:21], imm[0]=0
//  Sintetizabil.
// ============================================================
module imm_gen (
    input  wire [31:0]           instr,
    input  wire [`IMM_SEL_W-1:0] imm_sel,
    output reg  [`XLEN-1:0]      imm
);

    always @(*) begin
        case (imm_sel)
            `IMM_I:  imm = {{20{instr[31]}}, instr[31:20]};
            `IMM_S:  imm = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            `IMM_B:  imm = {{19{instr[31]}}, instr[31], instr[7],
                            instr[30:25], instr[11:8], 1'b0};
            `IMM_U:  imm = {instr[31:12], 12'b0};
            `IMM_J:  imm = {{11{instr[31]}}, instr[31], instr[19:12],
                            instr[20], instr[30:21], 1'b0};
            `IMM_ZERO: imm = {`XLEN{1'b0}};
            default: imm = {`XLEN{1'b0}};
        endcase
    end

endmodule
