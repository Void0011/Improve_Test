// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VD_ff.h for the primary calling header

#include "VD_ff___024root.h"
#include "VD_ff__Syms.h"

//==========


void VD_ff___024root___ctor_var_reset(VD_ff___024root* vlSelf);

VD_ff___024root::VD_ff___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VD_ff___024root___ctor_var_reset(this);
}

void VD_ff___024root::__Vconfigure(VD_ff__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VD_ff___024root::~VD_ff___024root() {
}

void VD_ff___024root___eval_initial(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VD_ff___024root___eval_settle(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___eval_settle\n"); );
}

void VD_ff___024root___final(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___final\n"); );
}

void VD_ff___024root___ctor_var_reset(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
    vlSelf->q_o = VL_RAND_RESET_I(1);
}
