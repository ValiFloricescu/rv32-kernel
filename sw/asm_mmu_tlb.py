def U(imm,rd,op):        return ((imm&0xFFFFF000))|(rd<<7)|op
def I(imm,rs1,f3,rd,op): return ((imm&0xFFF)<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def S(imm,rs2,rs1,f3,op):
    return (((imm>>5)&0x7F)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|((imm&0x1F)<<7)|op

t0,t1,t2,t3=5,6,7,28
SATP,MSTATUS,MEPC=0x180,0x300,0x341

def assemble(lbl):
    p=[]
    def emit(w): p.append(w&0xFFFFFFFF)
    def lui(rd,i):  emit(U(i<<12,rd,0x37))
    def addi(rd,rs,i):emit(I(i,rs,0,rd,0x13))
    def sw(rs2,off,rs1):emit(S(off,rs2,rs1,2,0x23))
    def csrw(c,rs): emit(I(c,rs,1,0,0x73))
    def mret():     emit(0x30200073)
    def sfence():   emit(0x12000073)             # sfence.vma x0,x0
    def jal(rd,off):
        imm=((off>>20&1)<<31)|((off>>1&0x3FF)<<21)|((off>>11&1)<<20)|((off>>12&0xFF)<<12)
        emit(imm|(rd<<7)|0x6F)
    def li2(rd,val):
        val&=0xFFFFFFFF
        hi=(val+0x800)>>12; lo=val-(hi<<12)
        lui(rd,hi&0xFFFFF); addi(rd,rd,lo&0xFFF)
    def here(): return len(p)*4
    L={}

    # --- M-mode: tabele de pagini ---
    lui(t0,0x4)
    li2(t1,0xCF);   sw(t1,0,t0)                  # L1[0] identitate [0,4MB)
    li2(t1,0x1401); sw(t1,0x100,t0)              # L1[64] -> L0 (PPN=5)
    lui(t0,0x5); li2(t1,0x20C7); sw(t1,0,t0)     # L0[0] -> PA 0x8000 (mapare A)
    li2(t0,0x80000004); csrw(SATP,t0)
    li2(t0,0x800);      csrw(MSTATUS,t0)
    li2(t0,lbl['smode']); csrw(MEPC,t0)
    mret()
    # --- S-mode ---
    L['smode']=here()
    li2(t0,0x10000000)
    li2(t1,0x11111111); sw(t1,0,t0)              # V1 -> PA 0x8000, umple TLB
    li2(t2,0x5000); li2(t3,0x24C7); sw(t3,0,t2)  # rescrie L0[0] -> PA 0x9000 (mapare B)
    li2(t1,0x22222222); sw(t1,0,t0)              # FARA sfence: hit TLB -> tot PA 0x8000
    sfence()                                      # goleste TLB
    li2(t1,0x33333333); sw(t1,0,t0)              # miss -> re-walk -> PA 0x9000
    jal(0,0)
    return p,L

lbl={'smode':0}
for _ in range(3): prog,lbl=assemble(lbl)

with open("sw/prog_mmu_tlb.hex","w") as f:
    for w in prog: f.write(f"{w:08x}\n")
print(f"{len(prog)} instr; smode=0x{lbl['smode']:02x}")
