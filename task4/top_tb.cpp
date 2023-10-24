#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include "iostream"

// only works after 2nd boot??

int main(int argc, char **argv, char **env){
    std::cout << "test" << std::endl;
    int i, clk;

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vtop* top = new Vtop;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("bcder.vcd");

    std::cout << "before open" << std::endl;

    // init Vbuddy
    if(vbdOpen() != 1) return(-1);
    std::cout << "run open" << std::endl;
    
    vbdHeader("Lab 1: BCD");
    std::cout << "run open" << std::endl;


    vbdSetMode(1);
    std::cout << "just set mode" << std::endl;


    // init simulation input
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // run simulation for many clock cycles
    // 300 clock cyles
    // each clock cycle has T = 2ps
    // takes 600ps to run
    for(i = 0; i < 300; i++) {

        std::cout << i << std::endl;

        // dump vars into VCD file + toggle clock

        // creates 1 clock cycle
        // each time goes from 1->0->1
        for(clk = 0; clk < 2; clk++) {
            tfp->dump (2*i+clk);   // unit is in ps -> causes T = 2ps
            top->clk = !top->clk;  // toggles the clock
            top->eval();           // evaluates the output based on the input
        }

        // send bcd to Vbuddy -> 7 segment display
        vbdHex(4, (int(top->bcd) >> 16) & 0xF);
        vbdHex(3, (int(top->bcd) >> 8) & 0xF);
        vbdHex(2, (int(top->bcd) >> 4) & 0xF);
        vbdHex(1, (int(top->bcd)) & 0xF);
        vbdCycle(i + 1);

        // plots graph of values
        // vbdPlot(int(top->bcd), 0, 255);
        
        if(i > 5){
            while(i > 5 && i < 299 && !vbdFlag()){}
        }
        

        // original test
        top->en = (i > 4) && vbdFlag();
        top->rst = (i < 2) | (i == 15);

        if(Verilated::gotFinish()) exit(0);

        // 10: 0001_0000

    }

    vbdClose();
    tfp->close();
    exit(0);
}