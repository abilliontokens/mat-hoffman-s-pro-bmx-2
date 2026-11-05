/* 18 functions from 0x00187670 to 0x001884F0, found by Ghidra. */
#include "common.h"

struct C_001877F0Param {
    int func_00169710(void *a);
    int func_00168C20(void *a, int b, void *c);
};

struct C_00187370 {
    virtual void func_00187390(void *a);
    int f4;
    int f8;
};

struct C_001877F0 {
    char pad0[0x24];
    int f24;
    C_00187370 *f28;
    int func_001877F0(C_001877F0Param *param);
};

extern int D_0027AEE4;
extern int D_00289C80;
extern int D_00289C70;

void func_00186D60();
void *func_001E8A44(int size);
int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_00011FF0(void *p, int stride, int count, void *ctor);
#include "ghidra.h"
struct C_00187AF0 {
    void func_00187AF0(void);
};

struct C_001884D0 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    C_001884D0* func_001884D0(void);
};


void C_00187AF0::func_00187AF0(void)
{
  int func_001E891B(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    func_001E891B(*(int *)(in_ECX + 0x28));
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  return;
}

int __stdcall func_00188230(int a0) {
    int __stdcall func_001880A0(int);
    func_001880A0(a0);
    return 1;
}

C_001884D0* C_001884D0::func_001884D0(void) {
    extern int D_00289F70;
    unk4 = 0;
    unk0 = (int)&D_00289F70;
    unk8 = 0;
    unkC = 0;
    return this;
}

