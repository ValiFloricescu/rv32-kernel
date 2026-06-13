#!/usr/bin/env bash
# ============================================================
#  run_random.sh  -  Testare aleatoare diferentiala (DUT vs Spike)
# ------------------------------------------------------------
#  Genereaza K programe aleatoare (cod liniar), le compileaza si
#  ruleaza co-simulare lockstep pentru fiecare. Esueaza daca vreun
#  program diverge intre DUT si Spike.
#  Mediu: PIPE5_ROOT, RISCV_PREFIX, SPIKE_ISA, GROUPS, K, NINSTR.
# ============================================================
set -u
ROOT="${PIPE5_ROOT:?seteaza PIPE5_ROOT}"
PREFIX="${RISCV_PREFIX:-riscv32-unknown-elf-}"
export SPIKE_ISA="${SPIKE_ISA:-rv32ima_zicsr}"
GROUPS="${GROUPS:-base,m,a}"
K="${K:-50}"            # cate programe
NINSTR="${NINSTR:-300}" # instructiuni per program
MARCH="${MARCH:-rv32ima_zicsr}"
GEN="$ROOT/verif/random/gen_random.py"
LD="$ROOT/verif/random/link.ld"
WORK="${WORK:-/tmp/rand_work}"; mkdir -p "$WORK"

pass=0; fail=0; failed=""
echo "============================================"
echo "  Testare aleatoare lockstep: K=$K, n=$NINSTR, groups=$GROUPS"
echo "============================================"
for s in $(seq 1 "$K"); do
    S="$WORK/p$s.S"; ELF="$WORK/p$s.elf"
    python3 "$GEN" --seed "$s" --n "$NINSTR" --groups "$GROUPS" --out "$S" >/dev/null
    if ! "${PREFIX}gcc" -march=$MARCH -mabi=ilp32 -nostdlib -nostartfiles \
            -T "$LD" "$S" -o "$ELF" 2> "$WORK/p$s.cc.log"; then
        echo "  [CC FAIL] seed $s"; sed 's/^/      /' "$WORK/p$s.cc.log" | head -3
        fail=$((fail+1)); failed="$failed $s"; continue
    fi
    out=$(bash "$ROOT/verif/cosim/run_cosim.sh" "$ELF" "$WORK/cw$s" 2>&1)
    if echo "$out" | grep -q "LOCKSTEP OK"; then
        pass=$((pass+1))
    else
        echo "  [DIVERGENTA] seed $s"; echo "$out" | grep -A6 "DIVERGENTA" | sed 's/^/      /'
        fail=$((fail+1)); failed="$failed $s"
    fi
done
echo "============================================"
echo "  REZULTAT aleator: $pass / $((pass+fail))"
if [ "$fail" -ne 0 ]; then echo "  SEED-URI PICATE:$failed"; echo "  (reproduce: gen_random.py --seed N ...)"; exit 1; fi
echo "  >>> TOATE PROGRAMELE ALEATOARE COINCID CU SPIKE <<<"; echo "============================================"
