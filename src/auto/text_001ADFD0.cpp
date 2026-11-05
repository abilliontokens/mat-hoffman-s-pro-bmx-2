/* 13 functions from 0x001ADFD0 to 0x001AED80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
struct C_001AEBB0 {
    undefined4 func_001AEBB0(byte param_1);
};

extern int D_0028C214;
extern int D_0028C208;
extern int D_0028C1A4;
extern int D_00284E94;
void func_001E891B(void *p);
void func_001E8390(void *p);

struct C_001ADFD0_Virt {
    virtual void v0(int a);
};

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001AE3E0_Vec4 {
    int x;
    int y;
    int z;
    int w;
};

struct C_001AE3E0_Sub {
    void *vtbl;
    int f4;
    C_001ADFD0_Virt *f8;
    void func_001D5480(void);
    void func_001D5490(void);
    void Init(void)
    {
        func_001D5480();
        f8 = 0;
        vtbl = &D_0028C208;
    }
};

struct C_001AE3E0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    char pad28[8];
    int f30;
    char pad34[4];
    C_001AE3E0_Vec4 *f38;
    C_001AE3E0_Vec4 *f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    C_001ADFD0_Virt *f54;
    C_001AE3E0_Sub f58;
    void *f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    char pad7C[8];
    unsigned char f84;
    C_001AE3E0 *func_001AE3E0(int param_1);
    void func_001AE460(void);
    void func_001AE4D0(int a, int b, int c, int d, int e, int f, int g, int h, int idx);
};

struct C_001AE7D0 {
    void *vtbl;
    C_001ADFD0_Virt *f4;
    void *func_001AE7D0(int flags);
};

void func_001E891B(void *p);
void __stdcall func_00201100(void *p);

struct C_001AEB70Obj {
    virtual void v0(int flags);
};

struct C_001AEB70 {
    void *vtbl;
    int f4;
    C_001AEB70Obj *f8;
    void func_001D5490(void);
    void *func_001AEB70(int flags);
};

struct C_001AE810Mgr {
    void func_001B26C0(int a0);
};

struct C_001AE810F10 {
    void func_0014A540(void);
};

struct C_001AE810F14 {
    void func_00012140(void);
};

extern C_001AE810Mgr *D_002AA6C0;

struct C_001AE810 {
    void *vtbl;
    C_001AEB70Obj *f4;
    int f8;
    int fC;
    C_001AE810F10 *f10;
    C_001AE810F14 *f14;
    int f18;
    void *f1C;
    void *f20;
    void func_001AE810(void);
};


C_001AE3E0 *C_001AE3E0::func_001AE3E0(int param_1)
{
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = &D_0028C214;
    f48 = 0;
    f44 = 0;
    f40 = 0;
    f4C = 0x3f800000;
    f58.func_001D5480();
    f58.f8 = 0;
    f58.vtbl = &D_0028C208;
    f6C = -1;
    f74 = -1;
    f70 = -1;
    f78 = -1;
    f50 = 0;
    f30 = 0;
    f38 = 0;
    f3C = 0;
    f64 = 0;
    f54 = 0;
    f68 = 0;
    f84 &= 0xf8;
    f24 = 1;
    return this;
}

void C_001AE3E0::func_001AE460(void)
{
    vtbl = &D_0028C214;
    if (f38) {
        func_001E891B(f38);
    }
    if (f3C) {
        func_001E891B(f3C);
    }
    if (f64) {
        func_001E8390(f64);
    }
    if (f54) {
        f54->v0(1);
    }
    f58.vtbl = &D_0028C208;
    if (f58.f8) {
        f58.f8->v0(1);
    }
    f58.func_001D5490();
    ((C_00157660 *)this)->func_00157660();
}

void C_001AE3E0::func_001AE4D0(int a, int b, int c, int d, int e, int f, int g, int h, int idx)
{
    f84 |= 2;
    C_001AE3E0_Vec4 *p = &f38[idx];
    p->x = a;
    p->y = b;
    p->z = c;
    p->w = d;
    p = &f3C[idx];
    p->x = e;
    p->y = f;
    p->z = g;
    p->w = h;
}

float __stdcall func_001AE530(float x, float y)
{
    extern float D_00278788;
    extern float D_0028AC88;
    float dx = x - D_00278788;
    float dy = y - D_0028AC88;

    return sqrtf(dx * dx + dy * dy);
}

void *C_001AE7D0::func_001AE7D0(int flags)
{
    vtbl = &D_0028C1A4;
    if (f4) {
        f4->v0(1);
    }
    vtbl = &D_00284E94;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001AE810::func_001AE810(void)
{
    extern int D_0028C1D0;
    extern int D_0028C1A4;
    extern int D_00284E94;
    C_001AE810F10 *p10;
    C_001AE810F14 *p14;

    vtbl = (void *)&D_0028C1D0;
    if (f1C != 0) {
        func_00201100(f1C);
    }
    if (f20 != 0) {
        func_00201100(f20);
    }
    D_002AA6C0->func_001B26C0(fC);
    p10 = f10;
    if (p10 != 0) {
        p10->func_0014A540();
        func_001E891B(p10);
    }
    p14 = f14;
    if (p14 != 0) {
        p14->func_00012140();
        func_001E891B(p14);
    }
    vtbl = (void *)&D_0028C1A4;
    if (f4 != 0) {
        f4->v0(1);
    }
    vtbl = (void *)&D_00284E94;
}

void *C_001AEB70::func_001AEB70(int flags)
{
    extern int D_0028C208;

    vtbl = (void *)&D_0028C208;
    if (f8 != 0) {
        f8->v0(1);
    }
    func_001D5490();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_001AEBB0::func_001AEBB0(byte param_1)
{
  int func_001AE460(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AE460();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
