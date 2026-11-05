/* 10 functions from 0x00128930 to 0x00129930, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00129900 {
    void func_00129900(void);
};


void C_00129900::func_00129900(void)
{
  int func_001E891B(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x54) != 0) {
    func_001E891B(*(int *)(in_ECX + 0x54));
    *(undefined4 *)(in_ECX + 0x54) = 0;
  }
  return;
}

void func_00129920(void) {
    int func_00133020(...);
    func_00133020();
}
