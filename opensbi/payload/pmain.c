static void sbi_putc(char c){
    register long a7 __asm__("a7") = 1;   /* SBI legacy console_putchar */
    register long a0 __asm__("a0") = c;
    __asm__ volatile("ecall" : "+r"(a0) : "r"(a7) : "memory");
}
void pmain(void){
    const char *s = "Salut din S-mode peste OpenSBI real!\n";
    while (*s) sbi_putc(*s++);
}
