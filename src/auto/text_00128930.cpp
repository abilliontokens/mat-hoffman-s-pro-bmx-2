/* 10 functions from 0x00128930 to 0x00129930, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00129900 {
    void func_00129900(void);
};


void func_001294E0(int a0, int a1, int a2, int a3, int a4) {
    extern int D_002B92F4;
    int func_001293F0(...);
    D_002B92F4 = a4;
    func_001293F0(a0, a1, a2, a3);
}

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
