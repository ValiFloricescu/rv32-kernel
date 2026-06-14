#!/bin/sh
# Compileaza un program bare-metal pentru SoC-ul RV32IM si produce .hex pentru $readmemh.
# Necesita: sudo apt-get install gcc-riscv64-unknown-elf
#
# Utilizare:
#   ./build.sh <nume_iesire> <sursa1> [sursa2 ...]
# Toate sursele (C si asm) se listeaza explicit. Exemple:
#   ./build.sh ../prog_hello start.S hello.c
#   ./build.sh ../prog_irqc  start.S trap.S irqc.c
#   ./build.sh ../prog_msbi  msbi_start.S msbi_trap.S msbi.c
set -e
OUT="$1"; shift
[ -z "$OUT" ] && { echo "utilizare: ./build.sh <iesire> <surse...>"; exit 1; }

riscv64-unknown-elf-gcc -march=rv32im_zicsr -mabi=ilp32 -nostdlib -nostartfiles \
    -ffreestanding -O2 -Wl,--no-relax -T link.ld "$@" -o "$OUT.elf"
riscv64-unknown-elf-objcopy -O binary "$OUT.elf" "$OUT.bin"
python3 -c "
import struct
d=open('$OUT.bin','rb').read(); d+=b'\x00'*((-len(d))%4)
open('$OUT.hex','w').write(''.join('%08x\n'%struct.unpack('<I',d[i:i+4])[0] for i in range(0,len(d),4)))
print('generat: $OUT.hex (%d cuvinte)' % (len(d)//4))
"
