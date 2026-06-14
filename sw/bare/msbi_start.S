.section .text.init
.global _start
_start:
    la   sp, _stack_top
    la   t0, m_trap_entry
    csrw mtvec, t0
    la   t0, s_payload
    csrw mepc, t0
    li   t0, 0x800            # MPP = S (mstatus[12:11]=01)
    csrw mstatus, t0
    mret                      # coboara in S-mode la s_payload
