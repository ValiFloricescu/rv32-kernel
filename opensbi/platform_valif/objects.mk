# SPDX-License-Identifier: BSD-2-Clause
# Platforma custom pentru SoC-ul RV32IMA (Zynq PYNQ-Z2 / simulare)

platform-cppflags-y =
platform-cflags-y =
platform-asflags-y =
platform-ldflags-y =

PLATFORM_RISCV_XLEN = 32
PLATFORM_RISCV_ABI = ilp32
PLATFORM_RISCV_ISA = rv32ima_zicsr_zifencei
PLATFORM_RISCV_CODE_MODEL = medany

platform-objs-y += platform.o

# firmware cu payload (kernel-ul S-mode embedat), incarcat la 0x80000000
FW_TEXT_START=0x80000000
FW_PAYLOAD=y
FW_PAYLOAD_OFFSET=0x100000
