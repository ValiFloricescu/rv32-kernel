// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvtop.h for the primary calling header

#include "Vvtop__pch.h"
#include "Vvtop___024root.h"

VL_INLINE_OPT void Vvtop___024root___act_sequent__TOP__0(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en 
        = ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wr));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid = 1U;
    if ((0x800U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
        if ((0x400U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                    if ((0x80U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                    } else if ((0x40U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                    } else if ((0x20U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                    } else if ((0x10U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                        if ((8U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                        } else if ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                            if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                            } else if ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                            }
                        }
                    } else {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                    }
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                }
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            }
        } else {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
        }
    } else if ((0x400U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
    } else if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
        if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            if ((0x80U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((0x40U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                if ((0x20U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                } else if ((0x10U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                } else if ((8U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                } else if ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                    if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                    } else if ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((0x10U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((8U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                }
            }
        } else {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
        }
    } else if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
        if ((0x80U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            if ((0x40U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((0x20U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((0x10U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((8U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            }
        } else if ((0x40U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            if ((0x20U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((0x10U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((8U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            } else if ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                } else if ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
                }
            }
        } else if ((0x20U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
        } else if ((0x10U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
        } else if ((8U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
        } else if ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
            }
        } else if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
        } else if ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
        }
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__csr_warl0;
    }
    if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr) 
         & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv) 
            < (3U & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                     >> 8U))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid = 0U;
    }
    if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
         & (0xc00U == (0xc00U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))))) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap 
        = ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__instr_misalign) 
             | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_misalign) 
                | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__store_misalign) 
                   | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ecall) 
                      | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ebreak) 
                         | (((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid)) 
                             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr)) 
                            | (((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mret_ok)) 
                                & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_mret)) 
                               | (((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sret_ok)) 
                                   & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_sret)) 
                                  | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_illegal))))))))) 
            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h577f5a8b__0)) 
           | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__take_int) 
              | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_dfault) 
                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_ifault))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_flush 
        = ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_valid) 
             & (IData)((0x12000073U == (0xfe00707fU 
                                        & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_instr)))) 
            | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wr) 
               & (0x180U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) 
           & ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)) 
              & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h577f5a8b__0)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect 
        = ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall)) 
           & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_take_pc) 
              | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap) 
                 | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret) 
                    | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret) 
                       | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_flush))))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect_pc 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)
            ? ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s)
                ? (0xfffffffcU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stvec)
                : (0xfffffffcU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtvec))
            : (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret) 
                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret))
                ? ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret)
                    ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sepc
                    : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mepc)
                : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_flush)
                    ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc4
                    : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_target)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__next_pc 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)
            ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect_pc
            : ((IData)(4U) + vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc));
}

void Vvtop___024root___eval_act(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vvtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vvtop___024root___nba_sequent__TOP__0(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v1 = 0U;
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v2 = 0U;
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v3 = 0U;
    vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 0U;
    if (((IData)(vlSelf->vtop__DOT__dut__DOT__dmem_we) 
         & (8U == (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                   >> 0x1cU)))) {
        if ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__dmem_wstrb))) {
            vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v0 
                = (0xffU & vlSelf->vtop__DOT__dut__DOT__dmem_wdata);
            vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v0 = 1U;
            vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v0 = 0U;
            vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v0 
                = (0x7fffffU & (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                                >> 2U));
        }
        if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__dmem_wstrb))) {
            vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v1 
                = (0xffU & (vlSelf->vtop__DOT__dut__DOT__dmem_wdata 
                            >> 8U));
            vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v1 = 1U;
            vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v1 = 8U;
            vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v1 
                = (0x7fffffU & (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                                >> 2U));
        }
        if ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__dmem_wstrb))) {
            vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v2 
                = (0xffU & (vlSelf->vtop__DOT__dut__DOT__dmem_wdata 
                            >> 0x10U));
            vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v2 = 1U;
            vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v2 
                = (0x7fffffU & (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                                >> 2U));
        }
        if ((8U & (IData)(vlSelf->vtop__DOT__dut__DOT__dmem_wstrb))) {
            vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v3 
                = (vlSelf->vtop__DOT__dut__DOT__dmem_wdata 
                   >> 0x18U);
            vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v3 = 1U;
            vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v3 
                = (0x7fffffU & (vlSelf->vtop__DOT__dut__DOT__dmem_addr 
                                >> 2U));
        }
    }
    if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_reg_write_r) 
         & (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r)))) {
        vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__wb_mux;
        vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 = 1U;
        vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r;
    }
}

extern const VlUnpacked<CData/*3:0*/, 16> Vvtop__ConstPool__TABLE_h8f8f6340_0;

