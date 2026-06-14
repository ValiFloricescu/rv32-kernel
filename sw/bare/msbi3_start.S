.section .text.init
.global _start
_start:
    la   sp, _stack_top
    la   t0, m_trap_entry
    csrw mtvec, t0
    li   t0, 0x800           # MPP=S
    csrw mstatus, t0
    la   t0, s_kernel
    csrw mepc, t0
    mret
