/* 18 functions from 0x001F58E0 to 0x001F63F6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

undefined4 func_001F59BB(void)
{
  extern undefined4 D_002F6A70;
  int __stdcall func_001DE7D4(int);
  int __stdcall func_001F5975(int);
  D_002F6A70 = func_001DE7D4((int)(&func_001F5975));
  return 0;
}

int func_001F59D9(void) {
    return 0;
}

#pragma optimize("sy", on)
int func_001F5AA1(unsigned int a, unsigned int b, unsigned int *out)
{
    unsigned int sum = a + b;
    int overflow = 0;
    if (sum < a || sum < b) {
        overflow = 1;
    }
    *out = sum;
    return overflow;
}
