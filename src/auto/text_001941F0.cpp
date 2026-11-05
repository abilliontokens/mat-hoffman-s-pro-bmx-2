/* 32 functions from 0x001941F0 to 0x00195190, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
extern int D_002A99B0;
extern const float D_00275544;
extern const float D_00275460;
struct C_00194520 {
 char pad0[0x34]; float f34, f38; char pad3C[0x10]; unsigned f4C, f50, f54; float f58; char pad5C[0x28]; float f84, f88, f8C, f90; char pad94[0x18]; int fAC; char padB0[0x30]; float fE0, fE4;
 int func_00194520(float dt, int a);
};
struct C_00194720 {
    undefined4 func_00194720(byte param_1);
};

extern int D_0028AD8C;
extern int D_0028AE14;
void func_001E891B(void *p);

struct S_Vec4 {
    float x;
    float y;
    float z;
    float w;
};

/* object with a position accumulator at +0x130 */
struct S_001941F0_Base0 {
    char pad0[0x130];
};

struct S_001941F0_Acc {
    float f130;
    float f134;
    float f138;
    void Add(S_Vec4 v) {
        f130 = v.x + f130;
        f134 = v.y + f134;
        f138 = v.z + f138;
    }
};

struct S_001941F0_Obj : S_001941F0_Base0, S_001941F0_Acc {
    char pad13C[0xD4];
    float f210;
};

struct C_001941F0 {
    char pad0[0x24];
    int f24;
    char pad28[4];
    float f2C;
    S_Vec4 f30;
    S_001941F0_Obj **f40;
    int func_001941F0(int a);
};

struct S_Vec4Int {
    int x;
    int y;
    int z;
    int w;
    S_Vec4Int *Set(int a, int b, int c, int d) {
        x = a;
        y = b;
        z = c;
        w = d;
        return this;
    }
    void Get(S_Vec4Int *out) {
        *out = *this;
    }
    void Assign(S_Vec4Int v) {
        *this = v;
    }
};

struct S_00194E60_Base {
    int f0;
    int f4;
};

struct C_00194E60 : S_00194E60_Base, S_Vec4Int {
    void func_00194E60(int a, int b, int c, int d);
    void func_00194E60(S_Vec4Int v);
    void func_00194E90(S_Vec4Int *out);
};

extern float D_00275AEC;
extern int D_0028AE90;
void *__cdecl func_001E8A44(unsigned int size);

/* a pair of clamped floats, the same shape _func_0008A9B0 walks */
struct S_00194490_Clamp {
    char pad0[0x10];
    float f10;
    float f14;
};

/* SignatureWave (run-time type information), slot 14 of its vtable */
struct SignatureWave {
    char pad0[0x24];
    S_00194490_Clamp **f24;
    char pad28[0x28];
    int f50;
    int f54;
    int func_00194490(void);
};

struct C_0012B8F0 {
    char pad0[0x30];
    S_Vec4 f30;
    int f40;
    C_0012B8F0 *func_0012B8F0(void);
    void func_0012C910(void *a, int b);
};

/* SimpleCutSceneCamera (run-time type information), base class CameraBehavior */
struct SimpleCutSceneCamera {
    void *vtbl;
    C_0012B8F0 *f4;
    float f8;
    float fC;
    float f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    void func_0012B510(void);
    SimpleCutSceneCamera *func_00194740(void);
    void func_00194790(void *a0, int a1, int a2);
    int func_001947E0(void *a0, int a1, int a2, int a3);
    void func_00194B40(S_Vec4 *p);
    void func_00194BD0(int a, int b, S_Vec4 *p);
};

extern S_Vec4 D_002A9A28;

struct C_00194EB0 {
    char pad0[0x18];
    S_Vec4Int f18;
    void func_00194EB0(S_Vec4Int v);
};

extern int D_0028AE90;
extern int D_002A9ADC;
extern int D_002A9AE0;
extern int D_002A9AE4;
extern int D_002A9AE8;

struct S_00194C80_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_00194C80 {
    void *vtbl;
    S_00194C80_Obj *f4;
    void func_0012B540(void);
    void *func_00194C80(int flags);
};

/* camera behaviour that owns four 16-byte vectors from +0x8 */
extern int D_0028AED0;
extern int D_002A9B0C, D_002A9B10, D_002A9B14, D_002A9B18;
extern int D_002A9AFC, D_002A9B00, D_002A9B04, D_002A9B08;
struct SimpleStillCamera {
 void *vtbl; int f4; S_Vec4Int f8, f18, f28, f38; float f48;
 void func_0012B510(void);
 SimpleStillCamera *func_00194CC0(void);
};
struct C_00194DC0 {
    int vtbl;
    int f4;
    S_Vec4Int f8;
    S_Vec4Int f18;
    S_Vec4Int f28;
    S_Vec4Int f38;
    int f48;
    void func_00194DC0(int a0, int *a1, S_Vec4Int *a2, S_Vec4Int *a3, int *a4, S_Vec4Int *a5, S_Vec4Int *a6, int *a7);
};

