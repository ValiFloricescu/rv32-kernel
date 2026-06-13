#!/usr/bin/env python3
# ============================================================
#  gen_random.py  -  Generator de teste aleatoare (diferential vs Spike)
# ------------------------------------------------------------
#  Produce un program RISC-V cu cod LINIAR (fara salturi/ramuri),
#  deci se termina mereu, folosind doar instructiunile din
#  extensiile activate. Programul e gandit pentru co-simulare
#  lockstep: DUT-ul si Spike trebuie sa produca acelasi flux.
#
#  Grupuri de instructiuni (--groups): base,m,a  (se extind usor
#  cand adaugam privilegii/altele).
#
#  Iesire: un fisier .S complet, auto-continut (sectiune tohost
#  pentru HTIF/Spike + zona scratch pentru memorie/atomice).
#
#  Utilizare:
#    gen_random.py --seed 1 --n 200 --groups base,m,a --out prog.S
# ============================================================
import argparse, random

# registri de lucru (evitam x0..x4: zero/ra/sp/gp/tp)
WORK = list(range(5, 28))      # x5..x27
SCRATCH_REG = 31               # x31 = baza zonei scratch
TMP = 28                       # x28 = temporar pentru adrese atomice

def r(rng): return rng.choice(WORK)

def emit_base(rng):
    rd, rs1, rs2 = r(rng), r(rng), r(rng)
    op = rng.choice([
        "add","sub","and","or","xor","sll","srl","sra","slt","sltu",
        "addi","andi","ori","xori","slti","sltiu","slli","srli","srai",
        "lui","auipc",
    ])
    if op in ("addi","andi","ori","xori","slti","sltiu"):
        imm = rng.randint(-2048, 2047)
        return f"\t{op} x{rd}, x{rs1}, {imm}"
    if op in ("slli","srli","srai"):
        sh = rng.randint(0, 31)
        return f"\t{op} x{rd}, x{rs1}, {sh}"
    if op == "lui":
        return f"\tlui x{rd}, {rng.randint(0, 0xfffff)}"
    if op == "auipc":
        return f"\tauipc x{rd}, {rng.randint(0, 0xfffff)}"
    return f"\t{op} x{rd}, x{rs1}, x{rs2}"

def emit_m(rng):
    rd, rs1, rs2 = r(rng), r(rng), r(rng)
    op = rng.choice(["mul","mulh","mulhsu","mulhu","div","divu","rem","remu"])
    return f"\t{op} x{rd}, x{rs1}, x{rs2}"

def emit_mem(rng):
    # load/store cuvant in zona scratch (aliniat), exercita hazard load-use + forwarding
    rd, rs2 = r(rng), r(rng)
    off = rng.randint(0, 60) & ~0x3
    if rng.random() < 0.5:
        return f"\tlw x{rd}, {off}(x{SCRATCH_REG})"
    return f"\tsw x{rs2}, {off}(x{SCRATCH_REG})"

def emit_a(rng):
    rd, rs2 = r(rng), r(rng)
    off = rng.randint(0, 60) & ~0x3
    op = rng.choice(["amoadd.w","amoand.w","amoor.w","amoxor.w","amoswap.w",
                     "amomin.w","amomax.w","amominu.w","amomaxu.w"])
    # adresa atomica trebuie sa fie in registru (fara offset imediat)
    lines = [f"\taddi x{TMP}, x{SCRATCH_REG}, {off}",
             f"\t{op} x{rd}, x{rs2}, (x{TMP})"]
    return "\n".join(lines)

def emit_lrsc(rng):
    rd = r(rng); val = r(rng); off = rng.randint(0, 60) & ~0x3
    return "\n".join([
        f"\taddi x{TMP}, x{SCRATCH_REG}, {off}",
        f"\tlr.w x{rd}, (x{TMP})",
        f"\tsc.w x{rd}, x{val}, (x{TMP})",
    ])

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--n", type=int, default=200)
    ap.add_argument("--groups", default="base,m,a")
    ap.add_argument("--out", default="prog.S")
    a = ap.parse_args()
    rng = random.Random(a.seed)
    groups = set(a.groups.split(","))

    gens = [emit_base]
    if "m" in groups: gens.append(emit_m)
    if "base" in groups: gens.append(emit_mem)
    if "a" in groups: gens += [emit_a, emit_lrsc]

    body = []
    # init registri de lucru cu valori variate (deterministe dupa seed)
    for x in WORK:
        v = rng.randint(0, 0xffffffff)
        body.append(f"\tlui x{x}, {v >> 12}")
        body.append(f"\taddi x{x}, x{x}, {(v & 0xfff) - (0x1000 if (v & 0x800) else 0)}")
    # x31 = baza scratch
    body.append(f"\tla x{SCRATCH_REG}, scratch")
    # corpul aleator
    for _ in range(a.n):
        body.append(rng.choice(gens)(rng))

    prog = f"""# Test aleator generat (seed={a.seed}, n={a.n}, groups={a.groups})
.section .text
.globl _start
_start:
{chr(10).join(body)}

    # terminare: scrie 1 la tohost (HTIF pentru Spike), apoi bucla terminala
    la x1, tohost
    li x2, 1
    sw x2, 0(x1)
1:  j 1b

.section .tohost, "aw", @progbits
.align 6
.globl tohost
tohost: .dword 0
.globl fromhost
fromhost: .dword 0

.section .bss
.align 6
.globl scratch
scratch: .skip 256
"""
    open(a.out, "w").write(prog)
    print(f"[gen] scris {a.out}: {len(body)} linii, seed={a.seed}, groups={a.groups}")

if __name__ == "__main__":
    main()
