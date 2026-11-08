/* 10 functions from 0x00017CE0 to 0x000186F0, found by Ghidra. */
#include "common.h"

int func_00011260(int lo, int hi);

struct C_0004AAD0 {
    void func_0004AAD0();
};

struct C_0001CE80 {
    void func_0001CE80(void *a, void *b, void *c, float d, float e);
};

/* global game state */
struct S_002A8490 {
    char pad0[4];
    C_0001CE80 *f4;
    char pad8[0x230];
    int f238;
    char pad23c[0x68];
    C_0004AAD0 *f2a4;
};
extern S_002A8490 *D_002A8490;
extern int D_002A0718;

struct S_TikiObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
    virtual void v6();
    virtual int v7();
};

struct S_00017CE0_Arg {
    int f0;
    int f4;
};

struct C_001C6F90 {
    void func_001C6F90(S_00017CE0_Arg *a, int b, int c);
};

struct S_00017DA0_Item;
struct S_00017DA0_Vec;

/* AiTikiGod */
struct AiTikiGod {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0x398];
    S_00017DA0_Item *f39c[2];
    char pad3a4[0x10c];
    S_TikiObj *f4b0[8];
    int f4d0;
    char pad4d4[0x1c];
    int f4f0;
    char pad4f4[0x14];
    char f508[4];
    u32 f50c;
    char pad510[0x264];
    int f774;
    void func_00017CE0(S_00017CE0_Arg *a, int b, int c);
    void func_00017E90(S_00017DA0_Vec *a, float *b);
    void func_00017D00();
    void func_00017D20(int param_1);
    void func_00017DA0();
    void func_001C7310(int a0);
    AiTikiGod *func_000185A0(int a0);
};

struct S_00017DA0_Vec {
    float x, y, z, w;
};

struct S_00017DA0_Dev {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    void func_0011CA60(S_00017DA0_Vec v);
};

struct S_00017DA0_Item {
    char pad0[0x24];
    S_00017DA0_Dev *f24;
    char pad28[0x74];
    u8 f9c;
    void func_001587F0(float t, S_00017DA0_Vec a, S_00017DA0_Vec b);
};

struct S_00017E90_Vec3 {
    float x, y, z;
};

extern float D_002757F4;
extern float *func_00016DD0(float *dst, float *src);

