/* 5 functions from 0x000725B0 to 0x000733F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00072E50 {
    void func_00072E50(void);
};


void C_00072E50::func_00072E50(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x1b] = 0;
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x23] = 1;
  return;
}