VL_INLINE_OPT void Vvtop___024root___nba_sequent__TOP__1(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___nba_sequent__TOP__1\n"); );
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
    CData/*0:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__acc = 0;
    CData/*3:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__acc = 0;
    CData/*0:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__acc = 0;
    CData/*3:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__acc = 0;
    CData/*0:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__acc = 0;
    CData/*3:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__acc = 0;
    CData/*0:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__acc = 0;
    CData/*0:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__acc = 0;
    CData/*3:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__Vfuncout;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__acc;
    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__acc = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate = 0;
    CData/*1:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate = 0;
    IData/*31:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fpc;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fpc = 0;
    CData/*2:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q = 0;
    CData/*0:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q = 0;
    CData/*0:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r = 0;
    CData/*1:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = 0;
    CData/*5:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt = 0;
    CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v0;
    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v0 = 0;
    CData/*1:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8 = 0;
    CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8;
    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v0;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v0 = 0;
    IData/*19:0*/ __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v0;
    __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v0;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v0 = 0;
    IData/*31:0*/ __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v0;
    __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup__v0;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup__v0 = 0;
    CData/*2:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9 = 0;
    CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9;
    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9 = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v1;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v1 = 0;
    IData/*19:0*/ __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v1;
    __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v1;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v1 = 0;
    IData/*31:0*/ __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v1;
    __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup__v1;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup__v1 = 0;
    CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v10;
    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v10 = 0;
    IData/*31:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r = 0;
    CData/*0:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie = 0;
    CData/*1:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv = 0;
    CData/*0:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie = 0;
    IData/*31:0*/ __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp = 0;
    CData/*2:0*/ __Vdlyvdim0__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0;
    __Vdlyvdim0__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0 = 0;
    CData/*2:0*/ __Vdlyvval__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0;
    __Vdlyvval__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0 = 0;
    CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0;
    __Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0 = 0;
    CData/*0:0*/ __Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v1;
    __Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v1 = 0;
    // Body
    __Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0 = 0U;
    __Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v1 = 0U;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state;
    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v0 = 0U;
    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v10 = 0U;
    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8 = 0U;
    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9 = 0U;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fpc = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpc;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r;
    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv 
        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_read 
        = ((IData)(vlSelf->rst_n) && ((1U & (~ (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                                                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                                                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) 
                                      && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_read)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo 
        = ((IData)(vlSelf->rst_n) && ((1U & (~ (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                                                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                                                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) 
                                      && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_amo)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write 
        = ((IData)(vlSelf->rst_n) && ((1U & (~ (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                                                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                                                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) 
                                      && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_write)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_reg_write_r 
        = ((IData)(vlSelf->rst_n) && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_reg_write));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__sel) 
             & (IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__we))) {
            if (vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio_acc) {
                vlSelf->vtop__DOT__dut__DOT__u_plic__DOT____Vlvbound_h79e1189b__0 
                    = (7U & vlSelf->vtop__DOT__dut__DOT__dmem_wdata);
                if ((3U >= (7U & (((0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr) 
                                   - (IData)(4U)) >> 2U)))) {
                    __Vdlyvval__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0 
                        = vlSelf->vtop__DOT__dut__DOT__u_plic__DOT____Vlvbound_h79e1189b__0;
                    __Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0 = 1U;
                    __Vdlyvdim0__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0 
                        = (7U & (((0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr) 
                                  - (IData)(4U)) >> 2U));
                }
            }
        }
    } else {
        __Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v1 = 1U;
    }
    if (__Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0) {
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio[__Vdlyvdim0__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0] 
            = __Vdlyvval__vtop__DOT__dut__DOT__u_plic__DOT__prio__v0;
    }
    if (__Vdlyvset__vtop__DOT__dut__DOT__u_plic__DOT__prio__v1) {
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio[0U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio[1U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio[2U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio[3U] = 0U;
    }
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) {
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret)))) {
                if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret)))) {
                    if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 0xbU)))) {
                            if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                          >> 0xaU)))) {
                                if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                              >> 9U)))) {
                                    if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                        if ((0x80U 
                                             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (4U 
                                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((0x100U 
                                            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 3U)))) {
                                                        if (
                                                            (4U 
                                                             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r 
                                                                        = 
                                                                        ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r 
                                                                          & (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg)) 
                                                                         | (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                            & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap) {
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s)))) {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie = 0U;
            }
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s) {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv = 1U;
            } else {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv = 3U;
            }
        } else {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret) {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpie;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpp;
            } else {
                if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret)))) {
                    if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 0xbU)))) {
                            if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                          >> 0xaU)))) {
                                if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie 
                                                                            = 
                                                                            (1U 
                                                                             & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                                >> 3U));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret) {
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp;
                }
            }
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret)))) {
                if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret) {
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie = 1U;
                } else if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie 
                                                                        = 
                                                                        (1U 
                                                                         & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                            >> 5U));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie 
                                                                    = 
                                                                    (1U 
                                                                     & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                        >> 5U));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r 
            = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime 
            = (1ULL + vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime);
        if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel) 
             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_clint__we))) {
            if ((0U != (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                if ((0x4000U != (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                    if ((0x4004U != (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                        if ((0xbff8U == (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime 
                                = ((0xffffffff00000000ULL 
                                    & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime) 
                                   | (IData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)));
                        } else if ((0xbffcU == (0xffffU 
                                                & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime 
                                = ((0xffffffffULL & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime) 
                                   | ((QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)) 
                                      << 0x20U));
                        }
                    }
                }
            }
        }
        vlSelf->uart_tx_stb = 0U;
        if ((IData)(((0x10000000U == (0xf000000fU & vlSelf->vtop__DOT__dut__DOT__dmem_addr)) 
                     & (IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_uart__we)))) {
            vlSelf->uart_tx_stb = 1U;
            vlSelf->uart_tx_byte = (0xffU & vlSelf->vtop__DOT__dut__DOT__dmem_wdata);
        }
        if (((IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__sel) 
             & (IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__we))) {
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio_acc)))) {
                if ((0x2000U == (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))) {
                    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__enable 
                        = (0xfU & (vlSelf->vtop__DOT__dut__DOT__dmem_wdata 
                                   >> 1U));
                }
                if ((0x2000U != (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))) {
                    if ((0x200000U == (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))) {
                        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__threshold 
                            = (7U & vlSelf->vtop__DOT__dut__DOT__dmem_wdata);
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                      | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall))))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_illegal 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_illegal));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ecall 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_ecall));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ebreak 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_ebreak));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_branch 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_branch));
        }
        if (((((IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__sel) 
               & (~ (IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__we))) 
              & (0x200004U == (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))) 
             & (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id)))) {
            vlSelf->vtop__DOT__dut__DOT__u_plic__DOT____Vlvbound_he1670a3d__0 = 0U;
            if ((3U >= (7U & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id) 
                              - (IData)(1U))))) {
                vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip 
                    = (((~ ((IData)(1U) << (7U & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id) 
                                                  - (IData)(1U))))) 
                        & (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip)) 
                       | (0xfU & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT____Vlvbound_he1670a3d__0) 
                                  << (7U & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id) 
                                            - (IData)(1U))))));
            }
        }
    } else {
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r 
            = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie_r;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv = 3U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime = 0ULL;
        vlSelf->uart_tx_stb = 0U;
        vlSelf->uart_tx_byte = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__enable = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__threshold = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_illegal = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ecall = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_ebreak = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_branch = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__ip = 0U;
    }
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
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hae8e71fc__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_read) 
           | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write));
    if (vlSelf->rst_n) {
        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                      | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall))))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jalr 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jalr));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_mret 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_mret));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_sret 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_sys_sret));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jump 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_jump));
            if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_imm = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_instr = 0x13U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2 = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1 = 0U;
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_op;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_imm 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_imm;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_instr 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2 
                    = (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                >> 0x14U));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1 
                    = (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                >> 0xfU));
            }
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_b_src 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_b_src));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_a_src 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_alu_a_src));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_fault 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_fault));
        }
        if ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
              | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op = 0U;
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3 = 0U;
        } else {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_amo_op;
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3;
        }
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_load_data 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mem_load_data;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_wb_sel;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_pc4 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_pc4;
        if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) {
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret)))) {
                if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret)))) {
                    if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 0xbU)))) {
                            if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                          >> 0xaU)))) {
                                if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                              >> 9U)))) {
                                    if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sscratch 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (4U 
                                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stvec 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 7U)))) {
                                            if ((0x40U 
                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mscratch 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (4U 
                                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_r 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (4U 
                                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                         >> 1U)))) {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtvec 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (2U 
                                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__medeleg 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap) {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stval 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_val;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__scause 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_cause;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sepc 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc;
            }
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s)))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtval 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_val;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mcause 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap_cause;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mepc 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc;
            }
        } else if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret)))) {
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret)))) {
                if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 0xaU)))) {
                            if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                          >> 9U)))) {
                                if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stval 
                                                                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__scause 
                                                                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sepc 
                                                                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 7U)))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (2U 
                                                                 & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtval 
                                                                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                }
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mcause 
                                                                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                }
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mepc 
                                                                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid) 
             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_lr))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_valid = 1U;
        } else if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid) 
                    & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_valid = 0U;
        }
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jalr = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_mret = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_sret = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_jump = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_amo_op = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_op = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_b_src = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_a_src = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_imm = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_load_data = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_pc4 = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_instr = 0x13U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sscratch = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mscratch = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stvec = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtvec = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__medeleg = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__stval = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mtval = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__scause = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mcause = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_r = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2 = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1 = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_funct3 = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mepc = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sepc = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_valid = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc 
        = ((IData)(vlSelf->rst_n) && ((1U & (~ (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                                                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                                                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) 
                                      && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_sc)));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel) 
             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_clint__we))) {
            if ((0U == (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__msip_r 
                    = (1U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data);
            }
            if ((0U != (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                if ((0x4000U == (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp 
                        = ((0xffffffff00000000ULL & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp) 
                           | (IData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)));
                } else if ((0x4004U == (0xffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp 
                        = ((0xffffffffULL & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp) 
                           | ((QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data)) 
                              << 0x20U));
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                      | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall))))) {
            if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2_data = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1_data = 0U;
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2_data 
                    = (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7328fc67__0) 
                        & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r) 
                           == (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                        >> 0x14U))))
                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__wb_mux
                        : ((0U == (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                            >> 0x14U)))
                            ? 0U : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs
                           [(0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                      >> 0x14U))]));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1_data 
                    = (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7328fc67__0) 
                        & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r) 
                           == (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                        >> 0xfU))))
                        ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__wb_mux
                        : ((0U == (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                            >> 0xfU)))
                            ? 0U : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs
                           [(0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                      >> 0xfU))]));
            }
        }
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_alu_result 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result;
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__msip_r = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp = 0xffffffffffffffffULL;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs2_data = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1_data = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_alu_result = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__wb_mux 
        = ((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel))
            ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_alu_result
            : ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel))
                ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_load_data
                : ((2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_wb_sel))
                    ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_pc4
                    : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_alu_result)));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid) 
             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_lr))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_addr 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result;
        }
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid 
        = ((IData)(vlSelf->rst_n) && ((1U & (~ (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                                                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                                                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) 
                                      && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_valid)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_lr 
        = ((IData)(vlSelf->rst_n) && ((1U & (~ (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                                                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                                                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) 
                                      && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_lr)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_reg_write 
        = ((IData)(vlSelf->rst_n) && ((1U & (~ (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                                                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                                                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) 
                                      && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_reg_write)));
    if (vlSelf->rst_n) {
        if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap) {
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s)))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpie 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie;
            }
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie = 0U;
            }
        } else {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpie = 1U;
            } else if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret)))) {
                if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpie 
                                                                        = 
                                                                        (1U 
                                                                         & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                            >> 7U));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret)))) {
                if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie;
                } else if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                  >> 0xbU)))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 4U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 3U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie 
                                                                        = 
                                                                        (1U 
                                                                         & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                            >> 1U));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie 
                                                                    = 
                                                                    (1U 
                                                                     & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                        >> 1U));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie 
            = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie;
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpie = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie 
            = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mie;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__sie = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spie;
    vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_eff 
        = ((0xfffff777U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mip_r) 
           | (VL_SHIFTL_III(32,32,32, (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__msip_r), 3U) 
              | (VL_SHIFTL_III(32,32,32, (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtime 
                                          >= vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_clint__DOT__mtimecmp), 7U) 
                 | VL_SHIFTL_III(32,32,32, (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__best_id)), 0xbU))));
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap)))) {
            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret)))) {
                if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret)))) {
                    if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 0xbU)))) {
                            if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                          >> 0xaU)))) {
                                if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                    if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 7U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 5U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 4U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                 >> 3U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                                     >> 2U)))) {
                                                                if (
                                                                    (2U 
                                                                     & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                                                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg 
                                                                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap) {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__to_s) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp 
                    = (1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv));
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpp 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv;
            }
        } else if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_mret) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpp = 0U;
        } else if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_sret) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp = 0U;
        } else if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_csr__wr_en) 
                    & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_addr_valid))) {
            if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                              >> 0xaU)))) {
                    if ((0x200U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                        if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp 
                                                                = 
                                                                (1U 
                                                                 & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                    >> 8U));
                                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpp 
                                                                = 
                                                                (3U 
                                                                 & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                    >> 0xbU));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x100U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr)))) {
                                                        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp 
                                                            = 
                                                            (1U 
                                                             & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wval 
                                                                >> 8U));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                      | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall))))) {
            if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_amo_op = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc = 0U;
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_amo_op 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_amo_op;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_pc;
            }
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_read 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_read));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_amo 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_amo));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_write 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_mem_write));
        }
        if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure)))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_fault 
                = ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect))) 
                   && ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending))) 
                       && ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active) 
                           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ffault))));
        }
        if ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
              | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_wb_sel = 0U;
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_pc4 = 0U;
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data = 0U;
        } else {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_wb_sel 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_wb_sel;
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_pc4 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc4;
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd;
        }
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r 
            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rd;
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mideleg = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__spp = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__mpp = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_amo_op = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_read = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_fault = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_amo = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_write = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_wb_sel = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_pc4 = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rs2_data = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7328fc67__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_reg_write_r) 
           & (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__memwb_rd_r)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result 
        = ((IData)(vlSelf->rst_n) ? ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                                       | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                                      | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap))
                                      ? 0U : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf029ea2b__0)
                                               ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xpaddr
                                               : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr)
                                                   ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_rdata
                                                   : 
                                                  ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_muldiv)
                                                    ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_result
                                                    : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result))))
            : 0U);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid) 
           & ((IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hae8e71fc__0) 
              & (0x200U == (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result 
                            >> 0x10U))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sc_ok 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc) 
           & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_valid) 
              & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result 
                 == vlSelf->vtop__DOT__dut__DOT__u_core__DOT__resv_addr)));
    vtop__DOT__dut__DOT__u_core__DOT__exmem_fwd_val 
        = ((2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_wb_sel))
            ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_pc4
            : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_alu_result);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_clint__we 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__clint_sel) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_mem_write));
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h218973dd__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo) 
           | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sc_ok));
    if (vlSelf->rst_n) {
        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                      | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall))))) {
            if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_wb_sel = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc4 = 0U;
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr 
                    = (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                       >> 0x14U);
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_wb_sel 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_wb_sel;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc4 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_pc4;
            }
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_sc 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_sc));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_valid 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_valid));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_lr 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_lr));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_csr));
        }
        if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure)))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_pc 
                = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)
                    ? 0U : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending)
                             ? 0U : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc));
        }
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rd 
            = ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall)) 
                | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_trap))
                ? 0U : (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd));
        if ((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate))) {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_start) {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate = 1U;
            }
        } else if ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate))) {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xpaddr 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_paddr;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xfault 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xcause 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault_cause;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate = 2U;
            }
        } else {
            __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate = 0U;
        }
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate 
            = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate;
        if ((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state))) {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_muldiv) {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q 
                    = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__na) 
                       ^ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__nb));
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__na;
                if (((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)) 
                     | ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)) 
                        | ((2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)) 
                           | (3U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)))))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_result 
                        = ((4U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                            ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__p_uu)
                            : ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                                ? ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                                    ? (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__p_uu 
                                               >> 0x20U))
                                    : (IData)((VL_MULS_QQQ(64, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__as, (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd))) 
                                               >> 0x20U)))
                                : ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                                    ? (IData)((VL_MULS_QQQ(64, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__as, 
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)))) 
                                               >> 0x20U))
                                    : (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__p_uu))));
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = 2U;
                } else if ((0U == vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_result 
                        = (((4U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)) 
                            || (5U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)))
                            ? 0xffffffffU : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd);
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = 2U;
                } else if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div) 
                            & ((0x80000000U == vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd) 
                               & (0xffffffffU == vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_result 
                        = ((4U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                            ? 0x80000000U : 0U);
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = 2U;
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc 
                        = (QData)((IData)(((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__na)
                                            ? ((IData)(1U) 
                                               + (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd))
                                            : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd)));
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__divisor_q 
                        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__nb)
                            ? ((IData)(1U) + (~ vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd))
                            : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd);
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt = 0x20U;
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state))) {
            __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt 
                = (0x3fU & ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt) 
                            - (IData)(1U)));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx;
            if ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_result 
                    = (((4U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q)) 
                        | (5U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q)))
                        ? ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q)
                            ? ((IData)(1U) + (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx)))
                            : (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx))
                        : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r)
                            ? ((IData)(1U) + (~ (IData)(
                                                        (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx 
                                                         >> 0x20U))))
                            : (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx 
                                       >> 0x20U))));
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = 2U;
            }
        } else {
            __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = 0U;
        }
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_csr_addr = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_wb_sel = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_pc4 = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_pc = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_sc = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_rd = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_valid = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_lr = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate 
            = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__xstate;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_result = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc = 0ULL;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__divisor_q = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__op_q;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_q;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__neg_r;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__cnt;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state;
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
    vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__diff 
        = (0x1ffffffffULL & ((QData)((IData)((VL_SHIFTL_QQI(64,64,32, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc, 1U) 
                                              >> 0x20U))) 
                             - (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__divisor_q))));
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
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc_nx 
        = ((1U & (IData)((vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__diff 
                          >> 0x20U))) ? VL_SHIFTL_QQI(64,64,32, vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc, 1U)
            : (((QData)((IData)(vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__diff)) 
                << 0x20U) | (QData)((IData)((1U | VL_SHIFTL_III(32,32,32, (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__acc), 1U))))));
    vtop__DOT__dut__DOT__u_core__DOT__ex_alu_b = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_alu_b_src)
                                                   ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_imm
                                                   : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__as 
        = (((QData)((IData)((- (IData)((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__p_uu 
        = VL_MULS_QQQ(64, (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd)), (QData)((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd)));
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
    if (vlSelf->rst_n) {
        if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall) 
                      | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall))))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_reg_write 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_reg_write));
            if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                 | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3 = 0U;
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd 
                    = (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                >> 7U));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3 
                    = (7U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                             >> 0xcU));
            }
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_muldiv 
                = ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)))) 
                   && (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__id_is_muldiv));
        }
        if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure)))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_pc4 
                = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)
                    ? 0U : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending)
                             ? 0U : ((IData)(4U) + vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc)));
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_valid 
                = ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect))) 
                   && (1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending))));
        }
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_reg_write = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_pc4 = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_valid = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_muldiv = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3 = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mul_stall 
        = ((2U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__state)) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_muldiv));
    vtop__DOT__dut__DOT__u_core__DOT__csr_src = ((4U 
                                                  & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))
                                                  ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1)
                                                  : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd);
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div 
        = ((4U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)) 
           | (6U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__csr_wr 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_is_csr) 
           & ((1U == (3U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))) 
              | (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rs1))));
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
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__na 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div) 
           & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs1_fwd 
              >> 0x1fU));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__nb 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_muldiv__DOT__signed_div) 
           & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_rs2_fwd 
              >> 0x1fU));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__instr_misalign 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_take_pc) 
           & (0U != (3U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_target)));
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7c2a68e6__0 
        = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_access) 
           & ((1U == (3U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3)))
               ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result
               : ((2U == (3U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_funct3))) 
                  & (0U != (3U & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_alu_result)))));
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
    vtop__DOT__dut__DOT__u_core__DOT__id_imm_sel = 0U;
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure)))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect)
                    ? 0x13U : ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending)
                                ? 0x13U : (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active) 
                                            & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ffault))
                                            ? 0x13U
                                            : vlSelf->vtop__DOT__dut__DOT__ram
                                           [(0x7fffffU 
                                             & ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active) 
                                                  & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr_ok))
                                                  ? vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr
                                                  : vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc) 
                                                >> 2U))])));
        }
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr = 0x13U;
    }
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
    __Vtableidx1 = ((8U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                           >> 0x1bU)) | (7U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                               >> 0xcU)));
    vtop__DOT__dut__DOT__u_core__DOT__u_ctrl__DOT__alu_arith 
        = Vvtop__ConstPool__TABLE_h8f8f6340_0[__Vtableidx1];
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_use_stall 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_mem_read) 
           & ((0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd)) 
              & (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd) 
                  == (0x1fU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                               >> 0xfU))) | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_rd) 
                                             == (0x1fU 
                                                 & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ifid_instr 
                                                    >> 0x14U))))));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_misalign 
        = ((~ (IData)(vtop__DOT__dut__DOT__u_core__DOT__is_store_acc)) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7c2a68e6__0));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__store_misalign 
        = ((IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_h7c2a68e6__0) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT__is_store_acc));
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
    if (vlSelf->rst_n) {
        if ((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate))) {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_start) {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate = 1U;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fpc 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc;
            }
        } else if ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate))) {
            if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done) 
                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__serving_ex)))) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_paddr;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ffault 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate = 2U;
            }
        } else if ((2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate))) {
            if ((((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect) 
                  | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fetch_consumed)) 
                 | (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpc 
                    != vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc))) {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate = 0U;
            }
        } else {
            __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate = 0U;
        }
    } else {
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ffault = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fpc = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpc = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fpc;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__fstate;
    vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hc165d5df__0 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__load_misalign) 
           | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__store_misalign));
    vtop__DOT__dut__DOT__u_core__DOT__mmu_walking = 
        ((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)) 
         | (1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate)));
    if (vlSelf->rst_n) {
        if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_redirect_pc;
        } else if ((1U & (~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__back_pressure) 
                             | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending))))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__next_pc;
        }
    } else {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc = 0x80000000U;
    }
    if (vlSelf->rst_n) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault = 0U;
        if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_flush) {
            __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v0 = 1U;
        }
        if ((2U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state))) {
            if ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state))) {
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 0U;
            } else if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__mem_ack) {
                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__acc 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q;
                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__Vfuncout 
                    = ((0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__acc))
                        ? 0xcU : ((1U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__acc))
                                   ? 0xdU : 0xfU));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req = 0U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done = 1U;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 3U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault 
                    = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l0_invalid) 
                       | ([&]() {
                            __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__acc 
                                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q;
                            __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p 
                                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem;
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r 
                                = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p 
                                         >> 1U));
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w 
                                = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p 
                                         >> 2U));
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x 
                                = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p 
                                         >> 3U));
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u 
                                = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p 
                                         >> 4U));
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a 
                                = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p 
                                         >> 6U));
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d 
                                = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__p 
                                         >> 7U));
                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok 
                                = ((0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__acc))
                                    ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x)
                                    : ((1U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__acc))
                                        ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r)
                                        : (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w)));
                            if (((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                            }
                            if ((((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                  & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                                 & (0U != (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__acc)))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                            }
                            if ((((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                  & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                                 & (0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__acc)))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a)))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                            }
                            if (((2U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__acc)) 
                                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d)))) {
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                            }
                            __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__Vfuncout 
                                = (1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok)));
                        }(), (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__0__Vfuncout)));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault_cause 
                    = __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__1__Vfuncout;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_paddr 
                    = ((0xfffff000U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                       << 2U)) | (0xfffU 
                                                  & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__vaddr_q));
                if ((1U & ((~ ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l0_invalid) 
                               | ([&]() {
                                            __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__acc 
                                                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q;
                                            __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p 
                                                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem;
                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r 
                                                = (1U 
                                                   & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p 
                                                      >> 1U));
                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w 
                                                = (1U 
                                                   & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p 
                                                      >> 2U));
                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x 
                                                = (1U 
                                                   & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p 
                                                      >> 3U));
                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u 
                                                = (1U 
                                                   & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p 
                                                      >> 4U));
                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a 
                                                = (1U 
                                                   & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p 
                                                      >> 6U));
                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d 
                                                = (1U 
                                                   & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__p 
                                                      >> 7U));
                                            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok 
                                                = (
                                                   (0U 
                                                    == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__acc))
                                                    ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x)
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__acc))
                                                     ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r)
                                                     : (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w)));
                                            if (((0U 
                                                  == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)))) {
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                            }
                                            if ((((1U 
                                                   == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                                  & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                                                 & (0U 
                                                    != (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__acc)))) {
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                            }
                                            if ((((1U 
                                                   == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                                  & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                                                 & (0U 
                                                    == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__acc)))) {
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                            }
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a)))) {
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                            }
                                            if (((2U 
                                                  == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__acc)) 
                                                 & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d)))) {
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                            }
                                            __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__Vfuncout 
                                                = (1U 
                                                   & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok)));
                                        }(), (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__2__Vfuncout)))) 
                           & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_flush))))) {
                    __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8 = 1U;
                    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
                    __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v0 
                        = (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__vaddr_q 
                           >> 0xcU);
                    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v0 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
                    __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v0 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem;
                    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v0 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
                    __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup__v0 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr)));
                }
            }
        } else if ((1U & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state))) {
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__mem_ack) {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req = 0U;
                if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_invalid) {
                    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__acc 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q;
                    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__Vfuncout 
                        = ((0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__acc))
                            ? 0xcU : ((1U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__acc))
                                       ? 0xdU : 0xfU));
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault = 1U;
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault_cause 
                        = __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__3__Vfuncout;
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done = 1U;
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 3U;
                } else if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__l1_leaf) {
                    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__acc 
                        = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q;
                    __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__Vfuncout 
                        = ((0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__acc))
                            ? 0xcU : ((1U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__acc))
                                       ? 0xdU : 0xfU));
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done = 1U;
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 3U;
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault 
                        = ((0U != (0x3ffU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                             >> 0xaU))) 
                           | ([&]() {
                                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__acc 
                                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q;
                                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p 
                                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem;
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r 
                                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p 
                                             >> 1U));
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w 
                                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p 
                                             >> 2U));
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x 
                                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p 
                                             >> 3U));
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u 
                                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p 
                                             >> 4U));
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a 
                                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p 
                                             >> 6U));
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d 
                                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__p 
                                             >> 7U));
                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok 
                                    = ((0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__acc))
                                        ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x)
                                        : ((1U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__acc))
                                            ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r)
                                            : (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w)));
                                if (((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)))) {
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                }
                                if ((((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                                     & (0U != (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__acc)))) {
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                }
                                if ((((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                                     & (0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__acc)))) {
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                }
                                if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a)))) {
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                }
                                if (((2U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__acc)) 
                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d)))) {
                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                }
                                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__Vfuncout 
                                    = (1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok)));
                            }(), (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__4__Vfuncout)));
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault_cause 
                        = __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__5__Vfuncout;
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_paddr 
                        = ((0xffc00000U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                           << 2U)) 
                           | (0x3fffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__vaddr_q));
                    if ((1U & ((~ ((0U != (0x3ffU & 
                                           (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                            >> 0xaU))) 
                                   | ([&]() {
                                                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__acc 
                                                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q;
                                                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p 
                                                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem;
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r 
                                                    = 
                                                    (1U 
                                                     & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p 
                                                        >> 1U));
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w 
                                                    = 
                                                    (1U 
                                                     & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p 
                                                        >> 2U));
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x 
                                                    = 
                                                    (1U 
                                                     & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p 
                                                        >> 3U));
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u 
                                                    = 
                                                    (1U 
                                                     & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p 
                                                        >> 4U));
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a 
                                                    = 
                                                    (1U 
                                                     & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p 
                                                        >> 6U));
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d 
                                                    = 
                                                    (1U 
                                                     & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__p 
                                                        >> 7U));
                                                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok 
                                                    = 
                                                    ((0U 
                                                      == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__acc))
                                                      ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x)
                                                      : 
                                                     ((1U 
                                                       == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__acc))
                                                       ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r)
                                                       : (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w)));
                                                if (
                                                    ((0U 
                                                      == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)))) {
                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                                }
                                                if (
                                                    (((1U 
                                                       == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                                                     & (0U 
                                                        != (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__acc)))) {
                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                                }
                                                if (
                                                    (((1U 
                                                       == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                                                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                                                     & (0U 
                                                        == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__acc)))) {
                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a)))) {
                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                                }
                                                if (
                                                    ((2U 
                                                      == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__acc)) 
                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d)))) {
                                                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                                                }
                                                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok)));
                                            }(), (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__6__Vfuncout)))) 
                               & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_flush))))) {
                        __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9 = 1U;
                        __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
                        __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v1 
                            = (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__vaddr_q 
                               >> 0xcU);
                        __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v1 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
                        __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v1 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem;
                        __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v1 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
                        __Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup__v1 
                            = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
                        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr)));
                    }
                } else {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_addr 
                        = ((0xfffff000U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_amo__DOT__s_mem 
                                           << 2U)) 
                           + (0xffcU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__vaddr_q 
                                        >> 0xaU)));
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req = 1U;
                    __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 2U;
                }
            }
        } else if (((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__ex_start) 
                    | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_start))) {
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__vaddr_q 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr;
            vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__access_q 
                = vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__access;
            if (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit) {
                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__acc 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__access;
                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__acc 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__access;
                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__Vfuncout 
                    = ((0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__acc))
                        ? 0xcU : ((1U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__acc))
                                   ? 0xdU : 0xfU));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_paddr 
                    = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_sup)
                        ? ((0xffc00000U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
                                           << 2U)) 
                           | (0x3fffffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr))
                        : ((0xfffff000U & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte 
                                           << 2U)) 
                           | (0xfffU & vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr)));
                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p 
                    = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__hit_pte;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault_cause 
                    = __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__pf_cause__8__Vfuncout;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done = 1U;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 3U;
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r 
                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p 
                             >> 1U));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w 
                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p 
                             >> 2U));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x 
                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p 
                             >> 3U));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u 
                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p 
                             >> 4U));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a 
                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p 
                             >> 6U));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d 
                    = (1U & (__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__p 
                             >> 7U));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok 
                    = ((0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__acc))
                        ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__x)
                        : ((1U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__acc))
                            ? (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__r)
                            : (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__w)));
                if (((0U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                }
                if ((((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                     & (0U != (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__acc)))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                }
                if ((((1U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)) 
                      & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__u)) 
                     & (0U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__acc)))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__a)))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                }
                if (((2U == (IData)(__Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__acc)) 
                     & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__d)))) {
                    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok = 0U;
                }
                __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__Vfuncout 
                    = (1U & (~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__Vstatic__ok)));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault 
                    = __Vfunc_vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__bad_leaf__7__Vfuncout;
            } else {
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_addr 
                    = ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp 
                        << 0xcU) + (0xffcU & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__vaddr 
                                              >> 0x14U)));
                vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req = 1U;
                __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 1U;
            }
        }
    } else {
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr = 0U;
        __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_done = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_paddr = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_fault_cause = 0U;
        __Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v10 = 1U;
    }
    vtop__DOT__dut__DOT__u_core__DOT__walker_bus = 
        ((~ (((IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hae8e71fc__0) 
              | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_amo) 
                 | ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_lr) 
                    | (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_is_sc)))) 
             & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__exmem_valid))) 
         & (IData)(vtop__DOT__dut__DOT__u_core__DOT__mmu_walking));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__state;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__rr;
    if (__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte[__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v0] 
            = __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v0;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup[__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup__v0] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag[__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v0] 
            = __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v0;
    }
    if (__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v0) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[0U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[1U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[2U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[3U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[4U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[5U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[6U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[7U] = 0U;
    }
    if (__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v8] = 1U;
    }
    if (__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte[__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v1] 
            = __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_pte__v1;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup[__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_sup__v1] = 1U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag[__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v1] 
            = __Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_tag__v1;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v9] = 1U;
    }
    if (__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v__v10) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[0U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[1U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[2U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[3U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[4U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[5U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[6U] = 0U;
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_mmu__DOT__tlb_v[7U] = 0U;
    }
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv 
        = __Vdly__vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv;
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr_ok 
        = ((2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fstate)) 
           & (vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpc 
              == vlSelf->vtop__DOT__dut__DOT__u_core__DOT__pc));
    if (vtop__DOT__dut__DOT__u_core__DOT__walker_bus) {
        vlSelf->vtop__DOT__dut__DOT__dmem_wstrb = 0U;
        vlSelf->vtop__DOT__dut__DOT__dmem_addr = vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_addr;
    } else {
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
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____Vcellinp__u_mmu__mem_ack 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_mem_req) 
           & (IData)(vtop__DOT__dut__DOT__u_core__DOT__walker_bus));
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
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mret_ok 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_mret) 
           & (3U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__sret_ok 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_sys_sret) 
           & (0U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)));
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
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active 
        = ((vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__satp 
            >> 0x1fU) & (3U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_csr__DOT__priv)));
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
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__if_xlate_pending 
        = ((~ (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__fpaddr_ok)) 
           & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active));
    vtop__DOT__dut__DOT__u_core__DOT__need_xlate = 
        ((IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_active) 
         & ((IData)(vtop__DOT__dut__DOT__u_core__DOT__mem_access) 
            & ((~ (IData)(vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hc165d5df__0)) 
               & (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__idex_valid))));
    vlSelf->vtop__DOT__dut__DOT__u_plic__DOT__prio_acc 
        = ((IData)(vlSelf->vtop__DOT__dut__DOT____Vcellinp__u_plic__sel) 
           & ((4U <= (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr)) 
              & (0x10U >= (0xffffffU & vlSelf->vtop__DOT__dut__DOT__dmem_addr))));
    vtop__DOT__dut__DOT__u_core__DOT__ex_wants = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__need_xlate) 
                                                  & (0U 
                                                     == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT____VdfgTmp_hf029ea2b__0 
        = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__need_xlate) 
           & (2U == (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)));
    vlSelf->vtop__DOT__dut__DOT__u_core__DOT__mmu_stall 
        = ((IData)(vtop__DOT__dut__DOT__u_core__DOT__need_xlate) 
           & (2U != (IData)(vlSelf->vtop__DOT__dut__DOT__u_core__DOT__xstate)));
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

