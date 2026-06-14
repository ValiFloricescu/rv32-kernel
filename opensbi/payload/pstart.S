.section .text._start
.global _start
_start:
    la   sp, _pstack
    call pmain
1:  wfi
    j 1b
.section .bss
.align 4
.space 4096
_pstack:
