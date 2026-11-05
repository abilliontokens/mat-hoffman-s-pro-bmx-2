/* 24 functions from 0x00161C70 to 0x00162B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00162720 {
    void func_00162720(undefined4 param_1);
};

struct C_001625D0 {
    int unk0;
    void func_001625D0(void);
};

void func_001E891B(void *p);

struct PositionElement {
    char pad[0x18];
    void func_0015B680();
};

struct LinearPositionController {
    void *func_001629A0(unsigned char flags);
};


void C_001625D0::func_001625D0(void) {
    extern int D_00287B94;
    int func_00157660(...);
    unk0 = (int)&D_00287B94;
    func_00157660();
}

void C_00162720::func_00162720(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x34) = param_1;
  *(undefined4 *)(in_ECX + 0x30) = 2;
  *(byte *)(in_ECX + 0x39) = *(byte *)(in_ECX + 0x39) | 1;
  return;
}

