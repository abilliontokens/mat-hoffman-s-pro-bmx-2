/* 24 functions from 0x00030A30 to 0x000318A0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline float Max_00030CE0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Min_00030CE0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static inline float Max2_00030CE0(float a, float b) { _mm_store_ss(&a, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return a; }
static inline float Min2_00030CE0(float a, float b) { _mm_store_ss(&a, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return a; }
extern float D_00275460;
extern float D_00275544;
extern float D_00276A90;
struct Tgt_00030CE0 {
    char pad0[0x28];
    float f28;
};
struct C_00030CE0 {
    char pad0[0x24];
    int f24;
    int f28;
    int f2C;
    float f30;
    char pad34[0x10];
    float f44;
    float f48;
    float f4C;
    float f50;
    float f54;
    char pad58[8];
    float f60;
    char pad64[0x14];
    Tgt_00030CE0 *f78;
    int func_00030CE0(float dt);
};
extern char D_002A47F0[], D_002A5348[], D_00275678[], D_002A48F8[], D_00275630[], D_00276B78[], D_002A5870[];
void func_001ADCC0(void *, int, void *, void *, void *);
extern "C" char *strcpy(char *dst, const char *src);
extern "C" char *strcat(char *dst, const char *src);
#pragma intrinsic(strcpy)
#pragma intrinsic(strcat)
char *func_001E8AC0(const char *s, int c);

extern int D_00276A24;
extern u32 D_002A135C;
extern u32 D_002A1360;
extern u32 D_002A1364;
extern u32 D_002A1368;

/* BmxEngineModel */
struct C_00030C00 {
    void *vtbl;
    char pad4[0x20];
    u32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
    u32 f48;
    u32 f4C;
    u32 f50;
    u32 f54;
    u32 f58;
    u32 f5C;
    u32 f60;
    u32 f64;
    u32 f68;
    u32 f6C;
    u32 f70;
    u32 f74;
    u32 f78;
    C_00030C00 *func_00030C00(int a0);
    void func_00157600(int a0);
};

struct C_00030CD0 {
    char pad0[0x78];
    int unk78;
    void func_00030CD0(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00030F00 {
    void *vtbl;
    void *func_00030F00(unsigned int flags);
};

struct C_00030B20 {
    char pad0[0x170];
    float f170;
    float f174;
    float f178;
    char pad17c[0xBC];
    float f238;
    float f23c;
    float f240;
    void func_00030B20(float x, float y, float z, float w);
};


struct Vec4_00030A30 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00030B90 {
    char pad0[0x180];
    float f180;
    float f184;
    float f188;
    char pad18c[0xdc];
    float f268;
    float f26c;
    float f270;
    void func_00030B90(float x, float y, float z, float w);
};

struct V_00031430 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
};

extern V_00031430 *D_002EFDB8;

struct C_001576C0 {
    void func_001576C0(void);
};

struct C_00031430 {
    void func_00031430(void);
};

struct V4_00030E70 {
    float x;
    float y;
    float z;
    float w;
    V4_00030E70() {}
    V4_00030E70(float x_, float y_, float z_, float w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct S_00030E70_Target {
    char pad0[0x190];
    float f190;
    float f194;
    float f198;
};

struct C_00030E70 {
    char pad0[0x58];
    V4_00030E70 f58;
    float f68;
    float f6c;
    float f70;
    char pad74[4];
    S_00030E70_Target *f78;
    int func_00030E70(int a0);
};

void __stdcall func_0001C750(V4_00030E70 a, V4_00030E70 b);

void *func_001E8A44(int size);
void func_001E891B(void *p);

struct C_0009A290 {
    char pad0[0x194];
    int f194;
    C_0009A290 *func_0009A290(void *a0, char *a1, int a2);
    void func_0009C770(void);
};

struct C_00031840 {
    char pad0[0x64];
    char *f64;
    char pad68[0x158];
    C_0009A290 *f1C0;
    void func_00031840(void);
};

struct VObj_00031450 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};

struct Sound_000314F0;
struct Target_00031610 {
    void func_001A4100(int a0, int a1, int a2);
    Target_00031610 *func_001A2C00(void *, Sound_000314F0 *, int, int);
    void func_001A4640(void *, void *, int);
};

struct Obj_000317B0 {
    char pad0[0x170];
    Vec4_00030A30 f170;
    Vec4_00030A30 f180;
    Vec4_00030A30 f190;
};

struct Inner_000317B0 {
    char pad0[0x238];
    int f238;
};

struct Elem_000317B0 {
    char pad0[0x1e0];
    Inner_000317B0 *f1e0;
};

struct List_000317B0 {
    char pad0[0x1a8];
    Elem_000317B0 *f1a8[1];
};

struct VT_00031260;

struct Holder_000317B0 {
    char pad0[0x4c0];
    VT_00031260 *f4c0;
    char pad4c4[0x1c];
    List_000317B0 *f4e0;
};

struct Sound_000314F0 {
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
    virtual void v30(int a);
    Sound_000314F0 *func_001CD770(void *, int);
};

struct Mgr_000317B0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    char pad4[0xb0];
    Sound_000314F0 *fb4;
    void func_0001CCE0(int id, Vec4_00030A30 *a, Vec4_00030A30 *b, Vec4_00030A30 *c, void *extra);
};

/* BmxEvent's vtable view (45 slots) */
struct VT_00031260 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(bool a); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44();
};

