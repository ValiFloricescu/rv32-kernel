#define UART 0x10000000u


/* scrie un singur caracter pe UART */
static void putc(char c){ *(volatile char*)UART = c; }

/* scrie un sir de text (caractere pana la '\0') */
static void puts(const char* s){ while(*s) putc(*s++); }

/* scrie un numar intreg ca cifre zecimale */
static void put_int(int v){
    char buf[12]; int i=0;
    if (v==0){ putc('0'); return; }
    while(v>0){ buf[i++]='0'+(v%10); v/=10; }
    while(i>0) putc(buf[--i]);
}

int main(void){
    puts("Salut de pe procesorul RISC-V!\n");   /* text */
    puts("calcul: 7*6 = ");
    put_int(7*6);                                /* numar calculat */
    putc('\n');
    for(;;);
    return 0;
}