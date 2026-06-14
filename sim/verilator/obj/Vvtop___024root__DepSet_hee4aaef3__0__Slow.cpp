// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvtop.h for the primary calling header

#include "Vvtop__pch.h"
#include "Vvtop__Syms.h"
#include "Vvtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvtop___024root___dump_triggers__stl(Vvtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvtop___024root___eval_triggers__stl(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__0)));
    vlSelf->__Vtrigprevexpr___TOP__vtop__DOT__dut__DOT__u_core__DOT__ex_trap__0 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
