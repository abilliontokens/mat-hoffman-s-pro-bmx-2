/* 13 functions from 0x00011FF0 to 0x00012B00, found by Ghidra. */
#include "common.h"

struct S_11FF0_VtObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
    virtual void v6();
    virtual void v7();
    virtual void v8(unsigned int a);
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual int v17();
};

struct S_11FF0_Sub3c {
    char pad0[0x10];
    int f10;
};

struct S_11FF0_Sub384 {
    int func_0008AB90(int arg);
};

struct S_11FF0_Coll {
    int func_0001CE80(void *a, void *b, void *c, float d, float e);
};

struct S_11FF0_Mgr {
    char pad0[0x1c8];
    int f1c8;
};

struct S_11FF0_Global {
    char pad0[4];
    S_11FF0_Coll *f4;
    char pad8[0x29c];
    S_11FF0_Mgr *f2a4;
};

struct S_11FF0_Global2 {
    char pad0[0x588];
    int **f588;
};

struct S_11FF0_Owner {
    char pad0[0x3c];
    S_11FF0_Sub3c *f3c;
    char pad40[0x344];
    S_11FF0_Sub384 *f384;
    char pad388[0x14];
    int f39c;
    char pad3a0[0x10];
    int f3b0;
    int f3b4;
    char pad3b8[4];
    int f3bc;
    char pad3c0[0x54];
    int f414;
    int f418;
    void func_001C6DA0(int a, int b);
};

struct AIPedFallState {
    void *vtbl;
    char pad4[4];
    S_11FF0_Owner *owner;
    int func_00012150(int arg);
};

struct AIPedTurningBackState {
    void *vtbl;
    char pad4[4];
    S_11FF0_Owner *owner;
    void func_000121E0();
};

struct S_11FF0_State3 {
    void *vtbl;
    int f4;
    char pad8[8];
    int f10;
    char pad14[8];
    S_11FF0_VtObj **f1c;
    void func_00012240(int arg1, float arg2);
};

typedef void (__fastcall *S_11FF0_IterFn)(void *);

extern S_11FF0_Global *D_002A8490;
extern S_11FF0_Global2 *D_002B9120;
extern float D_002A04FC[8];
extern float D_002755E0;

void func_00012140(void) {
}
