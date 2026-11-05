/* 9 functions from 0x0005A8F0 to 0x0005B8D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" char *strcpy(char *, const char *);
struct C_0005B220 {
    void func_0005B220(void);
};

struct C_0005B870 {
    char pad0[0xCD0];
    int unkCD0;
    int func_0005B870(void);
};

struct S_2E0 {
    char pad0[0xC];
    int fC;
    char pad10[8];
    int f18;
    int f1C;
    char pad20[0x2DC];
    int f2FC;
    char pad300[0x8C];
    int f38C;
    char pad390[0xD0];
    int f460;
    int f464;
};

struct S_2A8490 {
    char pad0[0x2E0];
    S_2E0 *f2E0;
};

extern S_2A8490 *D_002A8490;

struct C_000952A0 {
    int func_000952A0(int i);
};

struct C_00095250 {
    int func_00095250(int i);
};

struct C_0005B850 {
    char pad0[0xCD0];
    char unkCD0[1];
    void func_0005B850(char *src);
};

struct C_0005B730 {
    char pad0[0x258];
    int f258, f25C, f260, f264, f268, f26C;
    void func_0005B730(void);
    void func_0005B7C0(void);
};

struct S_Pair {
    int a;
    int b;
};

struct C_0005B880 {
    char pad0[0xCF0];
    S_Pair pairs[0x12];
    void func_0005B880(void);
};


void C_0005B220::func_0005B220(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(in_ECX + 0x300);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  return;
}

void C_0005B730::func_0005B730(void)
{
    f258 = D_002A8490->f2E0->f18;
    f25C = D_002A8490->f2E0->f1C;
    f260 = D_002A8490->f2E0->fC;
    f264 = D_002A8490->f2E0->f38C;
    f268 = D_002A8490->f2E0->f460;
    f26C = D_002A8490->f2E0->f464;
}

void C_0005B730::func_0005B7C0(void)
{
    D_002A8490->f2E0->f18 = f258;
    D_002A8490->f2E0->f1C = f25C;
    D_002A8490->f2E0->fC = f260;
    D_002A8490->f2E0->f38C = f264;
    D_002A8490->f2E0->f460 = f268;
    D_002A8490->f2E0->f464 = f26C;
}

void C_0005B850::func_0005B850(char *src)
{
    strcpy(unkCD0, src);
}

int C_0005B870::func_0005B870(void) {
    return (int)&unkCD0;
}

void C_0005B880::func_0005B880(void)
{
    int i;

    for (i = 0; i < 0x12; i++) {
        pairs[i].a = ((C_000952A0 *)D_002A8490->f2E0->f2FC)->func_000952A0(i);
        pairs[i].b = ((C_00095250 *)D_002A8490->f2E0->f2FC)->func_00095250(i);
    }
}