static __forceinline void CallV30_00031260(VT_00031260 *o, int a) { o->v30(a); }
static __forceinline int Ne10_00031260(int v) { return v != 10; }

struct Inner_00031260 {
    char pad0[0x28];
    VT_00031260 *f28;
    void func_000947F0(int node);
    void func_00095880(void);
};

struct Ctx_00031260 {
    char pad0[4];
    int f4;
    char pad8[8];
    int f10;
    char pad14[0x18 - 0x14];
    int f18;
    int f1c;
    char pad20[0x2fc - 0x20];
    Inner_00031260 *f2fc;
    char pad300[0x468 - 0x300];
    int f468;
};

struct Root_000317B0 {
    void *f0;
    Mgr_000317B0 *f4;
    char pad8[0x124 - 8];
    int f124;
    char pad128[0x2a8 - 0x128];
    int f2a8;
    char pad2ac[0x2e0 - 0x2ac];
    Ctx_00031260 *f2e0;
};

extern Root_000317B0 *D_002A8490;

/* BmxEvent */
struct C_00030F90 {
    void *vtbl;
    C_00030F90 *func_00030F90(int a0);
};
extern int D_00276AB4;
extern u32 D_002A1460;
extern u32 D_002A1464;
extern u32 D_002A1468;
extern u32 D_002A146C;
struct S_001C3D40 {
    void func_001C3D40(int a);
};
extern S_001C3D40 *D_002F07B8;
extern "C" void *memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)

static __forceinline void putquad_00030F90(int *d, int a, int b, int c, int e)
{
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}

struct CreatorObj_00031260 {
    int func_00026500(int a, int b);
};

extern CreatorObj_00031260 *D_002A7CB8;
extern float D_002756DC;
extern int D_002B8F18;
extern int D_002B8F1C;
extern int D_00276B68;

struct Obj_00031260 {
    char pad0[0x19c];
    int f19c;
};

struct BmxEvent_00030A30 : VT_00031260 {
    char pad4[0x20];
    Obj_000317B0 *f24[16];
    Holder_000317B0 *f64;
    char pad68[4];
    int f6c[9];
    int f90;
    char pad94[0x50];
    void *fe4;
    char pade8[0x110 - 0xe8];
    int f110;
    int f114;
    char pad118[0x124 - 0x118];
    float f124;
    float f128;
    char pad12c[0x15c - 0x12c];
    void *f15c;
    void *f160;
    Obj_00031260 *f164;
    void *f168;
    void *f16c;
    VObj_00031450 *f170[10];
    VObj_00031450 *f198;
    void *f19c;
    void *f1a0;
    void *f1a4;
    void *f1a8;
    void *f1ac;
    char pad1b0[4];
    Sound_000314F0 *f1b4;
    char pad1b8[0x18];
    void *f1d0;
    char pad1d4[4];
    Target_00031610 *f1d8;
    char pad1dc[0x1f4 - 0x1dc];
    int f1f4;
    int func_00031260(float dt);
    int func_00157A00(float dt);
    void func_00031640(void);
    void func_000314F0(void);
    void func_001577A0(void *, int);
    void func_00031450(void);
    void func_000314A0(void);
    void func_00031610(int a0, int a1);
    void func_000317B0(int flag);
};

