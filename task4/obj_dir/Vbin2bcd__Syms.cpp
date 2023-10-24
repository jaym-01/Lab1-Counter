// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbin2bcd__Syms.h"
#include "Vbin2bcd.h"
#include "Vbin2bcd___024root.h"

// FUNCTIONS
Vbin2bcd__Syms::~Vbin2bcd__Syms()
{
}

Vbin2bcd__Syms::Vbin2bcd__Syms(VerilatedContext* contextp, const char* namep, Vbin2bcd* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
