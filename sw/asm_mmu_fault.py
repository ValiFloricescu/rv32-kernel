def U(imm,rd,op):            return ((imm&0xFFFFF000))|(rd<<7)|op
def I(imm,rs1,f3,rd,op):     return ((imm&0xFFF)<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def S(imm,rs2,rs1,f3,op):
    return (((imm>>5)&0x7F)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|((imm&0x1F)<<7)|op

t0,t1,t2,t3,t4,t5=5,6,7,28,29,30
SATP,MSTATUS,MTVEC,MEPC,MCAUSE,MTVAL=0x180,0x300,0x305,0x341,0x342,0x343

def assemble(lbl):
    p=[]
    def emit(w): p.append(w&0xFFFFFFFF)
    def lui(rd,i20):  emit(U(i20<<12,rd,0x37))
    def addi(rd,rs,i):emit(I(i,rs,0,rd,0x13))
    def sw(rs2,off,rs1):emit(S(off,rs2,rs1,2,0x23))
    def lw(rd,off,rs1):emit(I(off,rs1,2,rd,0x03))
    def csrw(c,rs):   emit(I(c,rs,1,0,0x73))
    def csrr(rd,c):   emit(I(c,0,2,rd,0x73))
    def mret():       emit(0x30200073)
    def jal(rd,off):
        imm=((off>>20&1)<<31)|((off>>1&0x3FF)<<21)|((off>>11&1)<<20)|((off>>12&0xFF)<<12)
        emit(imm|(rd<<7)|0x6F)
    def li2(rd,val):
        val&=0xFFFFFFFF
        hi=(val+0x800)>>12; lo=val-(hi<<12)
        lui(rd,hi&0xFFFFF); addi(rd,rd,lo&0xFFF)
    def here(): return len(p)*4

    labels={}
    # --- M-mode: setup ---
    li2(t0, lbl['handler']); csrw(MTVEC,t0)
    lui(t0,0x4); li2(t1,0xCF); sw(t1,0,t0)        # L1[0] identitate; L1[64] ramane nemapat
    li2(t0,0x80000004); csrw(SATP,t0)
    li2(t0,0x800);      csrw(MSTATUS,t0)          # MPP=S
    li2(t0, lbl['smode']); csrw(MEPC,t0)
    mret()
    # --- S-mode: load din VA nemapata ---
    labels['smode']=here()
    li2(t0,0x10000000)
    labels['fault_pc']=here()
    lw(t1,0,t0)                                   # page fault (cauza 13)
    jal(0, 0)                                     # bucla (nu se atinge)
    # --- M-mode: handler ---
    labels['handler']=here()
    csrr(t2,MCAUSE); csrr(t3,MTVAL)
    lui(t4,0xA); sw(t2,0,t4); sw(t3,4,t4)         # PA 0xA000=mcause, 0xA004=mtval
    csrr(t5,MEPC); sw(t5,8,t4)                     # PA 0xA008=mepc
    jal(0,0)
    return p, labels

lbl={'handler':0,'smode':0,'fault_pc':0}
for _ in range(3):
    prog, lbl = assemble(lbl)

with open("sw/prog_mmu_fault.hex","w") as f:
    for w in prog: f.write(f"{w:08x}\n")
print(f"{len(prog)} instr; smode=0x{lbl['smode']:02x} handler=0x{lbl['handler']:02x} fault_pc=0x{lbl['fault_pc']:02x}")