void func_00030A30(Vec4_00030A30 *out, float x, float y, float z, float w, float *m)
{
    Vec4_00030A30 r;

    r.x = y * m[4] + z * m[8] + x * m[0];
    r.y = x * m[1] + (y * m[5] + z * m[9]);
    float t = y * m[6];
    float u = z * m[10];
    r.z = t + u + x * m[2];
    r.w = 1.0f;
    *out = r;
}

void func_00030AC0(float *out, float *v, float *m)
{
    AsmTransformPoint(out, v, m);
}

void C_00030B20::func_00030B20(float x, float y, float z, float w)
{
    f170 = x + f170;
    f174 = y + f174;
    f178 = z + f178;
    f238 = x + f238;
    f23c = y + f23c;
    f240 = z + f240;
}

void C_00030B90::func_00030B90(float x, float y, float z, float w)
{
    f180 = x + f180;
    f184 = y + f184;
    f188 = z + f188;
    f268 = x + f268;
    f26c = y + f26c;
    f270 = z + f270;
}

C_00030C00 *C_00030C00::func_00030C00(int a0)
{
    u32 *p;

    func_00157600(a0);
    vtbl = (void *)&D_00276A24;
    p = &f58;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f68;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f50 = 0;
    f54 = 0;
    f78 = 0;
    f40 = 0x416aaa65;
    f34 = 0x41afffcc;
    f38 = 0x41eaaa65;
    f44 = 0x41200000;
    f48 = 0x3c23d70a;
    f4C = 0x3dcccccd;
    f3C = 0x424d5518;
    f30 = 0x424d5518;
    f28 = 0;
    f24 = 1;
    f2C = 1;
    f58 = D_002A135C;
    f5C = D_002A1360;
    f60 = D_002A1364;
    f64 = D_002A1368;
    f68 = D_002A135C;
    f6C = D_002A1360;
    f70 = D_002A1364;
    f74 = D_002A1368;
    return this;
}

void C_00030CD0::func_00030CD0(int a0) {
    unk78 = a0;
}

int C_00030CE0::func_00030CE0(float dt)
{
 if(f24 != 0 && f2C != 0) {
 float d=f30-f78->f28;
 f50=d*f4C;
 if(f50>D_00275460) { f50=1.0f; f54=0; }
 else if(f50<D_00275544) { f50=0; f54=0; }
 else {
 f54 += d*f48*dt;
 f54=AsmMinF(AsmMaxF(f54,0.0f),1.0f);
 f50+=f54;
 f50=AsmMinF(AsmMaxF(f50,0.0f),1.0f);
 }
 float v=f50*f44;
 if(f28 != 0) v*=D_00276A90;
 f60=v;
 return 1;
 }
 f54=0; f50=0; f60=0;
 return 1;
}

int C_00030E70::func_00030E70(int a0)
{
    S_00030E70_Target *t = f78;
    float *p = &f58.x;
    func_0001C750(*(V4_00030E70 *)p, V4_00030E70(t->f190 + p[4], t->f194 + p[5], t->f198 + p[6], 1.0f));
    return 1;
}

