/* 18 functions from 0x00197B90 to 0x00198B70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_001982F0 {
    void func_001982F0(void);
};

struct C_000264C0 {
    void func_000264C0(void *src);
};

struct C_00197EA0 {
    char padB0[0xB0];
    void func_00197EA0(void *dst);
};

struct C_00197EC0_Vec4 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00197EC0 {
    char padF0[0xF0];
    float fF0;
    float fF4;
    float fF8;
    char padFC[4];
    float f100;
    float f104;
    float f108;
    char pad10C[4];
    float f110;
    float f114;
    float f118;
    void func_00197AA0(void);
    C_00197EC0_Vec4 func_00197EC0(float *v);
};

/* SceneNode: children list at 0x174 (siblings) and 0x178 (first child chain) */
struct C_00198230 {
    char pad0[0x174];
    C_00198230 *f174;
    C_00198230 *f178;
    C_00198230 *f17C;
    void func_00198230(C_00198230 *child);
    int func_00198270(void);
};

struct C_00197E70 {
    void func_00197E70(undefined4 *param_1);
};

struct C_001983A0 {
    void func_001983A0(void);
};

struct C_00198390 {
    void func_00198390(void);
};


void C_00197E70::func_00197E70(undefined4 *param_1)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xbc);
  param_1[1] = *(undefined4 *)(in_ECX + 0xcc);
  param_1[2] = *(undefined4 *)(in_ECX + 0xdc);
  return;
}

void C_001982F0::func_001982F0(void)
{
  int in_ECX = (int)this;
  int iVar1;
  int *piVar2;
  
  *(byte *)(in_ECX + 0x180) = *(byte *)(in_ECX + 0x180) | 0x80;
  piVar2 = (int *)(in_ECX + 0x170);
  for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x170)) {
    iVar1 = *piVar2;
    *(byte *)(iVar1 + 0x180) = *(byte *)(iVar1 + 0x180) | 0x80;
    piVar2 = (int *)(iVar1 + 0x170);
  }
  return;
}

void C_00198390::func_00198390(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) | 4;
  return;
}

void C_001983A0::func_001983A0(void)
{
  int in_ECX = (int)this;
  
  *(byte *)(in_ECX + 0x27) = *(byte *)(in_ECX + 0x27) & 0xfb;
  return;
}

