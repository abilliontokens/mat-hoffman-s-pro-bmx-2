/* 14 functions from 0x00016CF0 to 0x00017CE0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <string.h>
#include "asm_helpers.h"

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

static __forceinline const int &Min_00016E90(const int &a, const int &b)
{
    return (b < a) ? b : a;
}

void C_00017600::func_00016E90()
{
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[0].name, (const char *)D_002757E8, n); entries[0].name[n] = 0; entries[0].value = 3.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[1].name, (const char *)D_002757E0, n); entries[1].name[n] = 0; entries[1].value = 2.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[2].name, (const char *)D_002757D8, n); entries[2].name[n] = 0; entries[2].value = 2.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[3].name, (const char *)D_002757D0, n); entries[3].name[n] = 0; entries[3].value = 2.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[4].name, (const char *)D_002757C8, n); entries[4].name[n] = 0; entries[4].value = 2.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[5].name, (const char *)D_002757C0, n); entries[5].name[n] = 0; entries[5].value = 2.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[6].name, (const char *)D_002757B8, n); entries[6].name[n] = 0; entries[6].value = 2.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[7].name, (const char *)D_002757B0, n); entries[7].name[n] = 0; entries[7].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[8].name, (const char *)D_002757A8, n); entries[8].name[n] = 0; entries[8].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[9].name, (const char *)D_002757A0, n); entries[9].name[n] = 0; entries[9].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[10].name, (const char *)D_00275798, n); entries[10].name[n] = 0; entries[10].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[11].name, (const char *)D_00275790, n); entries[11].name[n] = 0; entries[11].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[12].name, (const char *)D_00275788, n); entries[12].name[n] = 0; entries[12].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[13].name, (const char *)D_00275780, n); entries[13].name[n] = 0; entries[13].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[14].name, (const char *)D_00275778, n); entries[14].name[n] = 0; entries[14].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[15].name, (const char *)D_00275770, n); entries[15].name[n] = 0; entries[15].value = 0.1f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[16].name, (const char *)D_00275768, n); entries[16].name[n] = 0; entries[16].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[17].name, (const char *)D_00275760, n); entries[17].name[n] = 0; entries[17].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[18].name, (const char *)D_00275758, n); entries[18].name[n] = 0; entries[18].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[19].name, (const char *)D_00275750, n); entries[19].name[n] = 0; entries[19].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[20].name, (const char *)D_00275748, n); entries[20].name[n] = 0; entries[20].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[21].name, (const char *)D_00275740, n); entries[21].name[n] = 0; entries[21].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[22].name, (const char *)D_00275738, n); entries[22].name[n] = 0; entries[22].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[23].name, (const char *)D_00275730, n); entries[23].name[n] = 0; entries[23].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[24].name, (const char *)D_00275728, n); entries[24].name[n] = 0; entries[24].value = 1.0f;
    }
    {
        int lim = 15;
        int n = AsmMinI(lim, 6);
        func_001E8920(entries[25].name, (const char *)D_00275720, n); entries[25].name[n] = 0; entries[25].value = 1.0f;
    }
}

