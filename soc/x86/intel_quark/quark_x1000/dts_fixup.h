/* SPDX-License-Identifier: Apache-2.0 */

#define DT_UART_NS16550_PORT_0_BASE_ADDR	DT_INST_0_NS16550_BASE_ADDRESS
#define DT_UART_NS16550_PORT_0_SIZE		DT_INST_0_NS16550_SIZE
#define DT_UART_NS16550_PORT_0_BAUD_RATE	DT_INST_0_NS16550_CURRENT_SPEED
#define DT_UART_NS16550_PORT_0_NAME		DT_INST_0_NS16550_LABEL
#define DT_UART_NS16550_PORT_0_IRQ		DT_INST_0_NS16550_IRQ_0
#define DT_UART_NS16550_PORT_0_IRQ_PRI		DT_INST_0_NS16550_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_0_IRQ_FLAGS	DT_INST_0_NS16550_IRQ_0_SENSE
#define DT_UART_NS16550_PORT_0_CLK_FREQ		DT_INST_0_NS16550_CLOCK_FREQUENCY
#define DT_UART_NS16550_PORT_0_PCIE		DT_INST_0_NS16550_PCIE

#define DT_UART_NS16550_PORT_1_BASE_ADDR	DT_INST_1_NS16550_BASE_ADDRESS
#define DT_UART_NS16550_PORT_1_SIZE		DT_INST_1_NS16550_SIZE
#define DT_UART_NS16550_PORT_1_BAUD_RATE	DT_INST_1_NS16550_CURRENT_SPEED
#define DT_UART_NS16550_PORT_1_NAME		DT_INST_1_NS16550_LABEL
#define DT_UART_NS16550_PORT_1_IRQ		DT_INST_1_NS16550_IRQ_0
#define DT_UART_NS16550_PORT_1_IRQ_PRI		DT_INST_1_NS16550_IRQ_0_PRIORITY
#define DT_UART_NS16550_PORT_1_IRQ_FLAGS	DT_INST_1_NS16550_IRQ_0_SENSE
#define DT_UART_NS16550_PORT_1_CLK_FREQ		DT_INST_1_NS16550_CLOCK_FREQUENCY
#define DT_UART_NS16550_PORT_1_PCIE		DT_INST_1_NS16550_PCIE

#define DT_PHYS_RAM_ADDR			CONFIG_SRAM_BASE_ADDRESS

#define DT_PHYS_LOAD_ADDR			CONFIG_FLASH_BASE_ADDRESS

#define DT_RAM_SIZE				CONFIG_SRAM_SIZE

#define DT_ROM_SIZE				CONFIG_FLASH_SIZE

#define DT_IOAPIC_BASE_ADDRESS	DT_INTEL_IOAPIC_FEC00000_BASE_ADDRESS

#define DT_SPI_0_BASE_ADDRESS	DT_INTEL_INTEL_SPI_90009000_BASE_ADDRESS
#define DT_SPI_0_IRQ		DT_INTEL_INTEL_SPI_90009000_IRQ_0
#define DT_SPI_0_IRQ_FLAGS	DT_INTEL_INTEL_SPI_90009000_IRQ_0_SENSE
#define DT_SPI_0_IRQ_PRI	DT_INTEL_INTEL_SPI_90009000_IRQ_0_PRIORITY
#define DT_SPI_0_NAME		DT_INTEL_INTEL_SPI_90009000_LABEL

#define DT_SPI_1_BASE_ADDRESS	DT_INTEL_INTEL_SPI_90008000_BASE_ADDRESS
#define DT_SPI_1_IRQ		DT_INTEL_INTEL_SPI_90008000_IRQ_0
#define DT_SPI_1_IRQ_FLAGS	DT_INTEL_INTEL_SPI_90008000_IRQ_0_SENSE
#define DT_SPI_1_IRQ_PRI	DT_INTEL_INTEL_SPI_90008000_IRQ_0_PRIORITY
#define DT_SPI_1_NAME		DT_INTEL_INTEL_SPI_90008000_LABEL

#ifdef CONFIG_I2C_0
#define DT_I2C_DW_0_IRQ_SHARED_NAME	DT_SHARED_IRQ_SHAREDIRQ0_LABEL
#endif

#ifdef CONFIG_GPIO_DW_0
#define DT_GPIO_DW_0_IRQ_SHARED_NAME		DT_SHARED_IRQ_SHAREDIRQ0_LABEL
#endif

#ifdef CONFIG_ETH_DW_0
#define DT_ETH_DW_0_IRQ_SHARED_NAME		DT_SHARED_IRQ_SHAREDIRQ0_LABEL
#endif
