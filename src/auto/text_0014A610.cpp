/* 15 functions from 0x0014A610 to 0x0014B260, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
    Vec4() {}
    Vec4(float x_, float y_, float z_, float w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

static __inline float Max(float a, float b)
{
    return a > b ? a : b;
}

struct VecInit_0014ACB0 : Vec4 {
    VecInit_0014ACB0() { z = 0; y = 0; x = 0; w = 1.0f; }
    VecInit_0014ACB0(float x_, float y_, float z_) { x = x_; y = y_; z = z_; w = 1.0f; }
};

struct __declspec(align(16)) M44_0014ACB0 {
    __m128 m[4];
};

struct S_0014ACB0_Node {
    char pad0[0xF0];
    M44_0014ACB0 mat;
};

struct S_0014ACB0_Pair {
    S_0014ACB0_Node *a;
    S_0014ACB0_Node *b;
};

struct S_0014ACB0_Shape {
    Vec4 f0;
    Vec4 f10;
    char pad20[0x60];
    int f80;
    char pad84[0x10];
    float f94;
};

extern float D_00275544;
extern float D_00275460;
extern float D_002755E8;
extern u32 D_002B92E0;
extern u32 D_002B92F0;
Vec4 *func_0011EEE0(Vec4 *out, Vec4 *a, Vec4 *b);
Vec4 *func_0014AA70(Vec4 *out, Vec4 *a, Vec4 *b);
void func_00133D80(void *p);

static __forceinline void Xform_0014ACB0(Vec4 *out, const M44_0014ACB0 *mat, const float *v)
{
    __m128 t = _mm_loadu_ps(v);
    _mm_storeh_pi((__m64 *)&out->z, t);
    out->w = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)&out->z);
    __m128 r0 = _mm_mul_ps(mat->m[0], t);
    __m128 r1 = _mm_mul_ps(mat->m[1], t);
    __m128 r2 = _mm_mul_ps(mat->m[2], t);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 junk = _mm_movehl_ps(r2, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&out->x, lo);
    out->w = 1.0f;
}

/* DynamicRayCollisionObject */
struct C_0014ACB0 {
    char pad0[0x28];
    Vec4 f28;
    char pad38[0x10];
    float f48;
    char pad4C[8];
    S_0014ACB0_Shape *f54;
    char pad58[0x4F];
    u8 fA7;
    int fA8;
    S_0014ACB0_Pair *fAC;
    Vec4 *fB0;
    char padB4[8];
    float *fBC;
    Vec4 *fC0;
    Vec4 *fC4;
    char padC8[0x10];
    Vec4 fD8;
    float fE8;
    void func_0014ACB0(void);
};

struct C_0014AC30 {
    char pad0[0xA8];
    int fA8;
    int *fAC;
    Vec4 *fB0;
    void func_0014AC30(Vec4 *vecs, int *ints);
};

struct C_0014A630 {
    int unk0;
    int unk4;
    int unk8;
    void func_0014A630(void);
};

struct C_0014A610 {
    int unk0;
    int unk4;
    int unk8;
    C_0014A610* func_0014A610(void);
    void func_0014A650(C_0014A610 *src);
};

struct VSEntry {
    int f0;
    int f4;
    int f8;
    char fC;
    char fD;
};

struct VSEntry2 {
    int f0;
    int f4;
    int f8;
    int fC;
};

struct C_0014A520 {
    C_0014A520 *func_0014A520(int a);
    void func_0014A560(int a, int b);
};

struct C_0014A8A0 {
    char pad0[8];
    int f8;
    char padC[8];
    VSEntry2 *f14;
    void func_0014A8A0(void);
    void func_0014A910(int param_1);
    void func_0014A9C0(void);
    void func_001AC790(int param_1);
};

struct C_00012140 {
    void func_0014A540(void);
};

struct C_0014AA40 {
    int unk0;
    void func_0014A9C0(void);
    void func_001AC830(void);
    void *func_0014AA40(int flags);
};

