/* 14 functions from 0x00016CF0 to 0x00017CE0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

static inline void FloatToInt(int *out, float f)
{
    *out = _mm_cvttss_si32(_mm_load_ss(&f));
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

extern "C" int strcmp(const char *s1, const char *s2);
extern float D_00275460;
extern float D_002757F0;
extern int D_002A0700[];

struct C_00017600_Entry {
    float value;
    char name[16];
};

struct C_00017600 {
    char pad0[0x528];
    C_00017600_Entry entries[26];
    float func_00017600(const char *name);
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

int func_00016CF0(float f)
{
    int * volatile p = (int *)&f;
    float t = f;

    *p = _mm_cvttss_si32(*(__m128 *)&t);
    return *(int *)&f;
}

float func_00016D20(float x)
{
    if (x > D_002756D0) {
        return x - D_002756B8;
    }
    if (x < D_002756E8) {
        return x + 6.2831855f;
    }
    return x;
}

float func_00016D60(float x)
{
    int n;
    float t;
    int * volatile p = &n;
    float r;

    t = x * D_002756EC;
    *p = _mm_cvttss_si32(*(__m128 *)&t);
    r = x - (float)n * D_002756B8;
    if (r > D_002756D0) {
        return r - D_002756B8;
    }
    if (r < D_002756E8) {
        return r + 6.2831855f;
    }
    return r;
}

C_00016E40_Vec C_00016E40::func_00016E40(void)
{
    if (f2C == 0) {
        return D_002A0718;
    }
    return f2C->f1A4->f4->func_00199B00(0);
}

