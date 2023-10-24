// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbin2bcd.h"
#include "Vbin2bcd__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbin2bcd::Vbin2bcd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbin2bcd__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , BCD{vlSymsp->TOP.BCD}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbin2bcd::Vbin2bcd(const char* _vcname__)
    : Vbin2bcd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbin2bcd::~Vbin2bcd() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbin2bcd___024root___eval_initial(Vbin2bcd___024root* vlSelf);
void Vbin2bcd___024root___eval_settle(Vbin2bcd___024root* vlSelf);
void Vbin2bcd___024root___eval(Vbin2bcd___024root* vlSelf);
#ifdef VL_DEBUG
void Vbin2bcd___024root___eval_debug_assertions(Vbin2bcd___024root* vlSelf);
#endif  // VL_DEBUG
void Vbin2bcd___024root___final(Vbin2bcd___024root* vlSelf);

static void _eval_initial_loop(Vbin2bcd__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbin2bcd___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbin2bcd___024root___eval_settle(&(vlSymsp->TOP));
        Vbin2bcd___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vbin2bcd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbin2bcd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbin2bcd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbin2bcd___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vbin2bcd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vbin2bcd::final() {
    Vbin2bcd___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbin2bcd::hierName() const { return vlSymsp->name(); }
const char* Vbin2bcd::modelName() const { return "Vbin2bcd"; }
unsigned Vbin2bcd::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vbin2bcd::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbin2bcd___024root__trace_init_top(Vbin2bcd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbin2bcd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbin2bcd___024root*>(voidSelf);
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vbin2bcd___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vbin2bcd___024root__trace_register(Vbin2bcd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbin2bcd::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbin2bcd___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
