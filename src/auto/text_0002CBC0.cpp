/* 2 functions from 0x0002CBC0 to 0x0002D730, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "asm_helpers.h"

struct V4_2D270 {
    float x, y, z, w;
    V4_2D270() { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

struct V3_2D270 { float x, y, z; };

/* a point (w = 1) from its three coordinates */
static __forceinline V4_2D270 Pt_2D270(const float &x, const float &y, const float &z)
{
    V4_2D270 v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

/* column c of a 4x4 matrix stored as float[16], as a point (w = 1) */
static __forceinline V4_2D270 Col3_2D270(const float *m, int c)
{
    V4_2D270 r;
    r.x = m[c];
    r.y = m[c + 4];
    r.z = m[c + 8];
    return r;
}

struct S_2D270_Body {
    char pad0[0x238];
    float f238, f23c, f240;
    char pad244[0x268 - 0x244];
    float f268, f26c, f270, f274;
};

struct V4_2CBC0 { float x, y, z, w; };

struct S2CBC0_F1F4 { char pad0[0x2c]; int f2c; };

struct S2CBC0_Caps {
    char pad0[0xc];
    int fC;
    char pad10[0x20 - 0x10];
    float v20[3];
    char pad2c[0x30 - 0x2c];
    float v30[3];
    char pad3c[0x40 - 0x3c];
    float v40[3];
};

struct S2CBC0_F210 {
    char pad0[0x30];
    S2CBC0_Caps *f30;
    S2CBC0_Caps *f34;
    float mat38[4];
    float mat48[4];
    char pad58[0x78 - 0x58];
    float f78[2];
    float f7c[2];
};

struct S2CBC0_F5EC {
    void func_00025E50(float dt);
    float func_000260F0();
};

struct S2CBC0_F720 {
    char pad0[0x7c];
    void (*fn7c)(int a, S2CBC0_F720 *b, int c, int d);
    int f80;
};

struct S_2D270_230 {
    char pad0[0xf0];
    char f0f0[0x40];
    void func_0019AD60(int a, void *b);
    V4_2D270 *func_00197EC0(void *a, void *b);
    V4_2CBC0 *func_00197F70(void *a, void *b);
};

struct S_2D270_Glob { char pad[0x248]; float f248; };
extern S_2D270_Glob *D_002A8490;

extern float D_00275544;
void func_00026340(void *a, void *b);
int __stdcall func_00028130(void *a, int b, int c);

struct S2CBC0 {
    char pad0[0x160];
    float m1[16];
    float m2[16];
    S_2D270_Body *f1e0;
    char pad1e4[0x1f4 - 0x1e4];
    S2CBC0_F1F4 *f1f4;
    char pad1f8[0x210 - 0x1f8];
    S2CBC0_F210 *f210;
    char pad214[0x230 - 0x214];
    S_2D270_230 *f230;
    char pad234[0x468 - 0x234];
    int f468;
    char pad46C[0x484 - 0x46c];
    float f484, f488, f48c;
    char pad490[0x5b8 - 0x490];
    float f5b8, f5bc, f5c0;
    char pad5c4[0x5ec - 0x5c4];
    S2CBC0_F5EC *f5ec;
    char pad5f0[0x720 - 0x5f0];
    S2CBC0_F720 *f720;
    S2CBC0_Caps *f724;
    char pad728[0x730 - 0x728];
    float f730;
    char pad734[0x73c - 0x734];
    int f73c;
    char pad740[0x744 - 0x740];
    float f744;
    void func_0002CBC0(float dt);
    void func_0002D270();
    void func_0002A7C0();
    void func_00028070();
};

void func_000263B0(void *out, void *a, void *b);

/* column c of a matrix as a point (w = 1) */
static __forceinline V4_2D270 ColM1_2D270(const S2CBC0 *o, int c)
{
    V4_2D270 r;
    r.x = o->m1[c];
    r.y = o->m1[c + 4];
    r.z = o->m1[c + 8];
    return r;
}

static __forceinline V4_2D270 ColM2_2D270(const S2CBC0 *o, int c)
{
    V4_2D270 r;
    r.x = o->m2[c];
    r.y = o->m2[c + 4];
    r.z = o->m2[c + 8];
    return r;
}

static __forceinline V3_2D270 ScaleDiff_2D270(const V4_2D270 &a, const float *m2, float s)
{
    V3_2D270 r;
    float dx = a.x - m2[3];
    float dy = a.y - m2[7];
    float dz = a.z - m2[11];
    r.x = dx * s;
    r.y = dy * s;
    r.z = dz * s;
    return r;
}

static __forceinline void Cross_2D270(V4_2D270 *volatile out, const V4_2D270 *volatile a, const V4_2D270 *volatile b)
{
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 sa = _mm_shuffle_ps(va, va, 0xc9);
    __m128 sb = _mm_shuffle_ps(vb, vb, 0xc9);
    __m128 r = _mm_sub_ps(_mm_mul_ps(vb, sa), _mm_mul_ps(va, sb));
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(r, r, 0xc9));
}

