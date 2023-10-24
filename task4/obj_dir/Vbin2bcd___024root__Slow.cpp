// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbin2bcd.h for the primary calling header

#include "verilated.h"

#include "Vbin2bcd__Syms.h"
#include "Vbin2bcd___024root.h"

void Vbin2bcd___024root___ctor_var_reset(Vbin2bcd___024root* vlSelf);

Vbin2bcd___024root::Vbin2bcd___024root(Vbin2bcd__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbin2bcd___024root___ctor_var_reset(this);
}

void Vbin2bcd___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vbin2bcd___024root::~Vbin2bcd___024root() {
}
