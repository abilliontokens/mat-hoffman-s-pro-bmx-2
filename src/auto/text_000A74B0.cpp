/* 15 functions from 0x000A74B0 to 0x000A84A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"

extern int D_0027B1A4;
extern int D_0027C1E4;
void *func_001E8A44(int size);

struct Slots_000A74B0 {
    int a0[10];
    int a28[10];
    int a50[10];
    int a78[10];
    int aA0[10];
    int aC8[10];
    int aF0[10];
    int a118[10];
    int count;
    void func_000A74B0(void);
};

struct Model_000A77C0 {
    void *vtbl;
    int f4;
};

struct Model60_000A77C0 : Model_000A77C0 {
    Model60_000A77C0 *func_001B5790(void);
};

struct Model1B0_000A77C0 : Model_000A77C0 {
    void func_001B5110(void);
};

struct Models_000A77C0 {
    char pad0[0x28];
    Model_000A77C0 **f28;
    void func_000A77C0(int type, int idx);
};

struct GrindElem_000A8360 {
    char b;
    char pad1[0x77];
};

struct GrindTrigger_000A8360 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    char f24;
    char pad25[0x128 - 0x25];
    GrindElem_000A8360 e[6];
    int f3F8;
    int f3FC;
    int f400;
    int f404;
    GrindTrigger_000A8360 *func_000A8360(void);
};

struct C_000A7530 {
    void func_000A7530(void);
};

struct C_000A7500 {
    void func_000A7500(void);
};

struct C_000A7560 {
    char pad0[0xF0];
    int unkF0;
    void func_000A7560(void);
};


void C_000A7500::func_000A7500(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 1;
  if (1 < *(int *)(in_ECX + 0x140)) {
    puVar2 = (undefined4 *)(in_ECX + 0x7c);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x140));
  }
  return;
}

void C_000A7530::func_000A7530(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x140)) {
    puVar2 = (undefined4 *)(in_ECX + 200);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x140));
  }
  return;
}

void C_000A7560::func_000A7560(void) {
    unkF0 = 0;
}
