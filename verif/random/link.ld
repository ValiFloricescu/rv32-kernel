OUTPUT_ARCH("riscv")
ENTRY(_start)
SECTIONS {
  . = 0x80000000;
  .text   : { *(.text*) }
  .rodata : { *(.rodata*) }
  .data   : { *(.data*) }
  .tohost ALIGN(0x1000) : { *(.tohost) }
  .bss    : { *(.bss*) *(COMMON) }
}
