#ifndef __INCLUDE_ARM_H
#define __INCLUDE_ARM_H

#include <common.h>

// Memory-Mapped I/O output
static inline void mmio_write(size_t reg, uint32_t data) {
	*(volatile uint32_t*)reg = data;
}

// Memory-Mapped I/O input
static inline uint32_t mmio_read(size_t reg) {
	return *(volatile uint32_t*)reg;
}

// Loop <delay> times in a way that the compiler won't optimize away
static inline void delay_cycles(int32_t count) {
	asm volatile("__delay_%=: subs %[count], %[count], #1; bne __delay_%=\n"
		 : "=r"(count): [count]"0"(count) : "cc");
}

#endif
