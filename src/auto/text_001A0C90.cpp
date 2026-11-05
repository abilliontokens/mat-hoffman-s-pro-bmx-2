/* 19 functions from 0x001A0C90 to 0x001A1C90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001A1650 {
    undefined4 func_001A1650(undefined4 *param_1);
};

struct C_001A1620 {
    undefined4 func_001A1620(undefined4 *param_1);
};

struct C_001A15F0 {
    undefined4 func_001A15F0(undefined4 *param_1);
};

struct C_001A15C0 {
    undefined4 func_001A15C0(undefined4 *param_1);
};

struct C_001A1850 {
    bool func_001A1850(void);
};

extern int D_0028B3A0;
void func_001CBC10(int e, void *file, int line);

/* returns true (and reports) when hr is a failure code */
static inline int CheckFailed(int hr, int line) {
    if (hr < 0) {
        func_001CBC10(hr, &D_0028B3A0, line);
        return 1;
    }
    return 0;
}

struct V3_001A1540 {
    float x, y, z;
};

/* object held at +4 of C_001A13F0 */
struct S_001A13F0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0x18 - 4];
    V3_001A1540 unk18;
    char pad24[4];
    V3_001A1540 unk28;
    int func_001D7D00(void);
    int func_001D6C40(int a, int b);
};

struct C_001A13F0 {
    char pad0[4];
    S_001A13F0_Obj *unk4;
    void func_001A13F0(void);
    int func_001A1410(void);
    int func_001A1450(int a);
    int func_001A14A0(int a);
    int func_001A14F0(int a);
    int func_001A1540(V3_001A1540 *a, V3_001A1540 *b);
    int func_001A1580(V3_001A1540 *a, V3_001A1540 *b);
};

/* object held at +0x1BC of C_001A1C70 */
struct S_001A1C70_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int v8(int a);
    void func_001CB560(S_001A1C70_Obj *old);
};

struct C_001A1C70 {
    char pad0[0x1BC];
    S_001A1C70_Obj *unk1BC;
    int func_001A1C70(int a);
    int func_001A1B60(S_001A1C70_Obj *obj);
};

struct S_001A1860_Buf {
    int a[9];
};

struct S_001A1860_Quad {
    int a[4];
};

int func_001D3F50(void);

struct C_001A1860 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0x38];
    S_001A1860_Buf unk3C;
    char pad60[0x10];
    S_001A1860_Quad unk70;
    S_001A1860_Quad unk80;
    char pad90[0x8];
    int unk98;
    char pad9C[0x104];
    u8 unk1A0;
    char pad1A1[0x3];
    int unk1A4;
    int unk1A8;
    int unk1AC;
    int func_001A1860(S_001A1860_Buf buf, S_001A1860_Quad q70, S_001A1860_Quad q80,
                      int a18, int a19, int a20, int a21, int a22);
};


void C_001A13F0::func_001A13F0(void)
{
    if (unk4 != 0) {
        unk4->v2();
        unk4 = 0;
    }
}

int C_001A13F0::func_001A1410(void)
{
    if (unk4 == 0) return 0;
    return !CheckFailed(unk4->func_001D7D00(), 0x45);
}

int C_001A13F0::func_001A1450(int a)
{
    if (unk4 == 0) return 0;
    return !CheckFailed(unk4->func_001D6C40(a, 1), 0x51);
}

int C_001A13F0::func_001A14A0(int a)
{
    if (unk4 == 0) return 0;
    return !CheckFailed(unk4->func_001D6C40(a, 1), 0x5d);
}

int C_001A13F0::func_001A14F0(int a)
{
    if (unk4 == 0) return 0;
    return !CheckFailed(unk4->func_001D6C40(a, 1), 0x69);
}

int C_001A13F0::func_001A1540(V3_001A1540 *a, V3_001A1540 *b)
{
    S_001A13F0_Obj *o = unk4;
    if (o == 0) return 0;
    a->x = o->unk18.x;
    a->y = o->unk18.y;
    a->z = o->unk18.z;
    b->x = o->unk28.x;
    b->y = o->unk28.y;
    b->z = o->unk28.z;
    return 1;
}

int C_001A13F0::func_001A1580(V3_001A1540 *a, V3_001A1540 *b)
{
    int *src;
    int *obj = (int *)unk4;
    if (obj == 0) return 0;
    src = (int *)a;
    obj[6] = src[0];
    obj[7] = src[1];
    obj[8] = src[2];
    src = (int *)b;
    obj[10] = src[0];
    obj[11] = src[1];
    obj[12] = src[2];
    return 1;
}

undefined4 C_001A15C0::func_001A15C0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(iVar1 + 8);
  param_1[1] = *(undefined4 *)(iVar1 + 0xc);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return 1;
}

undefined4 C_001A15F0::func_001A15F0(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 8) = *param_1;
  *(undefined4 *)(iVar1 + 0xc) = param_1[1];
  *(undefined4 *)(iVar1 + 0x10) = param_1[2];
  return 1;
}

undefined4 C_001A1620::func_001A1620(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x38);
  param_1[1] = *(undefined4 *)(iVar1 + 0x3c);
  param_1[2] = *(undefined4 *)(iVar1 + 0x40);
  return 1;
}

undefined4 C_001A1650::func_001A1650(undefined4 *param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x38) = *param_1;
  *(undefined4 *)(iVar1 + 0x3c) = param_1[1];
  *(undefined4 *)(iVar1 + 0x40) = param_1[2];
  return 1;
}

bool C_001A1850::func_001A1850(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x1bc) != 0;
}

int C_001A1C70::func_001A1B60(S_001A1C70_Obj *obj)
{
    if (obj != 0 && unk1BC != obj) {
        obj->func_001CB560(unk1BC);
    }
    unk1BC = obj;
    return 1;
}

int C_001A1C70::func_001A1C70(int a)
{
    if (unk1BC == 0) return 0;
    return unk1BC->v8(a);
}

