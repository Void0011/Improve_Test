// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VD_ff.h for the primary calling header

#include "VD_ff___024root.h"
#include "VD_ff__Syms.h"

//==========

VL_INLINE_OPT void VD_ff___024root___sequent__TOP__1(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->q_o = ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->d)));
    vlSelf->q = ((IData)(vlSelf->rst) & (IData)(vlSelf->d));
}

void VD_ff___024root___eval(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VD_ff___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VD_ff___024root___change_request_1(VD_ff___024root* vlSelf);

VL_INLINE_OPT QData VD_ff___024root___change_request(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___change_request\n"); );
    // Body
    return (VD_ff___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VD_ff___024root___change_request_1(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VD_ff___024root___eval_debug_assertions(VD_ff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_ff___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->d & 0xfeU))) {
        Verilated::overWidthError("d");}
}
#endif  // VL_DEBUG
