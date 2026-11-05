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

/* AiTikiGod */
struct AiTikiGod {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    char pad4[0x4ac];
    S_TikiObj *f4b0[12];
    char pad4e0[0x10];
    int f4f0;
    char pad4f4[0x14];
    char f508[4];
    u32 f50c;
    void func_00017CE0(S_00017CE0_Arg *a, int b, int c);
    void func_00017D00();
    void func_00017D20(int param_1);
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
};

struct S_00017DA0_Ref {
    void func_00199A70(int a, S_00017DA0_Vec *out);
};

/* owner of the Tiki AI states: vtable-less game object */
struct S_TikiOwner {
    char pad0[0x4f4];
    int f4f4;
    char pad4f8[0x248];
    int f740;
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

void TikiEvadeState::func_00018340()
{
    owner->func_00017760();
    owner->func_001C6DA0(owner->f740, 1);
    f14 = 0;
    fc = D_002A8490->f238 + 2000;
    owner->f4f4 = 1;
}

