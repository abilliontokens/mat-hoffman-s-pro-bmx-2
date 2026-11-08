/* 17 functions from 0x00129930 to 0x0012A870, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct S_00129A10_Arg {
    char pad0[0x50];
    int f50;
    char pad54[0x54];
    float fA8, fAC, fB0;
    char padB4[0x34];
    float fE8;
    char padEC[0x10];
    void *fc;
    float f100;
    char pad104[8];
    float f10C;
    char pad110[0xAC];
    unsigned short f1bc;
    char pad1BE[6];
    void *f1c4;
};
void func_00030AC0(void *a, void *b, void *c);
struct C_00129A10 {
    char pad0[0xB0];
    float fB0[4];
    char padC0[0x30];
    float fF0[4];
    float f100[4];
    int func_00129A10(S_00129A10_Arg *a);
};
int func_001225C0(void *a, void *b, void *c, void *d, void *e, void *f);
void func_000264C0(void *a);
void func_0011AC30(void *a, void *b);
void func_0011ACC0(void *a, void *b, void *c);
int func_00120FF0(void *a, void *b, void *c, void *d, void *e);
void *func_000110E0(void *a, void *b, void *c);
void *func_0001C5E0(void *a, float b, void *c);
void *func_00011110(void *a, void *b, void *c);
struct M264C0 { void func_000264C0(void *a); };
struct M11AC30 { void func_0011AC30(void *a, void *b); };
struct M11ACC0 { void func_0011ACC0(void *a, void *b, void *c); };
struct M1225C0 { void func_001225C0(void *a, void *b, void *c, void *d, void *e, void *f); };
struct M120FF0 { void func_00120FF0(void *a, void *b, void *c, void *d, void *e); };
struct M110E0 { void func_000110E0(void *a, void *b, void *c); };
struct M11110 { void func_00011110(void *a, void *b, void *c); };
struct MC5E0 { void func_001C5E0(float a, void *b); };

extern int D_00283F64;
void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_00284008;
void *func_001E8A44(int size);

struct Vec4 {
    int x, y, z, w;
};

struct VCall31_129E10 {
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
    virtual void v31(int a);
};

struct CacheNode_129930 {
    void *f0;
    int f4;
    CacheNode_129930 *f8;
};

struct CacheList_129930 {
    int f0;
    CacheNode_129930 *f4;
    void func_00160B90(void);
};

struct CacheVCall_129930 {
    virtual void *v0(int a, int b);
    virtual void v1(void *p);
    virtual void v2();
};

struct CacheEntry_12A310 {
    int f0;
    int f4;
    ~CacheEntry_12A310() { f0 = 0; f4 = 0; }
    static void operator delete(void *p) { func_001E891B(p); }
};

struct Cache_129930 {
    void *vtbl;
    int f4;
    int f8;
    CacheList_129930 *fC;
    void func_0012A2C0(void);
    void func_0012A310(CacheEntry_12A310 *p);
    void func_0012A330(void);
};

extern int D_00284018;
extern int D_002A3E3C;
static const float D_00284034 = 16.0f;

struct StaticCache_12A350 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    StaticCache_12A350 *func_0012A350(int a, int b);
};

struct Cam_12A770 {
    Cam_12A770 *func_00193490(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
};

struct Emitter_12A770 {
    char pad0[0x24];
    int f24;
    Cam_12A770 *f28;
    int f2C;
    char pad30[0x170 - 0x30];
    int f170;
    void func_0012A770(int a1, int a2);
};

struct Emitter_12A7C0 {
    void *vtbl;
    char pad4[0x1DC - 4];
    float f1DC;
    int f1E0;
    int f1E4;
    int f1E8;
    int f1EC;
    int f1F0;
    float f1F4;
    float f1F8;
    char pad1FC[0x204 - 0x1FC];
    int f204;
    int f208;
    int f20C;
    int f210;
    int func_0012A7C0(int a, int b, int c, int d);
    bool func_0012A840(void);
};

struct Engine_2EFDB8 {
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
    virtual int v12(void *p);
    char pad4[0xC];
    int f10;
};

extern Engine_2EFDB8 *D_002EFDB8;

struct ListEntry_12A200 {
    int f0;
    int f4;
};

extern float D_00284038;
extern float D_0028403C;
extern int D_00284074;
extern int D_002A3E3C, D_002A3E40, D_002A3E44, D_002A3E48;

#include <xmmintrin.h>
#include "asm_helpers.h"

struct V4_12A3F0 { float x, y, z, w; };

static __forceinline void Set4_12A3F0(V4_12A3F0 *v)
{
    v->w = 1.0f;
    v->z = 0.0f;
    v->y = 0.0f;
    v->x = 0.0f;
}

static __forceinline void Ident_12A3F0(float *m)
{
    AsmIdentityMatrix(m);
}

struct Camera_12A3F0 {
    void func_00157600(int a);
    Camera_12A3F0 *func_0012A3F0(int a);
};

struct C_000264C0_129E20 {
    void func_000264C0(void *src);
};

void func_00030AC0(Vec4 *out, Vec4 *in, f32 *m);
extern "C" float __cdecl sqrtf(float);

struct BoxCollisionObject {
    void *vtbl;
    char pad4[0x24];
    Vec4 f28;
    char pad38[0x10];
    f32 f48;
    char pad4C[0x8];
    void *f54;
    char pad58[0x58];
    f32 matrix[16];
    Vec4 fF0;
    Vec4 f100;
    void func_00129E20(void *src);
    void func_00133E60();
    void func_00133090(int a, int b);
    void *func_0012A1C0(unsigned int flags);
    void func_00129930(Vec4 a1, Vec4 a2);
    void func_001299C0(Vec4 *p1, Vec4 *p2);
    void func_00129DF0(int a, int b);
    void func_00129E10(void);
};

extern float D_ZeroVec_probe[4];
void BoxCollisionObject::func_00129930(Vec4 a1, Vec4 a2)
{
    (**(code **)(*(int *)this + 0x6c))();
    fF0 = a1;
    f100 = a2;
    float *m = matrix;
    AsmIdentityMatrix(m);
}

void BoxCollisionObject::func_001299C0(Vec4 *p1, Vec4 *p2)
{
    if (p1)
        fF0 = *p1;
    if (p2)
        f100 = *p2;
}

int C_00129A10::func_00129A10(S_00129A10_Arg *a)
{
    __declspec(align(16)) float v1[4], v2[4];

    v1[0] = 0.0f; v1[1] = 0.0f; v1[2] = 0.0f; v1[3] = 1.0f;
    v2[0] = 0.0f; v2[1] = 0.0f; v2[2] = 0.0f; v2[3] = 1.0f;
    switch (a->f50) {
    case 5: {
        float t[4];
        t[0] = a->f10C * a->fA8;
        t[1] = a->f10C * a->fAC;
        t[2] = a->f10C * a->fB0;
        t[3] = 1.0f;
        func_00030AC0(t, &t[1], (char *)a + 0xc0);
        float s = a->f100 * a->f100;
        func_001225C0(fF0, f100, &t[3], (void *)*(int *)&a->f100, (void *)*(int *)&s, fB0);
        return 1;
    }
    case 3: {
        float s = a->fE8 * a->fE8;
        func_001225C0(fF0, f100, v2, (char *)a + 0xd8, (void *)*(int *)&a->fE8, (void *)*(int *)&s);
        return 1;
    }
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
        return 1;
    default:
        return 0;
    }
}

void BoxCollisionObject::func_00129DF0(int a, int b)
{
    func_00133090(a, b);
}

void BoxCollisionObject::func_00129E10(void)
{
    ((VCall31_129E10 *)this)->v31(0);
}

void BoxCollisionObject::func_00129E20(void *src)
{
    if (src == 0) {
        AsmIdentityMatrix(&matrix[0]);
    } else {
        ((C_000264C0_129E20 *)matrix)->func_000264C0(src);
    }
    f28 = fF0;
    f48 = AsmSqrtF(*(float *)&f100.z * *(float *)&f100.z + *(float *)&f100.y * *(float *)&f100.y + *(float *)&f100.x * *(float *)&f100.x);
    func_00030AC0(&f28, &f28, matrix);
}

void *BoxCollisionObject::func_0012A1C0(unsigned int flags)
{
    vtbl = (void *)&D_00283F64;
    if (f54) {
        func_001E891B(f54);
        f54 = 0;
    }
    func_00133E60();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

ListEntry_12A200 * __stdcall func_0012A200(int a, int b)
{
    ListEntry_12A200 *p = (ListEntry_12A200 *)func_001E8A44(8);

    if (p != 0) {
        p->f0 = a;
        p->f4 = b;
        return p;
    }
    return 0;
}

void Cache_129930::func_0012A2C0(void)
{
    if (fC != 0) {
        CacheNode_129930 *n;
        CacheList_129930 *l;

        for (n = fC->f4; n != 0; n = n->f8) {
            ((CacheVCall_129930 *)this)->v1(n->f0);
        }
        l = fC;
        if (l != 0) {
            l->func_00160B90();
            func_001E891B(l);
        }
        fC = 0;
    }
}

void Cache_129930::func_0012A310(CacheEntry_12A310 *p)
{
    delete p;
}

void Cache_129930::func_0012A330(void)
{
    vtbl = (void *)&D_00284008;
    f4 = 0;
    f8 = 0;
    func_0012A2C0();
    f4 = 0;
    f8 = 0;
}

StaticCache_12A350 *StaticCache_12A350::func_0012A350(int a, int b)
{
    int *p = &f4;

    p[0] = 0;
    p[1] = 0;
    f4 = a;
    f8 = b;
    fC = 0;
    vtbl = (void *)&D_00284018;
    return this;
}

void func_0012A380(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

Camera_12A3F0 *Camera_12A3F0::func_0012A3F0(int a)
{
    V4_12A3F0 v;
    unsigned char *b;
    int *p;
    float t;

    func_00157600(a);
    t = D_00284038;
    b = (unsigned char *)this;
    b[0x26] = 0xff;
    b += 0x24;
    *(unsigned short *)b = 0;
    b[3] &= 0xf8;
    *(int *)this = (int)&D_00284074;
    Set4_12A3F0((V4_12A3F0 *)((char *)this + 0x170));
    Set4_12A3F0((V4_12A3F0 *)((char *)this + 0x180));
    Set4_12A3F0((V4_12A3F0 *)((char *)this + 0x190));
    Set4_12A3F0((V4_12A3F0 *)((char *)this + 0x1a0));
    Set4_12A3F0((V4_12A3F0 *)((char *)this + 0x1b0));
    Set4_12A3F0((V4_12A3F0 *)((char *)this + 0x1c0));
    ((float *)this)[0x21c / 4] = 109.0f;
    ((float *)this)[0x220 / 4] = 10.0f;
    ((float *)this)[0x1d0 / 4] = 77.0f;
    *(int *)((char *)this + 0x224) = 0;
    *(int *)((char *)this + 0x228) = 0;
    *(int *)((char *)this + 0x22c) = 0;
    ((float *)this)[0x1fc / 4] = t;
    ((float *)this)[0x200 / 4] = D_0028403C;
    *(int *)((char *)this + 0x20c) = 0;
    *(int *)((char *)this + 0x210) = 0;
    memset((char *)this + 0x1e0, 0, 24);
    Ident_12A3F0((float *)((char *)this + 0x30));
    v.x = 0.0f; v.y = 0.0f; v.z = 1.0f; v.w = 1.0f;
    *(V4_12A3F0 *)((char *)this + 0x180) = v;
    v.x = 0.0f; v.y = 1.0f; v.z = 0.0f; v.w = 1.0f;
    *(V4_12A3F0 *)((char *)this + 0x190) = v;
    v.x = 0.0f; v.y = 0.0f; v.z = 0.0f; v.w = 1.0f;
    *(V4_12A3F0 *)((char *)this + 0x170) = v;
    *(int *)((char *)this + 0x1d4) = 0;
    *(int *)((char *)this + 0x214) = 1;
    *(int *)((char *)this + 0x218) = 1;
    *(int *)((char *)this + 0x230) = 0;
    *(int *)((char *)this + 0x23c) = 0;
    *(int *)((char *)this + 0x234) = 0;
    *(int *)((char *)this + 0x238) = 0;
    *(int *)((char *)this + 0x240) = 0;
    *(int *)((char *)this + 0x244) = 0;
    *(V4_12A3F0 *)((char *)this + 0x1b0) = *(V4_12A3F0 *)((char *)this + 0x180);
    *(V4_12A3F0 *)((char *)this + 0x1a0) = *(V4_12A3F0 *)((char *)this + 0x170);
    p = (int *)this + 0x1c0 / 4;
    p[0] = D_002A3E3C;
    p[1] = D_002A3E40;
    p[2] = D_002A3E44;
    p[3] = D_002A3E48;
    Ident_12A3F0((float *)((char *)this + 0x130));
    *(int *)((char *)this + 0x28) = 0;
    *(int *)((char *)this + 0x2c) = 0;
    return this;
}

void Emitter_12A770::func_0012A770(int a1, int a2)
{
    Cam_12A770 *p = (Cam_12A770 *)func_001E8A44(0x28);

    f28 = p ? p->func_00193490() : 0;
    f2C = a1;
    f28->func_001938C0(&f24, a1, a2, &f170, &D_002A3E3C, 0);
}

int Emitter_12A7C0::func_0012A7C0(int a, int b, int c, int d)
{
    f1E0 = a;
    f1E4 = (int)D_00284034 + b;
    f1E8 = c;
    f1EC = d;
    f1F0 = 0;
    f1F4 = 1.0f;
    f1F8 = ((float)d / c) / (((float)f208 / f204) * f1DC);
    ((VCall31_129E10 *)this)->v28();
    return 1;
}

bool Emitter_12A7C0::func_0012A840(void)
{
    f20C = f210 = D_002EFDB8->f10 + 1;
    return D_002EFDB8->v12(&f1E0) != 0;
}