void *C_00030F00::func_00030F00(unsigned int flags)
{
    extern int D_00276A24;
    void func_001E891B(void *);

    vtbl = (void *)&D_00276A24;
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_00030F30(char *dst, const char *src)
{
    char *dot = func_001E8AC0(dst, '.');
    if (dot != 0) {
        strcpy(dot, src);
    } else {
        strcat(dst, src);
    }
}

C_00030F90 *C_00030F90::func_00030F90(int a0)
{
    struct Q4 { int x, y, z, w; };
    int *u = (int *)this;
    int *p;
    int *q;
    int *z;
    int i;

    ((C_00030C00 *)this)->func_00157600(a0);
    u[0] = (int)&D_00276AB4;
    u[0x218 / 4] = 0;
    u[0x214 / 4] = 0;
    u[0x210 / 4] = 0;
    u[0x21c / 4] = 0x3f800000;
    u[0x228 / 4] = 0;
    u[0x224 / 4] = 0;
    u[0x220 / 4] = 0;
    u[0x22c / 4] = 0x3f800000;
    p = &u[0x23c / 4];
    i = 2;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--i);
    p = &u[0x25c / 4];
    i = 2;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--i);
    u[0x64 / 4] = 0;
    u[0x8c / 4] = 0;
    u[0x15c / 4] = 0;
    u[0x160 / 4] = 0;
    u[0x194 / 4] = 0;
    u[0x1d0 / 4] = 0;
    u[0x16c / 4] = 0;
    u[0x140 / 4] = 0;
    u[0x13c / 4] = 0;
    u[0x144 / 4] = 0;
    u[0x11c / 4] = 0;
    u[0x120 / 4] = 0;
    u[0x190 / 4] = 0;
    u[0x1f8 / 4] = 0;
    u[0x1fc / 4] = 0;
    u[0x200 / 4] = 0;
    u[0x204 / 4] = 0;
    u[0x208 / 4] = 0;
    u[0x20c / 4] = 0;
    u[0x164 / 4] = 0;
    u[0x1a0 / 4] = 0;
    u[0x1a4 / 4] = 0;
    u[0x1a8 / 4] = 0;
    u[0x1ac / 4] = 0;
    u[0x168 / 4] = 0;
    u[0x118 / 4] = 0;
    *(int *)((char *)D_002A8490 + 0x2a8) = 0;
    u[0xe4 / 4] = 0;
    u[0xe8 / 4] = 0;
    ((char *)this)[0xec] = 0;
    p = &u[0x44 / 4];
    i = 8;
    do {
        p[-8] = 0;
        p[0] = 0;
        p[0xa] = -1;
        p[0x4b] = 0;
        p++;
    } while (--i);
    u[0x114 / 4] = 1;
    u[0x198 / 4] = 0;
    u[0x10c / 4] = 0;
    u[0x19c / 4] = 0;
    u[0x128 / 4] = D_002A8490->f2e0->f10;
    u[0x110 / 4] = 1;
    u[0x90 / 4] = 1;
    u[0x134 / 4] = -1;
    u[0x1c / 4] = -1;
    u[0x1cc / 4] = 1;
    u[0x124 / 4] = 0;
    u[0x12c / 4] = 0;
    u[0x130 / 4] = 0;
    u[0x210 / 4] = 0;
    u[0x214 / 4] = 0;
    u[0x218 / 4] = 0;
    u[0x220 / 4] = 0;
    u[0x224 / 4] = 0;
    u[0x228 / 4] = 0;
    u[0x230 / 4] = 0;
    u[0x14c / 4] = 0;
    u[0x148 / 4] = 0;
    u[0x1d4 / 4] = 0;
    u[0x158 / 4] = 0;
    u[0x1c0 / 4] = 0;
    u[0x1bc / 4] = 0;
    u[0x1b0 / 4] = 0;
    u[0x154 / 4] = 0;
    u[0x1c4 / 4] = 0;
    u[0x1c8 / 4] = 0;
    memset(&u[0x1dc / 4], 0, 6 * 4);
    u[0x1f4 / 4] = 0;
    q = &u[0x25c / 4];
    z = &u[0x27c / 4];
    i = 2;
    do {
        z[-0x12] = 0;
        *(Q4 *)(q - 8) = *(Q4 *)&D_002A1460;
        *(Q4 *)q = *(Q4 *)&D_002A1460;
        z[0] = 0;
        z++;
        q += 4;
    } while (--i);
    u[0x1b4 / 4] = 0;
    D_002F07B8->func_001C3D40(0);
    return this;
}

int BmxEvent_00030A30::func_00031260(float dt)
{
    if (f124 > D_002756DC) {
        if (f164 != 0) {
            if (f164->f19c == 0) {
                v44();
            }
        } else {
            v44();
        }
    }
    if (f114 != 0) {
        D_002A8490->f2e0->f2fc->func_000947F0(D_002A8490->f2e0->f468);
        D_002A8490->f2e0->f2fc->f28->v30(D_002A8490->f2e0->f18);
        f64->f4c0->v30(D_002A8490->f2e0->f1c);
        if (D_002A8490->f2e0->f4 != 10) {
            D_002A8490->f2e0->f2fc->func_00095880();
        }
        D_002A8490->f4->v6();
        f114 = 0;
    }
    if (f1f4 != 0) {
        return func_00157A00(dt);
    }
    if ((D_002B8F1C & 1) == 0) {
        D_002B8F1C |= 1;
        D_002B8F18 = D_002A7CB8->func_00026500((int)&D_00276B68, -1);
    }
    if (D_002A8490->f4 != 0) {
        v30(!!(D_002A8490->f2e0->f4 - 10));
    }
    func_00157A00(dt);
    if (D_002A8490->f124 == 0 && f110 != 0) {
        f128 = f128 - dt;
        f124 = dt + f124;
    }
    return 1;
}

