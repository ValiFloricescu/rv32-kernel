#!/usr/bin/env bash
# ============================================================
#  run_cosim_all.sh  -  Lockstep pe TOATE testele compilate de RISCOF
# ------------------------------------------------------------
#  Pentru fiecare dut.elf din riscof_work, ruleaza co-simulare
#  lockstep (DUT vs Spike) si raporteaza divergentele. Verificare
#  la nivel de instructiune, complementara comparatiei de semnaturi.
#  Mediu: PIPE5_ROOT, RISCV_PREFIX, SPIKE_ISA.
#  Argument optional: $1 = radacina riscof_work (implicit cauta).
# ============================================================
set -u
ROOT="${PIPE5_ROOT:?seteaza PIPE5_ROOT}"
export SPIKE_ISA="${SPIKE_ISA:-rv32ima_zicsr}"
WORKROOT="${1:-$ROOT/riscof/riscof_work}"
WORK="${WORK:-/tmp/cosim_all}"; mkdir -p "$WORK"

mapfile -t ELFS < <(find "$WORKROOT" -name 'dut.elf' 2>/dev/null | sort)
if [ "${#ELFS[@]}" -eq 0 ]; then
    echo "Nu am gasit dut.elf in $WORKROOT. Ruleaza intai 'make compliance' (riscof)."
    exit 2
fi

pass=0; fail=0; failed=""
echo "============================================"
echo "  Lockstep pe suita RISCOF: ${#ELFS[@]} teste"
echo "============================================"
for elf in "${ELFS[@]}"; do
    name=$(echo "$elf" | sed -E 's#.*/src/([^/]+)\.S/.*#\1#')
    # testele de privilegiu (trap-uri/handlere) se valideaza prin semnatura, nu lockstep
    case "$name" in
        misalign*|ebreak|ecall) printf "  [skip] %s\n" "$name"; continue ;;
    esac
    out=$(bash "$ROOT/verif/cosim/run_cosim.sh" "$elf" "$WORK/$name" 2>&1)
    if echo "$out" | grep -q "LOCKSTEP OK"; then
        printf "  [ok]   %s\n" "$name"; pass=$((pass+1))
    else
        printf "  [DIV]  %s\n" "$name"
        echo "$out" | grep -A6 "DIVERGENTA" | sed 's/^/      /'
        fail=$((fail+1)); failed="$failed $name"
    fi
done
echo "============================================"
echo "  REZULTAT lockstep: $pass / $((pass+fail))"
if [ "$fail" -ne 0 ]; then echo "  PICATE:$failed"; exit 1; fi
echo "  >>> TOATE TESTELE COINCID INSTRUCTIUNE-CU-INSTRUCTIUNE CU SPIKE <<<"
echo "============================================"