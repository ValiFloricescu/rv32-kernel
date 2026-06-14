`timescale 1ns / 1ps

`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_soc_plic.vcd"
`endif
`ifndef PROG_HEX
 `define PROG_HEX "sw/prog_plic.hex"
`endif

module tb_soc_plic;
    reg  clk=0, rst_n;
    reg  [3:0] irq_in;
    wire       tx_stb;
    wire [7:0] tx_byte;
    always #5 clk=~clk;

    soc_sim dut (.clk(clk), .rst_n(rst_n), .irq_in(irq_in),
                 .uart_tx_stb(tx_stb), .uart_tx_byte(tx_byte));

    integer i, errors=0;
    task chk;
        input integer id; input [31:0] got, exp;
        begin
            if (got !== exp) begin
                errors=errors+1; $display("  FAIL %0d: got=%h exp=%h", id, got, exp);
            end
        end
    endtask

    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_soc_plic);
        for (i=0;i<65536;i=i+1) dut.ram[i]=32'b0;
        $readmemh(`PROG_HEX, dut.ram);

        irq_in=4'b0;
        rst_n=0; repeat(4) @(negedge clk); rst_n=1;

        repeat(60) @(negedge clk);     // programul configureaza PLIC + activeaza MEIE
        irq_in=4'b0001;                // sursa 1 (irq_in[0] -> src[1])
        repeat(4) @(negedge clk);
        irq_in=4'b0;                   // puls scurt; gateway-ul a memorat pending
        repeat(60) @(negedge clk);

        chk(1, dut.ram[32'h100>>2], 32'h8000_000B);  // mcause = intrerupere externa M
        chk(2, dut.ram[32'h104>>2], 32'h0000_0001);  // claim a intors sursa 1
        chk(3, dut.ram[32'h108>>2], 32'h0000_D09E);  // handler-ul a rulat

        if (errors==0) $display("[SOC_PLIC] >>> PASS <<< (intrerupere externa via PLIC: claim/complete)");
        else           $display("[SOC_PLIC] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