#pragma optimize("y", on)
void S2CBC0::func_0002CBC0(float dt)
{
    volatile V4_2CBC0 a;
    volatile V4_2CBC0 b;
    volatile V4_2CBC0 m;
    volatile V4_2CBC0 mat;
    V4_2CBC0 *p;
    float cx, cy, cz, dot, lp, la, t, s;

    b.z = 0; b.y = 0; b.x = 0; b.w = 1.0f;
    a.z = 0; a.y = 0; a.x = 0; a.w = 1.0f;
    if (this->f468 == 0) {
        return;
    }
    if (this->f730 > D_00275544) {
        this->f730 = this->f730 - dt;
    }
    if (this->f730 <= D_00275544 && this->f73c == 0 && this->f720 != 0 && this->f720->fn7c != 0) {
        this->f720->fn7c(this->f1f4->f2c, this->f720, this->f720->f80, 1);
        this->f73c = 1;
    }
    this->f210->f30->fC = 1;
    this->f5ec->func_00025E50(dt);
    this->f5c0 = this->f5ec->func_000260F0() * this->f5b8;

    p = this->f230->func_00197F70((void *)&mat, this->f210->mat38);
    m.x = p->x; m.y = p->y; m.z = p->z; m.w = p->w;
    m.w = 1.0f;
    {
        volatile V4_2CBC0 v;
        v.x = this->f210->f30->v20[0] - m.x;
        v.y = this->f210->f30->v20[1] - m.y;
        v.z = this->f210->f30->v20[2] - m.z;
        v.w = 1.0f;
        dot = v.y * this->f210->f30->v40[1] + v.x * this->f210->f30->v40[0] + v.z * this->f210->f30->v40[2];
        cx = this->f210->f30->v20[0] - dot * this->f210->f30->v40[0];
        cy = this->f210->f30->v20[1] - dot * this->f210->f30->v40[1];
        cz = this->f210->f30->v20[2] - dot * this->f210->f30->v40[2];
        v.x = this->f210->f30->v20[0] - cx;
        v.y = this->f210->f30->v20[1] - cy;
        v.z = this->f210->f30->v20[2] - cz;
        v.w = 1.0f;
        b.x = v.x; b.y = v.y; b.z = v.z; b.w = v.w;
        a.x = this->f210->f30->v30[0] - cx;
        a.y = this->f210->f30->v30[1] - cy;
        a.z = this->f210->f30->v30[2] - cz;
        s = v.z * v.z + v.y * v.y + v.x * v.x;
        lp = AsmSqrtF(s);
        s = a.y * a.y + a.z * a.z + a.x * a.x;
        la = AsmSqrtF(s);
        t = AsmMinF(lp, la);
        func_00026340((void *)&b, (void *)&b);
        func_00026340((void *)&a, (void *)&a);
        if (a.y * b.y + a.x * b.x + a.z * b.z > D_00275544 && t > this->f5bc) {
            int r = func_00028130(this->f210->f78, 0, 0);
            this->f210->f30->fC = 0;
            if (r == 0) {
                this->func_00028070();
                return;
            }
            this->f724 = this->f210->f30;
            p = this->f230->func_00197F70((void *)&mat, this->f210->mat48);
            m.x = p->x; m.y = p->y; m.z = p->z; m.w = p->w;
            m.w = 1.0f;
            v.x = this->f210->f34->v20[0] - m.x;
            v.y = this->f210->f34->v20[1] - m.y;
            v.z = this->f210->f34->v20[2] - m.z;
            v.w = 1.0f;
            dot = v.y * this->f210->f34->v40[1] + v.x * this->f210->f34->v40[0] + v.z * this->f210->f34->v40[2];
            cx = this->f210->f34->v20[0] - dot * this->f210->f34->v40[0];
            cy = this->f210->f34->v20[1] - dot * this->f210->f34->v40[1];
            cz = this->f210->f34->v20[2] - dot * this->f210->f34->v40[2];
            v.x = this->f210->f34->v20[0] - cx;
            v.y = this->f210->f34->v20[1] - cy;
            v.z = this->f210->f34->v20[2] - cz;
            v.w = 1.0f;
            b.x = v.x; b.y = v.y; b.z = v.z; b.w = v.w;
            a.x = this->f210->f34->v30[0] - cx;
            a.y = this->f210->f34->v30[1] - cy;
            a.z = this->f210->f34->v30[2] - cz;
            s = v.y * v.y + v.x * v.x + v.z * v.z;
            lp = AsmSqrtF(s);
            s = a.y * a.y + a.z * a.z + a.x * a.x;
            la = AsmSqrtF(s);
            t = AsmMinF(lp, la);
            func_00026340((void *)&b, (void *)&b);
            func_00026340((void *)&a, (void *)&a);
            if (a.y * b.y + a.x * b.x + a.z * b.z > D_00275544 && t > this->f5bc) {
                if (func_00028130(this->f210->f7c, 0, 0) == 0) {
                    this->func_00028070();
                    return;
                }
            }
        }
    }
    this->f484 = this->f484 + dt;
    {
        float tt = this->f744;
        int ti = *(int *)&tt & 0x7fffffff;
        float av = *(float *)&ti;
        this->f488 = this->f488 + av * dt;
    }
    {
        float tt = this->f744;
        int ti = *(int *)&tt & 0x7fffffff;
        float av = *(float *)&ti;
        this->f48c = this->f48c + av * dt;
    }
}
#pragma optimize("y", on)
void S2CBC0::func_0002D270()
{
    V3_2D270 out1, out2;
    V3_2D270 *r;
    float s;
    __declspec(align(16)) char buf[0x40];
    __declspec(align(16)) char copy[0x40];

    V4_2D270 m1w = ColM1_2D270(this, 3);
    V3_2D270 d;
    d.x = m1w.x - this->m2[3];
    d.y = m1w.y - this->m2[7];
    d.z = m1w.z - this->m2[11];
    s = D_002A8490->f248;
    d.x = d.x * s;
    d.y = d.y * s;
    d.z = d.z * s;
    V4_2D270 m1y = ColM1_2D270(this, 1);
    V4_2D270 m2y = ColM2_2D270(this, 1);
    V4_2D270 m1z = ColM1_2D270(this, 2);
    V4_2D270 m2z = ColM2_2D270(this, 2);
    V4_2D270 c1;
    AsmVec3Cross((float *)&c1, (const float *)&m2z, (const float *)&m1z);
    V4_2D270 c2;
    AsmVec3Cross((float *)&c2, (const float *)&m2y, (const float *)&m1y);
    V3_2D270 t;
    t.x = c1.x + c2.x;
    t.y = c1.y + c2.y;
    t.z = c1.z + c2.z;
    V3_2D270 v;
    v.x = t.x * s;
    v.y = t.y * s;
    v.z = t.z * s;
    V4_2D270 c3;
    AsmVec3Cross((float *)&c3, (const float *)&this->f1e0->f268, (const float *)&m1w);
    this->f230->func_00197EC0(&out1, &d);
    r = (V3_2D270 *)this->f230->func_00197EC0(&out2, &c3);
    out1.x += r->x;
    out1.y += r->y;
    out1.z += r->z;
    this->f1e0->f238 += out1.x;
    this->f1e0->f23c += out1.y;
    this->f1e0->f240 += out1.z;
    this->f1e0->f268 += v.x;
    this->f1e0->f26c += v.y;
    this->f1e0->f270 += v.z;
    func_000263B0(buf, this->m1, this->f230->f0f0);
    memcpy(copy, buf, 0x40);
    this->f230->func_0019AD60(0, copy);
    func_0002A7C0();
}
#pragma optimize("", on)
