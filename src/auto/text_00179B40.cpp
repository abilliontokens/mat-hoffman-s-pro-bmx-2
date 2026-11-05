/* 13 functions from 0x00179B40 to 0x0017AA90, found by Ghidra. */
#include "common.h"
#include <string.h>
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
static inline const int &ShadowMin(const int &a, const int &b) { return a > b ? b : a; }
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

struct V4_0017A8F0 { float x, y, z, w; };
struct C_0017A8F0 {
    char pad0[0xfc];
    void *fFC;
    char pad100[0x18];
    int f118;
    int func_0017A8F0(V4_0017A8F0 *a0, V4_0017A8F0 *a1, int mode);
};
extern float D_002A8D0C, D_002A8D10, D_002A8D14, D_002A8D18, D_002A8CE0, D_00275800;
extern int D_002EFD6C;
extern struct { char pad[4]; char *p; } *D_002EFDB8;
V4_0017A8F0 *func_0001E9E0(V4_0017A8F0 *, V4_0017A8F0 *);
V4_0017A8F0 *func_0001C610(V4_0017A8F0 *, V4_0017A8F0 *, V4_0017A8F0 *);
void func_0017A460(V4_0017A8F0 *, V4_0017A8F0 *);
void func_0012AB70(V4_0017A8F0 *, V4_0017A8F0 *, V4_0017A8F0 *, int, int);

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

extern float D_00275544, D_00275460;
struct V3_0017A010 { float x, y, z; };
int func_001793E0(C_0017A1D0_Vec4 *p, V3_0017A010 *n, V3_0017A010 *o, V3_0017A010 *a, V3_0017A010 *b, V3_0017A010 *c);
struct C_0017A010 {
    char pad0[0x24];
    V3_0017A010 f24;
    char pad30[4];
    V3_0017A010 f34;
    char pad40[4];
    V3_0017A010 f44;
    char pad50[4];
    V3_0017A010 f54;
    char pad60[4];
    V3_0017A010 f64;
    int func_0017A010(V3_0017A010 *a, V3_0017A010 *b, C_0017A1D0_Vec4 *out);
};

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

extern int D_002A8CEC, D_002A8CF0, D_002A8CF4, D_002A8CF8;

static __forceinline void ZeroVec4_0017A4D0(int *v)
{
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
}

/* ProjectedShadow: GameObject (0xb0 bytes) followed by four vec4s and shadow state */
struct C_0017A4D0 {
    void *vtbl;
    char pad4[0xAC];
    int u[45];
    C_0017A4D0 *func_0017A4D0(int a0);
    void func_00157600(int a0);
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

C_0017A4D0 *C_0017A4D0::func_0017A4D0(int a0)
{
    int *p;
    func_00157600(a0);
    vtbl = (void *)&D_00288F84;
    p = &u[0]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[8]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[12]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[16] = 0; u[17] = 0; u[18] = 0; u[19] = 0;
    memset(&u[21], 0, 16);
    u[25] = 0; u[35] = 0; u[36] = 0; u[34] = 0;
    u[26] = 1; u[28] = 1;
    u[4] = D_002A8CEC; u[5] = D_002A8CF0; u[6] = D_002A8CF4; u[7] = D_002A8CF8;
    u[0] = D_002A8CEC; u[1] = D_002A8CF0; u[2] = D_002A8CF4;
    int w = D_002A8CF8;
    u[37] = 0; u[40] = 0; u[42] = 0; u[43] = 0; u[44] = 0;
    u[3] = w;
    u[31] = 0x3f800000; u[32] = 0x3f800000; u[41] = -1; u[33] = 0x3f800000;
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

