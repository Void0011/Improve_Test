// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VShifting_reg_test.h"
#include "VShifting_reg_test__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VShifting_reg_test::VShifting_reg_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VShifting_reg_test__Syms(_vcontextp__, _vcname__, this)}
    , din{vlSymsp->TOP.din}
    , din_sig{vlSymsp->TOP.din_sig}
    , out_logicL{vlSymsp->TOP.out_logicL}
    , out_logicL_over{vlSymsp->TOP.out_logicL_over}
    , out_logicR{vlSymsp->TOP.out_logicR}
    , out_calcuL{vlSymsp->TOP.out_calcuL}
    , out_calcuL_over{vlSymsp->TOP.out_calcuL_over}
    , out_calcuR{vlSymsp->TOP.out_calcuR}
    , rootp{&(vlSymsp->TOP)}
{
}

VShifting_reg_test::VShifting_reg_test(const char* _vcname__)
    : VShifting_reg_test(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VShifting_reg_test::~VShifting_reg_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VShifting_reg_test___024root___eval_initial(VShifting_reg_test___024root* vlSelf);
void VShifting_reg_test___024root___eval_settle(VShifting_reg_test___024root* vlSelf);
void VShifting_reg_test___024root___eval(VShifting_reg_test___024root* vlSelf);
QData VShifting_reg_test___024root___change_request(VShifting_reg_test___024root* vlSelf);
#ifdef VL_DEBUG
void VShifting_reg_test___024root___eval_debug_assertions(VShifting_reg_test___024root* vlSelf);
#endif  // VL_DEBUG
void VShifting_reg_test___024root___final(VShifting_reg_test___024root* vlSelf);

static void _eval_initial_loop(VShifting_reg_test__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VShifting_reg_test___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VShifting_reg_test___024root___eval_settle(&(vlSymsp->TOP));
        VShifting_reg_test___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VShifting_reg_test___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/zhouzhk/Documents/Improve_Test/Shifting_test/vsrc/Shifting_reg_test.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VShifting_reg_test___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VShifting_reg_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShifting_reg_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VShifting_reg_test___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VShifting_reg_test___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VShifting_reg_test___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/zhouzhk/Documents/Improve_Test/Shifting_test/vsrc/Shifting_reg_test.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VShifting_reg_test___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VShifting_reg_test::final() {
    VShifting_reg_test___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VShifting_reg_test::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VShifting_reg_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VShifting_reg_test___024root__traceInitTop(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VShifting_reg_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShifting_reg_test___024root*>(voidSelf);
    VShifting_reg_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VShifting_reg_test___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VShifting_reg_test___024root__traceRegister(VShifting_reg_test___024root* vlSelf, VerilatedVcd* tracep);

void VShifting_reg_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VShifting_reg_test___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
