#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char **argv, char **env){
    int i, clk, count, pause;

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vcounter* top = new Vcounter;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("counter.vcd");

    // init simulation input
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // challenge 1
    count = 0;
    pause = 0;

    // run simulation for many clock cycles
    // 300 clock cyles
    // each clock cycle has T = 2ps
    // takes 600ps to run
    for(i = 0; i < 300; i++) {

        // dump vars into VCD file + toggle clock

        // creates 1 clock cycle
        // each time goes from 1->0->1
        for(clk = 0; clk < 2; clk++) {
            tfp->dump (2*i+clk);   // unit is in ps -> causes T = 2ps
            top->clk = !top->clk;  // toggles the clock
            top->eval();           // evaluates the output based on the input
        }

        std::cout << "CLK " << i << ": " << count << " | en = " << (int)top->en << std::endl;

        // challenge 1
        if(top->en == 1 && i > 6) {
            count = (count + 1) % 256;
        }
        else if(pause == 2){
            count++;
            pause = 0;
        }
        else pause++;
        

        // original test
        // top->rst = (i < 2) | (i == 15);
        // top->en = (i > 4);

        // challenge 1
        top->en = (i > 4) && (count != 10);
        top->rst = (i < 2) || (pause == 0 && count == 0);


        if(Verilated::gotFinish()) exit(0);

    }

    tfp->close();
    exit(0);
}