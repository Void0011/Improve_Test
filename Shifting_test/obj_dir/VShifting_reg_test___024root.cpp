// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShifting_reg_test.h for the primary calling header

#include "VShifting_reg_test___024root.h"
#include "VShifting_reg_test__Syms.h"

//==========

VL_INLINE_OPT void VShifting_reg_test___024root___combo__TOP__1(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->out_logicL = (0xfU & ((IData)(vlSelf->din) 
                                  << 2U));
    vlSelf->out_logicL_over = (0x3fU & ((IData)(vlSelf->din) 
                                        << 2U));
    vlSelf->out_logicR = (0xfU & ((IData)(vlSelf->din) 
                                  >> 2U));
    vlSelf->out_calcuL = (0xfU & ((IData)(vlSelf->din_sig) 
                                  << 2U));
    vlSelf->out_calcuL_over = (0x3fU & (VL_EXTENDS_II(6,4, (IData)(vlSelf->din_sig)) 
                                        << 2U));
    vlSelf->out_calcuR = (0xfU & VL_SHIFTRS_III(4,4,32, (IData)(vlSelf->din_sig), 2U));
}

void VShifting_reg_test___024root___eval(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___eval\n"); );
    // Body
    VShifting_reg_test___024root___combo__TOP__1(vlSelf);
}

QData VShifting_reg_test___024root___change_request_1(VShifting_reg_test___024root* vlSelf);

VL_INLINE_OPT QData VShifting_reg_test___024root___change_request(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___change_request\n"); );
    // Body
    return (VShifting_reg_test___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VShifting_reg_test___024root___change_request_1(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VShifting_reg_test___024root___eval_debug_assertions(VShifting_reg_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifting_reg_test___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->din & 0xf0U))) {
        Verilated::overWidthError("din");}
    if (VL_UNLIKELY((vlSelf->din_sig & 0xf0U))) {
        Verilated::overWidthError("din_sig");}
}
#endif  // VL_DEBUG
