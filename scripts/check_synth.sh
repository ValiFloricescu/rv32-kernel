#!/usr/bin/env bash
# ============================================================
#  check_synth.sh  -  Gardian de sintetizabilitate (yosys)
# ------------------------------------------------------------
#  Sintetizeaza fiecare modul al nucleului si esueaza daca:
#    - apare o eroare de elaborare/sinteza, SAU
#    - se infereaza vreun latch ($_DLATCH_ / "creating ... DLATCH"),
#      ceea ce indica logica combinationala incompleta.
#  Reset-urile asincrone (rst_n) sunt corecte si nu sunt semnalate.
#
#  Folosire:  scripts/check_synth.sh
#  Necesita:  yosys SAU yowasp-yosys in PATH.
# ============================================================
set -u
cd "$(dirname "$0")/.."

# alege yosys disponibil
if   command -v yosys        >/dev/null 2>&1; then YOSYS=yosys
elif command -v yowasp-yosys >/dev/null 2>&1; then YOSYS=yowasp-yosys
else echo "EROARE: nu gasesc yosys/yowasp-yosys in PATH"; exit 2; fi

# fisierele nucleului (sintetizabile) + top-ul fiecaruia
CORE="rtl/alu.v rtl/control.v rtl/csr.v rtl/forwarding.v rtl/hazard.v \
rtl/imm_gen.v rtl/muldiv.v rtl/regfile.v rtl/atomic_unit.v rtl/clint.v rtl/mmu.v"
TOPS_LEAF="alu control csr forwarding hazard imm_gen muldiv regfile atomic_unit clint mmu"

fail=0
check() {   # $1=top  $2=surse
    local top="$1" srcs="$2" log
    log=$("$YOSYS" -p "read_verilog -I rtl -sv $srcs; hierarchy -top $top; proc; opt; synth -top $top" 2>&1)
    # erori de elaborare/sinteza
    if echo "$log" | grep -qiE "^ERROR|cannot|syntax error|Multiple edge sensitive"; then
        echo "  [EROARE]  $top"
        echo "$log" | grep -iE "ERROR|cannot|Multiple edge" | sed 's/^/      /' | head -3
        fail=1; return
    fi
    # inferenta de latch (NU "No latch inferred", NU numele pass-ului proc_dlatch)
    if echo "$log" | grep -iE "creating .*DLATCH|latch inferred|inferring latch" \
                    | grep -viq "No latch inferred"; then
        echo "  [LATCH!]  $top  (logica combinationala incompleta)"
        echo "$log" | grep -iE "creating .*DLATCH|latch inferred" \
                    | grep -vi "No latch inferred" | sed 's/^/      /' | head -5
        fail=1; return
    fi
    echo "  [OK]      $top"
}

echo "============================================"
echo "  Verificare sintetizabilitate (yosys: $YOSYS)"
echo "============================================"
for m in $TOPS_LEAF; do check "$m" "rtl/$m.v"; done
check riscv_core_pipe "$CORE rtl/riscv_core_pipe.v"
check riscv_core_sc   "$CORE rtl/riscv_core_sc.v"

echo "============================================"
if [ "$fail" -eq 0 ]; then
    echo "  >>> TOATE MODULELE SINTETIZABILE (fara latch) <<<"
    echo "============================================"
    exit 0
else
    echo "  !!! PROBLEME DE SINTETIZABILITATE !!!"
    echo "============================================"
    exit 1
fi
