/* 17 functions from 0x00142180 to 0x00142F30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00142C70 {
    undefined4 func_00142C70(void);
};

struct C_00142CF0 {
    int unk0;
    C_00142CF0* func_00142CF0(void);
};


undefined4 C_00142C70::func_00142C70(void)
{
  int func_00142C10(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00142C10(in_ECX);
  return in_ECX;
}

C_00142CF0* C_00142CF0::func_00142CF0(void) {
    unk0 = 0;
    return this;
}
