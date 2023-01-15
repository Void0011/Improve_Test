// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShifting_reg_test__Syms.h"


void VShifting_reg_test___024root__traceInitSub0(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VShifting_reg_test___024root__traceInitTop(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VShifting_reg_test___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VShifting_reg_test___024root__traceInitSub0(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"din", false,-1, 3,0);
        tracep->declBus(c+2,"din_sig", false,-1, 3,0);
        tracep->declBus(c+3,"out_logicL", false,-1, 3,0);
        tracep->declBus(c+4,"out_logicL_over", false,-1, 5,0);
        tracep->declBus(c+5,"out_logicR", false,-1, 3,0);
        tracep->declBus(c+6,"out_calcuL", false,-1, 3,0);
        tracep->declBus(c+7,"out_calcuL_over", false,-1, 5,0);
        tracep->declBus(c+8,"out_calcuR", false,-1, 3,0);
        tracep->declBus(c+1,"Shifting_reg_test din", false,-1, 3,0);
        tracep->declBus(c+2,"Shifting_reg_test din_sig", false,-1, 3,0);
        tracep->declBus(c+3,"Shifting_reg_test out_logicL", false,-1, 3,0);
        tracep->declBus(c+4,"Shifting_reg_test out_logicL_over", false,-1, 5,0);
        tracep->declBus(c+5,"Shifting_reg_test out_logicR", false,-1, 3,0);
        tracep->declBus(c+6,"Shifting_reg_test out_calcuL", false,-1, 3,0);
        tracep->declBus(c+7,"Shifting_reg_test out_calcuL_over", false,-1, 5,0);
        tracep->declBus(c+8,"Shifting_reg_test out_calcuR", false,-1, 3,0);
    }
}

void VShifting_reg_test___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VShifting_reg_test___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VShifting_reg_test___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VShifting_reg_test___024root__traceRegister(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VShifting_reg_test___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VShifting_reg_test___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VShifting_reg_test___024root__traceCleanup, vlSelf);
    }
}

void VShifting_reg_test___024root__traceFullSub0(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VShifting_reg_test___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VShifting_reg_test___024root* const __restrict vlSelf = static_cast<VShifting_reg_test___024root*>(voidSelf);
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VShifting_reg_test___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VShifting_reg_test___024root__traceFullSub0(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->din),4);
        tracep->fullCData(oldp+2,(vlSelf->din_sig),4);
        tracep->fullCData(oldp+3,(vlSelf->out_logicL),4);
        tracep->fullCData(oldp+4,(vlSelf->out_logicL_over),6);
        tracep->fullCData(oldp+5,(vlSelf->out_logicR),4);
        tracep->fullCData(oldp+6,(vlSelf->out_calcuL),4);
        tracep->fullCData(oldp+7,(vlSelf->out_calcuL_over),6);
        tracep->fullCData(oldp+8,(vlSelf->out_calcuR),4);
    }
}
