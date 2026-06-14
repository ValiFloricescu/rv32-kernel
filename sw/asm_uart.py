def U(imm,rd,op):        return ((imm&0xFFFFF000))|(rd<<7)|op
def I(imm,rs1,f3,rd,op): return ((imm&0xFFF)<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def S(imm,rs2,rs1,f3,op):
    return (((imm>>5)&0x7F)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|((imm&0x1F)<<7)|op

a0,a1=10,11
prog=[]
def emit(w): prog.append(w&0xFFFFFFFF)
def lui(rd,i):  emit(U(i<<12,rd,0x37))
def addi(rd,rs,i):emit(I(i,rs,0,rd,0x13))
def sb(rs2,off,rs1):emit(S(off,rs2,rs1,0,0x23))
def jal(rd,off):
    imm=((off>>20&1)<<31)|((off>>1&0x3FF)<<21)|((off>>11&1)<<20)|((off>>12&0xFF)<<12)
    emit(imm|(rd<<7)|0x6F)
def li2(rd,val):
    val&=0xFFFFFFFF
    hi=(val+0x800)>>12; lo=val-(hi<<12)
    lui(rd,hi&0xFFFFF); addi(rd,rd,lo&0xFFF)

li2(a0,0x10000000)                 # baza UART
for ch in "RV32\n":
    addi(a1,0,ord(ch)); sb(a1,0,a0)
jal(0,0)

with open("sw/prog_uart.hex","w") as f:
    for w in prog: f.write(f"{w:08x}\n")
print(f"{len(prog)} instr")