struct C_00194EE0 {
    int vtbl;
    int f4;
    char pad8[0x20];
    S_Vec4Int f28;
    void func_00194EE0(int a, int b, int c, int d);
    void func_00194EE0(S_Vec4Int v);
    void func_00194F10(S_Vec4Int *out);
};

struct C_00194280 {
    void *vtbl;
    char pad4[0x3C];
    void *f40;
    void func_00157660(void);
    void *func_00194280(int flags);
};

struct S_001942C0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001942C0 {
    void *vtbl;
    char pad4[0x20];
    S_001942C0_Obj **f24;
    char pad28[0x24];
    unsigned int f4C;
    void func_00157660(void);
    void func_001942C0(void);
};

struct C_00194310 {
    char pad0[0x44];
    int unk44;
    int unk48;
    void func_00194310(int a0, int a1);
};

struct C_00194C70 {
    char pad0[0xC];
    int unkC;
    char pad10[0x14];
    int unk24;
    int func_00194C70(void);
};

struct C_00194F90 {
    char pad0[0x48];
    int unk48;
    void func_00194F90(int a0);
};

struct C_00194F60 {
    char pad0[0x38];
    S_Vec4Int f38;
    void func_00194F60(S_Vec4Int v);
};

extern u32 D_002A9B44;
extern u32 D_002A9B48;
extern u32 D_002A9B4C;
extern u32 D_002A9B50;
extern int D_0028AF24;
extern const float D_00277D04;
void func_001E8390(void *p);

/* SimpleTVCamera (run-time type information), base class CameraBehavior */
struct C_00195090 {
    void *vtbl;
    float f4;
    float f8;
    int fC;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1C;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    void *f40;
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6C;
    u32 f70;
    u32 f74;
    u32 f78;
    void func_0012B510(void);
    void func_0012B540(void);
    C_00195090 *func_00195090(void);
    void func_00195130(void);
    void func_00195160(int a0, int a1, float a2);
};

struct C_00194DB0 {
    int unk0;
    void func_00194DB0(void);
};

struct C_00194C60 {
    char pad0[0x24];
    int unk24;
    void func_00194C60(void);
};


int C_001941F0::func_001941F0(int a)
{
    int i;
    S_001941F0_Obj **p = f40;

    for (i = 0; i < f24; i++) {
        f30.y = -((*p)->f210 * f2C);
        (*p)->Add(f30);
        p++;
    }
    return 1;
}

