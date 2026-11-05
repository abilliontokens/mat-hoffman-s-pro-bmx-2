/* 13 functions from 0x00179B40 to 0x0017AA90, found by Ghidra. */
#include "common.h"
struct ShadowPieceTable { char pad0[8]; int count; };
struct DXRenderableObject { char pad0[0x1a4]; ShadowPieceTable *f1a4; };
struct Alloc190;
struct DXShadowCaster {
    virtual void v0();
    virtual void v1();
    virtual void v2(DXRenderableObject *);
    DXRenderableObject *f4;
    int f8;
    Alloc190 *fc;
    DXShadowCaster *func_00143820(DXRenderableObject *);
};
struct C_0017A700 {
    char pad0[0xf0];
    DXShadowCaster **fF0;
    int fF4, fF8;
    void func_0017A700(DXRenderableObject *owner, int index);
};
struct C_0017B9E0 {
    int unk0, unk4;
    void func_001D3F50();
    C_0017B9E0 *func_0017B9E0(int a0, int a1);
};
struct C_0017BB10 {
    void func_0017BB10(C_0017B9E0 *p);
    void func_0017BE40();
};
extern C_0017BB10 D_002EFD38;
struct C_0017A6F0 {
    char pad0[0x134];
    int unk134;
    void func_0017A6F0(int a0);
};

struct C_0017A850 {
    char pad0[0xF4];
    int unkF4;
    void func_0017A850(void);
};

extern int D_00288ED4;
extern int D_00288F84;
extern void func_001E8390(void *p);

struct C_0017A2E0 {
    void *vtbl;
    void func_00157660();
    void *func_0017A2E0(unsigned int flags);
};

struct C_0017A640_Vtbl0 {
    virtual void v0(int a0);
};

struct C_0017A640_Vtbl2 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_0017A640_Mgr {
    void func_001B26C0(int a0);
};

extern C_0017A640_Mgr *D_002A829C;

struct C_0017A640 {
    void *vtbl;
    char pad4[0xEC];
    C_0017A640_Vtbl0 **fF0;
    char padF4[4];
    int fF8;
    C_0017A640_Vtbl2 *fFC;
    char pad100[0x40];
    void *f140;
    char pad144[0x10];
    int f154;
    void *f158;
    char pad15C[4];
    C_0017A640_Vtbl0 *f160;
    void func_00157660();
    void func_0017A640();
};

struct C_0017A1D0_Vec4 {
    float x, y, z, w;
};

static inline float C_0017A1D0_Dot(const C_0017A1D0_Vec4 &a, const C_0017A1D0_Vec4 &b)
{
    return a.z * b.z + (a.x * b.x + a.y * b.y);
}

static inline float C_0017A1D0_Fabs(const float &f)
{
    int i = *(int *)&f;
    i &= 0x7fffffff;
    return *(float *)&i;
}

static inline float C_0017A1D0_Abs(const float &f)
{
    union { float f; int i; } u;
    u.f = f;
    u.i &= 0x7fffffff;
    return u.f;
}

struct C_0017A1D0 {
    char pad0[0x24];
    C_0017A1D0_Vec4 pts[4];
    C_0017A1D0_Vec4 normals[5];
    int func_0017A1D0(float *p, float r, float *out);
    C_0017A1D0 *func_0017A310(C_0017A1D0_Vec4 *p);
    void func_00179880();
    void func_00179950();
};

struct C_0017A860 {
    char pad0[0x138];
    int f138;
    int f13C;
    int *f140;
    void func_0017A860(int value);
};


void *C_0017A2E0::func_0017A2E0(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = &D_00288ED4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0017A1D0 *C_0017A1D0::func_0017A310(C_0017A1D0_Vec4 *p)
{
    pts[0] = p[0];
    pts[1] = p[1];
    pts[2] = p[2];
    pts[3] = p[3];
    C_0017B9E0 a[4];
    C_0017B9E0 tmp;
    for (int i=0;i<4;i++) a[i].func_001D3F50();
    a[0] = *tmp.func_0017B9E0(0xbf800000,0xbf800000);
    a[1] = *tmp.func_0017B9E0(0xbf800000,0x3f800000);
    a[2] = *tmp.func_0017B9E0(0x3f800000,0x3f800000);
    a[3] = *tmp.func_0017B9E0(0x3f800000,0xbf800000);
    D_002EFD38.func_0017BB10(a);
    D_002EFD38.func_0017BE40();
    func_00179880();
    func_00179950();
    return this;
}

void C_0017A640::func_0017A640()
{
    int i;

    vtbl = &D_00288F84;
    if (fFC) {
        fFC->v2();
    }
    if (f160) {
        f160->v0(1);
    }
    for (i = 0; i < fF8; i++) {
        if (fF0[i]) {
            fF0[i]->v0(1);
        }
    }
    if (fF0) {
        func_001E8390(fF0);
    }
    if (f140) {
        func_001E8390(f140);
    }
    if (f158) {
        func_001E8390(f158);
    }
    D_002A829C->func_001B26C0(f154);
    func_00157660();
}

void C_0017A6F0::func_0017A6F0(int a0) {
    unk134 = a0;
}

void C_0017A850::func_0017A850(void) {
    unkF4 = 0;
}

void C_0017A860::func_0017A860(int value)
{
    int *func_001E8AA5(...);
    int *func_001E83E8(...);

    if (f140 == 0) {
        f140 = func_001E8AA5(f13C * 4 + 4);
        f138 = f13C + 1;
    } else if (f138 < f13C + 1) {
        f140 = func_001E83E8(f140, f13C * 4 + 4);
        f138 = f13C + 1;
    }
    f140[f13C] = value;
    f13C++;
}

