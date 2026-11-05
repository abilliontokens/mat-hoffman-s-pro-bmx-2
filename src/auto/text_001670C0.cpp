/* 15 functions from 0x001670C0 to 0x00167FE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_00167750 {
    undefined4 func_00167750(void);
};

struct C_001677B0 {
    char pad0[0x358];
    int unk358;
    void func_001677B0(int a0);
};

extern int D_00287F64;
extern float D_00275544;
extern float D_00287EC8;
extern float D_00275460;
extern float D_00287EC4;
extern float D_00287EC0;
extern float D_002755EC;

void *func_001E8AA5(unsigned int size);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00167AC0_Sub {
    char pad0[0x8];
    void func_001D3F50(void);
};

struct C_00167AC0 {
    C_00167AC0_Sub subs[4];
    C_00167AC0 *func_00167AC0(void);
};

struct C_001676D0 {
    int *f0;
    int f4;
    C_001676D0 *func_001676D0(int n);
};

extern int D_00287EE4;
extern int D_00287FE4;
extern int D_002AA46C;
void func_001E891B(void *p);
void *func_001E8A44(int size);

/* object with a deleting-destructor in vtable slot 0 */
struct C_00167760_Obj {
    virtual void destroyObject(int flags);
};

/* stream object created by func_00144640 */
struct C_00167760_Stream {
    virtual void destroyObject(int flags);
    virtual void v1(int arg, int d);
    int f4;
    C_00167760_Stream *func_00144640(void);
};

struct C_0017A860 {
    void func_0017A860(void *owner);
};

void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);

extern u32 D_002EFB3C;
extern float D_002EFB2C;
extern float D_002EFB30;
extern float D_002EFB34;
extern float D_002EFB38;

struct S_00167860_Owner {
    char pad0[0xc0];
    char fC0[0x3c];
    char *fFC;
};

/* DXObjectShadowTweakItem */
struct C_00167860 {
    void *vtbl;
    char pad4[0xc];
    char f10[0x40];
    S_00167860_Owner *f50;
    int f54;
    int f58;
    int f5c;
    float f60;
    void func_00167860(void);
};

struct C_00167760 {
    void *vtbl;
    char pad4[0x20];
    C_0017A860 *f24;
    u32 f28;
    char pad2c[0x320];
    C_00167760_Stream *f34c;
    u32 f350;
    u32 f354;
    u32 f358;
    u32 f35c;
    C_00167760_Obj *f360;
    C_00167760 *func_00167760(int a0);
    C_00167760 *func_00167A70(int flags);
    C_00167760 *func_00167D10(C_0017A860 *owner, int b);
    void func_00157660(void);
    void func_001D3F50(void);
};

struct __declspec(align(16)) S_001677C0_Block {
    f32 m[16];
};

struct V4_001677C0 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    V4_001677C0(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct S_001677C0_Src {
    char pad0[0x70];
    S_001677C0_Block blk;
};

struct C_001677C0_Dst {
    char pad0[0x10];
    S_001677C0_Block blk;
    void *f50;
    V4_001677C0 v54;
};

struct C_001677C0 {
    char pad0[0x24];
    S_001677C0_Src *f24;
    void func_001677C0(C_001677C0_Dst *dst);
};


C_001676D0 *C_001676D0::func_001676D0(int n)
{
    float t;
    float tt;
    float b2;
    float s;
    float c1;
    float c2;
    void *mem;
    int i;

    n = n + 1;
    f4 = n;
    mem = func_001E8AA5(n * 4);
    t = D_00275544;
    f0 = (int *)mem;
    for (i = 0; i < f4; i++) {
        tt = t * t;
        b2 = D_00275460 - t * 0.948667f;
        s = tt * 0.2964f + b2;
        c1 = tt * t;
        c2 = c1 * 0.030333f;
        ((float *)f0)[i] = s - c2;
        t = t + D_002755EC / f4;
    }
    return this;
}

undefined4 C_00167750::func_00167750(void)
{
  int func_001D3F50(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D3F50();
  return in_ECX;
}

C_00167760 *C_00167760::func_00167760(int a0)
{
    ((C_00157600 *)this)->func_00157600(a0);
    f350 = 0;
    f28 = 0;
    f34c = 0;
    f360 = 0;
    vtbl = &D_00287F64;
    f358 = 0x43fa0000;
    f35c = 0x43c80000;
    return this;
}

void C_001677B0::func_001677B0(int a0) {
    unk358 = a0;
}

void C_001677C0::func_001677C0(C_001677C0_Dst *dst)
{
    C_001677C0 * volatile self = this;

    dst->f50 = self->f24;
    dst->blk = self->f24->blk;
    dst->blk.m[3] = 0.5f;
    dst->blk.m[7] = 0.5f;
    dst->v54 = V4_001677C0(1.0f, 1.0f, 1.0f, 0.3f);
}

void C_00167860::func_00167860(void)
{
    if (!(D_002EFB3C & 1)) {
        D_002EFB3C |= 1;
        D_002EFB2C = 0.0f;
        D_002EFB30 = 0.0f;
        D_002EFB34 = 0.0f;
        D_002EFB38 = 0.15f;
    }
    func_001FEC30(0xc, f10);
    func_001FEBD0(0x23, f50->fC0);
    func_001FEBD0(0x24, f50->fFC + 0x180);
    func_001FEBD0(0x25, &f54);
    func_001FEBD0(0x26, &D_002EFB2C);
}

C_00167760 *C_00167760::func_00167A70(int flags)
{
    vtbl = (void *)&D_00287F64;
    if (f360) {
        f360->destroyObject(1);
    }
    if (f34c) {
        f34c->destroyObject(1);
    }
    vtbl = (void *)&D_00287EE4;
    func_00157660();
    if (flags & 1) func_001E891B(this);
    return this;
}

C_00167AC0 *C_00167AC0::func_00167AC0(void)
{
    C_00167AC0_Sub *p = subs;
    int n = 4;

    do {
        p->func_001D3F50();
        p++;
        n--;
    } while (n != 0);
    return this;
}

C_00167760 *C_00167760::func_00167D10(C_0017A860 *owner, int b)
{
    C_00167760_Stream *s = (C_00167760_Stream *)func_001E8A44(0x14);
    if (s)
        s = s->func_00144640();
    else
        s = 0;
    f34c = s;
    s->v1(b, D_002AA46C);
    f354 = f34c->f4;
    if (owner) {
        func_001D3F50();
        f24 = owner;
        owner->func_0017A860(this);
        C_00167860 *p = (C_00167860 *)func_001E8A44(0x70);
        if (p) {
            p->vtbl = (void *)&D_00287FE4;
            p->f5c = 0;
            p->f58 = 0;
            p->f54 = 0;
            p->f60 = 1.0f;
        } else {
            p = 0;
        }
        f360 = (C_00167760_Obj *)p;
        return this;
    }
    return 0;
}

