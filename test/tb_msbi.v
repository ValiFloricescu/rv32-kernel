`timescale 1ns / 1ps
`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_msbi.vcd"
`endif
`ifndef PROG_HEX
 `define PROG_HEX "sw/prog_msbi.hex"
`endif
module tb_msbi;
    reg clk=0, rst_n; reg [3:0] irq_in;
    wire tx_stb; wire [7:0] tx_byte;
    always #5 clk=~clk;
    soc_sim dut (.clk(clk), .rst_n(rst_n), .irq_in(irq_in),
                 .uart_tx_stb(tx_stb), .uart_tx_byte(tx_byte));
    integer i, n=0, errors=0;
    reg [7:0] cap [0:127];
    reg [8*32:1] expected;
    always @(posedge clk) if (rst_n & tx_stb) begin cap[n]=tx_byte; n=n+1; end
    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_msbi);
        for (i=0;i<65536;i=i+1) dut.ram[i]=32'b0;
        $readmemh(`PROG_HEX, dut.ram);
        irq_in=0; rst_n=0; repeat(4) @(negedge clk); rst_n=1;
        repeat(4000) @(negedge clk);
        $write("  UART: \""); for(i=0;i<n;i=i+1) $write("%c",cap[i]); $display("\"");
        // verific primele caractere "Salut din S-mode" (dovada ecall S->M->SBI)
        if (cap[0]!=="S"||cap[1]!=="a"||cap[2]!=="l"||cap[3]!=="u"||cap[4]!=="t") errors=errors+1;
        if (n < 27) errors=errors+1;     // sirul complet are 27 caractere
        if (errors==0) $display("[MSBI] >>> PASS <<< (ecall S-mode -> dispatch SBI M-mode -> consola)");
        else           $display("[MSBI] >>> FAIL <<< (%0d erori, %0d octeti)", errors, n);
        $finish;
    end
endmodule
