#define UART 0x10000000u
static void putc(char c){ *(volatile char*)UART = c; }
static void puts(const char* s){ while(*s) putc(*s++); }
int main(void){
    puts("Salut de pe procesorul RISC-V!\n");
    for(;;);
    return 0;
}
