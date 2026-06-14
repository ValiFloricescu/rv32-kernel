// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVTOP__SYMS_H_
#define VERILATED_VVTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vvtop.h"

// INCLUDE MODULE CLASSES
#include "Vvtop___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vvtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vvtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vvtop___024root                TOP;

    // CONSTRUCTORS
    Vvtop__Syms(VerilatedContext* contextp, const char* namep, Vvtop* modelp);
    ~Vvtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