struct C_0014A960 {
    int unk0;
    void func_001AC3A0(void);
    void func_001AC680(int a, int b);
    void *func_0014A960(void);
};

struct C_0014A870 {
    int unk0;
    void func_001AC3D0();
    void *func_0014A870(int flags);
};

extern u32 D_00286924;
extern u32 D_002A75A8;
extern u32 D_002A75AC;
extern u32 D_002A75B0;
extern u32 D_002A75B4;

struct C_00132EB0 {
    void func_00132EB0(int a);
};

struct C_0014AB30 {
    void *vtbl;
    char pad4[0x4C];
    u32 f50;
    char pad54[0x54];
    u32 fA8;
    u32 fAC;
    u32 fB0;
    u32 fB4;
    u32 fB8;
    u32 fBC;
    u32 fC0;
    u32 fC4;
    u32 fC8;
    u32 fCC;
    u32 fD0;
    u32 fD4;
    u32 fD8;
    u32 fDC;
    u32 fE0;
    u32 fE4;
    u32 fE8;
    u32 fEC;
    u32 fF0;
    C_0014AB30 *func_0014AB30(int a);
};

void *func_001E8A44(int size);
void __stdcall func_001FF220(int v);
void __stdcall func_001FEEF0(int a, int b);
void __stdcall func_001FEB90(int a, int b);
static __declspec(noinline) int func_0014A6C0(int type);
int func_0014A7B0(VSEntry *entries, unsigned int *tokens);


C_0014A610* C_0014A610::func_0014A610(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = -1;
    return this;
}

void C_0014A630::func_0014A630(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = -1;
}

void C_0014A610::func_0014A650(C_0014A610 *src)
{
    if (src == 0) {
        func_001FF220((int)src);
        unk0 = 0;
        unk4 = 0;
        unk8 = 0;
        return;
    }
    if (unk4 != src->unk8 || unk8 != 0) {
        func_001FEEF0(src->unk8, 0);
    }
    int v = 0;
    if (unk0 != src->unk4) {
        v = src->unk4;
    }
    if (v != 0 || unk8 != 0) {
        func_001FEB90(v, 0);
    }
    unk0 = src->unk4;
    unk4 = src->unk8;
    unk8 = 0;
}

static __declspec(noinline) int func_0014A6C0(int type)
{
    switch (type) {
    case 0x12:
    case 0x16:
    case 0x21:
    case 0x25:
    case 0x40:
    case 0x44:
        return 4;
    case 0x42:
        return 0x10;
    case 0x32:
    case 0x72:
        return 0xc;
    case 0x31:
    case 0x35:
        return 6;
    case 0x22:
    case 0x41:
    case 0x45:
        return 8;
    case 0x14:
        return 1;
    case 0x11:
    case 0x15:
    case 0x24:
        return 2;
    case 0x34:
        return 3;
    case 2:
        return 0;
    default:
        return 0;
    }
}

int func_0014A7B0(VSEntry *entries, unsigned int *tokens)
{
    for (int i = 0; i < 16; i++) {
        entries[i].f0 = 0;
        entries[i].f4 = 0;
        entries[i].f8 = 2;
        entries[i].fC = 0;
        entries[i].fD = 0;
    }
    int count = 0;
    int offset = 0;
    int index = 0;
    for (; *tokens != 0xffffffff; tokens++) {
        unsigned int tok = *tokens;
        switch (tok >> 29) {
        case 1:
            index = tok & 0xf;
            offset = 0;
            break;
        case 2:
            if (tok & 0x10000000) {
                offset += ((tok >> 16) & 0xf) * 4;
            } else if (tok & 0x18000000) {
                offset += (tok >> 16) & 0xf;
            } else {
                VSEntry *e = &entries[tok & 0x1f];
                e->f0 = index;
                e->f4 = offset;
                int type = ((unsigned char *)tokens)[2];
                e->f8 = type;
                e->fC = 0;
                e->fD = 0;
                offset += func_0014A6C0(type);
                count++;
            }
            break;
        }
    }
    return count;
}

