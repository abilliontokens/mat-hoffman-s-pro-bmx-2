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

/* (0, 0, 0, 1) vector, stored z, y, x, w */
struct V4_00012730 {
    float x, y, z, w;
    V4_00012730() { z = 0; y = 0; x = 0; w = 1.0f; }
};

struct S_00012730_Node {
    char pad0[2];
    unsigned char f2;
    char pad3[0x41];
    int f44;
};

struct S_00012730_Iter {
    char pad0[0x40];
    void func_001A46F0(void);
    void func_001A4790(int a, int b, float *c, float *d, int e, int f, int g);
    S_00012730_Node *func_001A4840(void);
    void func_001A4A20(void);
};

extern float D_002755E8;
extern float D_00275544;
extern unsigned char D_002A4330;
extern int D_002BA15C;
int func_00134A10(V4_00012730 *seg, void *obj, V4_00012730 *out, V4_00012730 *hit);

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
    void func_00012960(float *p, int a, int b);
    int func_00012730(V4_00012730 *a, V4_00012730 *b, V4_00012730 *out, int mode, int all);
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
extern char D_002A051C[];

struct S_12590_Vec4f {
    float x, y, z, w;
};

struct S_12590_Cam {
    void func_00199650(void *p);
    void func_00198F50(void *a, void *b, int c, int d, int e);
    void func_00197B40(void *a, S_12590_Vec4f *b);
    void func_0019AC50(void);
};

struct S_12590_Sub3c {
    char pad0[4];
    S_12590_Cam *f4;
};

struct S_12590_Anim {
    char pad0[4];
    int f4;
};

struct S_12590_Sub384 {
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
    virtual void v12(int a);
    char pad4[0x20];
    S_12590_Anim *f24;
};

struct S_12590_Sub3ac {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual int v7();
};

struct C_00012590 {
    void *vtbl;
    char pad4[0x38];
    S_12590_Sub3c *f3c;
    char pad40[0x344];
    S_12590_Sub384 *f384;
    char pad388[0x24];
    S_12590_Sub3ac *f3ac;
    char pad3b0[0xc];
    int f3bc;
    char pad3c0[0x1e];
    char f3de;
    char f3df;
    char pad3e0;
    char f3e1;
    char pad3e2[2];
    S_11FF0_Vec4i f3e4;
    char f3f4[0x10];
    void func_000114D0(int a);
    S_11FF0_Vec4i func_00011E30(void);
    void func_001C7EB0(void);
    int func_00012590(int a);
};

int S_11FF0_Owner::func_00012730(V4_00012730 *a, V4_00012730 *b, V4_00012730 *out, int mode, int all)
{
    int result = 0;
    float half[4];
    V4_00012730 seg[2];
    float center[4];
    S_00012730_Iter iter;
    S_00012730_Node *node;
    int type;

    seg[0] = *a;
    center[3] = 1.0f;
    half[3] = 1.0f;
    V4_00012730 hit;
    seg[1] = *b;
    center[0] = (seg[0].x + seg[1].x) * D_002755E8;
    center[2] = (seg[0].z + seg[1].z) * D_002755E8;
    center[1] = 0.0f;
    half[0] = (seg[0].x - seg[1].x) * D_002755E8;
    half[2] = (seg[0].z - seg[1].z) * D_002755E8;
    *(int *)&half[1] = 0x7effffff;
    if (half[0] < D_00275544) {
        half[0] = -half[0];
    }
    if (half[2] < D_00275544) {
        half[2] = -half[2];
    }
    iter.func_001A46F0();
    type = 1;
    if (mode == 1) {
        type = 3;
    }
    iter.func_001A4790(0, type, center, half, 0, 0, 0);
    for (node = iter.func_001A4840(); node != 0; node = iter.func_001A4840()) {
        if (node->f2 == D_002A4330) {
            char *obj = (char *)node - 0x24;
            if ((mode != 0 || ((*(int *)(obj + 0x68) & 3) == 0 && (D_002BA15C & *(int *)(obj + 0x68)) == 0)) && *(int *)(obj + 0x68) != 0) {
                obj[0xa7] |= 0x10;
                if (func_00134A10(seg, obj, out, &hit) != 0) {
                    seg[1] = *out;
                    result = 1;
                    if (all == 0) {
                        break;
                    }
                }
            }
        }
    }
    iter.func_001A4A20();
    return result;
}

extern void *func_00011110(void *, void *, void *);
extern float func_00011170(void *);
extern float D_002755EC;
void S_11FF0_Owner::func_00012960(float *p, int a, int b)
{
    S_12590_Vec4f vec[3];
    if (D_002A8490->f2a4->f1c8 == 1) {
        p[1] = *(float *)((char *)this + 0x3e8);
        return;
    }
    if (!*((char *)this + 0x3de) && *(int *)((char *)f384 + 0x24) == *(int *)((char *)this + 0x394) && !*((char *)this + 0x3df)) {
        float v = func_00011170(func_00011110(&vec[2], (char *)this + 0x3e4, (char *)D_002B9120->f588[f3b4][1] + f3b0 * 16));
        float base = ((float *)D_002B9120->f588[f3b4][1])[f3b0 * 4 + 1];
        p[1] = base + (v / *(float *)((char *)this + 0x3c4)) * *(float *)((char *)this + 0x3c8);
        return;
    }
    vec[0] = *(S_12590_Vec4f *)p;
    vec[1] = *(S_12590_Vec4f *)p;
    vec[0].y += 3.0f;
    vec[1].y = (float)*(int *)(*(char **)((char *)D_002B9120 + 0x4dc) + 0x124);
    vec[2].z = 0; vec[2].y = 0; vec[2].x = 0; vec[2].w = 1;
    if (func_00012730((V4_00012730 *)&vec[0], (V4_00012730 *)&vec[1], (V4_00012730 *)&vec[2], 0, 1) == 1 && vec[2].y > vec[1].y)
        p[1] = vec[2].y;
}

