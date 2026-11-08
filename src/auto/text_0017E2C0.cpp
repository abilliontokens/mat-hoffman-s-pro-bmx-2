/* 13 functions from 0x0017E2C0 to 0x0017F2B0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

extern int D_00289134;
extern int D_002891C4;

extern float D_00275544;
void func_001E8390(void *p);
void *func_001E8AA5(int size);

static inline void FloatToInt(int *out, float f)
{
    int * volatile p = out;

    *p = _mm_cvttss_si32(*(__m128 *)&f);
}

struct S_0017E1D0 {
    void func_0017E1D0(int a, int b, int c, int d, int e, int f, int g, int h);
};

struct QuadTree {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual int func_0017E2C0(float *a, float *b, int *c, int **d, int *e);
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    char pad04[8];
    u16 f0C;
    u8 f0E;
    char pad0F[0x19];
    float f28;
    char pad2C[4];
    float f30;
    char pad34[0xC];
    float f40;
    float f44;
    char pad48[8];
    int f50;
    float f54;
    char pad58[0x34];
    S_0017E1D0 *f8C;
    char pad90[0x7F8];
    int f888;
    int f88C;
    int *f890;
    int *f894;
    int f898;
    int f89C;
};

extern QuadTree *D_002EFD80;

void func_001E891B(void *p);

struct C_0017EE30 {
    void *vtbl;
    void *func_0017EE30(unsigned int flags);
    void func_00133070();
    void func_00133E60();
};

struct C_0017F050 {
    void *vtbl;
    char pad4[0x4C];
    int unk50;
    char pad54[0x9C];
    u16 unkF0;
    char padF2[2];
    u32 unkF4;
    u32 unkF8;
    void *unkFC;
    void *unk100;
    u32 unk104;
    C_0017F050 *func_0017F050(int a0);
    void func_00132EB0(int a0);
};

struct S_0017F0B0 {
    char pad0[0x70];
    void *unk70, *unk74, *unk78;
    char pad7C[8];
    void *unk84, *unk88, *unk8C, *unk90, *unk94;
};

struct RayCollisionObject {
    char pad0[0x54];
    S_0017F0B0 *unk54;
    char pad58[0xA4];
    void *unkFC, *unk100;
    void func_0017F0B0();
};

struct C_0017F0A0 {
    char pad0[0xA7];
    u8 unkA7;
    void func_0017F0A0(int a0);
    void func_00133020(int a0);
};

struct V4_0017F1B0 { u32 x, y, z, w; };
struct S_0017F1B0 {
    V4_0017F1B0 v0, v10;
    char pad20[0x20];
    V4_0017F1B0 v40, v50, v60;
    char pad70[0x10];
    u32 unk80;
    char pad84[0x10];
    u32 unk94;
};
struct C_0017F1B0 {
    char pad0[0x54];
    S_0017F1B0 *unk54;
    char pad58[0x4F];
    u8 unkA7;
    void func_0017F1B0();
};
extern u32 D_002B92E0, D_002B92F0;
extern V4_0017F1B0 D_002A8EE8;
void func_00133D80(void *p);

extern int D_002A8E7C, D_002A8E80, D_002A8E84, D_002A8E88;

/* collision shape tested by RadiusLineCollisionObject::func_0017EE60 */
struct S_0017EE60 {
    char pad0[0x21];
    u8 f21;
    char pad22[6];
    char f28[0x20];
    float f48;
    char pad4c[4];
    int f50;
    char pad54[0x54];
    char fA8[8];
    char fB0[8];
    char fB8[0x78];
    char f130[0x60];
    int f190;
    char pad194[0xc];
    S_0017EE60 **f1A0;
    char pad1a4[0xc];
    char f1B0[0x14];
    int f1C4;
    int f1C8;
};

float func_0011FDF0(char *p, float *a, float *b);
int func_00122810(char *a, char *b, float *c, float d, int e, char *f);
int func_00123EF0(float *a, float b, int c, int d, int *e, char *f, char *g);

struct RadiusLineCollisionObject {
    void *vtbl;
    char pad4[0x4c];
    int unk50;
    char pad54[0x52];
    unsigned char unkA6;
    unsigned char unkA7;
    char padA8[0x48];
    int fF0, fF4, fF8, fFC;
    int f100, f104, f108, f10C;
    float f110;
    int f114;
    int f118, f11C;
    int func_0017EE60(S_0017EE60 *s);
    RadiusLineCollisionObject *func_0017E620(int a0);
    void func_00132EB0(int a0);
    void func_0017E8E0(int param_1);
    void func_0017E7C0();
    void func_00157A00(int param_1);
};

struct Vec4_0017E6F0 { float x, y, z, w; };

