// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VD_ff__Syms.h"


void VD_ff___024root__traceInitSub0(VD_ff___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VD_ff___024root__traceInitTop(VD_ff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VD_ff___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VD_ff___024root__traceInitSub0(VD_ff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"d", false,-1);
        tracep->declBit(c+4,"q", false,-1);
        tracep->declBit(c+5,"q_o", false,-1);
        tracep->declBit(c+1,"D_ff clk", false,-1);
        tracep->declBit(c+2,"D_ff rst", false,-1);
        tracep->declBit(c+3,"D_ff d", false,-1);
        tracep->declBit(c+4,"D_ff q", false,-1);
        tracep->declBit(c+5,"D_ff q_o", false,-1);
    }
}

void VD_ff___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VD_ff___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VD_ff___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VD_ff___024root__traceRegister(VD_ff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VD_ff___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VD_ff___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VD_ff___024root__traceCleanup, vlSelf);
    }
}

void VD_ff___024root__traceFullSub0(VD_ff___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VD_ff___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VD_ff___024root* const __restrict vlSelf = static_cast<VD_ff___024root*>(voidSelf);
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VD_ff___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VD_ff___024root__traceFullSub0(VD_ff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst));
        tracep->fullBit(oldp+3,(vlSelf->d));
        tracep->fullBit(oldp+4,(vlSelf->q));
        tracep->fullBit(oldp+5,(vlSelf->q_o));
    }
}
