.section .text.init
.global _start
_start:
    la   sp, _stack_top
    la   t0, m_trap_entry
    csrw mtvec, t0
    li   t0, (1<<5)          # mideleg: deleg STIP catre S-mode
    csrw mideleg, t0
    li   t0, (1<<7)          # mie: MTIE - M prinde expirarea timerului
    csrw mie, t0
    li   t0, 0x800           # mstatus: MPP=S
    csrw mstatus, t0
    la   t0, s_payload
    csrw mepc, t0
    mret                     # coboara in S-mode
