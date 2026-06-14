#define UART      0x10000000u
#define PTROOT    0x80020000u        // tabela de pagini (fizic, in RAM)
enum { F_A0 = 4, F_A7 = 11 };

/* ---------- firmware M-mode: doar console_putchar prin SBI ---------- */
static void m_putc(char c){ *(volatile char*)UART = c; }

void m_trap_handler(unsigned long *f){
    unsigned long mcause;
    __asm__ volatile("csrr %0, mcause" : "=r"(mcause));
    if (mcause == 9) {                       // ECALL din S
        if (f[F_A7] == 1) m_putc((char)f[F_A0]);
        f[F_A0] = 0;
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

/* construieste o tabela Sv32 cu superpagini (L1 leaf, 4MB fiecare) si
   activeaza paginarea. Flags: V|R|W|X|A|D = 0xCF, fara X = 0xC7. */
void s_kernel(void){
    volatile unsigned int *pt = (volatile unsigned int*)PTROOT;
    for (int i = 0; i < 1024; i++) pt[i] = 0;

    // identitate: RAM 0x80000000 (cod+date+stiva), cu executie
    pt[0x80000000u >> 22] = (0x200u << 20) | 0xCF;
    // identitate: UART 0x10000000 (acces normal la consola)
    pt[0x10000000u >> 22] = (0x040u << 20) | 0xC7;
    // ALIAS: VA 0x20000000 -> PA 0x10000000 (UART) - dovada de translatare
    pt[0x20000000u >> 22] = (0x040u << 20) | 0xC7;

    // satp: MODE=Sv32 (bit31) + PPN-ul radacinii (0x80020000 >> 12 = 0x80020)
    unsigned int satp = (1u << 31) | (PTROOT >> 12);
    __asm__ volatile("csrw satp, %0" :: "r"(satp));
    __asm__ volatile("sfence.vma");

    // de aici totul ruleaza prin MMU (fetch + load/store traduse)
    s_puts("kernel S-mode: paginare Sv32 activa\n");

    // scriu un caracter prin ALIAS-ul virtual 0x20000000 (nu e adresa fizica a UART)
    // daca apare pe consola, translatarea e reala, nu bypass
    *(volatile char*)0x20000000u = 'V';
    *(volatile char*)0x20000000u = '\n';

    s_puts("kernel: acces prin adresa virtuala mapata OK\n");
    for(;;);
}
