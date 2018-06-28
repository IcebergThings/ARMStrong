#ifndef __INCLUDE_DEVICES_H
#define __INCLUDE_DEVICES_H

class KernelDevice {
public:
  char* model_name = "Generic Kernel Space Device";

  KernelDevice* children[] = {NULL};
  KernelDevice* father = NULL;
};

#ifdef CPU_BCM2736
#include "BCM2736/BCM2736.h"
#endif

#endif
