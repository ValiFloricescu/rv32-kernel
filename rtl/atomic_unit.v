`timescale 1ns / 1ps
`include "riscv_defs.vh"
// ============================================================
//  atomic_unit.v  -  Calcul combinational pentru AMO (extensia A)
// ------------------------------------------------------------
//  Pentru instructiunile amo*.w: dat fiind cuvantul vechi din
//  memorie (mem_val) si operandul rs2 (rs2_val), produce
//  valoarea care trebuie scrisa inapoi in memorie. Valoarea
//  veche (mem_val) este, separat, scrisa in rd de catre nucleu.
//  LR/SC nu trec prin acest modul (sunt tratate in nucleu).
//  Sintetizabil, pur combinational.
// ============================================================
module atomic_unit (
    input  wire [4:0]  amo_op,    // funct5 (instr[31:27])
    input  wire [31:0] mem_val,   // valoarea veche din memorie
    input  wire [31:0] rs2_val,   // operandul sursa
    output reg  [31:0] result     // valoarea de scris inapoi in memorie
);
    wire signed [31:0] s_mem = mem_val;
    wire signed [31:0] s_rs2 = rs2_val;
    always @(*) begin
        case (amo_op)
            `AMO_SWAP: result = rs2_val;
            `AMO_ADD : result = mem_val + rs2_val;
            `AMO_XOR : result = mem_val ^ rs2_val;
            `AMO_AND : result = mem_val & rs2_val;
            `AMO_OR  : result = mem_val | rs2_val;
            `AMO_MIN : result = (s_mem  < s_rs2)  ? mem_val : rs2_val;  // cu semn
            `AMO_MAX : result = (s_mem  > s_rs2)  ? mem_val : rs2_val;
            `AMO_MINU: result = (mem_val < rs2_val) ? mem_val : rs2_val; // fara semn
            `AMO_MAXU: result = (mem_val > rs2_val) ? mem_val : rs2_val;
            default  : result = rs2_val;
        endcase
    end
endmodule
