/* 8 functions from 0x000BDF30 to 0x000BEE30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000BEDA0 {
    undefined4 func_000BEDA0(byte param_1);
};

struct C_000BE510 {
    int unk0;
    void func_00157660(void);
    void *func_000BE510(int flags);
};

struct C_000BEDC0 {
    int unk0;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38[6];
    int f50[6];
    int f68[6];
    int f80;
    int f84;
    int f88[2];
    int f90[2];
    void func_00157600(void *param);
    C_000BEDC0 *func_000BEDC0(void *param);
};


void *C_000BE510::func_000BE510(int flags) {
    extern int D_0027DB9C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027DB9C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_000BEDA0::func_000BEDA0(byte param_1)
{
  int func_000BE540(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000BE540();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
