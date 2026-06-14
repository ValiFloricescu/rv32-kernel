#!/bin/sh
# Compileaza un program bare-metal pentru SoC-ul RV32IM si produce .hex pentru $readmemh.
# Necesita: sudo apt-get install gcc-riscv64-unknown-elf
set -e
SRC="${1:-hello.c}"
OUT="${2:-prog_hello}"
riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -nostdlib -nostartfiles \
    -ffreestanding -O2 -Wl,--no-relax -T link.ld start.S "$SRC" -o "$OUT.elf"
riscv64-unknown-elf-objcopy -O binary "$OUT.elf" "$OUT.bin"
python3 -c "
import struct,sys
d=open('$OUT.bin','rb').read(); d+=b'\x00'*((-len(d))%4)
open('$OUT.hex','w').write(''.join('%08x\n'%struct.unpack('<I',d[i:i+4])[0] for i in range(0,len(d),4)))
"
echo "generat: $OUT.hex ($(wc -l < $OUT.hex) cuvinte)"
