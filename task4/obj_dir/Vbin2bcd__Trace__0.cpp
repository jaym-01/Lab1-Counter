// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbin2bcd__Syms.h"


void Vbin2bcd___024root__trace_chg_sub_0(Vbin2bcd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbin2bcd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root__trace_chg_top_0\n"); );
    // Init
    Vbin2bcd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbin2bcd___024root*>(voidSelf);
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbin2bcd___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vbin2bcd___024root__trace_chg_sub_0(Vbin2bcd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->x),8);
    bufp->chgSData(oldp+1,(vlSelf->BCD),12);
    bufp->chgIData(oldp+2,(vlSelf->bin2bcd__DOT__result),20);
}

void Vbin2bcd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root__trace_cleanup\n"); );
    // Init
    Vbin2bcd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbin2bcd___024root*>(voidSelf);
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