static __forceinline void vec3_set(float *out, float x, float y, float z)
{
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

static __forceinline void vec3_set(S_00017DA0_Vec *out, float x, float y, float z)
{
    out->x = x;
    out->y = y;
    out->z = z;
    out->w = 1.0f;
}

struct S_00017DA0_Ref {
    void func_00199A70(int a, S_00017DA0_Vec *out);
};

/* owner of the Tiki AI states: vtable-less game object */
struct S_TikiOwner {
    char pad0[0x4d4];
    int f4d4;
    char pad4d8[0x4f0 - 0x4d8];
    int f4f0;
    int f4f4;
    char pad4f8[0x730 - 0x4f8];
    int f730;
    char pad734[0x73c - 0x734];
    int f73c;
    int f740;
    int f744;
    void func_00017760();
    void func_001C6DA0(int a, int b);
};

/* TikiEvadeState */
struct TikiEvadeState {
    void *vtbl;
    char pad4[4];
    S_TikiOwner *owner;
    int fc;
    int f10;
    int f14;
    void func_00018340();
};

/* TikiHuntState */
struct TikiHuntState {
    void *vtbl;
    char pad4[4];
    S_TikiOwner *owner;
    int fc;
    int f10;
    int f14;
    int f18;
    void func_000180F0();
};

/* TikiBlockState */
struct TikiBlockState {
    void *vtbl;
    char pad4[4];
    S_TikiOwner *owner;
    int fc;
    void func_00018390();
};

extern float D_00275804;
extern float D_00275800;
extern float D_002757FC;
S_00017DA0_Vec *func_00011110(S_00017DA0_Vec *out, S_00017DA0_Vec *a, S_00017DA0_Vec *b);
float func_00011170(S_00017DA0_Vec *v);
S_00017DA0_Vec *func_00011140(S_00017DA0_Vec *out, S_00017DA0_Vec *v, float s);
S_00017DA0_Vec *func_000110E0(S_00017DA0_Vec *out, S_00017DA0_Vec *a, S_00017DA0_Vec *b);

struct S_00017FA0_Ref {
    char pad0[0x24];
    int f24;
    void func_0008AB90(int a);
};

struct S_00017FA0_this {
    char pad0[0xc4];
    int fc4;
    char padc8[0x384 - 0xc8];
    S_00017FA0_Ref *f384;
    char pad388[4];
    int f38c;
    char pad390[4];
    int f394;
    char pad398[0x4d4 - 0x398];
    int f4d4;
    char pad4d8[0x4f4 - 0x4d8];
    int f4f4;
    char pad4f8[0x508 - 0x4f8];
    S_00017DA0_Vec f508;
    S_00017DA0_Vec f518;
    char pad528[0x734 - 0x528];
    int f734;
    int f738;
    void func_00017FA0(S_00017DA0_Vec *a, S_00017DA0_Vec *b);
};

void AiTikiGod::func_00017CE0(S_00017CE0_Arg *a, int b, int c)
{
    if (f4f0 == 0) {
        a->f4 = f50c;
        return;
    }
    ((C_001C6F90 *)this)->func_001C6F90(a, b, c);
}

void AiTikiGod::func_00017D00()
{
    D_002A8490->f2a4->func_0004AAD0();
    v4();
}

void AiTikiGod::func_00017D20(int param_1)
{
    if (func_00011260(0, 100) < param_1) {
        int i = func_00011260(0, 1);
        if (f4b0[i]->v7() == 0) {
            D_002A8490->f4->func_0001CE80(f4b0[i], f508, &D_002A0718, 10.0f, 750.0f);
            f4b0[i]->v5(4);
        }
    }
}

void AiTikiGod::func_00017DA0()
{
    S_00017DA0_Item **p;
    S_00017DA0_Vec out;
    int found = 0;
    int i;

    for (i = 0, p = (S_00017DA0_Item **)((char *)this + 0x39c); i < 2; i++, p++) {
        if (!((*p)->f9c & 2)) {
            found = i;
            break;
        }
    }
    out.z = 0;
    out.y = 0;
    out.x = 0;
    out.w = 1.0f;
    (*(S_00017DA0_Ref **)((char *)this + 0x498))->func_00199A70(0, &out);
    *(int *)((char *)this + 0x4d0) = found;
    (*(S_00017DA0_Item **)((char *)this + 0x39c + found * 4))->f24->func_0011CA60(out);
    (*(S_00017DA0_Item **)((char *)this + 0x39c + *(int *)((char *)this + 0x4d0) * 4))->f24->v30();
    (*(S_00017DA0_Item **)((char *)this + 0x39c + *(int *)((char *)this + 0x4d0) * 4))->f24->func_0011CA60(out);
}

void AiTikiGod::func_00017E90(S_00017DA0_Vec *a, float *b)
{
    float *p = func_00016DD0(b, b);
    S_00017DA0_Vec v;

    vec3_set(&v, p[0] * 180.0f, p[1] * 180.0f, p[2] * 180.0f);
    f39c[f4d0]->func_001587F0((float)(u32)(D_002A8490->f238 + 10000), *a, v);
    if (func_00011260(0, 100) > 50) {
        D_002A8490->f4->func_0001CE80(f4b0[2], f508, &D_002A0718, 10.0f, 300.0f);
        f4b0[2]->v5(4);
    }
    f774++;
}

void S_00017FA0_this::func_00017FA0(S_00017DA0_Vec *a, S_00017DA0_Vec *b)
{
    S_00017DA0_Vec u;
    S_00017DA0_Vec d;
    float len;

    if (f4f4 != 1 && f384->f24 == f38c && fc4 != f734 && fc4 != f738) {
        int chance = f4d4 < 500 ? 40 : 25;
        if (func_00011260(1, 100) <= chance) {
            func_00011110(&u, &f508, a);
            len = func_00011170(&u);
            if (!(len < D_00275804)) {
                S_00017DA0_Vec *n = (S_00017DA0_Vec *)func_00016DD0((float *)b, (float *)b);
                func_000110E0(&u, a, func_00011140(&d, n, len));
                if (func_00011170(func_00011110(&d, &u, &f508)) <= D_00275800) {
                    u.y -= D_002757FC;
                    f518 = u;
                    f384->func_0008AB90(f394);
                }
            }
        }
    }
}

void TikiHuntState::func_000180F0()
{
    fc = 0;
    f10 = 0;
    f18 = D_002A8490->f238 + 0x5dc;
    if (owner->f4f0 == 1) {
        owner->func_001C6DA0(owner->f730, 1);
    } else {
        owner->func_001C6DA0(owner->f744, 1);
    }
}

void TikiEvadeState::func_00018340()
{
    owner->func_00017760();
    owner->func_001C6DA0(owner->f740, 1);
    f14 = 0;
    fc = D_002A8490->f238 + 2000;
    owner->f4f4 = 1;
}

void TikiBlockState::func_00018390()
{
    S_TikiOwner *o = owner;
    if (o->f4d4 > 500) {
        fc = D_002A8490->f238 + 2000;
    } else {
        fc = D_002A8490->f238 + 0xdac;
    }
    o->func_001C6DA0(o->f73c, 1);
}

extern int D_00275854;
AiTikiGod *AiTikiGod::func_000185A0(int a0)
{
    int i;
    int *p;
    func_001C7310(a0);
    *(void **)this = &D_00275854;
    p = (int *)((char *)this + 0x3c0);
    for (i = 0; i < 6; i++, p += 10) { p[1] = 0; p[0] = 0; p[-1] = 0; p[2] = 0x3f800000; }
    p = (int *)((char *)this + 0x4f8);
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p = (int *)((char *)this + 0x508);
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p = (int *)((char *)this + 0x518);
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    *(int *)((char *)this + 0x384) = 0;
    *(int *)((char *)this + 0x388) = 0;
    *(int *)((char *)this + 0x38c) = 0;
    *(int *)((char *)this + 0x390) = 0;
    *(int *)((char *)this + 0x394) = 0;
    *(int *)((char *)this + 0x398) = 0;
    *(int *)((char *)this + 0x49c) = 0;
    *(int *)((char *)this + 0x494) = 0;
    *(int *)((char *)this + 0x4a8) = 0;
    *(int *)((char *)this + 0x4b0) = 0;
    *(int *)((char *)this + 0x4ac) = 0;
    *(int *)((char *)this + 0x4b4) = 0;
    *(int *)((char *)this + 0x4b8) = 0;
    *(int *)((char *)this + 0x4bc) = 0;
    *(int *)((char *)this + 0x4c0) = 0;
    *(int *)((char *)this + 0x498) = 0;
    *(int *)((char *)this + 0x4a0) = 0;
    *(int *)((char *)this + 0x4e4) = 0;
    *(int *)((char *)this + 0x4a4) = 0;
    p = (int *)((char *)this + 0x3a8);
    for (i = 0; i < 6; i++, p += 10) { p[-1] = 0; p[0] = 0; }
    for (i = 0; i < 2; i++) f39c[i] = 0;
    *(int *)((char *)this + 0x4d8) = 0;
    *(int *)((char *)this + 0x4d0) = 0;
    *(int *)((char *)this + 0x76c) = 0;
    *(int *)((char *)this + 0x770) = 0;
    *(int *)((char *)this + 0x774) = 0;
    *(int *)((char *)this + 0x778) = 0;
    return this;
}

