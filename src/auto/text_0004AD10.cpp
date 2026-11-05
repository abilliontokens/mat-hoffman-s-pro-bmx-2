/* 4 functions from 0x0004AD10 to 0x0004BAF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_0027732C;

struct C_0004BAB0 {
    void *vtbl;
    char pad04[0x280];
    int unk284[8];
    void func_00030F90(int a0);
    void *func_0004BAB0(int param_1);
};

struct C_0004BA90 {
    undefined4 func_0004BA90(byte param_1);
};


undefined4 C_0004BA90::func_0004BA90(byte param_1)
{
  int func_0004ACB0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0004ACB0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *C_0004BAB0::func_0004BAB0(int param_1) {
    int i;

    func_00030F90(param_1);
    vtbl = &D_0027732C;
    for (i = 0; i < 8; i++) {
        if (unk284[i] != 0) {
            unk284[i] = 0;
        }
    }
    return this;
}

