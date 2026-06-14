// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvtop.h for the primary calling header

#include "Vvtop__pch.h"
#include "Vvtop___024root.h"

VL_ATTR_COLD void Vvtop___024root___eval_static(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vvtop___024root___eval_initial__TOP(Vvtop___024root* vlSelf);

VL_ATTR_COLD void Vvtop___024root___eval_initial(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_initial\n"); );
    // Body
    Vvtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__0 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap;
    vlSelf->__Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__1 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vvtop___024root___eval_initial__TOP(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ vtop__DOT__i;
    vtop__DOT__i = 0;
    // Body
    vtop__DOT__i = 0U;
    while (VL_GTS_III(32, 0x800000U, vtop__DOT__i)) {
        vlSelf->vtop__DOT__dut__DOT__ram[(0x7fffffU 
                                          & vtop__DOT__i)] = 0U;
        vtop__DOT__i = ((IData)(1U) + vtop__DOT__i);
    }
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024, std::string{"HEX=%s"}, 
                                         vlSelf->vtop__DOT__hexfile))) {
        VL_READMEM_N(true, 32, 8388608, 0, VL_CVT_PACK_STR_NW(32, vlSelf->vtop__DOT__hexfile)
                     ,  &(vlSelf->vtop__DOT__dut__DOT__ram)
                     , 0, ~0ULL);
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[1U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[2U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[3U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[4U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[5U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[6U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[7U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[8U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[9U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0xaU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0xbU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0xcU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0xdU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0xeU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0xfU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x10U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x11U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x12U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x13U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x14U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x15U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x16U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x17U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x18U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x19U] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x1aU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x1bU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x1cU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x1dU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x1eU] = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[0x1fU] = 0U;
}

VL_ATTR_COLD void Vvtop___024root___eval_final(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvtop___024root___dump_triggers__stl(Vvtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvtop___024root___eval_phase__stl(Vvtop___024root* vlSelf);

VL_ATTR_COLD void Vvtop___024root___eval_settle(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vvtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/valif/Desktop/KERNEL/LICENTA/sim/verilator/vtop.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vvtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvtop___024root___dump_triggers__stl(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] vtop.dut.u_core.ex_trap)\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 16> Vvtop__ConstPool__TABLE_h8f8f6340_0;

VL_ATTR_COLD void Vvtop___024root___stl_sequent__TOP__0(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel;
    vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 0;
    CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__forward_a;
    vtop__DOT__dut__DOT__u_core__DOT__forward_a = 0;
    CData/*1:0*/ vtop__DOT__dut__DOT__u_core__DOT__forward_b;
    vtop__DOT__dut__DOT__u_core__DOT__forward_b = 0;
    IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__exmem_fwd_val;
    vtop__DOT__dut__DOT__u_core__DOT__exmem_fwd_val = 0;
    IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a;
    vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a = 0;
    IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b;
    vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b = 0;
    IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__csr_src;
    vtop__DOT__dut__DOT__u_core__DOT__csr_src = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mem_access;
    vtop__DOT__dut__DOT__u_core__DOT__mem_access = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__is_store_acc;
    vtop__DOT__dut__DOT__u_core__DOT__is_store_acc = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__need_xlate;
    vtop__DOT__dut__DOT__u_core__DOT__need_xlate = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__ex_wants;
    vtop__DOT__dut__DOT__u_core__DOT__ex_wants = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__walker_bus;
    vtop__DOT__dut__DOT__u_core__DOT__walker_bus = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT__mmu_walking;
    vtop__DOT__dut__DOT__u_core__DOT__mmu_walking = 0;
    IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__amo_wval;
    vtop__DOT__dut__DOT__u_core__DOT__amo_wval = 0;
    CData/*7:0*/ vtop__DOT__dut__DOT__u_core__DOT__mem_ld_byte;
    vtop__DOT__dut__DOT__u_core__DOT__mem_ld_byte = 0;
    SData/*15:0*/ vtop__DOT__dut__DOT__u_core__DOT__mem_ld_half;
    vtop__DOT__dut__DOT__u_core__DOT__mem_ld_half = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h218973dd__0;
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h218973dd__0 = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7c2a68e6__0;
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7c2a68e6__0 = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hc165d5df__0;
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hc165d5df__0 = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hae8e71fc__0;
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hae8e71fc__0 = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hda1fd257__0;
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hda1fd257__0 = 0;
    CData/*0:0*/ vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf9840b0c__0;
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf9840b0c__0 = 0;
    CData/*3:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_ctrl__DOT__alu_arith;
    vtop__DOT__dut__DOT__u_core__DOT__u_ctrl__DOT__alu_arith = 0;
    QData/*32:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__diff;
    vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__diff = 0;
    IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_eff;
    vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_eff = 0;
    IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take;
    vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take = 0;
    CData/*2:0*/ vtop__DOT__dut__DOT__u_plic__DOT__best_pri;
    vtop__DOT__dut__DOT__u_plic__DOT__best_pri = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_csr = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_muldiv = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jalr = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jump = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_branch = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_write = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_read = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_a_src = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_ecall = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_ebreak = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_mret = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_sret = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_amo = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_lr = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_sc = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_amo_op = 0U;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7328fc67__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_reg_write_r) 
           & (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r)));
    vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 0U;
    if ((0x40U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
        if ((0x20U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            if ((0x10U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                if ((0U != (7U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                  >> 0xcU)))) {
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_csr = 1U;
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = 0U;
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                                }
                                if ((0U == (7U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                  >> 0xcU)))) {
                                    if ((0U == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                >> 0x14U))) {
                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_ecall = 1U;
                                    }
                                    if ((0U != (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                >> 0x14U))) {
                                        if ((1U == 
                                             (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                              >> 0x14U))) {
                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_ebreak = 1U;
                                        }
                                        if ((1U != 
                                             (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                              >> 0x14U))) {
                                            if ((0x302U 
                                                 == 
                                                 (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                  >> 0x14U))) {
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_mret = 1U;
                                            }
                                            if ((0x302U 
                                                 != 
                                                 (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x102U 
                                                     == 
                                                     (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                      >> 0x14U))) {
                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_sret = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                } else if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                    }
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = 2U;
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                        }
                        if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                        }
                    } else {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                    }
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = 2U;
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                    }
                    if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                    }
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            }
            if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jalr = 1U;
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_branch = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jump = 1U;
                                vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 4U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jump = 1U;
                            vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 0U;
                        }
                    }
                } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 2U;
                    }
                }
            }
        } else {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
        }
    } else if ((0x20U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
        if ((0x10U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                          >> 3U)))) {
                if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = 0U;
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = 1U;
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                            vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 3U;
                        }
                    }
                } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                    }
                }
            }
            if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            } else if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                    }
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            }
        } else if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = 1U;
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = 1U;
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                        vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 5U;
                    }
                    if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                    }
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            }
        } else {
            if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                          >> 2U)))) {
                if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = 1U;
                        vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 1U;
                    }
                }
            }
            if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            }
        }
    } else if ((0x10U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
        if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                      >> 3U)))) {
            if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = 0U;
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = 1U;
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                        vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 3U;
                    }
                }
            } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = 1U;
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                    vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 0U;
                }
            }
        }
        if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
        } else if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            }
        } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            }
        } else {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
        }
    } else {
        if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                          >> 2U)))) {
                if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = 1U;
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = 1U;
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = 1U;
                        vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 0U;
                    }
                }
            }
        }
        if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                    }
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
                }
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            }
        } else if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
        } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            if ((1U & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
            }
        } else {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = 1U;
        }
    }
    vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__diff 
        = (0x1ffffffffULL & ((QData)((IData)((VL_SHIFTL_QQI(64,64,32, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc, 1U) 
                                              >> 0x20U))) 
                             - (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__divisor_q))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr_ok 
        = ((2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate)) 
           & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpc 
              == vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc));
    __Vtableidx1 = ((8U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                           >> 0x1bU)) | (7U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                               >> 0xcU)));
    vtop__DOT__dut__DOT__u_core__DOT__u_ctrl__DOT__alu_arith 
        = Vvtop__ConstPool__TABLE_h8f8f6340_0[__Vtableidx1];
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div 
        = ((4U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)) 
           | (6U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_read) 
           & ((0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd)) 
              & (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd) 
                  == (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                               >> 0xfU))) | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd) 
                                             == (0x1fU 
                                                 & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                    >> 0x14U))))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0 
        = ((0x310U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
           | ((0x306U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
              | ((0x320U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
                 | ((0x30aU == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
                    | ((0x31aU == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
                       | ((0x106U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
                          | ((0x10aU == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
                             | ((0x3aU == (0xffU & 
                                           ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                            >> 4U))) 
                                | (((0x3bU <= (0xffU 
                                               & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 4U))) 
                                    & (0x3eU >= (0xffU 
                                                 & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 4U)))) 
                                   | ((0xb00U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
                                      | ((0xb02U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
                                         | ((0xb80U 
                                             == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)) 
                                            | (0xb82U 
                                               == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))))))))))))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mret_ok 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_mret) 
           & (3U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sret_ok 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_sret) 
           & (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wr 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr) 
           & ((1U == (3U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))) 
              | (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sc_ok 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc) 
           & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_valid) 
              & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result 
                 == vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_addr)));
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id = 0U;
    vtop__DOT__dut__DOT__u_plic__DOT__best_pri = 0U;
    if (((((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__enable)) 
          & (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
             [0U] > (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__threshold))) 
         & (0U < vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
            [0U]))) {
        vtop__DOT__dut__DOT__u_plic__DOT__best_pri 
            = vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
            [0U];
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id = 1U;
    }
    if ((((((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip) 
            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__enable)) 
           >> 1U) & (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
                     [1U] > (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__threshold))) 
         & (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
            [1U] > (IData)(vtop__DOT__dut__DOT__u_plic__DOT__best_pri)))) {
        vtop__DOT__dut__DOT__u_plic__DOT__best_pri 
            = vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
            [1U];
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id = 2U;
    }
    if ((((((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip) 
            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__enable)) 
           >> 2U) & (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
                     [2U] > (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__threshold))) 
         & (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
            [2U] > (IData)(vtop__DOT__dut__DOT__u_plic__DOT__best_pri)))) {
        vtop__DOT__dut__DOT__u_plic__DOT__best_pri 
            = vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
            [2U];
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id = 3U;
    }
    if ((((((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip) 
            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__enable)) 
           >> 3U) & (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
                     [3U] > (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__threshold))) 
         & (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
            [3U] > (IData)(vtop__DOT__dut__DOT__u_plic__DOT__best_pri)))) {
        vtop__DOT__dut__DOT__u_plic__DOT__best_pri 
            = vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
            [3U];
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id = 4U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall 
        = ((2U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state)) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_muldiv));
    vtop__DOT__dut__DOT__u_core__DOT__mmu_walking = 
        ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)) 
         | (1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate)));
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hae8e71fc__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_read) 
           | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active 
        = ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp 
            >> 0x1fU) & (3U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)));
    vtop__DOT__dut__DOT__u_core__DOT__is_store_acc 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_write) 
           | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_amo) 
              | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_sc)));
    vtop__DOT__dut__DOT__u_core__DOT__forward_b = (
                                                   (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_reg_write) 
                                                     & (0U 
                                                        != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rd))) 
                                                    & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rd) 
                                                       == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2)))
                                                    ? 2U
                                                    : 
                                                   ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_reg_write_r) 
                                                      & (0U 
                                                         != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r))) 
                                                     & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r) 
                                                        == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2)))
                                                     ? 1U
                                                     : 0U));
    vtop__DOT__dut__DOT__u_core__DOT__forward_a = (
                                                   (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_reg_write) 
                                                     & (0U 
                                                        != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rd))) 
                                                    & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rd) 
                                                       == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1)))
                                                    ? 2U
                                                    : 
                                                   ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_reg_write_r) 
                                                      & (0U 
                                                         != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r))) 
                                                     & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r) 
                                                        == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1)))
                                                     ? 1U
                                                     : 0U));
    vtop__DOT__dut__DOT__u_core__DOT__mem_access = 
        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_read) 
         | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_write) 
            | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_amo) 
               | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_lr) 
                  | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_sc)))));
    vtop__DOT__dut__DOT__u_core__DOT__exmem_fwd_val 
        = ((2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_wb_sel))
            ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_pc4
            : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__wb_mux 
        = ((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel))
            ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_alu_result
            : ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel))
                ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_load_data
                : ((2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel))
                    ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_pc4
                    : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_alu_result)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_imm 
        = ((4U & (IData)(vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel))
            ? ((2U & (IData)(vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel))
                ? 0U : ((1U & (IData)(vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel))
                         ? 0U : (((- (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel))
                ? ((1U & (IData)(vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel))
                    ? (0xfffff000U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)
                    : (((- (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                       >> 7U)))))))
                : ((1U & (IData)(vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel))
                    ? (((- (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                          >> 0x14U)))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx 
        = ((1U & (IData)((vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__diff 
                          >> 0x20U))) ? VL_SHIFTL_QQI(64,64,32, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc, 1U)
            : (((QData)((IData)(vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__diff)) 
                << 0x20U) | (QData)((IData)((1U | VL_SHIFTL_III(32,32,32, (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc), 1U))))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op = 0U;
    if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                  >> 6U)))) {
        if ((0x20U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
            if ((0x10U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                if ((0x2000000U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_muldiv = 1U;
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op = 0xaU;
                            }
                        }
                    } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                          >> 0x19U)))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op 
                                    = vtop__DOT__dut__DOT__u_core__DOT__u_ctrl__DOT__alu_arith;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op = 0U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                 >> 2U)))) {
                if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op = 0U;
                    }
                }
            }
            if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_write = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                    if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_read = 1U;
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_a_src = 0U;
                                if ((2U != (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                            >> 0x1bU))) {
                                    if ((3U != (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                >> 0x1bU))) {
                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_amo = 1U;
                                    }
                                    if ((3U == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                >> 0x1bU))) {
                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_sc = 1U;
                                    }
                                }
                                if ((2U == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                            >> 0x1bU))) {
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_lr = 1U;
                                }
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_amo_op 
                                    = (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                       >> 0x1bU);
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_read = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x10U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_a_src = 1U;
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op = 0U;
                            }
                        }
                    } else if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op 
                                = ((0U == (7U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                 >> 0xcU)))
                                    ? 0U : (IData)(vtop__DOT__dut__DOT__u_core__DOT__u_ctrl__DOT__alu_arith));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                        if ((1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr)) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op = 0U;
                        }
                    }
                }
            }
        }
    }
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h218973dd__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo) 
           | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sc_ok));
    vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_eff 
        = ((0xfffff777U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_r) 
           | (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__msip_r), 3U) 
              | (VL_SHIFTL_III(32,32,32, (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime 
                                          >= vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp), 7U) 
                 | VL_SHIFTL_III(32,32,32, (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id)), 0xbU))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid) 
           & ((IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hae8e71fc__0) 
              & (0x200U == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result 
                            >> 0x10U))));
    vtop__DOT__dut__DOT__u_core__DOT__walker_bus = 
        ((~ (((IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hae8e71fc__0) 
              | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo) 
                 | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_lr) 
                    | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc)))) 
             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid))) 
         & (IData)(vtop__DOT__dut__DOT__u_core__DOT__mmu_walking));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending 
        = ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr_ok)) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd 
        = ((2U == (IData)(vtop__DOT__dut__DOT__u_core__DOT__forward_b))
            ? vtop__DOT__dut__DOT__u_core__DOT__exmem_fwd_val
            : ((1U == (IData)(vtop__DOT__dut__DOT__u_core__DOT__forward_b))
                ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__wb_mux
                : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2_data));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
        = ((2U == (IData)(vtop__DOT__dut__DOT__u_core__DOT__forward_a))
            ? vtop__DOT__dut__DOT__u_core__DOT__exmem_fwd_val
            : ((1U == (IData)(vtop__DOT__dut__DOT__u_core__DOT__forward_a))
                ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__wb_mux
                : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1_data));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_rdata 
        = ((0x800U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
            ? 0U : ((0x400U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                     ? 0U : ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                              ? ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                  ? ((0x80U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                      ? 0U : ((0x40U 
                                               & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? 0U
                                                        : vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_eff))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtval
                                                        : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mcause)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mepc
                                                        : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mscratch))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtvec
                                                        : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg
                                                        : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__medeleg)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? 0x40141101U
                                                        : 
                                                       (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpp) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp) 
                                                            << 8U) 
                                                           | (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpie) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie) 
                                                                       << 1U))))))))))))))
                                  : 0U) : ((0x100U 
                                            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                            ? ((0x80U 
                                                & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                          ? 0U
                                                          : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp)))))))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg 
                                                          & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_r)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                          ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stval
                                                          : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__scause)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                          ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sepc
                                                          : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sscratch))))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                          ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stvec
                                                          : 
                                                         (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg 
                                                          & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))
                                                          ? 0U
                                                          : 
                                                         (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie) 
                                                              << 5U) 
                                                             | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie) 
                                                                << 1U)))))))))))
                                            : 0U))));
    vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take 
        = ((vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_eff 
            & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r) 
           & (((~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg) 
               & (- (IData)(((3U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie))))) 
              | (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg 
                 & (- (IData)(((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                               | ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                  & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie))))))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_clint__we 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write));
    if (vtop__DOT__dut__DOT__u_core__DOT__walker_bus) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__mem_ack 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req;
        vlSelf->vtop__DOT__dut__DOT__dmem_wstrb = 0U;
        vlSelf->vtop__DOT__dut__DOT__dmem_addr = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_addr;
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__mem_ack = 0U;
        vlSelf->vtop__DOT__dut__DOT__dmem_wstrb = ((IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h218973dd__0)
                                                    ? 0xfU
                                                    : 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write)
                                                     ? 
                                                    (0xfU 
                                                     & ((0U 
                                                         == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                                                         ? 
                                                        ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                                                          ? 
                                                         ((IData)(3U) 
                                                          << 
                                                          (3U 
                                                           & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                                                           ? 0xfU
                                                           : 0U))))
                                                     : 0U));
        vlSelf->vtop__DOT__dut__DOT__dmem_addr = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result;
    }
    vlSelf->vtop__DOT__dut__DOT__dmem_we = ((~ (IData)(vtop__DOT__dut__DOT__u_core__DOT__walker_bus)) 
                                            & ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel)) 
                                               & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write) 
                                                  | (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h218973dd__0))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__nb 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div) 
           & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd 
              >> 0x1fU));
    vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_b_src)
                                                   ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_imm
                                                   : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__as 
        = (((QData)((IData)((- (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__na 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div) 
           & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
              >> 0x1fU));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__p_uu 
        = VL_MULS_QQQ(64, (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd)), (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)));
    vtop__DOT__dut__DOT__u_core__DOT__csr_src = ((4U 
                                                  & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                                                  ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1)
                                                  : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_take_pc 
        = ((((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
              ? ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                  ? ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                      ? (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
                         >= vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)
                      : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
                         < vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd))
                  : ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                      ? VL_GTES_III(32, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)
                      : VL_LTS_III(32, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)))
              : ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3) 
                           >> 1U))) && ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                                         ? (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
                                            != vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)
                                         : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
                                            == vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)))) 
            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_branch)) 
           | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jump));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_target 
        = (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jalr) 
            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jump))
            ? (0xfffffffeU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
                              + vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_imm))
            : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_imm 
               + vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc));
    vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_a_src)
                                                   ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc
                                                   : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd);
    vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_uart__we 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__dmem_we) 
           & (1U == (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                     >> 0x1cU)));
    vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__we 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__dmem_we) 
           & (0xcU == (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                       >> 0x18U)));
    vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__sel 
        = ((0xcU == (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                     >> 0x18U)) & (((~ (IData)(vtop__DOT__dut__DOT__u_core__DOT__walker_bus)) 
                                    & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid) 
                                       & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_read) 
                                          | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo) 
                                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_lr))))) 
                                   | (IData)(vlSelf->vtop__DOT__dut__DOT__dmem_we)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
        = ((1U == (3U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)))
            ? vtop__DOT__dut__DOT__u_core__DOT__csr_src
            : ((2U == (3U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)))
                ? (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_rdata 
                   | vtop__DOT__dut__DOT__u_core__DOT__csr_src)
                : ((~ vtop__DOT__dut__DOT__u_core__DOT__csr_src) 
                   & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_rdata)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__instr_misalign 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_take_pc) 
           & (0U != (3U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_target)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result 
        = ((8U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
            ? ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                ? 0U : ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                         ? ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                             ? 0U : vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)
                         : ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                             ? (vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a 
                                & vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)
                             : (vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a 
                                | vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b))))
            : ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                ? ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                    ? ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a, 
                                         (0x1fU & vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b))
                        : (vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a 
                           >> (0x1fU & vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)))
                    : ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                        ? (vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a 
                           ^ vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)
                        : ((vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a 
                            < vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)
                            ? 1U : 0U))) : ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                                             ? ((1U 
                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                                                 ? 
                                                (VL_LTS_III(32, vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a, vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a 
                                                 << 
                                                 (0x1fU 
                                                  & vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)))
                                             : ((1U 
                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op))
                                                 ? 
                                                (vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a 
                                                 - vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)
                                                 : 
                                                (vtop__DOT__dut__DOT__u_core__DOT__ex_alu_a 
                                                 + vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b)))));
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio_acc 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__sel) 
           & ((4U <= (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr)) 
              & (0x10U >= (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))));
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7c2a68e6__0 
        = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_access) 
           & ((1U == (3U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)))
               ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result
               : ((2U == (3U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))) 
                  & (0U != (3U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result)))));
    vlSelf->vtop__DOT__dut__DOT__plic_rdata = 0U;
    if (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio_acc) {
        vlSelf->vtop__DOT__dut__DOT__plic_rdata = (
                                                   (3U 
                                                    >= 
                                                    (7U 
                                                     & (((0xffffffU 
                                                          & vlSelf->vtop__DOT__dut__DOT__dmem_addr) 
                                                         - (IData)(4U)) 
                                                        >> 2U)))
                                                    ? 
                                                   vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio
                                                   [
                                                   (7U 
                                                    & (((0xffffffU 
                                                         & vlSelf->vtop__DOT__dut__DOT__dmem_addr) 
                                                        - (IData)(4U)) 
                                                       >> 2U))]
                                                    : 0U);
    } else if ((0x1000U == (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))) {
        vlSelf->vtop__DOT__dut__DOT__plic_rdata = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip) 
                                                   << 1U);
    } else if ((0x2000U == (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))) {
        vlSelf->vtop__DOT__dut__DOT__plic_rdata = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__enable) 
                                                   << 1U);
    } else if ((0x200000U == (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))) {
        vlSelf->vtop__DOT__dut__DOT__plic_rdata = vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__threshold;
    } else if ((0x200004U == (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))) {
        vlSelf->vtop__DOT__dut__DOT__plic_rdata = vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_misalign 
        = ((~ (IData)(vtop__DOT__dut__DOT__u_core__DOT__is_store_acc)) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7c2a68e6__0));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__store_misalign 
        = ((IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7c2a68e6__0) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT__is_store_acc));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
        = ((8U == (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                   >> 0x1cU)) ? vlSelf->vtop__DOT__dut__DOT__ram
           [(0x7fffffU & (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                          >> 2U))] : ((1U == (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                                              >> 0x1cU))
                                       ? ((1U == (3U 
                                                  & (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                                                     >> 2U)))
                                           ? 0x6000U
                                           : 0U) : 
                                      ((0xcU == (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                                                 >> 0x18U))
                                        ? vlSelf->vtop__DOT__dut__DOT__plic_rdata
                                        : 0U)));
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hc165d5df__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_misalign) 
           | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__store_misalign));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_invalid 
        = (1U & ((~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem) 
                 | (IData)((4U == (6U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem)))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_leaf 
        = (IData)((0U != (0xaU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem)));
    vtop__DOT__dut__DOT__u_core__DOT__amo_wval = ((0x10U 
                                                   & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                      ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                       ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                       : 
                                                      ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                                        > vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)
                                                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem
                                                        : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                      ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                       ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                       : 
                                                      ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                                        < vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)
                                                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem
                                                        : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                      ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                       ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                       : 
                                                      (VL_GTS_III(32, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)
                                                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem
                                                        : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                      ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                       ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                       : 
                                                      (VL_LTS_III(32, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)
                                                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem
                                                        : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                      ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                       ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                       : 
                                                      (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                                       & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                      ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                       ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                       : 
                                                      (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                                       | vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                      ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                       ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                       : 
                                                      (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                                       ^ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                      ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op))
                                                       ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                       : 
                                                      (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                                       + vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data))))));
    vtop__DOT__dut__DOT__u_core__DOT__mem_ld_byte = 
        (0xffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                  >> (0x1fU & VL_SHIFTL_III(5,5,32, 
                                            (3U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result), 3U))));
    vtop__DOT__dut__DOT__u_core__DOT__mem_ld_half = 
        (0xffffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                    >> (0x1fU & VL_SHIFTL_III(5,5,32, 
                                              (3U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result), 3U))));
    vtop__DOT__dut__DOT__u_core__DOT__need_xlate = 
        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active) 
         & ((IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_access) 
            & ((~ (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hc165d5df__0)) 
               & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_valid))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l0_invalid 
        = (1U & ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_leaf)) 
                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_invalid)));
    vlSelf->vtop__DOT__dut__DOT__dmem_wdata = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo)
                                                ? vtop__DOT__dut__DOT__u_core__DOT__amo_wval
                                                : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc)
                                                    ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                                                     ? 
                                                    VL_SHIFTL_III(32,32,32, 
                                                                  (0xffU 
                                                                   & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data), 
                                                                  VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result), 3U))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                                                      ? 
                                                     VL_SHIFTL_III(32,32,32, 
                                                                   (0xffffU 
                                                                    & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data), 
                                                                   VL_SHIFTL_III(32,32,32, 
                                                                                (3U 
                                                                                & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result), 3U))
                                                      : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mem_load_data 
        = ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
            ? ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem
                : ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                    ? (IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_ld_half)
                    : (IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_ld_byte)))
            : ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem
                : ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3))
                    ? (((- (IData)((1U & ((IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_ld_half) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_ld_half))
                    : (((- (IData)((1U & ((IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_ld_byte) 
                                          >> 7U)))) 
                        << 8U) | (IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_ld_byte)))));
    if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mem_load_data 
            = ((0U == (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))
                ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__msip_r)
                : ((0x4000U == (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))
                    ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp)
                    : ((0x4004U == (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))
                        ? (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp 
                                   >> 0x20U)) : ((0xbff8U 
                                                  == 
                                                  (0xffffU 
                                                   & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))
                                                  ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime)
                                                  : 
                                                 ((0xbffcU 
                                                   == 
                                                   (0xffffU 
                                                    & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))
                                                   ? (IData)(
                                                             (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime 
                                                              >> 0x20U))
                                                   : 0U)))));
    }
    if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mem_load_data 
            = (1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sc_ok)));
    }
    vtop__DOT__dut__DOT__u_core__DOT__ex_wants = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__need_xlate) 
                                                  & (0U 
                                                     == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf029ea2b__0 
        = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__need_xlate) 
           & (2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall 
        = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__need_xlate) 
           & (2U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_start 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active) 
           & ((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate)) 
              & ((~ (IData)(vtop__DOT__dut__DOT__u_core__DOT__mmu_walking)) 
                 & (~ (IData)(vtop__DOT__dut__DOT__u_core__DOT__ex_wants)))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_start 
        = ((~ (IData)(vtop__DOT__dut__DOT__u_core__DOT__mmu_walking)) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT__ex_wants));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_dfault 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf029ea2b__0) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xfault));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
           | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
              | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h577f5a8b__0 
        = (1U & ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall)) 
                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__serving_ex 
        = ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)) 
           | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_start));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fetch_consumed 
        = (1U & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active)
                  ? ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure)) 
                     & (2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate)))
                  : (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure))));
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hda1fd257__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_valid) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h577f5a8b__0));
    if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__serving_ex) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__access 
            = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__is_store_acc)
                ? 2U : 1U);
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result;
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__access = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_ifault 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_fault) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hda1fd257__0));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__take_int 
        = ((0U != vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hda1fd257__0));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 0U;
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [0U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [0U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [0U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [0U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 1U;
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [1U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [1U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [1U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [1U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 1U;
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [2U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [2U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [2U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [2U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 1U;
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [3U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [3U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [3U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [3U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 1U;
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [4U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [4U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [4U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [4U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 1U;
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [5U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [5U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [5U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [5U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 1U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup = 0U;
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [0U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [0U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [0U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [0U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
            [0U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [1U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [1U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [1U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [1U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
            [1U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [2U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [2U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [2U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [2U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
            [2U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [3U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [3U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [3U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [3U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
            [3U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [4U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [4U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [4U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [4U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
            [4U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [5U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [5U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [5U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [5U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
            [5U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [6U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [6U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [6U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [6U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 1U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
            [6U];
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte = 0U;
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [0U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [0U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [0U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [0U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte
            [0U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [1U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [1U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [1U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [1U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte
            [1U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [2U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [2U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [2U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [2U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte
            [2U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [3U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [3U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [3U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [3U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte
            [3U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [4U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [4U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [4U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [4U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte
            [4U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [5U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [5U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [5U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [5U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte
            [5U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [6U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [6U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [6U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [6U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte
            [6U];
    }
    if ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v
         [7U] & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
                 [7U] ? ((0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                    [7U] >> 0xaU)) 
                         == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                             >> 0x16U)) : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag
                                           [7U] == 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                            >> 0xcU))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = 1U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup
            [7U];
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte
            [7U];
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_val 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_ifault)
            ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc
            : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_dfault)
                ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result
                : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__take_int)
                    ? 0U : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__instr_misalign)
                             ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_target
                             : ((IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hc165d5df__0)
                                 ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result
                                 : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ebreak)
                                     ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc
                                     : 0U))))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_cause 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__take_int)
            ? (0x80000000U | ((0x800U & vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take)
                               ? 0xbU : ((8U & vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take)
                                          ? 3U : ((0x80U 
                                                   & vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take)
                                                   ? 7U
                                                   : 
                                                  ((0x200U 
                                                    & vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take)
                                                    ? 9U
                                                    : 
                                                   ((2U 
                                                     & vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take)
                                                     ? 1U
                                                     : 
                                                    ((0x20U 
                                                      & vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__take)
                                                      ? 5U
                                                      : 0U)))))))
            : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_ifault)
                ? 0xcU : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_dfault)
                           ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xcause)
                           : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__instr_misalign)
                               ? 0U : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_misalign)
                                        ? 4U : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__store_misalign)
                                                 ? 6U
                                                 : 
                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ecall)
                                                  ? 
                                                 ((IData)(8U) 
                                                  + (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv))
                                                  : 
                                                 ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ebreak)
                                                   ? 3U
                                                   : 2U))))))));
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf9840b0c__0 
        = (1U & ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall)) 
                 & ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                    & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__take_int)))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s 
        = ((3U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
           & ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_cause 
               >> 0x1fU) ? (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg 
                            >> (0x1fU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_cause))
               : (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__medeleg 
                  >> (0x1fU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_cause))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mret_ok) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf9840b0c__0));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sret_ok) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf9840b0c__0));
}

void Vvtop___024root___act_sequent__TOP__0(Vvtop___024root* vlSelf);

VL_ATTR_COLD void Vvtop___024root___eval_stl(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vvtop___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vvtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vvtop___024root___eval_triggers__stl(Vvtop___024root* vlSelf);

VL_ATTR_COLD bool Vvtop___024root___eval_phase__stl(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vvtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvtop___024root___dump_triggers__act(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] vtop.dut.u_core.ex_trap)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvtop___024root___dump_triggers__nba(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] vtop.dut.u_core.ex_trap)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvtop___024root___ctor_var_reset(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_stb = VL_RAND_RESET_I(1);
    vlSelf->uart_tx_byte = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(1024, vlSelf->vtop__DOT__hexfile);
    vlSelf->vtop__DOT__dut__DOT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__dmem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->vtop__DOT__dut__DOT__dmem_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8388608; ++__Vi0) {
        vlSelf->vtop__DOT__dut__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_uart__we = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__plic_rdata = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__we = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__sel = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_pc = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_pc4 = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_reg_write = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_a_src = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_b_src = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op = VL_RAND_RESET_I(4);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_read = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_write = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_branch = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jump = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jalr = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_muldiv = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ecall = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ebreak = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_mret = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_sret = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_illegal = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_amo = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_lr = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_sc = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_amo_op = VL_RAND_RESET_I(5);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_imm = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc4 = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd = VL_RAND_RESET_I(5);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1 = VL_RAND_RESET_I(5);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2 = VL_RAND_RESET_I(5);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3 = VL_RAND_RESET_I(3);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_reg_write = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_read = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_pc4 = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rd = VL_RAND_RESET_I(5);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3 = VL_RAND_RESET_I(3);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_lr = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op = VL_RAND_RESET_I(5);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_alu_result = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_load_data = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_pc4 = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_reg_write_r = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r = VL_RAND_RESET_I(5);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_valid = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_valid = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_fault = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_fault = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_instr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect_pc = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_result = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr_ok = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_a_src = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op = VL_RAND_RESET_I(4);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_read = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_write = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_branch = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jump = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jalr = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_muldiv = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_csr = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_ecall = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_ebreak = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_mret = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_sret = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_amo = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_lr = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_sc = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_amo_op = VL_RAND_RESET_I(5);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_imm = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_take_pc = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_target = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wr = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mret_ok = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sret_ok = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__instr_misalign = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_misalign = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__store_misalign = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xpaddr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpc = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xfault = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ffault = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xcause = VL_RAND_RESET_I(4);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_paddr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault_cause = VL_RAND_RESET_I(4);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_start = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_start = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__serving_ex = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_flush = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__mem_ack = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__access = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fetch_consumed = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_dfault = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_ifault = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__take_int = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_cause = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_val = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_valid = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_addr = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sc_ok = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_clint__we = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mem_load_data = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__wb_mux = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h577f5a8b__0 = 0;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf029ea2b__0 = 0;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7328fc67__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc = VL_RAND_RESET_Q(64);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__divisor_q = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q = VL_RAND_RESET_I(3);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__as = VL_RAND_RESET_Q(64);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__p_uu = VL_RAND_RESET_Q(64);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__na = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__nb = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx = VL_RAND_RESET_Q(64);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__vaddr_q = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr = VL_RAND_RESET_I(3);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_invalid = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_leaf = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l0_invalid = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpie = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpp = VL_RAND_RESET_I(2);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtval = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_r = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__medeleg = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stvec = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sscratch = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sepc = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__scause = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stval = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0 = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem = VL_RAND_RESET_I(32);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__msip_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip = VL_RAND_RESET_I(4);
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__enable = VL_RAND_RESET_I(4);
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__threshold = VL_RAND_RESET_I(3);
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id = VL_RAND_RESET_I(3);
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio_acc = VL_RAND_RESET_I(1);
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT____Vlvbound_h79e1189b__0 = VL_RAND_RESET_I(3);
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT____Vlvbound_he1670a3d__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v1 = 0;
    vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v2 = 0;
    vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v2 = 0;
    vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v2 = 0;
    vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v3 = 0;
    vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v3 = 0;
    vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v3 = 0;
    vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
