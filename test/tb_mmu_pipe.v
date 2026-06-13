`timescale 1ns / 1ps
`include "riscv_defs.vh"

`ifndef DUMP_FILE
 `define DUMP_FILE "waveform/tb_mmu_pipe.vcd"
`endif
`ifndef PROG_HEX
 `define PROG_HEX "sw/prog_mmu.hex"
`endif

module tb_mmu_pipe;
    reg clk=0, rst_n;
    always #5 clk=~clk;

    wire [31:0] imem_addr, imem_rdata;
    wire [31:0] dmem_addr, dmem_wdata, dmem_rdata;
    wire [3:0]  dmem_wstrb;
    wire        dmem_we;

    // memorie unificata (von Neumann): cod + tabele de pagini + date
    reg [31:0] mem [0:16383];
    assign imem_rdata = mem[imem_addr[15:2]];
    assign dmem_rdata = mem[dmem_addr[15:2]];
    always @(posedge clk) begin
        if (dmem_we) begin
            if (dmem_wstrb[0]) mem[dmem_addr[15:2]][7:0]   <= dmem_wdata[7:0];
            if (dmem_wstrb[1]) mem[dmem_addr[15:2]][15:8]  <= dmem_wdata[15:8];
            if (dmem_wstrb[2]) mem[dmem_addr[15:2]][23:16] <= dmem_wdata[23:16];
            if (dmem_wstrb[3]) mem[dmem_addr[15:2]][31:24] <= dmem_wdata[31:24];
        end
    end

    riscv_core_pipe dut (
        .clk(clk), .rst_n(rst_n),
        .imem_addr(imem_addr), .imem_rdata(imem_rdata),
        .dmem_addr(dmem_addr), .dmem_wdata(dmem_wdata),
        .dmem_wstrb(dmem_wstrb), .dmem_we(dmem_we), .dmem_rdata(dmem_rdata)
    );

    integer i, errors=0;
    task chk;
        input integer id;
        input [31:0] got, exp;
        begin
            if (got !== exp) begin
                errors=errors+1;
                $display("  FAIL %0d: got=%h exp=%h", id, got, exp);
            end
        end
    endtask

    initial begin
        $dumpfile(`DUMP_FILE); $dumpvars(0, tb_mmu_pipe);
        for (i=0;i<16384;i=i+1) mem[i]=32'b0;
        $readmemh(`PROG_HEX, mem);   // cod la PA 0x0

        rst_n=0; repeat(4) @(negedge clk); rst_n=1;
        repeat(400) @(negedge clk);

        // store-ul S-mode catre VA 0x10000000 trebuie sa ajunga la PA 0x8000 (traducere date)
        chk(1, mem[32'h8000>>2], 32'hDEAD_BEEF);
        // valoarea citita inapoi, scrisa la PA 0x9000 (identitate) -> confirma load tradus
        chk(2, mem[32'h9000>>2], 32'hDEAD_BEEF);

        if (errors==0) $display("[MMU_PIPE] >>> PASS <<< (traducere fetch + date, Sv32 in pipeline)");
        else           $display("[MMU_PIPE] >>> FAIL <<< (%0d erori)", errors);
        $finish;
    end
endmodule
