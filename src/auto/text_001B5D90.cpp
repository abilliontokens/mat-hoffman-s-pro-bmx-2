/* 22 functions from 0x001B5D90 to 0x001B6A70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B65E0 {
    int unk0;
    void func_001B65E0(void);
};

struct C_001B65D0 {
    int unk0;
    void func_001B65D0(void);
};


undefined4 func_001B6560(undefined4 *param_1)
{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *param_1;
}

void C_001B65D0::func_001B65D0(void) {
    unk0 = 1;
}

void C_001B65E0::func_001B65E0(void) {
    unk0 = 0;
}

