// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvtop.h for the primary calling header

#include "Vvtop__pch.h"
#include "Vvtop__Syms.h"
#include "Vvtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvtop___024root___dump_triggers__act(Vvtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vvtop___024root___eval_triggers__act(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__1 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
