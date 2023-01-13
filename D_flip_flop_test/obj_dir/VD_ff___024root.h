// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VD_ff.h for the primary calling header

#ifndef VERILATED_VD_FF___024ROOT_H_
#define VERILATED_VD_FF___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VD_ff__Syms;
class VD_ff_VerilatedVcd;


//----------

VL_MODULE(VD_ff___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(d,0,0);
    VL_OUT8(q,0,0);
    VL_OUT8(q_o,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VD_ff__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VD_ff___024root);  ///< Copying not allowed
  public:
    VD_ff___024root(const char* name);
    ~VD_ff___024root();

    // INTERNAL METHODS
    void __Vconfigure(VD_ff__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
