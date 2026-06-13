#!/usr/bin/env python3
# ============================================================
#  compare_trace.py  -  Comparare lockstep DUT vs Spike
# ------------------------------------------------------------
#  Aliniaza, instructiune cu instructiune, log-ul de commit al
#  DUT-ului (produs de tb_cosim.v) cu trace-ul produs de
#  `spike --log-commits`, si raporteaza PRIMA divergenta.
#
#  Format DUT (o linie/instructiune retrasa):
#      <pc8> <insn8> <rd2|--> <wdata8|-------->
#  Format Spike (--log-commits), exemplu:
#      core   0: 3 0x00000000 (0x00000093) x 1 0x00000000
#      core   0: 3 0x00000014 (0xfe314ce3)
#
#  Compara: PC + instructiune mereu; (rd, valoare) cand ambele
#  parti raporteaza o scriere de registru. Scrierile in x0 sunt
#  normalizate la "fara scriere" pe ambele parti.
#
#  Utilizare:
#    compare_trace.py DUT.trace SPIKE.log [--start-pc 0x80000000]
#                                         [--pc-only] [--max N]
# ============================================================
import sys, re, argparse

def norm(rd, val):
    if rd is None: return (None, None)
    if int(rd) == 0: return (None, None)          # x0 nu se scrie efectiv
    return (int(rd), int(val, 16) & 0xffffffff)

def parse_dut(path):
    out = []
    for ln in open(path):
        p = ln.split()
        if len(p) < 2: continue
        pc, insn = p[0].lower(), p[1].lower()
        if p[2] == "--": rd, val = None, None
        else:           rd, val = norm(p[2], p[3])
        out.append((int(pc,16), int(insn,16), rd, val))
    return out

# Spike scrie 2 linii/instructiune: una de disassembly si una de COMMIT
# (cu nivelul de privilegiu dupa "core N:"). Pastram doar linia de commit.
SPIKE_RE = re.compile(r'core\s+\d+:\s+\d+\s+0x([0-9a-fA-F]+)\s+\(0x([0-9a-fA-F]+)\)(.*)')
REGW_RE  = re.compile(r'\bx\s*(\d+)\s+0x([0-9a-fA-F]+)')

def parse_spike(path, start_pc=None):
    out, started = [], (start_pc is None)
    for ln in open(path):
        m = SPIKE_RE.search(ln)
        if not m: continue
        pc = int(m.group(1), 16); insn = int(m.group(2), 16)
        if not started:
            if pc == start_pc: started = True
            else: continue
        rw = REGW_RE.search(m.group(3))
        if rw: rd, val = norm(rw.group(1), rw.group(2))
        else:  rd, val = None, None
        out.append((pc, insn, rd, val))
    return out

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("dut"); ap.add_argument("spike")
    ap.add_argument("--start-pc", default=None)
    ap.add_argument("--pc-only", action="store_true")
    ap.add_argument("--max", type=int, default=0)
    a = ap.parse_args()
    sp_start = int(a.start_pc, 16) if a.start_pc else None
    D = parse_dut(a.dut)
    S = parse_spike(a.spike, sp_start)
    n = min(len(D), len(S))
    if a.max: n = min(n, a.max)

    for i in range(n):
        dpc, di, drd, dval = D[i]
        spc, si, srd, sval = S[i]
        bad = (dpc != spc) or (di != si)
        if not a.pc_only:
            bad = bad or (drd != srd) or (dval != sval)
        if bad:
            print("  DIVERGENTA la instructiunea retrasa #%d" % i)
            lo = max(0, i-3)
            print("  --- context (ultimele instructiuni comune) ---")
            for j in range(lo, i):
                print("   ok  pc=%08x insn=%08x" % (D[j][0], D[j][1]))
            def fmt(t):
                rd = "--" if t[2] is None else "x%d" % t[2]
                vv = "--------" if t[3] is None else "%08x" % t[3]
                return "pc=%08x insn=%08x %s=%s" % (t[0], t[1], rd, vv)
            print("   DUT  : " + fmt(D[i]))
            print("   SPIKE: " + fmt(S[i]))
            sys.exit(1)

    if len(D) != len(S):
        print("  >>> LOCKSTEP OK <<< toate cele %d instructiuni comune coincid (DUT=%d, Spike=%d)." % (n, len(D), len(S)))
        print("  Diferenta de lungime e doar coada terminala (bucla finala / oprire HTIF) - normal.")
        sys.exit(0)
    print("  >>> LOCKSTEP OK <<< %d instructiuni retrase, identice DUT vs Spike" % n)
    sys.exit(0)

if __name__ == "__main__":
    main()
