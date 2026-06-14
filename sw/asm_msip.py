def U(imm,rd,op):        return ((imm&0xFFFFF000))|(rd<<7)|op
def I(imm,rs1,f3,rd,op): return ((imm&0xFFF)<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def S(imm,rs2,rs1,f3,op):
    return (((imm>>5)&0x7F)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|((imm&0x1F)<<7)|op

t0,t1,t2,t3,t4,t5=5,6,7,28,29,30
MSTATUS,MIE,MTVEC,MCAUSE=0x300,0x304,0x305,0x342

def assemble(lbl):
    p=[]
    def emit(w): p.append(w&0xFFFFFFFF)
    def lui(rd,i):  emit(U(i<<12,rd,0x37))
    def addi(rd,rs,i):emit(I(i,rs,0,rd,0x13))
    def sw(rs2,off,rs1):emit(S(off,rs2,rs1,2,0x23))
    def csrw(c,rs): emit(I(c,rs,1,0,0x73))
    def csrr(rd,c): emit(I(c,0,2,rd,0x73))
    def jal(rd,off):
        imm=((off>>20&1)<<31)|((off>>1&0x3FF)<<21)|((off>>11&1)<<20)|((off>>12&0xFF)<<12)
        emit(imm|(rd<<7)|0x6F)
    def li2(rd,val):
        val&=0xFFFFFFFF
        hi=(val+0x800)>>12; lo=val-(hi<<12)
        lui(rd,hi&0xFFFFF); addi(rd,rd,lo&0xFFF)
    def here(): return len(p)*4
    L={}

    li2(t0,lbl['handler']); csrw(MTVEC,t0)
    addi(t0,0,8); csrw(MIE,t0)               # MSIE (bit3)
    addi(t0,0,8); csrw(MSTATUS,t0)           # MIE (bit3)
    li2(t1,0x02000000)                        # CLINT (msip la offset 0)
    addi(t2,0,1); sw(t2,0,t1)                 # seteaza msip -> software interrupt
    L['wait']=here()
    jal(0,0)                                   # bucla; intreruperea sare la handler
    L['handler']=here()
    csrr(t3,MCAUSE)
    li2(t4,0x100); sw(t3,0,t4)                 # 0x100 = mcause
    sw(0,0,t1)                                 # curata msip
    li2(t5,0xABCD); sw(t5,4,t4)                # 0x104 = marcaj "handler rulat"
    jal(0,0)
    return p,L

lbl={'handler':0,'wait':0}
for _ in range(3): prog,lbl=assemble(lbl)

with open("sw/prog_msip.hex","w") as f:
    for w in prog: f.write(f"{w:08x}\n")
print(f"{len(prog)} instr; handler=0x{lbl['handler']:02x}")
