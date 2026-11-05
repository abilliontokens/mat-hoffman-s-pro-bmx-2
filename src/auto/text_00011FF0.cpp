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
    virtual unsigned int v17();
};

struct S_11FF0_Vec4i {
    int x, y, z, w;
};

struct S_11FF0_Cam {
    void func_00198390(void);
    void func_001983A0(void);
    void func_00199600(S_11FF0_Vec4i v);
};

struct S_11FF0_Sub3c {
    char pad0[4];
    S_11FF0_Cam *f4;
    char pad8[8];
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
    char pad8[0x11c];
    int f124;
    char pad128[0x110];
    int f238;
    char pad23c[0x68];
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
    float func_00011730(float *p, int idx);
    float func_00012510(float *p, int start);
};

struct C_00012420 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0x38];
    S_11FF0_Sub3c *f3c;
    char pad40[0x344];
    S_11FF0_Sub384 *f384;
    char pad388[0xc];
    int f394;
    char pad398[0x18];
    int f3b0;
    char pad3b4[4];
    int f3b8;
    int f3bc;
    int f3c0;
    int f3c4;
    int f3c8;
    char pad3cc[0xc];
    int f3d8;
    char f3dc;
    char f3dd;
    char f3de;
    char f3df;
    char f3e0;
    char f3e1;
    char pad3e2;
    char f3e3;
    char pad3e4[0x20];
    S_11FF0_Vec4i f404;
    void func_00012420(void);
};

struct AIPedIdleState {
    void *vtbl;
    int f4;
    S_11FF0_Owner *owner;
    void func_00012020();
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
    void func_00012240(void *arg1, float arg2);
};

struct S_11FF0_StateA {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[8];
    int f14;
    char pad18[8];
    S_11FF0_VtObj **f20;
    void func_000122E0(void *arg1, float arg2);
};

struct S_11FF0_StateB {
    void *vtbl;
    char pad4[8];
    int fC;
    char pad10[8];
    int f18;
    char pad1C[8];
    S_11FF0_VtObj **f24;
    void func_00012380(void *arg1, float arg2);
};

typedef void (__fastcall *S_11FF0_IterFn)(void *);

extern S_11FF0_Global *D_002A8490;
extern S_11FF0_Global2 *D_002B9120;
extern float D_002A04FC[8];
extern float D_002755E0;

void __stdcall func_00011FF0(void *p, int step, int count, S_11FF0_IterFn fn)
{
    for (int i = count - 1; i >= 0; i--) {
        fn(p);
        p = (char *)p + step;
    }
}

void func_00012140(void) {
}

int AIPedFallState::func_00012150(int arg)
{
    S_11FF0_Mgr *mgr = D_002A8490->f2a4;
    int state = mgr->f1c8;
    if (state != 1 && owner->f3c->f10 == 1) {
        if (mgr != 0 && state == 0) {
            owner->f3bc = 3;
        }
        owner->f384->func_0008AB90(owner->f39c);
        return 1;
    }
    owner->func_001C6DA0(owner->f418, 1);
}

void AIPedTurningBackState::func_000121E0()
{
    owner->func_001C6DA0(owner->f418, 1);
    if (D_002A8490->f2a4->f1c8 == 0) {
        if (--owner->f3b0 < 0) {
            owner->f3b0 = *D_002B9120->f588[owner->f3b4] - 1;
        }
    }
}

void S_11FF0_State3::func_00012240(void *arg1, float arg2)
{
    if (++f4 >= f10) {
        f4 = 0;
    }
    if (D_002A8490->f4->func_0001CE80(f1c[f4], arg1, D_002A04FC, 15.0f, 50.0f)) {
        int v = (int)((float)f1c[f4]->v17() * (arg2 * 0.01f));
        f1c[f4]->v8(v);
        f1c[f4]->v5(4);
    }
}

void S_11FF0_StateA::func_000122E0(void *arg1, float arg2)
{
    if (++f8 >= f14) {
        f8 = 0;
    }
    if (D_002A8490->f4->func_0001CE80(f20[f8], arg1, D_002A04FC, 15.0f, 50.0f)) {
        int v = (int)((float)f20[f8]->v17() * (arg2 * 0.01f));
        f20[f8]->v8(v);
        f20[f8]->v5(4);
    }
}

void S_11FF0_StateB::func_00012380(void *arg1, float arg2)
{
    if (++fC >= f18) {
        fC = 0;
    }
    if (D_002A8490->f4->func_0001CE80(f24[fC], arg1, D_002A04FC, 15.0f, 50.0f)) {
        int v = (int)((float)f24[fC]->v17() * (arg2 * 0.01f));
        f24[fC]->v8(v);
        f24[fC]->v5(4);
    }
}

void C_00012420::func_00012420(void)
{
    if (f3e3 == 1) {
        f3c->f4->func_001983A0();
        v6();
    } else {
        f3c->f4->func_00198390();
        v4();
    }
    f3c->f4->func_00199600(f404);
    f3b0 = f3b8;
    f3dc = 0;
    f3dd = 0;
    f3e0 = 0;
    f3e1 = 0;
    f3c4 = 0;
    f3c8 = 0;
    f3d8 = 0;
    f3c0 = D_002A8490->f238;
    f3de = 1;
    f3df = 0;
    if (D_002A8490->f2a4 != 0 && D_002A8490->f2a4->f1c8 == 0) {
        f3bc = 1;
    }
    f384->func_0008AB90(f394);
    f3bc = 1;
}

float S_11FF0_Owner::func_00012510(float *p, int start)
{
    int *list = D_002B9120->f588[f3b4];
    float best = 100000.0f;
    int idx = start - 1;
    for (int i = 0; i < 3; i++) {
        int j = idx;
        if (j < 0) {
            j = *list + j;
        } else if (j >= *list) {
            j = j - *list;
        }
        float v = func_00011730(p, j);
        if (v < best) {
            best = v;
        }
        idx++;
    }
    return best;
}

