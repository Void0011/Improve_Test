// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VD_ff.h"
#include "VD_ff__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VD_ff::VD_ff(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VD_ff__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , d{vlSymsp->TOP.d}
    , q{vlSymsp->TOP.q}
    , q_o{vlSymsp->TOP.q_o}
    , rootp{&(vlSymsp->TOP)}
{
}

VD_ff::VD_ff(const char* _vcname__)
    : VD_ff(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VD_ff::~VD_ff() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VD_ff___024root___eval_initial(VD_ff___024root* vlSelf);
void VD_ff___024root___eval_settle(VD_ff___024root* vlSelf);
void VD_ff___024root___eval(VD_ff___024root* vlSelf);
QData VD_ff___024root___change_request(VD_ff___024root* vlSelf);
#ifdef VL_DEBUG
void VD_ff___024root___eval_debug_assertions(VD_ff___024root* vlSelf);
#endif  // VL_DEBUG
void VD_ff___024root___final(VD_ff___024root* vlSelf);

static void _eval_initial_loop(VD_ff__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VD_ff___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VD_ff___024root___eval_settle(&(vlSymsp->TOP));
        VD_ff___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VD_ff___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/zhouzhk/Documents/Improve_Test/D_flip_flop_test/vsrc/D_ff.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VD_ff___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VD_ff::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VD_ff::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VD_ff___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VD_ff___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VD_ff___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/zhouzhk/Documents/Improve_Test/D_flip_flop_test/vsrc/D_ff.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VD_ff___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VD_ff::final() {
    VD_ff___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VD_ff::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VD_ff::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VD_ff___024root__traceInitTop(VD_ff___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VD_ff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VD_ff___024root*>(voidSelf);
    VD_ff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VD_ff___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VD_ff___024root__traceRegister(VD_ff___024root* vlSelf, VerilatedVcd* tracep);

void VD_ff::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VD_ff___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
