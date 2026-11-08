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
    volatile V4_2CBC0 v;
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
#pragma optimize("", on)
void S2CBC0::func_0002D270()
{
    S2CBC0 *volatile self = this;
    V3_2D270 out1, out2, v;
    V4_2D270 m1w;
    V4_2D270 d;
    V4_2D270 m1y, m2y, m1z, m2z;
    V4_2D270 c1, c2, c3;
    V3_2D270 *r;
    float s;

    m1w.x = self->m1[3];
    m1w.y = self->m1[7];
    m1w.z = self->m1[11];
    s = D_002A8490->f248;
    d.x = (m1w.x - self->m2[3]) * s;
    d.y = (m1w.y - self->m2[7]) * s;
    d.z = (m1w.z - self->m2[11]) * s;
    m1y.x = self->m1[1];
    m1y.y = self->m1[5];
    m1y.z = self->m1[9];
    m2y.x = self->m2[1];
    m2y.y = self->m2[5];
    m2y.z = self->m2[9];
    m1z.x = self->m1[2];
    m1z.y = self->m1[6];
    m1z.z = self->m1[10];
    m2z.x = self->m2[2];
    m2z.y = self->m2[6];
    m2z.z = self->m2[10];
    Cross_2D270(&c1, &m2z, &m1z);
    Cross_2D270(&c2, &m2y, &m1y);
    v.x = (c2.x + c1.x) * s;
    v.y = (c2.y + c1.y) * s;
    v.z = (c2.z + c1.z) * s;
    Cross_2D270(&c3, (V4_2D270 *)&self->f1e0->f268, &m1w);
    self->f230->func_00197EC0(&out1, &d);
    r = (V3_2D270 *)self->f230->func_00197EC0(&out2, &c3);
    out1.x += r->x;
    out1.y += r->y;
    out1.z += r->z;
    self->f1e0->f238 += out1.x;
    self->f1e0->f23c += out1.y;
    self->f1e0->f240 += out1.z;
    self->f1e0->f268 += v.x;
    self->f1e0->f26c += v.y;
    self->f1e0->f270 += v.z;
    {
        char buf[0x40];
        char copy[0x40];
        func_000263B0(buf, self->m1, self->f230->f0f0);
        memcpy(copy, buf, 0x40);
        self->f230->func_0019AD60(0, copy);
    }
    func_0002A7C0();
}
#pragma optimize("", on)
