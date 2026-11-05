/* 30 functions from 0x000318A0 to 0x00032860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00032720 {
    void func_00032720(void);
};


void C_00032720::func_00032720(void)
{
  int func_0001BE50(...);
  int in_ECX = (int)this;
  
  if (*(int *)(*(int *)(in_ECX + 100) + 0x484) != 0) {
    func_0001BE50();
    return;
  }
  return;
}
