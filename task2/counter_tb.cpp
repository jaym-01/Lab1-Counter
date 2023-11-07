#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i, clk;

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vcounter* top = new Vcounter;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("counter.vcd");

    // init Vbuddy
    if(vbdOpen() != 1) return(-1);
    vbdHeader("Lab1: Counter");

    // init simulation input
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // run simulation for many clock cycles
    for(i = 0; i < 1000; i++) {

        // dump vars into VCD file + toggle clock

        // creates 1 clock cycle
        // each time goes from 1->0->1
        for(clk = 0; clk < 2; clk++) {
            tfp->dump (2*i+clk);   // unit is in ps -> causes T = 2ps
            top->clk = !top->clk;  // toggles the clock
            top->eval();           // evaluates the output based on the input
        }

        // send count to Vbuddy -> 7 segment display
        // vbdHex(4, (int(top->count) >> 16) & 0xF);
        // vbdHex(3, (int(top->count) >> 8) & 0xF);
        // vbdHex(2, (int(top->count) >> 4) & 0xF);
        // vbdHex(1, (int(top->count)) & 0xF);
        // vbdCycle(i + 1);

        vbdPlot(int(top->count), 0, 255);
        
        top->rst = (i < 2);

        // using vbuddy flag
        top->en = vbdFlag();

        if(Verilated::gotFinish()) exit(0);

    }

    vbdClose();
    tfp->close();
    exit(0);
}