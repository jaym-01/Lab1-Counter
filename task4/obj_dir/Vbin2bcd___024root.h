// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbin2bcd.h for the primary calling header

#ifndef VERILATED_VBIN2BCD___024ROOT_H_
#define VERILATED_VBIN2BCD___024ROOT_H_  // guard

#include "verilated.h"

class Vbin2bcd__Syms;

class Vbin2bcd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,7,0);
    VL_OUT16(BCD,11,0);
    IData/*19:0*/ bin2bcd__DOT__result;

    // INTERNAL VARIABLES
    Vbin2bcd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbin2bcd___024root(Vbin2bcd__Syms* symsp, const char* name);
    ~Vbin2bcd___024root();
    VL_UNCOPYABLE(Vbin2bcd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
