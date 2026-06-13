# encoder minimal pentru programul de test de intrerupere
def I(imm,rs1,f3,rd,op): return ((imm&0xFFF)<<20)|(rs1<<15)|(f3<<12)|(rd<<7)|op
def U(imm20,rd,op):      return ((imm20&0xFFFFF)<<12)|(rd<<7)|op
def S(imm,rs2,rs1,f3,op):return (((imm>>5)&0x7F)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|((imm&0x1F)<<7)|op
def B(imm,rs2,rs1,f3,op):
    return (((imm>>12)&1)<<31)|(((imm>>5)&0x3F)<<25)|(rs2<<20)|(rs1<<15)|(f3<<12)|(((imm>>1)&0xF)<<8)|(((imm>>11)&1)<<7)|op
def J(imm,rd,op):
    return (((imm>>20)&1)<<31)|(((imm>>1)&0x3FF)<<21)|(((imm>>11)&1)<<20)|(((imm>>12)&0xFF)<<12)|(rd<<7)|op

def addi(rd,rs1,imm): return I(imm,rs1,0,rd,0x13)
def lui(rd,imm20):    return U(imm20,rd,0x37)
def sw(rs2,imm,rs1):  return S(imm,rs2,rs1,0x2,0x23)
def blt(rs1,rs2,off): return B(off,rs2,rs1,0x4,0x63)
def bne(rs1,rs2,off): return B(off,rs2,rs1,0x1,0x63)
def jal(rd,off):      return J(off,rd,0x6F)
def csrrw(rd,csr,rs1):return I(csr,rs1,0x1,rd,0x73)
def csrrs(rd,csr,rs1):return I(csr,rs1,0x2,rd,0x73)
MRET=0x30200073
MTVEC,MIE,MSTATUS,MCAUSE=0x305,0x304,0x300,0x342

HANDLER=0x3C  # adresa handler (verificata din layout)
prog=[]
# --- main ---
prog.append(addi(5,0,HANDLER))      # 00: x5=handler
prog.append(csrrw(0,MTVEC,5))       # 04: mtvec=x5
prog.append(lui(6,0x02004))         # 08: x6=0x02004000 (mtimecmp)
prog.append(addi(7,0,40))           # 0C: x7=40
prog.append(sw(7,0,6))              # 10: mtimecmp_lo=40
prog.append(sw(0,4,6))              # 14: mtimecmp_hi=0
prog.append(addi(7,0,0x80))         # 18: x7=MTIE(bit7)
prog.append(csrrw(0,MIE,7))         # 1C: mie=x7
prog.append(addi(7,0,0x8))          # 20: x7=MIE global(bit3)
prog.append(csrrw(0,MSTATUS,7))     # 24: mstatus=x7
prog.append(addi(10,0,0))           # 28: x10=0
# loop @0x2C
prog.append(addi(10,10,1))          # 2C: x10++
prog.append(addi(5,0,100))          # 30: x5=100
prog.append(blt(10,5,-8))           # 34: if x10<100 -> 0x2C
# done @0x38
prog.append(jal(0,0))               # 38: j done (self-loop)
# handler @0x3C
prog.append(addi(20,0,1))           # 3C: x20=1 (handler a rulat)
prog.append(csrrs(6,MCAUSE,0))      # 40: x6=mcause
prog.append(lui(7,0x80000))         # 44: x7=0x80000000
prog.append(addi(7,7,7))            # 48: x7=0x80000007
prog.append(bne(6,7,8))             # 4C: if x6!=x7 -> skip(0x54)
prog.append(addi(21,0,7))           # 50: x21=7 (mcause corect)
# skip @0x54
prog.append(lui(6,0x02004))         # 54: x6=0x02004000
prog.append(addi(7,0,-1))           # 58: x7=0xFFFFFFFF
prog.append(sw(7,0,6))              # 5C: mtimecmp_lo=max
prog.append(sw(7,4,6))              # 60: mtimecmp_hi=max
prog.append(MRET)                   # 64: mret

with open("sw/prog_irq.hex","w") as f:
    for w in prog: f.write("%08x\n"%(w&0xFFFFFFFF))
print("scris sw/prog_irq.hex,",len(prog),"instructiuni; handler la 0x%02X"%HANDLER)
