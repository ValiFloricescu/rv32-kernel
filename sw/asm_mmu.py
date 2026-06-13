import struct

def R(f7,rs2,rs1,f3,rd,op): return (f7<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def I(imm,rs1,f3,rd,op):     return ((imm&0xFFF)<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def S(imm,rs2,rs1,f3,op):
    return (((imm>>5)&0x7F)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|((imm&0x1F)<<7)|op
def U(imm,rd,op):            return ((imm&0xFFFFF000))|(rd<<7)|op

prog=[]
def emit(w): prog.append(w&0xFFFFFFFF)

def lui(rd,imm20):  emit(U(imm20<<12,rd,0x37))
def addi(rd,rs1,i): emit(I(i,rs1,0,rd,0x13))
def sw(rs2,off,rs1):emit(S(off,rs2,rs1,2,0x23))
def lw(rd,off,rs1): emit(I(off,rs1,2,rd,0x03))
def csrw(csr,rs1):  emit(I(csr,rs1,1,0,0x73))
def csrr(rd,csr):   emit(I(csr,0,2,rd,0x73))
def mret():         emit(0x30200073)
def jal(rd,off):
    imm=((off>>20&1)<<31)|((off>>1&0x3FF)<<21)|((off>>11&1)<<20)|((off>>12&0xFF)<<12)
    emit(imm|(rd<<7)|0x6F)

def li(rd,val):
    val&=0xFFFFFFFF
    hi=(val+0x800)>>12; lo=val-(hi<<12)
    if hi&0xFFFFF: lui(rd,hi&0xFFFFF); addi(rd,rd,lo&0xFFF)
    else:          addi(rd,0,lo&0xFFF)

def li2(rd,val):    # mereu lui+addi (lungime fixa)
    val&=0xFFFFFFFF
    hi=(val+0x800)>>12; lo=val-(hi<<12)
    lui(rd,hi&0xFFFFF); addi(rd,rd,lo&0xFFF)

# registri: t0=5 t1=6 t2=7 t3=28
t0,t1,t2,t3=5,6,7,28
SATP,MSTATUS,MEPC=0x180,0x300,0x341

# --- M-mode: scrie tabelele de pagini direct in memoria fizica ---
lui(t0,0x4)              # 0x4000 = tabel nivel 1 (root)
li(t1,0xCF);   sw(t1,0,t0)      # L1[0]=superpagina identitate [0,4MB) RWX
li(t1,0x1401); sw(t1,0x100,t0)  # L1[64]=pointer la L0 (PPN=5)
lui(t0,0x5)             # 0x5000 = tabel nivel 0
li(t1,0x20C7); sw(t1,0,t0)      # L0[0]=frunza -> PA 0x8000 RW

li(t0,0x80000004); csrw(SATP,t0)    # satp: MODE=1, root PPN=4
li(t0,0x800);      csrw(MSTATUS,t0) # MPP=S
# mepc = adresa intrarii S-mode (identitate, deci VA=PA)
entry_idx=len(prog)+2   # dupa li(mepc) (2 instr) + csrw + mret urmeaza intrarea
# completam mepc dupa ce stim adresa; folosim un placeholder corect:
#   instructiunile pana la 'smode' = len curent + (li:2)+(csrw:1)+(mret:1)
smode_pc=(len(prog)+4)*4
li2(t0,smode_pc); csrw(MEPC,t0)
mret()

# --- S-mode: MMU activ, fetch + date traduse ---
smode=len(prog)*4
assert smode==smode_pc, (smode,smode_pc)
li(t0,0x10000000)       # VA de date
li(t1,0xDEADBEEF)
sw(t1,0,t0)             # store via traducere -> PA 0x8000
lw(t2,0,t0)             # load via traducere -> 0xDEADBEEF
lui(t3,0x9)             # 0x9000 (identitate -> PA 0x9000)
sw(t2,0,t3)             # scrie valoarea citita la PA 0x9000
jal(0,0)                # bucla finala

with open("sw/prog_mmu.hex","w") as f:
    for w in prog: f.write(f"{w:08x}\n")
print(f"{len(prog)} instructiuni, intrare S-mode la 0x{smode:04x}")
