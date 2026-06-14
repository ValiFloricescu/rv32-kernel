module vtop #(
    parameter integer RAM_WORDS = 8388608   // 32 MB pentru OpenSBI/Linux
)(
    input  wire       clk,
    input  wire       rst_n,
    output wire       uart_tx_stb,
    output wire [7:0] uart_tx_byte
);
    soc_sim #(.RAM_WORDS(RAM_WORDS)) dut (
        .clk(clk), .rst_n(rst_n), .irq_in(4'b0),
        .uart_tx_stb(uart_tx_stb), .uart_tx_byte(uart_tx_byte)
    );
    integer i;
    reg [1023:0] hexfile;
    initial begin
        for (i = 0; i < RAM_WORDS; i = i + 1) dut.ram[i] = 32'b0;
        if ($value$plusargs("HEX=%s", hexfile))
            $readmemh(hexfile, dut.ram);
    end
endmodule
