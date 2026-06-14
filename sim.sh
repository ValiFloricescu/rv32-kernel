#!/bin/sh
# Ruleaza un singur testbench si arata iesirea (inclusiv UART).
# Utilizare:  ./sim.sh <nume_testbench>
#   ./sim.sh tb_hello
#   ./sim.sh tb_dovada
#   ./sim.sh tb_msbi
set -e
TB="$1"
[ -z "$TB" ] && { echo "utilizare: ./sim.sh <tb_nume>  (ex: ./sim.sh tb_hello)"; exit 1; }

RTL=$(ls rtl/*.v | grep -v fpga_mem)   # toate modulele (fara fpga_mem care cere .mem)
iverilog -g2012 -I rtl -s "$TB" -o "/tmp/$TB.vvp" $RTL "test/$TB.v"
echo "----- iesire simulare ($TB) -----"
vvp "/tmp/$TB.vvp"