// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShifting_reg_test__Syms.h"


void VShifting_reg_test___024root__traceChgSub0(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep);

void VShifting_reg_test___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VShifting_reg_test___024root* const __restrict vlSelf = static_cast<VShifting_reg_test___024root*>(voidSelf);
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VShifting_reg_test___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VShifting_reg_test___024root__traceChgSub0(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->din),4);
        tracep->chgCData(oldp+1,(vlSelf->din_sig),4);
        tracep->chgCData(oldp+2,(vlSelf->out_logicL),4);
        tracep->chgCData(oldp+3,(vlSelf->out_logicL_over),6);
        tracep->chgCData(oldp+4,(vlSelf->out_logicR),4);
        tracep->chgCData(oldp+5,(vlSelf->out_calcuL),4);
        tracep->chgCData(oldp+6,(vlSelf->out_calcuL_over),6);
        tracep->chgCData(oldp+7,(vlSelf->out_calcuR),4);
    }
}

void VShifting_reg_test___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VShifting_reg_test___024root* const __restrict vlSelf = static_cast<VShifting_reg_test___024root*>(voidSelf);
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
