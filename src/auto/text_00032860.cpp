/* 12 functions from 0x00032860 to 0x00033680, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct O_B { void func_0018C120(); void func_0001CC80(void *p); };
struct S_002A8490 {
    char pad0[4];
    O_B *f4;
    char pad8[0x11C];
    int f124;
    char pad128[0x11C];
    float f244;
    char pad248[0xA4];
    O_B *f2ec;
};
struct O_A { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int a); virtual void v8(); };
struct O_D { virtual void v0(int a); };
struct O_E { void func_0013B340(); };
struct O_F { void func_0009C770(); };
struct O_G { virtual void v0(); virtual void v1(); virtual void v2(); };
struct O_H { void *vtbl; char pad[0x68]; void *f6c[1]; char pad2[0x20]; int f90; char pad3[0x88]; int f11c; char pad4[0xa0]; O_F *f1c0; char pad5[0x14]; O_G *f1d8; void func_00157660(); void func_00033220(); };
extern O_A *D_002EFDB8;
extern float D_002A8F40;
extern O_D *D_002F0630;
extern O_E *D_002BEAAC;
extern int D_00276AB4;
extern void func_001E891B(void *p);
extern S_002A8490 *D_002A8490;
extern int D_002F08BC;
extern float D_00275544;
extern float D_00275600;

struct V4_00032E50 {
    float x, y, z, w;
    void Set(float a, float b, float c, float d) {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct C_00032A20 {
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
    virtual void v18(int a);
    void func_00032A20(void);
    void func_00032A40(void);
};

static inline void SetV4(V4_00032E50 *v, float a, float b, float c, float d)
{
    v->x = a;
    v->y = b;
    v->z = c;
    v->w = d;
}

struct C_00032E50 {
    char pad0[0x210];
    V4_00032E50 f210;
    char pad220[0x10];
    float f230;
    void func_00032E50(float a, float b, float c, float d);
};

float func_0001C870(float a, int b, float c, float d, float e);

struct C_00032E90 {
    char pad0[0x210];
    float f210;
    float f214;
    float f218;
    char pad21C[4];
    float f220;
    char pad224[0xC];
    float f230;
    void func_00032E90(void);
};

static inline void RoundToInt(int *out, float f)
{
    *out = _mm_cvtss_si32(_mm_load_ss(&f));
}

struct O_Cam32F50 { void func_001824E0(float *out, float x, float y, float z); };
struct O_Obj32F50 { char pad0[8]; O_Cam32F50 *f8; };
extern V4_00032E50 D_002A1460;

struct BmxEvent {
    char pad0[0x234];
    O_Obj32F50 *f234[2];
    V4_00032E50 f23C[2];
    V4_00032E50 f25C[2];
    float f27C[2];
    void func_00032E90();
    void func_00032F50();
    void func_00157920();
    int func_00033300();
};

struct C_00032A00 {
    char pad0[0x1C8];
    int unk1C8;
    void func_00032A00(void);
};


void C_00032A00::func_00032A00(void) {
    extern int D_002AADF8;
    unk1C8 = 0;
    D_002AADF8 = 1;
}

void C_00032A20::func_00032A20(void)
{
    v18(1);
    D_002A8490->f124 = 1;
}

void C_00032A20::func_00032A40(void)
{
    v18(0);
    D_002A8490->f124 = 0;
}

void C_00032E50::func_00032E50(float a, float b, float c, float d)
{
    if (D_002F08BC != 0) {
        float *p = &f210.x;
        p[0] = a;
        p[1] = b;
        p[2] = c;
        p[3] = d;
        f230 = 0.0f;
    }
}

void C_00032E90::func_00032E90(void)
{
    int r;
    float t;

    if (D_002F08BC != 0 && (f210 != D_00275544 || f214 != D_00275544 || f218 != D_00275544) && f230 < D_00275600) {
        f230 = D_002A8490->f244 + f230;
        t = func_0001C870(f230, 0, f220, 2.0f, f210);
        r = _mm_cvtss_si32(_mm_load_ss(&t));
    }
}

void O_H::func_00033220()
{
    vtbl = &D_00276AB4;
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    D_002A8F40 = 1.0f;
    D_002A8490->f2ec->func_0018C120();
    int n = f90;
    if (f11c)
        n = 1;
    for (int i = 0; i < n; i++)
        D_002A8490->f4->func_0001CC80(f6c[i]);
    if (D_002F0630) {
        D_002F0630->v0(1);
        D_002F0630 = 0;
    }
    O_F *p = f1c0;
    if (p) {
        p->func_0009C770();
        func_001E891B(p);
        f1c0 = 0;
    }
    D_002BEAAC->func_0013B340();
    if (f1d8)
        f1d8->v2();
    func_00157660();
}

int BmxEvent::func_00033300(void)
{
    func_00032E90();
    func_00032F50();
    func_00157920();
    return 1;
}

