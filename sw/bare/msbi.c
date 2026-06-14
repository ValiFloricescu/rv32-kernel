#define UART 0x10000000u

static void m_putc(char c){ *(volatile char*)UART = c; }

// frame: ra,t0,t1,t2,a0,a1,a2,a3,a4,a5,a6,a7,t3,t4,t5,t6  (offset = index*4)
enum { F_A0 = 4, F_A1 = 5, F_A7 = 11 };

// firmware M-mode: trateaza ecall din S-mode (cauza 9) ca apel SBI
void m_trap_handler(unsigned long *f){
    unsigned long mcause;
    __asm__ volatile("csrr %0, mcause" : "=r"(mcause));

    if (mcause == 9) {                       // ECALL din S-mode
        long eid = f[F_A7];
        long arg = f[F_A0];
        long ret = 0;
        switch (eid) {
            case 1:  m_putc((char)arg); break;   // SBI console_putchar
            default: ret = -2;                   // SBI_ERR_NOT_SUPPORTED
        }
        f[F_A0] = ret;
        // sare peste instructiunea ecall la revenire
        unsigned long mepc;
        __asm__ volatile("csrr %0, mepc" : "=r"(mepc));
        mepc += 4;
        __asm__ volatile("csrw mepc, %0" :: "r"(mepc));
    }
}

// apel SBI din S-mode
static long sbi_call(long eid, long arg0){
    register long a7 __asm__("a7") = eid;
    register long a0 __asm__("a0") = arg0;
    __asm__ volatile("ecall" : "+r"(a0) : "r"(a7) : "memory");
    return a0;
}

// payload care ruleaza in S-mode si foloseste servicii SBI
void s_payload(void){
    const char *msg = "Salut din S-mode prin SBI!\n";
    while (*msg) sbi_call(1, *msg++);     // console_putchar prin ecall
    for(;;);
}
