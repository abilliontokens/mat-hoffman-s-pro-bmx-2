/* 32 functions from 0x001941F0 to 0x00195190, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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
};

struct S_00194E60_Base {
    int f0;
    int f4;
};

struct C_00194E60 : S_00194E60_Base, S_Vec4Int {
    void func_00194E60(int a, int b, int c, int d);
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
    char pad0[0x40];
    int f40;
    C_0012B8F0 *func_0012B8F0(void);
    void func_0012C910(void *a, int b);
};

/* SimpleCutSceneCamera (run-time type information), base class CameraBehavior */
struct SimpleCutSceneCamera {
    void *vtbl;
    C_0012B8F0 *f4;
    float f8;
    int fC;
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

void C_00194C60::func_00194C60(void) {
    unk24 = 0;
}

int C_00194C70::func_00194C70(void) {
    unkC = 0;
    unk24 = 0;
    return 1;
}

void C_00194DB0::func_00194DB0(void) {
    extern int D_0028AED0;
    int func_0012B540(...);
    unk0 = (int)&D_0028AED0;
    func_0012B540();
}

void C_00194E60::func_00194E60(int a, int b, int c, int d)
{
    Set(a, b, c, d);
}

void C_00194E60::func_00194E90(S_Vec4Int *out)
{
    Get(out);
}

void C_00194F90::func_00194F90(int a0) {
    unk48 = a0;
}

