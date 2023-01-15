// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShifting_reg_test.h for the primary calling header

#include "VShifting_reg_test___024root.h"
#include "VShifting_reg_test__Syms.h"

//==========


void VShifting_reg_test___024root___ctor_var_reset(VShifting_reg_test___024root* vlSelf);

VShifting_reg_test___024root::VShifting_reg_test___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VShifting_reg_test___024root___ctor_var_reset(this);
}

void VShifting_reg_test___024root::__Vconfigure(VShifting_reg_test__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VShifting_reg_test___024root::~VShifting_reg_test___024root() {
}

void VShifting_reg_test___024root___eval_initial(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___eval_initial\n"); );
}

void VShifting_reg_test___024root___combo__TOP__1(VShifting_reg_test___024root* vlSelf);

void VShifting_reg_test___024root___eval_settle(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___eval_settle\n"); );
    // Body
    VShifting_reg_test___024root___combo__TOP__1(vlSelf);
}

void VShifting_reg_test___024root___final(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___final\n"); );
}

void VShifting_reg_test___024root___ctor_var_reset(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->din = VL_RAND_RESET_I(4);
    vlSelf->din_sig = VL_RAND_RESET_I(4);
    vlSelf->out_logicL = VL_RAND_RESET_I(4);
    vlSelf->out_logicL_over = VL_RAND_RESET_I(6);
    vlSelf->out_logicR = VL_RAND_RESET_I(4);
    vlSelf->out_calcuL = VL_RAND_RESET_I(4);
    vlSelf->out_calcuL_over = VL_RAND_RESET_I(6);
    vlSelf->out_calcuR = VL_RAND_RESET_I(4);
}
