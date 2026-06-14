#!/usr/bin/env bash
# Simulare rapida cu Verilator. Foloseste:
#   ./vsim.sh build              (re)compileaza modelul din rtl/
#   ./vsim.sh <prog.hex> [cicli] ruleaza un program (implicit 200000 cicli)
set -e
ROOT="$(cd "$(dirname "$0")" && pwd)"
OBJ="$ROOT/sim/verilator/obj"

build() {
    rm -rf "$OBJ"
    local RTL
    RTL=$(ls "$ROOT"/rtl/*.v | grep -vE "fpga_top|fpga_mem|board_top")
    verilator --cc --exe --build --top-module vtop \
        -I"$ROOT/rtl" -Wno-fatal -Wno-WIDTH -Wno-UNOPTFLAT -Wno-PINMISSING \
        -o vsim $RTL \
        "$ROOT/sim/verilator/vtop.v" "$ROOT/sim/verilator/main.cpp" \
        --Mdir "$OBJ" >/dev/null 2>&1
    echo "model Verilator compilat: $OBJ/vsim"
}

if [ "$1" = "build" ]; then build; exit 0; fi

[ -f "$OBJ/vsim" ] || build
HEX="${1:?utilizare: ./vsim.sh <prog.hex> [cicli]}"
CYC="${2:-200000}"
exec "$OBJ/vsim" +HEX="$HEX" +CYCLES="$CYC"
