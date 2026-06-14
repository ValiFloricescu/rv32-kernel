#define UART  0x10000000u
#define CLINT 0x02000000u
#define MTIMECMP (CLINT + 0x4000)
#define MTIME    (CLINT + 0xBFF8)

static void putc(char c){ *(volatile char*)UART = c; }
static void puts(const char* s){ while(*s) putc(*s++); }

volatile unsigned tick_count = 0;

static unsigned long long mtime(void){
    return *(volatile unsigned long long*)MTIME;
}
static void set_timer(unsigned long long t){
    *(volatile unsigned long long*)MTIMECMP = t;
}

// chemata din trap_entry (asm). Trateaza intreruperea de timer.
void trap_handler(void){
    tick_count++;
    putc('.');
    set_timer(mtime() + 2000);     // reprogrameaza urmatorul tick
}

// CSR helpers
static inline void csrw_mtvec(unsigned v){ __asm__ volatile("csrw mtvec,%0"::"r"(v)); }
static inline void csrw_mie(unsigned v){ __asm__ volatile("csrw mie,%0"::"r"(v)); }
static inline void csrs_mstatus(unsigned v){ __asm__ volatile("csrs mstatus,%0"::"r"(v)); }

extern void trap_entry(void);

int main(void){
    puts("Timer C:\n");
    csrw_mtvec((unsigned)trap_entry);
    set_timer(mtime() + 2000);
    csrw_mie(1u << 7);             // MTIE
    csrs_mstatus(1u << 3);         // MIE global
    while (tick_count < 8) { }     // asteapta 8 tick-uri
    csrw_mie(0);                   // opreste timer-ul
    puts("\ngata\n");
    for(;;);
    return 0;
}
