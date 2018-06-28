#ifndef __INCLUDE_CPU_H
#define __INCLUDE_CPU_H

#include <common.h>

class CPU : public KernelDevice {
public:
  char* model_name = "Generic CPU";

  uart* UART0 = NULL;
};

#endif
