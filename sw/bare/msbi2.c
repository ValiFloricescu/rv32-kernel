#define UART           0x10000000u
#define CLINT_MTIMECMP 0x02004000u
#define CLINT_MTIME    0x0200BFF8u
#define TICK           600

enum { F_A0 = 4, F_A7 = 11 };   // offseti in frame-ul de 16 registri

/* ---------- firmware M-mode ---------- */

static void m_putc(char c){ *(volatile char*)UART = c; }

/* serviciu SBI set_timer: programeaza mtimecmp, sterge STIP, reactiveaza MTIE */
static void sbi_set_timer(unsigned int t){
    *(volatile unsigned int*)CLINT_MTIMECMP     = t;
    *(volatile unsigned int*)(CLINT_MTIMECMP+4) = 0;
    __asm__ volatile("csrc mip, %0" :: "r"(1<<5));   // STIP jos
    __asm__ volatile("csrs mie, %0" :: "r"(1<<7));   // MTIE sus
}

void m_trap_handler(unsigned long *f){
    unsigned long mcause;
    __asm__ volatile("csrr %0, mcause" : "=r"(mcause));

    if ((long)mcause < 0) {                 // intrerupere (MSB=1)
        if ((mcause & 0xff) == 7) {         // timer M expirat -> forward la S
            __asm__ volatile("csrc mie, %0" :: "r"(1<<7));  // opreste MTIE
            __asm__ volatile("csrs mip, %0" :: "r"(1<<5));  // ridica STIP
        }
        return;                             // intrerupere: nu avansa mepc
    }
    if (mcause == 9) {                      // ECALL din S -> dispatch SBI
        long eid = f[F_A7], a0 = f[F_A0], ret = 0;
        switch (eid) {
            case 0: sbi_set_timer((unsigned int)a0); break;  // set_timer
            case 1: m_putc((char)a0); break;                 // console_putchar
            default: ret = -2;
        }
        f[F_A0] = ret;
        unsigned long mepc;
        __asm__ volatile("csrr %0, mepc" : "=r"(mepc));
        __asm__ volatile("csrw mepc, %0" :: "r"(mepc+4));
    }
}

/* ---------- kernel S-mode ---------- */

static long sbi_call(long eid, long a0){
    register long _a7 __asm__("a7") = eid;
    register long _a0 __asm__("a0") = a0;
    __asm__ volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory");
    return _a0;
}
static void s_puts(const char *s){ while(*s) sbi_call(1, *s++); }

static volatile int ticks = 0;

void s_trap_handler(unsigned long *f){
    (void)f;
    unsigned long scause;
    __asm__ volatile("csrr %0, scause" : "=r"(scause));
    if ((long)scause < 0 && (scause & 0xff) == 5) {   // timer S
        ticks++;
        sbi_call(1, '.');                              // semn vizibil prin SBI
        if (ticks < 5) {
            unsigned int now = *(volatile unsigned int*)CLINT_MTIME;
            sbi_call(0, now + TICK);                   // cere urmatorul tick
        } else {
            __asm__ volatile("csrc sie, %0" :: "r"(1<<5));  // gata: opreste STIE
        }
    }
}

void s_payload(void){
    extern void s_trap_entry(void);
    __asm__ volatile("csrw stvec, %0"  :: "r"(s_trap_entry));
    __asm__ volatile("csrs sie, %0"    :: "r"(1<<5));   // STIE
    __asm__ volatile("csrs sstatus, %0":: "r"(1<<1));   // SIE global S

    s_puts("kernel S-mode: pornesc timerul\n");
    unsigned int now = *(volatile unsigned int*)CLINT_MTIME;
    sbi_call(0, now + TICK);                            // primul tick

    while (ticks < 5) { }                               // asteapta 5 tick-uri
    s_puts("\nkernel: 5 tick-uri primite\n");
    for(;;);
}
