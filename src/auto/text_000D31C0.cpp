/* 1 function from 0x000D31C0 to 0x000D3DA0, found by Ghidra. */
#include "common.h"
extern float D_0027DE74;
extern float D_002755E8;

/* raw field access: M(type, base, byte offset) */
#define M(T, base, off) (*(T *)((char *)(base) + (off)))

struct S_000D31C0_Vt {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26();
    virtual int v27();
    virtual void v28(int a, int b);
};

struct S_000D31C0_Dev {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};
extern S_000D31C0_Dev *D_002EFDB8;

struct C_000301D0 { int func_000301D0(); };
struct C_000BC5D0 { void func_000BC5D0(void *a, int b); int func_000B5870(); };
struct C_0005B3F0 { void func_0005B3F0(); };
struct C_0005C020;
struct S_000D31C0_Mgr {
    char pad0[0x2c0];
    C_0005C020 *f2c0;
    char pad2c4[0x14];
    int f2d8;
};
struct S_000D31C0_Glob { char pad0[0x2e0]; S_000D31C0_Mgr *f2e0; };
extern S_000D31C0_Glob *D_002A8490;
struct C_0005C020 { int *func_0005C020(int a); };
struct C_001617F0 { int func_001617F0(void *buf, int a); };
extern C_001617F0 *D_002A829C;
struct S_000D31C0_Item { char pad0[0x1b8]; int **f1b8; void func_00182020(int a, int b); };
struct S_000D31C0_Name { char c[31]; };
extern S_000D31C0_Name D_0027F1E8;
extern S_000D31C0_Name D_0027F1C8;

struct C_000D31C0 {
    void func_000D31C0(float dt);
    void func_000D2860();
};

void C_000D31C0::func_000D31C0(float dt)
{
    char *self = (char *)this;

    if (*(int *)(self + 0x28c) == 0 && *(int *)(self + 0x290) == 0 && *(int *)(self + 0x2bc) == 0 && *(int *)(self + 0x294) != 0) {
        *(float *)(self + 0x2a4) += dt;
        if (*(float *)(self + 0x2a4) >= D_0027DE74) {
            *(int *)(self + 0x298) = 1;
            func_000D2860();
            *(int *)(self + 0x2a4) = 0;
            *(int *)(self + 0x28c) = 0;
        }
    }
    *(float *)(self + 0x420) += dt;
    if (*(int *)(self + 0x3dc) == 0) {
        *(float *)(self + 0x3c8) += dt;
        if (*(float *)(self + 0x3c8) >= D_002755E8) {
            *(int *)(self + 0x280) = 1;
        }
    }
}