void *C_0014A870::func_0014A870(int flags) {
    extern int D_00286870;
    void func_001E891B(void *);
    unk0 = (int)&D_00286870;
    func_001AC3D0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0014A8A0::func_0014A8A0(void)
{
    for (int i = 0; i < f8; i++) {
        if (f14[i].fC > 0 && f14[i].f4 == 0) {
            C_0014A520 *p = (C_0014A520 *)func_001E8A44(0xc);
            p = p != 0 ? p->func_0014A520(f14[i].f8) : 0;
            p->func_0014A560(f14[i].f0, i);
            f14[i].f4 = (int)p;
        }
    }
}

void C_0014A8A0::func_0014A910(int param_1)
{
    void func_001E891B(int);
    int value;
    func_001AC790(param_1);
    if (f14[param_1].fC == 0) {
        value = f14[param_1].f4;
        if (value != 0) {
            ((C_00012140 *)value)->func_0014A540();
            func_001E891B(value);
            f14[param_1].f4 = 0;
        }
    }
}

void *C_0014A960::func_0014A960(void) {
    extern int D_00286904;
    extern int D_00286870;
    extern int D_002868F0;
    extern int D_002868DC;
    extern int D_002868C8;
    extern int D_002868B4;
    func_001AC3A0();
    unk0 = (int)&D_00286870;
    func_001AC680((int)&D_00286904, -0x54);
    func_001AC680((int)&D_002868F0, -0x53);
    func_001AC680((int)&D_002868DC, -0x52);
    func_001AC680((int)&D_002868C8, -0x51);
    func_001AC680((int)&D_002868B4, -0x40);
    return this;
}

void C_0014A8A0::func_0014A9C0(void) {
    void func_001E8390(void *);
    void func_001E891B(void *);
    int i = 0;
    if (i < f8) {
        do {
            int v = f14[i].f4;
            if (v != 0) {
                ((C_00012140 *)v)->func_0014A540();
                func_001E891B((void *)v);
                f14[i].f4 = 0;
            }
            int w = f14[i].f0;
            if (w != 0) {
                func_001E8390((void *)w);
                f14[i].f0 = 0;
            }
            f14[i].fC = 0;
            i++;
        } while (i < f8);
    }
    f8 = 0;
}

void *C_0014AA40::func_0014AA40(int flags) {
    extern int D_00286894;
    void func_001E891B(void *);
    unk0 = (int)&D_00286894;
    func_0014A9C0();
    func_001AC830();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

Vec4 *func_0014AA70(Vec4 *out, Vec4 *a, Vec4 *b)
{
    Vec4 t;
    _mm_store_ss(&t.x, _mm_max_ss(_mm_set_ss(a->x), _mm_set_ss(b->x)));
    _mm_store_ss(&t.y, _mm_max_ss(_mm_set_ss(a->y), _mm_set_ss(b->y)));
    _mm_store_ss(&t.z, _mm_max_ss(_mm_set_ss(a->z), _mm_set_ss(b->z)));
    t.w = 1.0f;
    *out = t;
    return out;
}

C_0014AB30 *C_0014AB30::func_0014AB30(int a)
{
    u32 *p;

    ((C_00132EB0 *)this)->func_00132EB0(a);
    vtbl = &D_00286924;
    p = &fC8;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &fD8;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fA8 = 0;
    fAC = 0;
    fB0 = 0;
    fB4 = 0;
    fB8 = 0;
    fBC = 0;
    fC0 = 0;
    fC4 = 0;
    fC8 = D_002A75A8;
    fCC = D_002A75AC;
    fD0 = D_002A75B0;
    fD4 = D_002A75B4;
    fD8 = D_002A75A8;
    fDC = D_002A75AC;
    fE0 = D_002A75B0;
    fE4 = D_002A75B4;
    fE8 = 0;
    fEC = 0;
    fF0 = 0;
    f50 = 3;
    return this;
}

void C_0014AC30::func_0014AC30(Vec4 *vecs, int *ints)
{
    for (int i = 0; i < fA8 * 2; i++) {
        if (ints != 0) {
            fAC[i] = ints[i];
        } else {
            fAC[i] = 0;
        }
        fB0[i] = vecs[i];
    }
}

void C_0014ACB0::func_0014ACB0(void)
{
    VecInit_0014ACB0 a;
    VecInit_0014ACB0 b;
    Vec4 mn(3.4028235e+38f, 3.4028235e+38f, 3.4028235e+38f, 1.0f);
    Vec4 mx(-3.4028235e+38f, -3.4028235e+38f, -3.4028235e+38f, 1.0f);
    Vec4 t1, t2, t3, t4;
    Vec4 *r;
    int i;
    float len;
    float rad;

    fA7 &= 0xdf;
    D_002B92E0 = 0;
    D_002B92F0 = 0;
    *(u32 *)&f28.x = D_002A75A8;
    *(u32 *)&f28.y = D_002A75AC;
    *(u32 *)&f28.z = D_002A75B0;
    *(u32 *)&f28.w = D_002A75B4;
    f48 = 0;
    for (i = 0; i < fA8; i++) {
        if (fAC[i].a != 0) {
            Xform_0014ACB0(&a, &fAC[i].a->mat, &fB0[i * 2].x);
        } else {
            *(Vec4 *)&a = fB0[i * 2];
        }
        if (fAC[i].b != 0) {
            Xform_0014ACB0(&b, &fAC[i].b->mat, &fB0[i * 2 + 1].x);
        } else {
            *(Vec4 *)&b = fB0[i * 2 + 1];
        }
        Vec4 d(b.x - a.x, b.y - a.y, b.z - a.z, 1.0f);
        _mm_store_ss(&len, _mm_sqrt_ss(_mm_set_ss(d.x * d.x + d.y * d.y + d.z * d.z)));
        fC0[i] = a;
        fBC[i] = len;
        if (len > D_00275544) {
            float inv = D_00275460 / len;
            fC4[i] = Vec4(d.x * inv, d.y * inv, d.z * inv, 1.0f);
        } else {
            *(u32 *)&fC4[i].x = D_002A75A8;
            *(u32 *)&fC4[i].y = D_002A75AC;
            *(u32 *)&fC4[i].z = D_002A75B0;
            *(u32 *)&fC4[i].w = D_002A75B4;
        }
        r = func_0011EEE0(&t1, &mn, &b);
        r = func_0011EEE0(&t2, r, &a);
        mn = *r;
        r = func_0014AA70(&t3, &mx, &b);
        r = func_0014AA70(&t4, r, &a);
        mx = *r;
    }
    fD8 = Vec4((mx.x + mn.x) * D_002755E8, (mx.y + mn.y) * D_002755E8, (mx.z + mn.z) * D_002755E8, 1.0f);
    f28 = fD8;
    {
        Vec4 h((mx.x - mn.x) * D_002755E8, (mx.y - mn.y) * D_002755E8, (mx.z - mn.z) * D_002755E8, 1.0f);
        _mm_store_ss(&rad, _mm_sqrt_ss(_mm_set_ss(h.x * h.x + h.y * h.y + h.z * h.z)));
        fE8 = rad;
    }
    f48 = fE8;
    func_00133D80(f54);
    *(u32 *)&f54->f0.x = D_002A75A8;
    *(u32 *)&f54->f0.y = D_002A75AC;
    *(u32 *)&f54->f0.z = D_002A75B0;
    *(u32 *)&f54->f0.w = D_002A75B4;
    *(u32 *)&f54->f10.x = D_002A75A8;
    *(u32 *)&f54->f10.y = D_002A75AC;
    *(u32 *)&f54->f10.z = D_002A75B0;
    *(u32 *)&f54->f10.w = D_002A75B4;
    f54->f80 = 0;
    f54->f94 = 1.0f;
}

