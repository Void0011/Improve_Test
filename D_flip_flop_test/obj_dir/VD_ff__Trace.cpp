// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VD_ff__Syms.h"


void VD_ff___024root__traceChgSub0(VD_ff___024root* vlSelf, VerilatedVcd* tracep);

void VD_ff___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VD_ff___024root* const __restrict vlSelf = static_cast<VD_ff___024root*>(voidSelf);
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VD_ff___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VD_ff___024root__traceChgSub0(VD_ff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clk));
        tracep->chgBit(oldp+1,(vlSelf->rst));
        tracep->chgBit(oldp+2,(vlSelf->d));
        tracep->chgBit(oldp+3,(vlSelf->q));
        tracep->chgBit(oldp+4,(vlSelf->q_o));
    }
}

void VD_ff___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VD_ff___024root* const __restrict vlSelf = static_cast<VD_ff___024root*>(voidSelf);
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
