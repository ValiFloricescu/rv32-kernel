// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvtop.h for the primary calling header

#include "Vvtop__pch.h"
#include "Vvtop__Syms.h"
#include "Vvtop___024root.h"

void Vvtop___024root___ctor_var_reset(Vvtop___024root* vlSelf);

Vvtop___024root::Vvtop___024root(Vvtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvtop___024root___ctor_var_reset(this);
}

void Vvtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvtop___024root::~Vvtop___024root() {
}