struct V4C_0017E7C0 {
    float x, y, z, w;
    V4C_0017E7C0() { z = 0; y = 0; x = 0; w = 1.0f; }
    V4C_0017E7C0(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

/* bounds of a RadiusLineCollisionObject: capsule from (fF0..) to (f100..) swept by a radius, as centre + half extents */
extern float D_002755E8;
void func_0001C680(V4C_0017E7C0 *out, V4C_0017E7C0 v, float *m);

static __forceinline float Abs_0017E920(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}

struct C_0017E920 {
    char pad0[0xB0];
    float mB0[12];
    char padE0[0x10];
    float fF0, fF4, fF8, fFC;
    float f100, f104, f108, f10C;
    float f110, f114, f118, f11C;
    void func_0017E920(V4C_0017E7C0 *centre, float *extent);
};
void func_00030AC0(V4C_0017E7C0 *out, void *v, void *m);
void func_0017E5B0(V4C_0017E7C0 *a, V4C_0017E7C0 *b);

__forceinline void Xform_0017E7C0(V4C_0017E7C0 *out, float *m, float *vin)
{
    AsmTransformPoint(&out->x, vin, m);
}

struct C_0017E6F0 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    char pad4[0xAC];
    float mB0[16];
    Vec4_0017E6F0 fF0;
    Vec4_0017E6F0 f100;
    float f110, f114, f118, f11C;
    void func_0017E6F0(Vec4_0017E6F0 a, Vec4_0017E6F0 b, float r);
};

int QuadTree::func_0017E2C0(float *a, float *b, int *c, int **d, int *e)
{
    float x0;
    float z1;
    float x1;
    float z0;
    float t;
    int i0;
    int i1;
    int i2;
    int i3;

    x0 = a[0] - b[0] - f28;
    x1 = a[0] + b[0] - f28;
    z0 = a[2] - b[2] - f30;
    z1 = a[2] + b[2] - f30;
    if (x1 < x0) {
        t = x0;
        x0 = x1;
        x1 = t;
    }
    if (z1 < z0) {
        t = z0;
        z0 = z1;
        z1 = t;
    }
    if (x1 < D_00275544 || x0 > f40 || z1 < D_00275544 || z0 > f44 || (d == 0 && e == 0) || c == 0) {
        return 0;
    }
    if (f0E & 1) {
        v14();
    }
    f0C++;
    if (d != 0) {
        if (f88C < f888) {
            if (f894 != 0) {
                func_001E8390(f894);
            }
            f894 = 0;
        }
        if (f894 == 0) {
            f894 = (int *)func_001E8AA5(f888 * 4);
            f88C = f888;
        }
        f898 = 0;
        f89C = f888;
        f890 = f894;
        *d = f890;
        f0E |= 1;
    } else if (e != 0) {
        f89C = *c;
        f890 = e;
        f0E &= 0xfe;
    }
    D_002EFD80 = this;
    z0 *= f54;
    x1 *= f54;
    z1 *= f54;
    x0 *= f54;
    FloatToInt(&i0, x0);
    FloatToInt(&i1, z0);
    FloatToInt(&i2, x1);
    FloatToInt(&i3, z1);
    if (f8C != 0) {
        f8C->func_0017E1D0(i0, i1, i2, i3, 0, 0, 0x4000, f50);
    }
    *c = f898;
    return 1;
}

void func_0017E5B0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

RadiusLineCollisionObject *RadiusLineCollisionObject::func_0017E620(int a0) {
    func_00132EB0(a0);
    vtbl = &D_00289134;
    int *p = &fF0;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f100;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fF0 = D_002A8E7C;
    fF4 = D_002A8E80;
    fF8 = D_002A8E84;
    fFC = D_002A8E88;
    f100 = D_002A8E7C;
    f104 = D_002A8E80;
    f108 = D_002A8E84;
    f10C = D_002A8E88;
    f110 = 0;
    f114 = 0;
    f118 = 0;
    f11C = 0;
    unk50 = 4;
    return this;
}

void C_0017E6F0::func_0017E6F0(Vec4_0017E6F0 a, Vec4_0017E6F0 b, float r)
{
    C_0017E6F0 * volatile self = this;
    v6C();
    self->fF0 = a;
    self->f100 = b;
    self->f110 = r;
    self->f114 = self->f110 * self->f110;
    self->f118 = 1.0f;
    self->f11C = 1.0f;
    __m128 *m = (__m128 *)self->mB0;
    m[0] = _mm_setzero_ps();
    m[1] = _mm_setzero_ps();
    m[2] = _mm_setzero_ps();
    m[3] = _mm_setzero_ps();
    ((float *)m)[0] = 1.0f;
    ((float *)m)[5] = 1.0f;
    ((float *)m)[10] = 1.0f;
    ((float *)m)[15] = 1.0f;
}

void RadiusLineCollisionObject::func_0017E8E0(int param_1)
{
    if (unkA6 != 0) {
        func_0017E7C0();
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}

void C_0017E920::func_0017E920(V4C_0017E7C0 *centre, float *extent)
{
    V4C_0017E7C0 v[3];
    V4C_0017E7C0 b;
    V4C_0017E7C0 a;
    V4C_0017E7C0 c;
    float s = f11C;
    float r;
    float minx, maxx, miny, maxy, minz, maxz;
    float ex, ey, ez;

    a.x = s * fF0;
    a.y = s * fF4;
    a.z = s * fF8;
    b.x = s * f100;
    b.y = s * f104;
    b.z = s * f108;
    r = f118 * f110;
    if (a.x < b.x) {
        minx = a.x - r;
        maxx = b.x + r;
    } else {
        minx = b.x - r;
        maxx = a.x + r;
    }
    if (a.y < b.y) {
        miny = a.y - r;
        maxy = b.y + r;
    } else {
        miny = b.y - r;
        maxy = a.y + r;
    }
    if (a.z < b.z) {
        minz = a.z - r;
        maxz = b.z + r;
    } else {
        minz = b.z - r;
        maxz = a.z + r;
    }
    c = V4C_0017E7C0((maxx + minx) * D_002755E8, (maxy + miny) * D_002755E8, (maxz + minz) * D_002755E8, 1.0f);
    ex = (maxx - minx) * D_002755E8;
    ey = (maxy - miny) * D_002755E8;
    ez = (maxz - minz) * D_002755E8;
    v[0] = V4C_0017E7C0(ex, 0.0f, 0.0f, 1.0f);
    v[1] = V4C_0017E7C0(0.0f, ey, 0.0f, 1.0f);
    v[2] = V4C_0017E7C0(0.0f, 0.0f, ez, 1.0f);
    Xform_0017E7C0(centre, mB0, &c.x);
    func_0001C680(&v[0], v[0], mB0);
    func_0001C680(&v[1], v[1], mB0);
    func_0001C680(&v[2], v[2], mB0);
    extent[0] = Abs_0017E920(v[2].x) + Abs_0017E920(v[1].x) + Abs_0017E920(v[0].x);
    extent[1] = Abs_0017E920(v[2].y) + Abs_0017E920(v[1].y) + Abs_0017E920(v[0].y);
    extent[2] = Abs_0017E920(v[2].z) + Abs_0017E920(v[1].z) + Abs_0017E920(v[0].z);
}

void *C_0017EE30::func_0017EE30(unsigned int flags) {
    vtbl = &D_00289134;
    func_00133070();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int RadiusLineCollisionObject::func_0017EE60(S_0017EE60 *s)
{
    if ((s->f21 & 1) == 0) {
        return 0;
    }
    V4C_0017E7C0 v[2];
    int loc[2];
    int i;
    float d;

    v[0] = *(V4C_0017E7C0 *)&fF0;
    v[1] = *(V4C_0017E7C0 *)&f100;
    d = func_0011FDF0(s->f28, &v[0].x, &v[1].x);
    if (d < s->f48 + f110) {
        switch (s->f50) {
        case 0:
            loc[0] = s->f1C4;
            loc[1] = s->f1C8;
            if (func_00123EF0(&v[0].x, f110, f114, 0, loc, s->fB0, s->f1B0) != 0) {
                return 1;
            }
            break;
        case 1:
            if (func_00122810(s->fA8, s->fB8, &v[0].x, f110, f114, s->f130) != 0) {
                for (i = 0; i < s->f190; i++) {
                    S_0017EE60 *e = s->f1A0[i];
                    int x = e->f1C4;
                    int y = e->f1C8;
                    loc[0] = x;
                    loc[1] = y;
                    if (func_00123EF0(&v[0].x, f110, f114, 0, loc, e->fB0, e->f1B0) != 0) {
                        return 1;
                    }
                }
            }
            break;
        }
    }
    return 0;
}

C_0017F050 *C_0017F050::func_0017F050(int a0) {
    func_00132EB0(a0);
    unkF0 = 0;
    unkF4 = 0;
    unkF8 = 0;
    unkFC = 0;
    unk100 = 0;
    unk104 = 0;
    vtbl = &D_002891C4;
    unk50 = 2;
    return this;
}

void C_0017F0A0::func_0017F0A0(int a0) {
    unkA7 |= 0x40;
    func_00133020(a0);
}

void RayCollisionObject::func_0017F0B0() {
 if (unkFC) { func_001E891B(unkFC); unkFC = 0; }
 if (unk100) { func_001E891B(unk100); unk100 = 0; }
 S_0017F0B0 *p = unk54;
 if (p) {
 if (p->unk8C) { func_001E891B(p->unk8C); p->unk94 = 0; }
 if (p->unk70) { func_001E891B(p->unk70); p->unk70 = 0; }
 if (p->unk90) { func_001E891B(p->unk90); p->unk90 = 0; }
 if (p->unk74) { func_001E891B(p->unk74); p->unk74 = 0; }
 if (p->unk88) { func_001E891B(p->unk88); p->unk88 = 0; }
 if (p->unk84) { func_001E891B(p->unk84); p->unk84 = 0; }
 if (p->unk78) { func_001E891B(p->unk78); p->unk78 = 0; }
 func_001E891B(unk54); unk54 = 0;
 }
}

void C_0017F1B0::func_0017F1B0()
{
    unkA7 &= 0xdf;
    D_002B92E0 = 0;
    D_002B92F0 = 0;
    func_00133D80(unk54);
    S_0017F1B0 *p = unk54;
    p->v0 = D_002A8EE8;
    p->v10 = D_002A8EE8;
    p->unk94 = 0x3f800000;
    p->unk80 = 0;
    p->v40 = D_002A8EE8;
    p->v50 = D_002A8EE8;
    p->v60 = D_002A8EE8;
}