void *C_00194280::func_00194280(int flags)
{
    vtbl = (void *)&D_0028AD8C;
    if (f40 != 0) {
        func_001E891B(f40);
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001942C0::func_001942C0(void)
{
    unsigned int i;

    vtbl = (void *)&D_0028AE14;
    if (f24 != 0) {
        for (i = 0; i < f4C; i++) {
            S_001942C0_Obj *e = f24[i];
            if (e != 0) {
                e->v2();
            }
        }
        func_001E891B(f24);
    }
    func_00157660();
}

void C_00194310::func_00194310(int a0, int a1) {
    unk48 = a0;
    unk44 = a1;
}

int SignatureWave::func_00194490(void)
{
    if (f24 != 0) {
        S_00194490_Clamp *o = f24[f50];
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
        o = f24[f54];
        if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
        if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
    }
    return 1;
}

int C_00194520::func_00194520(float dt, int a) {
 if (!D_002A99B0 && fAC == 3) return 1;
 fE0 = dt + fE0;
 if (fE4 != D_00275544) {
 float frame = fE0 * fE4;
 int index = (int)frame;
 f58 = 1.0f - (frame - index);
 f50 = (unsigned)index % f4C;
 f54 = f50 + 1;
 if (f54 >= f4C) f54 = 0;
 } else { f50 = 0; f58 = 1.0f; f54 = 0; }
 f84 = (float)fmod(dt * f8C + f84, f34);
 f88 = (float)fmod(dt * f90 + f88, f38);
 return 1;
}

undefined4 C_00194720::func_00194720(byte param_1)
{
  int func_001942C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001942C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

SimpleCutSceneCamera *SimpleCutSceneCamera::func_00194740(void)
{
    func_0012B510();
    vtbl = (void *)&D_0028AE90;
    f4 = 0;
    fC = 0;
    f10 = 80.0f;
    f14 = 0;
    f2C = 0;
    f18 = 0;
    f8 = 30.0f;
    f1C = 0;
    f24 = 1;
    f28 = 1;
    f20 = 0;
    return this;
}

void SimpleCutSceneCamera::func_00194790(void *a0, int a1, int a2)
{
    f2C = a1;
    if (a0 != 0) {
        C_0012B8F0 *p = (C_0012B8F0 *)func_001E8A44(0x48);
        C_0012B8F0 *q = p ? p->func_0012B8F0() : 0;
        f4 = q;
        q->func_0012C910(a0, a2);
        f20 = f4->f40;
    }
}

int SimpleCutSceneCamera::func_001947E0(void *a0, int a1, int a2, int a3)
{
    if (a0 != 0) {
        func_00194790(a0, a1, a2);
        f28 = a3;
        return 1;
    }
    f28 = a3;
    return 1;
}

void SimpleCutSceneCamera::func_00194B40(S_Vec4 *p)
{
    f24 = 1;
    if (f14 == 1) {
        fC = (float)f4->f40 / f8;
    } else {
        fC = 0;
    }
    f1C = 0;
    f20 = f4->f40 - 1;
    f4->f30 = D_002A9A28;
    if (p != 0) {
        f4->f30 = *p;
    }
    f18 = 0;
}

void SimpleCutSceneCamera::func_00194BD0(int a, int b, S_Vec4 *p)
{
    f24 = 1;
    fC = (float)a / f8;
    if (a < b) {
        f14 = 0;
        f1C = a;
        f20 = b;
    } else {
        f14 = 1;
        f1C = b;
        f20 = a;
    }
    f4->f30 = D_002A9A28;
    if (p != 0) {
        f4->f30 = *p;
    }
}

void C_00194C60::func_00194C60(void) {
    unk24 = 0;
}

int C_00194C70::func_00194C70(void) {
    unkC = 0;
    unk24 = 0;
    return 1;
}

void *C_00194C80::func_00194C80(int flags)
{
    vtbl = (void *)&D_0028AE90;
    if (f4 != 0) {
        f4->v2();
    }
    func_0012B540();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00194DB0::func_00194DB0(void) {
    extern int D_0028AED0;
    int func_0012B540(...);
    unk0 = (int)&D_0028AED0;
    func_0012B540();
}

void C_00194DC0::func_00194DC0(int a0, int *a1, S_Vec4Int *a2, S_Vec4Int *a3, int *a4, S_Vec4Int *a5, S_Vec4Int *a6, int *a7)
{
    *a2 = f8;
    *a5 = f18;
    *a3 = f28;
    *a6 = f38;
    *a4 = f48;
    *a7 = 0;
    *a1 = f4;
}

void C_00194E60::func_00194E60(S_Vec4Int v)
{
    Assign(v);
}

void C_00194E60::func_00194E90(S_Vec4Int *out)
{
    Get(out);
}

void C_00194EB0::func_00194EB0(S_Vec4Int v)
{
    f18 = v;
}

void C_00194EE0::func_00194EE0(S_Vec4Int v)
{
    f28 = v;
}

void C_00194EE0::func_00194F10(S_Vec4Int *out)
{
    if (f4 == 0) {
        out->x = D_002A9ADC;
        out->y = D_002A9AE0;
        out->z = D_002A9AE4;
        out->w = D_002A9AE8;
    } else {
        *out = f28;
    }
}

void C_00194F60::func_00194F60(S_Vec4Int v)
{
    f38 = v;
}

void C_00194F90::func_00194F90(int a0) {
    unk48 = a0;
}

C_00195090 *C_00195090::func_00195090(void)
{
    u32 *p;

    func_0012B510();
    vtbl = (void *)&D_0028AF24;
    p = &f10;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f28;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f4C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f5C;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f20 = 0;
    f24 = 0;
    f4 = 60.0f;
    f28 = D_002A9B44;
    f2C = D_002A9B48;
    f30 = D_002A9B4C;
    f34 = D_002A9B50;
    f48 = 0;
    f3C = 0;
    f44 = 0;
    f40 = 0;
    f6C = 0;
    f70 = 0;
    f74 = 0;
    f78 = 0;
    f38 = 0xffffffff;
    return this;
}

void C_00195090::func_00195130(void)
{
    void *p = f40;

    vtbl = (void *)&D_0028AF24;
    if (p != 0) {
        func_001E8390(p);
    }
    func_0012B540();
}

void C_00195090::func_00195160(int a0, int a1, float a2)
{
    f24 = a0;
    f20 = 0;
    f8 = a2 * 1.46666f;
    fC = a1;
}

