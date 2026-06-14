`timescale 1ns / 1ps

`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_soc_uart.vcd"
`endif
`ifndef PROG_HEX
 `define PROG_HEX "sw/prog_uart.hex"
`endif

module tb_soc_uart;
    reg clk=0, rst_n;
    always #5 clk=~clk;

    wire       tx_stb;
    wire [7:0] tx_byte;

    soc_sim dut (.clk(clk), .rst_n(rst_n), .uart_tx_stb(tx_stb), .uart_tx_byte(tx_byte));

    integer i, errors=0, n=0;
    reg [7:0] cap [0:15];

    // capteaza fiecare octet transmis pe UART
    always @(posedge clk) if (rst_n & tx_stb) begin
        cap[n] = tx_byte;
        n = n + 1;
    end

    reg [7:0] expected [0:4];
    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_soc_uart);
        for (i=0;i<65536;i=i+1) dut.ram[i]=32'b0;
        $readmemh(`PROG_HEX, dut.ram);

        rst_n=0; repeat(4) @(negedge clk); rst_n=1;
        repeat(200) @(negedge clk);

        expected[0]="R"; expected[1]="V"; expected[2]="3"; expected[3]="2"; expected[4]=8'h0A;
        if (n != 5) begin
            errors=errors+1; $display("  FAIL: %0d octeti transmisi (asteptam 5)", n);
        end else for (i=0;i<5;i=i+1)
            if (cap[i] !== expected[i]) begin
                errors=errors+1;
                $display("  FAIL octet %0d: got=%h exp=%h", i, cap[i], expected[i]);
            end

        $write("  UART a transmis: \"");
        for (i=0;i<n;i=i+1) $write("%c", cap[i]);
        $display("\"");

        if (errors==0) $display("[SOC_UART] >>> PASS <<< (executie din 0x80000000 + UART)");
        else           $display("[SOC_UART] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
