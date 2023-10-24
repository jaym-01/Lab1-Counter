// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbin2bcd.h for the primary calling header

#include "verilated.h"

#include "Vbin2bcd___024root.h"

VL_INLINE_OPT void Vbin2bcd___024root___combo__TOP__0(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->bin2bcd__DOT__result = 0U;
    vlSelf->bin2bcd__DOT__result = ((0xfff00U & vlSelf->bin2bcd__DOT__result) 
                                    | (IData)(vlSelf->x));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 8U)))) {
        vlSelf->bin2bcd__DOT__result = ((0xff0ffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf00U & 
                                           (((IData)(3U) 
                                             + (vlSelf->bin2bcd__DOT__result 
                                                >> 8U)) 
                                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->bin2bcd__DOT__result 
                        >> 0xcU)))) {
        vlSelf->bin2bcd__DOT__result = ((0xf0fffU & vlSelf->bin2bcd__DOT__result) 
                                        | (0xf000U 
                                           & (((IData)(3U) 
                                               + (vlSelf->bin2bcd__DOT__result 
                                                  >> 0xcU)) 
                                              << 0xcU)));
    }
    vlSelf->bin2bcd__DOT__result = (0xfffffU & (vlSelf->bin2bcd__DOT__result 
                                                << 1U));
    vlSelf->BCD = (0xfffU & (vlSelf->bin2bcd__DOT__result 
                             >> 8U));
}

void Vbin2bcd___024root___eval(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval\n"); );
    // Body
    Vbin2bcd___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vbin2bcd___024root___eval_debug_assertions(Vbin2bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin2bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin2bcd___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
