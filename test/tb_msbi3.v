`timescale 1ns / 1ps
`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_msbi3.vcd"
`endif
`ifndef PROG_HEX
 `define PROG_HEX "sw/prog_msbi3.hex"
`endif
module tb_msbi3;
    reg clk=0, rst_n; reg [3:0] irq_in;
    wire tx_stb; wire [7:0] tx_byte;
    always #5 clk=~clk;
    soc_sim dut (.clk(clk), .rst_n(rst_n), .irq_in(irq_in),
                 .uart_tx_stb(tx_stb), .uart_tx_byte(tx_byte));
    integer i, n=0, errors=0; reg seenV=0;
    reg [7:0] cap [0:255];
    always @(posedge clk) if (rst_n & tx_stb) begin
        cap[n]=tx_byte; if (tx_byte=="V") seenV=1; n=n+1;
    end
    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_msbi3);
        for (i=0;i<65536;i=i+1) dut.ram[i]=32'b0;
        $readmemh(`PROG_HEX, dut.ram);
        irq_in=0; rst_n=0; repeat(4) @(negedge clk); rst_n=1;
        repeat(20000) @(negedge clk);
        $write("  UART: \""); for(i=0;i<n;i=i+1) $write("%c",cap[i]); $display("\"");
        if (cap[0] !== "k") errors=errors+1;   // kernel S-mode a pornit sub MMU
        if (!seenV)         errors=errors+1;    // 'V' scris prin alias virtual = translatare reala
        if (errors==0) $display("[MSBI3] >>> PASS <<< (kernel S-mode sub Sv32, translatare dovedita prin alias)");
        else           $display("[MSBI3] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
