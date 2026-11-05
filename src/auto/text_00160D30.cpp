/* 25 functions from 0x00160D30 to 0x00161C70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00161850 {
    undefined4 func_00161850(int param_1);
};


void func_00161670(void) {
    int func_001AC440(...);
    func_001AC440();
}

void func_00161840(void) {
    int func_001AC750(...);
    func_001AC750();
}

undefined4 C_00161850::func_00161850(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(param_1 * 0x10 + 8 + *(int *)(in_ECX + 0x14));
}

