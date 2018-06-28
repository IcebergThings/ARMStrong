#ifndef __INCLUDE_UART_H
#define __INCLUDE_UART_H

#include <common.h>
#include <devices/arm.h>

class uart : public KernelDevice {
public:
  uart();

  void putc(unsigned char c);
  unsigned char getc();
  void puts(const char* str);
};

#endif
