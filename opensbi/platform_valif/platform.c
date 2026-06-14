/* SPDX-License-Identifier: BSD-2-Clause
 *
 * Platforma OpenSBI pentru SoC-ul RV32IMA custom.
 * Harta de memorie: UART 0x10000000 (16550-lite), CLINT 0x02000000, RAM 0x80000000.
 */
#include <sbi/riscv_asm.h>
#include <sbi/riscv_encoding.h>
#include <sbi/sbi_const.h>
#include <sbi/sbi_platform.h>
#include <sbi_utils/ipi/aclint_mswi.h>
#include <sbi_utils/serial/uart8250.h>
#include <sbi_utils/timer/aclint_mtimer.h>

#define VALIF_HART_COUNT      1
#define VALIF_CLINT_ADDR      0x02000000
#define VALIF_MTIMER_FREQ     10000000
#define VALIF_UART_ADDR       0x10000000
#define VALIF_UART_FREQ       10000000

static struct aclint_mswi_data mswi = {
	.addr = VALIF_CLINT_ADDR + CLINT_MSWI_OFFSET,
	.size = ACLINT_MSWI_SIZE,
	.first_hartid = 0,
	.hart_count = VALIF_HART_COUNT,
};

static struct aclint_mtimer_data mtimer = {
	.mtime_freq = VALIF_MTIMER_FREQ,
	.mtime_addr = VALIF_CLINT_ADDR + CLINT_MTIMER_OFFSET +
		      ACLINT_DEFAULT_MTIME_OFFSET,
	.mtime_size = ACLINT_DEFAULT_MTIME_SIZE,
	.mtimecmp_addr = VALIF_CLINT_ADDR + CLINT_MTIMER_OFFSET +
			 ACLINT_DEFAULT_MTIMECMP_OFFSET,
	.mtimecmp_size = ACLINT_DEFAULT_MTIMECMP_SIZE,
	.first_hartid = 0,
	.hart_count = VALIF_HART_COUNT,
	.has_64bit_mmio = false,        /* RV32: acces lo/hi pe 32 de biti */
};

static int valif_early_init(bool cold_boot) { return 0; }
static int valif_final_init(bool cold_boot) { return 0; }

static int valif_console_init(void)
{
	/* baudrate = 0 => driverul nu scrie divizorul la offset 0 (THR),
	   altfel UART-ul nostru ar transmite un octet de gunoi */
	return uart8250_init(VALIF_UART_ADDR, VALIF_UART_FREQ, 0, 0, 1, 0);
}

/* fara PLIC deocamdata: timer + IPI sunt suficiente pentru boot si handoff */
static int valif_irqchip_init(bool cold_boot) { return 0; }

static int valif_ipi_init(bool cold_boot)
{
	int ret;
	if (cold_boot) {
		ret = aclint_mswi_cold_init(&mswi);
		if (ret)
			return ret;
	}
	return aclint_mswi_warm_init();
}

static int valif_timer_init(bool cold_boot)
{
	int ret;
	if (cold_boot) {
		ret = aclint_mtimer_cold_init(&mtimer, NULL);
		if (ret)
			return ret;
	}
	return aclint_mtimer_warm_init();
}

const struct sbi_platform_operations platform_ops = {
	.early_init   = valif_early_init,
	.final_init   = valif_final_init,
	.console_init = valif_console_init,
	.irqchip_init = valif_irqchip_init,
	.ipi_init     = valif_ipi_init,
	.timer_init   = valif_timer_init,
};

const struct sbi_platform platform = {
	.opensbi_version  = OPENSBI_VERSION,
	.platform_version = SBI_PLATFORM_VERSION(0x0, 0x01),
	.name             = "valif-rv32ima",
	.features         = SBI_PLATFORM_DEFAULT_FEATURES,
	.hart_count       = VALIF_HART_COUNT,
	.hart_stack_size  = SBI_PLATFORM_DEFAULT_HART_STACK_SIZE,
	.heap_size        = SBI_PLATFORM_DEFAULT_HEAP_SIZE(VALIF_HART_COUNT),
	.platform_ops_addr = (unsigned long)&platform_ops,
};