void func_00031400(void) {
    int func_001578D0(...);
    func_001578D0();
}

int func_00031410(void) {
    int func_00157960(...);
    func_00157960();
    return 1;
}

void func_00031420(void) {
    int func_001576D0(...);
    func_001576D0();
}

void C_00031430::func_00031430(void)
{
    D_002EFDB8->v8();
    ((C_001576C0 *)this)->func_001576C0();
}

void BmxEvent_00030A30::func_00031450(void)
{
    int i;

    if (f198 != 0) {
        f198->v4();
    }
    for (i = 0; i < f90; i++) {
        if (f170[i] != 0) {
            f170[i]->v4();
        }
    }
}

void BmxEvent_00030A30::func_000314A0(void)
{
    int i;

    if (f198 != 0) {
        f198->v6();
    }
    for (i = 0; i < f90; i++) {
        if (f170[i] != 0) {
            f170[i]->v6();
        }
    }
}

void BmxEvent_00030A30::func_000314F0(void)
{
    void *m = func_001E8A44(0x4c);
    f1b4 = m ? ((Sound_000314F0 *)m)->func_001CD770(D_002A8490->f4->fb4, 1) : 0;
    f1b4->v10();
    func_001577A0(f1b4, 2);
    m = func_001E8A44(0x1f0);
    f1d8 = m ? ((Target_00031610 *)m)->func_001A2C00(D_002A8490->f4, f1b4, 6, 1) : 0;
    f1b4->v30(D_002A8490->f2e0->f1c);
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5348, D_002A47F0);
    f1d8->func_001A4640(D_00276B78, D_00275630, -1);
    D_002A8490->f4->fb4->v6();
    func_001ADCC0(D_002A48F8, 0x104, D_00275678, D_002A5870, D_002A47F0);
    D_002A8490->f4->v6();
}

void BmxEvent_00030A30::func_00031610(int a0, int a1)
{
    if (f1d8 != 0) {
        f1d8->func_001A4100(a0, a1, 0);
    }
}

void func_00031630(void) {
    int func_000314F0(...);
    func_000314F0();
}

void BmxEvent_00030A30::func_00031640(void)
{
    int i;
    if (f1d0) func_001577A0(f1d0, -1);
    if (fe4) func_001577A0(fe4, -1);
    for (i = 0; i < f90; i++) {
        if (f170[i]) func_001577A0(f170[i], -1);
    }
    if (f198) func_001577A0(f198, -1);
    if (f15c) func_001577A0(f15c, -1);
    if (f164) func_001577A0(f164, -1);
    if (f1a0) func_001577A0(f1a0, -1);
    if (f160) func_001577A0(f160, -1);
    if (f16c) func_001577A0(f16c, -1);
    if (f170[8]) func_001577A0(f170[8], -1);
    if (f170[9]) func_001577A0(f170[9], -1);
    if (f19c) func_001577A0(f19c, -1);
    if (f1a4) func_001577A0(f1a4, -1);
    if (f1a8) func_001577A0(f1a8, -1);
    if (f1ac) func_001577A0(f1ac, -1);
    if (f168) func_001577A0(f168, -1);
}

void BmxEvent_00030A30::func_000317B0(int flag)
{
    int i;

    for (i = 0; i < f90; i++) {
        int id = f6c[i];

        if (id != -1) {
            void *extra;
            Obj_000317B0 *obj;

            if (flag != 0) {
                extra = &f64->f4e0->f1a8[i]->f1e0->f238;
            } else {
                extra = 0;
            }
            obj = f24[i];
            D_002A8490->f4->func_0001CCE0(id, &obj->f170, &obj->f180, &obj->f190, extra);
        }
    }
}

