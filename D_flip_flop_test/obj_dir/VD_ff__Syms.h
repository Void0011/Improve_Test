// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VD_FF__SYMS_H_
#define VERILATED_VD_FF__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VD_ff.h"

// INCLUDE MODULE CLASSES
#include "VD_ff___024root.h"

// SYMS CLASS (contains all model state)
class VD_ff__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VD_ff* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VD_ff___024root                TOP;

    // CONSTRUCTORS
    VD_ff__Syms(VerilatedContext* contextp, const char* namep, VD_ff* modelp);
    ~VD_ff__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
