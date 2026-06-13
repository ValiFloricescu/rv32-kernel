#!/usr/bin/env bash
set -e
ELF="$1"; WORK="${2:-/tmp/cosim_work}"
ROOT="${PIPE5_ROOT:?seteaza PIPE5_ROOT spre radacina proiectului}"
PREFIX="${RISCV_PREFIX:-riscv32-unknown-elf-}"
ISA="${SPIKE_ISA:-rv32imzicsr_zifencei}"
mkdir -p "$WORK"
HEX="$WORK/dut.hex"

CORE="$ROOT/rtl/alu.v $ROOT/rtl/control.v $ROOT/rtl/csr.v $ROOT/rtl/forwarding.v \
$ROOT/rtl/hazard.v $ROOT/rtl/imm_gen.v $ROOT/rtl/muldiv.v $ROOT/rtl/regfile.v \
$ROOT/rtl/atomic_unit.v $ROOT/rtl/clint.v $ROOT/rtl/mmu.v $ROOT/rtl/riscv_core_pipe.v"

"${PREFIX}objcopy" -O binary "$ELF" "$WORK/dut.bin"
python3 - "$WORK/dut.bin" "$HEX" <<'PY'
import sys, struct
d = open(sys.argv[1],'rb').read(); d += b'\x00'*((-len(d))%4)
with open(sys.argv[2],'w') as f:
    for i in range(0,len(d),4): f.write('%08x\n'%struct.unpack('<I',d[i:i+4])[0])
PY

TOHOST=$("${PREFIX}nm" "$ELF" | awk '$3=="tohost"{print "32\x27h"$1}')
ENTRY=$("${PREFIX}readelf" -h "$ELF" | awk '/Entry point/{print $NF}')
RESET_PC="32'h${ENTRY#0x}"
BYTES=$(stat -c%s "$WORK/dut.bin"); NEED=$(((BYTES+3)/4)); WORDS=65536
while [ "$WORDS" -lt "$NEED" ]; do WORDS=$((WORDS*2)); done

iverilog -g2012 -I "$ROOT/rtl" -s tb_cosim -o "$WORK/cosim.vvp" \
  -DPROG_HEX="\"$HEX\"" -DDUT_TRACE="\"$WORK/dut.trace\"" \
  -DTOHOST="$TOHOST" -DRESET_PC_TB="$RESET_PC" -DWORDS_TB="$WORDS" \
  $CORE "$ROOT/verif/cosim/tb_cosim.v"
vvp "$WORK/cosim.vvp" > "$WORK/dut_sim.log" 2>&1

spike --isa="$ISA" -l --log-commits "$ELF" 2> "$WORK/spike.log" || true

python3 "$ROOT/verif/cosim/compare_trace.py" \
  "$WORK/dut.trace" "$WORK/spike.log" --start-pc "$ENTRY"
