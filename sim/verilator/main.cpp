#include "Vvtop.h"
#include "verilated.h"
#include <cstdio>
#include <cstring>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    long max_cycles = 200000;
    for (int i = 1; i < argc; i++)
        sscanf(argv[i], "+CYCLES=%ld", &max_cycles);

    Vvtop* top = new Vvtop;
    top->clk = 0; top->rst_n = 0;
    for (int c = 0; c < 8; c++) { top->clk = !top->clk; top->eval(); }
    top->rst_n = 1;

    for (long c = 0; c < max_cycles && !Verilated::gotFinish(); c++) {
        top->clk = 1; top->eval();
        if (top->uart_tx_stb) { putchar(top->uart_tx_byte); fflush(stdout); }
        top->clk = 0; top->eval();
    }
    delete top;
    return 0;
}
