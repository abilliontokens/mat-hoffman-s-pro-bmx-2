/* 7 functions from 0x00107380 to 0x00108370, found by Ghidra. */
#include "common.h"

struct V_00107A40 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
};

struct S_00107A40_Mgr {
    char pad0[0x190];
    int arr190[16];
    char pad1d0[0x2d4 - 0x1d0];
    int f2d4;
};

struct S_00108270_Item {
    int func_000831C0(void);
};

struct S_00108270_Mgr2A4 {
    char pad0[0x170];
    S_00108270_Item *arr170[16];
};

struct V_00107FB0_Input {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual int vf4(int button, int a, int b, int pad);
};

struct S_00107FB0_Holder {
    char pad0[8];
    V_00107FB0_Input *f8;
};

struct S_00107FB0_Axis {
    char pad0[0x24];
    float f24;
};

extern float D_00279B54;
extern float D_00282A98;
extern float D_00282A94;
extern float D_00282A90;
extern float D_00282A8C;
extern float D_00282A88;
extern float D_00282A84;
extern float D_00282A80;
extern float D_00282A7C;
float func_0014FBA0(float a, float b);
#include <math.h>
#include <xmmintrin.h>
static __forceinline float sqrt_00107FB0(const float &x)
{
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_load_ss(&x)));
    return r;
}

struct C_00107FB0 {
    char pad0[0x970];
    int f970;
    char pad974[0x9e8 - 0x974];
    S_00107FB0_Axis *f9e8;
    S_00107FB0_Axis *f9ec;
    int func_00107FB0(void);
};

struct S_00107A40_Global {
    char pad0[8];
    V_00107FB0_Input *f8;
    char pad0c[0x2a4 - 0xc];
    S_00108270_Mgr2A4 *f2a4;
    char pad2a8[0x2e0 - 0x2a8];
    S_00107A40_Mgr *f2e0;
};
extern S_00107A40_Global *D_002A8490;

/* binding tables: 16 slots of 8 entries; (key1, key2) -> value */
struct S_00108270_Tables {
    char pad0[0x2df0];
    int a2df0[128];
    int a2ff0[128];
    int a31f0[128];
    int a33f0[128];
    int a35f0[128];
    int a37f0[128];
};

struct S_00108270_Owner {
    char pad0[0x52c];
    S_00108270_Tables *f52c;
};

struct C_00108270 {
    char pad0[0x24];
    S_00108270_Owner *f24;
    char pad28[0xa28 - 0x28];
    int fa28;
    int fa2c;
    int func_00108270(int a, int b);
};

struct C_00107A40 {
    char pad0[0xa08];
    V_00107A40 *fa08;
    V_00107A40 *fa0c;
    V_00107A40 *fa10;
    V_00107A40 *fa14;
    char pada18[0x1e58 - 0xa18];
    int f1e58;
    void func_00107A40(int a0);
    void func_00107AB0(void);
};

struct C_00108360 {
    char pad0[0x1FC0];
    int unk1FC0;
    void func_00108360(void);
};


void C_00107A40::func_00107A40(int a0) {
    if (D_002A8490->f2e0->f2d4 == 0) {
        f1e58 = a0;
        if (a0 != 0) {
            fa08->vf6();
        } else {
            fa0c->vf6();
            fa10->vf6();
        }
        fa14->vf6();
    }
}

void C_00107A40::func_00107AB0(void) {
    fa08->vf4();
    fa0c->vf4();
    fa10->vf4();
    fa14->vf4();
}

int C_00108270::func_00108270(int a, int b)
{
    int idx = D_002A8490->f2e0->arr190[fa28];
    S_00108270_Item *item = D_002A8490->f2a4->arr170[fa2c];
    int i;

    if (item != 0 && item->func_000831C0() != 0) {
        for (i = 0; i < 8; i++) {
            if (f24->f52c->a33f0[idx * 8 + i] == a && f24->f52c->a37f0[idx * 8 + i] == b) {
                return f24->f52c->a35f0[idx * 8 + i];
            }
        }
    }
    for (i = 0; i < 8; i++) {
        if (f24->f52c->a2df0[idx * 8 + i] == a && f24->f52c->a31f0[idx * 8 + i] == b) {
            return f24->f52c->a2ff0[idx * 8 + i];
        }
    }
    return -1;
}

void C_00108360::func_00108360(void) {
    unk1FC0 = 1;
}
