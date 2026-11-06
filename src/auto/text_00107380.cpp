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
static __forceinline void length_00107FB0(float *d, float x, float y)
{
    float square = y * y + x * x;
    _mm_store_ss(d, _mm_sqrt_ss(*(__m128 *)&square));
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
extern float D_00282A78, D_002755E8;
struct Vec_107AE0 {
 float x,y,z,w;
 Vec_107AE0() { z=y=x=0; w=1; }
 Vec_107AE0(float a,float b,float c) { x=a;y=b;z=c;w=1; }
};
struct Mat_107AE0 { float m[16]; };
struct Obj_107AE0 {
 char pad[8];
 Obj_107AE0 *f8;
 void func_00199A70(int,Vec_107AE0*);
 void func_001994C0(int,Vec_107AE0*,Vec_107AE0*);
 void func_00199110(int,Vec_107AE0*,Vec_107AE0*,int,int,int);
 void func_001A0C90(Vec_107AE0);
};
struct Model_107AE0 {
 void **vt;
 char p4[0x50];
 char *f54;
 char p58[0x4c];
 unsigned int fa4;
 void func_00180E00(int,Vec_107AE0*,int,int);
 float func_00133F10(int);
};
struct C_107AE0 {
 char p0[0x1e8]; char *f1e8;
 char p1ec[0x11c0-0x1ec]; Model_107AE0 *f11c0;
 char p11c4[0x2054-0x11c4]; Obj_107AE0 *f2054,*f2058;
 char p205c[0x207c-0x205c]; Obj_107AE0 *f207c,*f2080;
 char p2084[0x2094-0x2084]; int f2094,f2098;
 void func_00107AE0();
};
