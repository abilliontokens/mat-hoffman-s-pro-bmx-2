/* 8 functions from 0x000377E0 to 0x00038760, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00037820 {
    undefined4 func_00037820(int param_1);
};

struct C_000377E0 {
    int func_000377E0(void);
};

extern int D_00276CE4;
extern int D_002A8490;
void func_001E891B(void *p);
void __stdcall func_00035300(void *a, int b);

struct C_000378A0 {
    int unk0;
    void func_00157660();
    void *func_000378A0(int flags);
};

struct C_000377F0 {
    int count;
    int *items;
    undefined4 func_000377F0(int param_1);
};

struct S_00037840_A {
    char pad0[0x64];
    int f64;
};

struct S_00037840_B {
    char pad0[0x24];
    int f24;
    char pad28[0xB4];
    int fDC;
    void func_001BB4D0(int a);
};


int C_000377E0::func_000377E0(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x5a0) - *(int *)(in_ECX + 0x484);
}

undefined4 C_00037820::func_00037820(int param_1)
{
  int* in_ECX = (int*)this;
  
  if (((0 < *in_ECX) && (in_ECX[1] != 0)) && (param_1 < *in_ECX)) {
    return *(undefined4 *)(in_ECX[1] + param_1 * 4);
  }
  return 0;
}

