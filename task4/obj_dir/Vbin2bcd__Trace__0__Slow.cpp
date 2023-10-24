// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbin2bcd__Syms.h"


VL_ATTR_COLD void Vbin2bcd___024root__trace_init_sub__TOP__0(Vbin2bcd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"x", false,-1, 7,0);
    tracep->declBus(c+2,"BCD", false,-1, 11,0);
    tracep->pushNamePrefix("bin2bcd ");
    tracep->declBus(c+1,"x", false,-1, 7,0);
    tracep->declBus(c+2,"BCD", false,-1, 11,0);
    tracep->declBus(c+3,"result", false,-1, 19,0);
    tracep->declBus(c+4,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vbin2bcd___024root__trace_init_top(Vbin2bcd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root__trace_init_top\n"); );
    // Body
    Vbin2bcd___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbin2bcd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbin2bcd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbin2bcd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbin2bcd___024root__trace_register(Vbin2bcd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbin2bcd___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbin2bcd___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbin2bcd___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbin2bcd___024root__trace_full_sub_0(Vbin2bcd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbin2bcd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root__trace_full_top_0\n"); );
    // Init
    Vbin2bcd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbin2bcd___024root*>(voidSelf);
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbin2bcd___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbin2bcd___024root__trace_full_sub_0(Vbin2bcd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->x),8);
    bufp->fullSData(oldp+2,(vlSelf->BCD),12);
    bufp->fullIData(oldp+3,(vlSelf->bin2bcd__DOT__result),20);
    bufp->fullIData(oldp+4,(8U),32);
}