VL_INLINE_OPT void Vvtop___024root___nba_sequent__TOP__2(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0) {
        vlSelf->vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__u_core__DOT__u_rf__DOT__regs__v0;
    }
    if (vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v0) {
        vlSelf->vtop__DOT__dut__DOT__ram[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v0))) 
                & vlSelf->vtop__DOT__dut__DOT__ram[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v0))));
    }
    if (vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v1) {
        vlSelf->vtop__DOT__dut__DOT__ram[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v1))) 
                & vlSelf->vtop__DOT__dut__DOT__ram[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v1))));
    }
    if (vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v2) {
        vlSelf->vtop__DOT__dut__DOT__ram[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v2))) 
                & vlSelf->vtop__DOT__dut__DOT__ram[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v2))));
    }
    if (vlSelf->__Vdlyvset__vtop__DOT__dut__DOT__ram__v3) {
        vlSelf->vtop__DOT__dut__DOT__ram[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v3))) 
                & vlSelf->vtop__DOT__dut__DOT__ram[vlSelf->__Vdlyvdim0__vtop__DOT__dut__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__vtop__DOT__dut__DOT__ram__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__vtop__DOT__dut__DOT__ram__v3))));
    }
}

VL_INLINE_OPT void Vvtop___024root___nba_comb__TOP__1(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ vtop__DOT__dut__DOT__u_core__DOT__amo_wval;
    vtop__DOT__dut__DOT__u_core__DOT__amo_wval = 0;
    CData/*7:0*/ vtop__DOT__dut__DOT__u_core__DOT__mem_ld_byte;
    vtop__DOT__dut__DOT__u_core__DOT__mem_ld_byte = 0;
    SData/*15:0*/ vtop__DOT__dut__DOT__u_core__DOT__mem_ld_half;
    vtop__DOT__dut__DOT__u_core__DOT__mem_ld_half = 0;
    // Body
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
}

void Vvtop___024root___eval_nba(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vvtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vvtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vvtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vvtop___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vvtop___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vvtop___024root___eval_triggers__act(Vvtop___024root* vlSelf);

bool Vvtop___024root___eval_phase__act(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vvtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvtop___024root___eval_phase__nba(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvtop___024root___dump_triggers__nba(Vvtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvtop___024root___dump_triggers__act(Vvtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vvtop___024root___eval(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vvtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/valif/Desktop/KERNEL/LICENTA/sim/verilator/vtop.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vvtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/valif/Desktop/KERNEL/LICENTA/sim/verilator/vtop.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vvtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vvtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvtop___024root___eval_debug_assertions(Vvtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
