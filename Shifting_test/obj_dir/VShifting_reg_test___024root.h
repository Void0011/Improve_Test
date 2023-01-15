// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VShifting_reg_test.h for the primary calling header

#ifndef VERILATED_VSHIFTING_REG_TEST___024ROOT_H_
#define VERILATED_VSHIFTING_REG_TEST___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VShifting_reg_test__Syms;
class VShifting_reg_test_VerilatedVcd;


//----------

VL_MODULE(VShifting_reg_test___024root) {
  public:

    // PORTS
    VL_IN8(din,3,0);
    VL_IN8(din_sig,3,0);
    VL_OUT8(out_logicL,3,0);
    VL_OUT8(out_logicL_over,5,0);
    VL_OUT8(out_logicR,3,0);
    VL_OUT8(out_calcuL,3,0);
    VL_OUT8(out_calcuL_over,5,0);
    VL_OUT8(out_calcuR,3,0);

    // INTERNAL VARIABLES
    VShifting_reg_test__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VShifting_reg_test___024root);  ///< Copying not allowed
  public:
    VShifting_reg_test___024root(const char* name);
    ~VShifting_reg_test___024root();

    // INTERNAL METHODS
    void __Vconfigure(VShifting_reg_test__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
