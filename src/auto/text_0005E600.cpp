/* 13 functions from 0x0005E600 to 0x0005F3C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0005E9D0 {
    void func_0005E9D0(float param_1);
};

struct C_0005E9F0 {
    void func_0005E9F0(int param_1);
};

void func_001E891B(void *p);

struct C_0005E790 {
    int unk0;
    void func_00157660(void);
    void *func_0005E790(int flags);
};

struct C_0005E7C0 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x4c];
    unsigned char f58;
    void func_0005E7C0(float param_1, float param_2);
};

struct C_0005E800 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x4c];
    unsigned char f58;
    void func_0005E800(int param_1, int param_2);
};

struct C_0005E920 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x42];
    unsigned char f4e;
    void func_0005E920(float param_1, float param_2);
};


void *C_0005E790::func_0005E790(int flags)
{
    extern int D_00278484;
    unk0 = (int)&D_00278484;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0005E7C0::func_0005E7C0(float param_1, float param_2)
{
    if (f4 != param_1 || f8 != param_2) {
        f4 = param_1;
        f8 = param_2;
        f58 |= 1;
    }
}

void C_0005E9D0::func_0005E9D0(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x34) != param_1) {
    *(float *)(in_ECX + 0x34) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 6;
  }
  return;
}

void C_0005E9F0::func_0005E9F0(int param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x44) != param_1) {
    *(int *)(in_ECX + 0x44) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 6;
  }
  return;
}
