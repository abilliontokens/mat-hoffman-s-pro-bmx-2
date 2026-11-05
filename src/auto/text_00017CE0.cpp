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
