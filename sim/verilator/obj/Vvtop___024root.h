// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvtop.h for the primary calling header

#ifndef VERILATED_VVTOP___024ROOT_H_
#define VERILATED_VVTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vvtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_OUT8(uart_tx_stb,0,0);
        VL_OUT8(uart_tx_byte,7,0);
        CData/*3:0*/ vtop__DOT__dut__DOT__dmem_wstrb;
        CData/*0:0*/ vtop__DOT__dut__DOT__dmem_we;
        CData/*0:0*/ vtop__DOT__dut__DOT____Vcellinp__u_uart__we;
        CData/*0:0*/ vtop__DOT__dut__DOT____Vcellinp__u_plic__we;
        CData/*0:0*/ vtop__DOT__dut__DOT____Vcellinp__u_plic__sel;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_reg_write;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_alu_a_src;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_alu_b_src;
        CData/*3:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_mem_read;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_mem_write;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_wb_sel;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_branch;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_jump;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_jalr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_is_muldiv;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ecall;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ebreak;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_sys_mret;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_sys_sret;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_illegal;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_is_amo;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_is_lr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_is_sc;
        CData/*4:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_amo_op;
        CData/*4:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_rd;
        CData/*4:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_rs1;
        CData/*4:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_rs2;
        CData/*2:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_funct3;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_reg_write;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_read;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_wb_sel;
        CData/*4:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_rd;
        CData/*2:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_is_lr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc;
        CData/*4:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__memwb_reg_write_r;
        CData/*4:0*/ vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ifid_valid;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_valid;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ifid_fault;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_fault;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_valid;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__load_use_stall;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_redirect;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mul_stall;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__fpaddr_ok;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_reg_write;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_alu_a_src;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src;
        CData/*3:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_alu_op;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_mem_read;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_mem_write;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel;
    };
    struct {
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_branch;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_jump;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_jalr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_is_muldiv;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_is_csr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_sys_ecall;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_sys_ebreak;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_sys_mret;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_sys_sret;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_illegal;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_is_amo;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_is_lr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_is_sc;
        CData/*4:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_amo_op;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_take_pc;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__csr_wr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mret_ok;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__sret_ok;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__instr_misalign;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__load_misalign;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__store_misalign;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_active;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__xstate;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__fstate;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__xfault;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ffault;
        CData/*3:0*/ vtop__DOT__dut__DOT__u_core__DOT__xcause;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_done;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_fault;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req;
        CData/*3:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_fault_cause;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_start;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__if_start;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__serving_ex;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_flush;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__mem_ack;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__access;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__back_pressure;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__fetch_consumed;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_stall;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_dfault;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_ifault;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__take_int;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_trap;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_mret;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_sret;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__resv_valid;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__sc_ok;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__clint_sel;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_clint__we;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h577f5a8b__0;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf029ea2b__0;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7328fc67__0;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state;
        CData/*5:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r;
        CData/*2:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__na;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__nb;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state;
    };
    struct {
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q;
        CData/*2:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_invalid;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_leaf;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l0_invalid;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpie;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp;
        CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpp;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__msip_r;
        CData/*3:0*/ vtop__DOT__dut__DOT__u_plic__DOT__ip;
        CData/*3:0*/ vtop__DOT__dut__DOT__u_plic__DOT__enable;
        CData/*2:0*/ vtop__DOT__dut__DOT__u_plic__DOT__threshold;
        CData/*2:0*/ vtop__DOT__dut__DOT__u_plic__DOT__best_id;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_plic__DOT__prio_acc;
        CData/*2:0*/ vtop__DOT__dut__DOT__u_plic__DOT____Vlvbound_h79e1189b__0;
        CData/*0:0*/ vtop__DOT__dut__DOT__u_plic__DOT____Vlvbound_he1670a3d__0;
        CData/*4:0*/ __Vdlyvlsb__vtop__DOT__dut__DOT__ram__v0;
        CData/*7:0*/ __Vdlyvval__vtop__DOT__dut__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__ram__v0;
        CData/*4:0*/ __Vdlyvlsb__vtop__DOT__dut__DOT__ram__v1;
        CData/*7:0*/ __Vdlyvval__vtop__DOT__dut__DOT__ram__v1;
        CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__ram__v1;
        CData/*4:0*/ __Vdlyvlsb__vtop__DOT__dut__DOT__ram__v2;
        CData/*7:0*/ __Vdlyvval__vtop__DOT__dut__DOT__ram__v2;
        CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__ram__v2;
        CData/*4:0*/ __Vdlyvlsb__vtop__DOT__dut__DOT__ram__v3;
        CData/*7:0*/ __Vdlyvval__vtop__DOT__dut__DOT__ram__v3;
        CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__ram__v3;
        CData/*4:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr;
        VlWide<32>/*1023:0*/ vtop__DOT__hexfile;
        IData/*31:0*/ vtop__DOT__dut__DOT__dmem_addr;
        IData/*31:0*/ vtop__DOT__dut__DOT__dmem_wdata;
        IData/*31:0*/ vtop__DOT__dut__DOT__plic_rdata;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__pc;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ifid_pc;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ifid_pc4;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ifid_instr;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_rs1_data;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_rs2_data;
    };
    struct {
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_imm;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_pc;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_pc4;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_pc4;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__memwb_alu_result;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__memwb_load_data;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__memwb_pc4;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__idex_instr;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_redirect_pc;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__mul_result;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__next_pc;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_imm;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_target;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__csr_rdata;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__xpaddr;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__fpaddr;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__fpc;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_paddr;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_addr;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_trap_cause;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_trap_val;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__resv_addr;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__mem_load_data;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__wb_mux;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__divisor_q;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__vaddr_q;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtvec;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mscratch;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mepc;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mcause;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtval;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_r;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__medeleg;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stvec;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sscratch;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sepc;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__scause;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stval;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp;
        IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem;
        IData/*22:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__ram__v0;
        IData/*22:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__ram__v1;
        IData/*22:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__ram__v2;
        IData/*22:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__ram__v3;
        IData/*31:0*/ __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc;
        QData/*63:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__as;
        QData/*63:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__p_uu;
        QData/*63:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx;
        QData/*63:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime;
        QData/*63:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp;
        VlUnpacked<IData/*31:0*/, 8388608> vtop__DOT__dut__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 8> vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v;
        VlUnpacked<IData/*19:0*/, 8> vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag;
        VlUnpacked<IData/*31:0*/, 8> vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte;
        VlUnpacked<CData/*0:0*/, 8> vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup;
        VlUnpacked<CData/*2:0*/, 4> vtop__DOT__dut__DOT__u_plic__DOT__prio;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvtop___024root(Vvtop__Syms* symsp, const char* v__name);
    ~Vvtop___024root();
    VL_UNCOPYABLE(Vvtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
