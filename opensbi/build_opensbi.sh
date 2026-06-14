#!/usr/bin/env bash
# Construieste OpenSBI v1.5 pentru SoC-ul RV32IMA si genereaza hex-ul pentru Verilator.
# Necesita: riscv64-linux-gnu-gcc (linker cu suport PIE) + riscv64-unknown-elf-gcc (payload).
set -e
ROOT="$(cd "$(dirname "$0")" && pwd)"
RV="${RISCV32IM:-$HOME/Desktop/KERNEL/LICENTA}"   # radacina proiectului

# 1. sursele OpenSBI (clonate o singura data in ext/opensbi)
mkdir -p "$RV/ext"
if [ ! -d "$RV/ext/opensbi" ]; then
    git clone --depth 1 --branch v1.5 \
        https://github.com/riscv-software-src/opensbi.git "$RV/ext/opensbi"
fi

# 2. instaleaza platforma custom
cp -r "$ROOT/platform_valif" "$RV/ext/opensbi/platform/valif"

# 3. construieste payload-ul S-mode de test (linkat la 0x80100000)
mkdir -p "$RV/ext/payload"
cp "$ROOT/payload/"* "$RV/ext/payload/"
riscv64-unknown-elf-gcc -march=rv32ima_zicsr -mabi=ilp32 -mcmodel=medany \
    -nostdlib -nostartfiles -ffreestanding -O2 -Wl,--no-relax \
    -T "$RV/ext/payload/plink.ld" \
    "$RV/ext/payload/pstart.S" "$RV/ext/payload/pmain.c" \
    -o "$RV/ext/payload/payload.elf"
riscv64-unknown-elf-objcopy -O binary "$RV/ext/payload/payload.elf" \
    "$RV/ext/payload/payload.bin"

# 4. construieste OpenSBI cu payload-ul embedat
make -C "$RV/ext/opensbi" distclean >/dev/null 2>&1 || true
make -C "$RV/ext/opensbi" PLATFORM=valif CROSS_COMPILE=riscv64-linux-gnu- \
    FW_PAYLOAD_PATH="$RV/ext/payload/payload.bin" -j4

# 5. converteste in hex (cuvinte LE de 32b) pentru $readmemh
BIN="$RV/ext/opensbi/build/platform/valif/firmware/fw_payload.bin"
python3 -c "
import struct, sys
d=open('$BIN','rb').read(); d+=b'\x00'*((-len(d))%4)
open('$RV/sw/opensbi.hex','w').write(''.join('%08x\n'%struct.unpack('<I',d[i:i+4])[0] for i in range(0,len(d),4)))
print('opensbi.hex:', len(d)//4, 'cuvinte (%d KB)'%(len(d)//1024))
"
echo "gata. ruleaza: ./vsim.sh sw/opensbi.hex 8000000"
