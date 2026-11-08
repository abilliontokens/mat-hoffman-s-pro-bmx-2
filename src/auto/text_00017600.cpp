/* 14 functions from 0x00016CF0 to 0x00017CE0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <string.h>

extern float D_002755E8, D_002754B0, D_002757FC, D_002757F8;
int func_001E8833();
static __forceinline float random_00017910() {
    return (float)func_001E8833() * D_002754B0;
}
extern float D_002756D0;
extern float D_002756B8;
extern float D_002756E8;
extern float D_002756EC;

struct C_00016E40_Vec {
    float x;
    float y;
    float z;
    float w;
};

static __forceinline void copy_00017910(C_00016E40_Vec &out, const C_00016E40_Vec &in) {
    out = in;
}
extern C_00016E40_Vec D_002A0718;

struct C_00199B00 {
    C_00016E40_Vec func_00199B00(int a0);
};

struct C_00016E40_B {
    char pad0[4];
    C_00199B00 *f4;
};

struct C_00016E40_A {
    char pad0[0x1A4];
    C_00016E40_B *f1A4;
};

struct C_00016E40 {
    char pad0[0x2C];
    C_00016E40_A *f2C;
    C_00016E40_Vec func_00016E40(void);
};

struct C_00017A40_Obj {
    int pad0[0x124 / 4];
    int f124;
};
struct C_00017A40_Glob {
    char pad0[0x4DC];
    C_00017A40_Obj *f4DC;
};
extern C_00017A40_Glob *D_002B9120;
struct C_00017A40_T {
    C_00016E40_Vec func_00199B00(int a0);
    void func_00199600(C_00016E40_Vec v);
};
struct C_00017A40_M {
    int pad0;
    C_00017A40_T *f4;
};
struct C_00017A40 {
    char pad0[0x3C];
    C_00017A40_M *f3C;
    char pad40[0x4F8 - 0x40];
    C_00016E40_Vec f4F8;
    C_00016E40_Vec func_00017A40(void);
};

struct C_00017910_Entry {
    float radius;
    C_00016E40_Vec pos;
};
struct C_00017910 {
    char pad0[0x3c];
    C_00017A40_M *f3C;
    char pad40[0x49c-0x40];
    C_00017910_Entry *f49C;
    char pad4A0[0x4d8-0x4a0];
    int f4D8;
    int f4DC;
    char pad4E0[0x4f0-0x4e0];
    int f4F0;
    char pad4F4[0x508-0x4f4];
    C_00016E40_Vec f508;
    void func_00017910();
};

extern "C" int strcmp(const char *s1, const char *s2);
extern float D_00275460;
extern int D_002A0700[];

struct C_00017600_Entry {
    float value;
    char name[16];
};

extern char D_002757E8[], D_002757E0[], D_002757D8[], D_002757D0[], D_002757C8[], D_002757C0[];
extern char D_002757B8[], D_002757B0[], D_002757A8[], D_002757A0[], D_00275798[], D_00275790[];
extern char D_00275788[], D_00275780[], D_00275778[], D_00275770[], D_00275768[], D_00275760[];
extern char D_00275758[], D_00275750[], D_00275748[], D_00275740[], D_00275738[], D_00275730[];
extern char D_00275728[], D_00275720[];
char *func_001E8920(char *dst, const char *src, int n);

struct C_00017600 {
    char pad0[0x528];
    C_00017600_Entry entries[26];
    float func_00017600(const char *name);
    void func_00016E90();
};

struct C_00017680_Target {
    void func_00197B40(float *a, float *b);
    void func_00199110(int a0, float *a1, float *a2, int a3, int a4, int a5);
};

struct C_00017680_Mid {
    int pad0;
    C_00017680_Target *f4;
};

struct C_00017680_Vec {
    float x;
    float y;
    float z;
    float w;
};

struct C_00017680 {
    char pad0[0x3C];
    C_00017680_Mid *f3C;
    void func_00017680(C_00017680_Vec pos);
};

struct C_00017700_Obj {
    void func_0008AB90(int a0);
};

struct C_00017700 {
    char pad0[0x384];
    C_00017700_Obj *f384;
    int f388;
    int f38C;
    char pad390[0x4E0 - 0x390];
    int f4E0;
    void func_00017700(void);
};

struct C_00017760_Dev {
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
    virtual void v31();
    virtual void v32();
    void func_0011CA60(C_00017680_Vec v);
};

struct C_00017760 {
    char pad0[0x494];
    C_00017760_Dev *f494;
    char pad498[0x508 - 0x498];
    C_00017680_Vec f508;
    void func_00017760(void);
};

extern float D_002A0738;
extern float D_002A073C;
extern float D_002A0740;
extern float D_002757F4;

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

struct C_00017810_Vec3 {
    float x;
    float y;
    float z;
};

static __forceinline void vec3_scale_set(float *out, float x, float y, float z, float s) {
    out[3] = 1.0f;
    out[0] = x * s;
    out[1] = y * s;
    out[2] = z * s;
}

static __forceinline void vec3_scale_ref(float *out, const C_00017810_Vec3 &v, float s) {
    out[3] = 1.0f;
    out[0] = v.x * s;
    out[1] = v.y * s;
    out[2] = v.z * s;
}

static __forceinline C_00017810_Vec3 vec3_neg(float x, float y, float z) {
    C_00017810_Vec3 r;
    r.x = -x;
    r.y = -y;
    r.z = -z;
    return r;
}

struct C_00017810_Glob {
    char pad0[0x238];
    int f238;
};

extern C_00017810_Glob *D_002A8490;

struct C_00017810_Obj {
    C_00017760_Dev *f0;
    char pad4[8];
    int fC;
    int f10;
    int f14;
    C_00017680_Vec f18;
};

struct V4_00017AD0 {
    float x, y, z, w;
    V4_00017AD0() { z = 0; y = 0; x = 0; w = 1.0f; }
};

struct S_00017AD0_Node {
    char pad0[2];
    unsigned char f2;
    char pad3[0x41];
    int f44;
};

struct S_00017AD0_Iter {
    char pad0[0x40];
    void func_001A46F0(void);
    void func_001A4790(int a, int b, float *c, float *d, int e, int f, int g);
    S_00017AD0_Node *func_001A4840(void);
    void func_001A4A20(void);
};

extern float D_00275544;
extern unsigned char D_002A4330;
extern int D_002BA148;
int func_00134A10(V4_00017AD0 *seg, void *obj, V4_00017AD0 *out, V4_00017AD0 *hit);

float C_00017600::func_00017600(const char *name)
{
    int i;

    for (i = 0; i < 26; i++) {
        if (strcmp(entries[i].name, name) == 0) {
            return entries[i].value;
        }
    }
    return D_00275460;
}

void C_00017680::func_00017680(C_00017680_Vec pos)
{
    float vecB[4];
    float vecA[4];

    vecA[2] = 0.0f;
    vecA[1] = 0.0f;
    vecA[0] = 0.0f;
    vecA[3] = 1.0f;
    vecB[2] = 0.0f;
    vecB[1] = 0.0f;
    vecB[0] = 0.0f;
    vecB[3] = 1.0f;
    f3C->f4->func_00197B40(vecA, vecB);
    f3C->f4->func_00199110(0, (float *)&pos, vecB, 0, 1, 0);
}

void C_00017700::func_00017700(void)
{
    f4E0++;
    if (f4E0 >= 4) {
        f4E0 = 0;
    }
    switch (D_002A0700[f4E0]) {
    case 1:
        f384->func_0008AB90(f388);
        break;
    default:
        f384->func_0008AB90(f38C);
        break;
    }
}

void C_00017760::func_00017760(void)
{
    C_00017680_Vec v = f508;

    v.y = v.y + 40.0f;
    f494->v31();
    f494->v32();
    f494->v4();
    f494->func_0011CA60(v);
    f494->v6();
    f494->v30();
    f494->func_0011CA60(v);
}

void __stdcall func_00017810(C_00017810_Obj *obj, C_00017680_Vec *pos)
{
    C_00017680_Vec t;
    C_00017680_Vec u;

    u.x = -D_002A0738;
    u.y = -D_002A073C;
    u.z = -D_002A0740;
    vec3_set(&t.x, u.x * 180.0f, u.y * 180.0f, u.z * 180.0f);
    obj->f18 = t;
    obj->f14 = D_002A8490->f238 + 10000;
    obj->fC = 1;
    obj->f10 = 0;
    obj->f0->v31();
    obj->f0->v32();
    obj->f0->func_0011CA60(*pos);
    obj->f0->v30();
    obj->f0->func_0011CA60(*pos);
}

void C_00017910::func_00017910()
{
    if (f4DC >= 0 && f4DC < f4D8) {
        C_00016E40_Vec pos = f49C[f4DC].pos;
        float half = f49C[f4DC].radius * 0.5f;
        float r = func_001E8833() * 3.0517578125e-05f;
        pos.x += r * f49C[f4DC].radius - half;
        r = func_001E8833() * 3.0517578125e-05f;
        pos.z += r * f49C[f4DC].radius - half;
        if (!f4F0)
            pos.y = func_001E8833() * 3.0517578125e-05f * D_002757FC + pos.y + 56.0f;
        f3C->f4->func_00199600(pos);
        f508 = pos;
    }
}

C_00016E40_Vec C_00017A40::func_00017A40(void)
{
    C_00016E40_Vec v = f3C->f4->func_00199B00(0);
    if ((float)D_002B9120->f4DC->f124 >= v.y) {
        f3C->f4->func_00199600(f4F8);
    }
    return v;
}

int __stdcall func_00017AD0(V4_00017AD0 *a, V4_00017AD0 *b, V4_00017AD0 *out, int all)
{
    int result = 0;
    V4_00017AD0 seg[2];
    float center[4];
    float half[4];
    S_00017AD0_Iter iter;
    S_00017AD0_Node *node;

    seg[0] = *a;
    center[3] = 1.0f;
    half[3] = 1.0f;
    V4_00017AD0 hit;
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
    iter.func_001A4790(0, 1, center, half, 0, 0, 0);
    for (node = iter.func_001A4840(); node != 0; node = iter.func_001A4840()) {
        if (node->f2 == D_002A4330) {
            int flags = node->f44;
            char *obj = (char *)node - 0x24;
            if (!(flags & D_002BA148) && flags != 0) {
                obj[0xa7] |= 0x10;
                if (func_00134A10(seg, obj, out, &hit) != 0) {
                    result = 1;
                    seg[1] = *out;
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
