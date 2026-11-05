/* 15 functions from 0x000A74B0 to 0x000A84A0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"

extern int D_0027B1A4;
extern int D_0027C1E4;
void *func_001E8A44(int size);
void func_001E891B(void *p);

struct Path_000A8450 {
    void func_001B6590(void *p);
};

struct Node_000A8450 {
    virtual void vf0();
    virtual void vf1(void *p, int flag);
    int f4;
    char pad8[0x17c];
    char f184[0x104];
    Path_000A8450 *f288;
};

struct SlotsR_000A74B0 {
    int a0[10];
    int a28[10];
    int a50[10];
    int a78[10];
    int aA0[10];
    int aC8[10];
    int aF0[10];
    int a118[10];
    int count;
    SlotsR_000A74B0 *func_000A74B0(void);
};

struct Model_000A77C0 {
    void *vtbl;
    int f4;
    void SetType(int t) { f4 = t; }
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
    Node_000A8450 **f8;
    void *fC;
    void *f10;
    void *f14;
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


SlotsR_000A74B0 *SlotsR_000A74B0::func_000A74B0(void)
{
    int i;

    for (i = 0; i < 10; i++) {
        a0[i] = -2;
        a28[i] = -2;
        a50[i] = 1;
        a118[i] = 0;
        a78[i] = 0;
        aA0[i] = 1;
        aC8[i] = 0;
        aF0[i] = 1;
    }
    count = 0;
    return this;
}

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

void Models_000A77C0::func_000A77C0(int type, int idx)
{
    if (type == 2) {
        Model60_000A77C0 *p = (Model60_000A77C0 *)func_001E8A44(0x60);

        if (p != 0) {
            p = p->func_001B5790();
        } else {
            p = 0;
        }
        *(Model_000A77C0 **)((char *)f28 + idx * 4) = p;
    } else {
        Model1B0_000A77C0 *p = (Model1B0_000A77C0 *)func_001E8A44(0x1b0);

        if (p != 0) {
            p->func_001B5110();
            p->vtbl = (void *)&D_0027B1A4;
        } else {
            p = 0;
        }
        *(Model_000A77C0 **)((char *)f28 + idx * 4) = p;
        type = 1;
    }
    (*(Model_000A77C0 **)((char *)f28 + idx * 4))->f4 = type;
}

GrindTrigger_000A8360 *GrindTrigger_000A8360::func_000A8360(void)
{
    int i;

    vtbl = (void *)&D_0027C1E4;
    f4 = 0;
    f8 = 0;
    f10 = 0;
    f14 = 0;
    f18 = 0;
    f1C = 0;
    fC = 0;
    f24 = 0;
    for (i = 0; i < 6; i++) {
        e[i].b = 0;
    }
    f3F8 = 0;
    f3FC = 0;
    f400 = 0;
    f404 = 0;
    f20 = 0;
    return this;
}

