// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHIFTING_REG_TEST__SYMS_H_
#define VERILATED_VSHIFTING_REG_TEST__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VShifting_reg_test.h"

// INCLUDE MODULE CLASSES
#include "VShifting_reg_test___024root.h"

// SYMS CLASS (contains all model state)
class VShifting_reg_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VShifting_reg_test* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VShifting_reg_test___024root   TOP;

    // CONSTRUCTORS
    VShifting_reg_test__Syms(VerilatedContext* contextp, const char* namep, VShifting_reg_test* modelp);
    ~VShifting_reg_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
