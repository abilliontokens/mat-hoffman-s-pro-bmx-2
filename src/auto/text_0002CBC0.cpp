/* 2 functions from 0x0002CBC0 to 0x0002D730, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <string.h>

struct V4_2D270 {
    float x, y, z, w;
    V4_2D270() { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

/* column i of a 4x4 matrix as a point (w = 1) */
static __forceinline V4_2D270 Col_2D270(const float *m, int i)
{
    V4_2D270 v;
    v.x = m[i];
    v.y = m[i + 4];
    v.z = m[i + 8];
    return v;
}

struct S_2D270_Body {
    char pad0[0x238];
    float f238, f23c, f240;
    char pad244[0x268 - 0x244];
    float f268, f26c, f270, f274;
};

struct S_2D270_230 {
    char pad0[0xf0];
    char f0f0[0x40];
    void func_0019AD60(int a, void *b);
    V4_2D270 *func_00197EC0(void *a, void *b);
};

struct S_2D270_Glob { char pad[0x248]; float f248; };
extern S_2D270_Glob *D_002A8490;

struct S2CBC0 {
    char pad0[0x160];
    float m1[16];
    float m2[16];
    S_2D270_Body *f1e0;
    char pad1e4[0x230 - 0x1e4];
    S_2D270_230 *f230;
    char pad234[0x468 - 0x234];
    int f468;
    char pad46C[0x484 - 0x46c];
    float f484, f488, f48c;
    char pad490[0x730 - 0x490];
    float f730;
    char pad734[0x744 - 0x734];
    float f744;
    void func_0002CBC0(float dt);
    void func_0002D270();
    void func_0002A7C0();
};

void func_000263B0(void *out, void *a, void *b);

static __forceinline void Cross_2D270(V4_2D270 *out, const V4_2D270 *a, const V4_2D270 *b)
{
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 sa = _mm_shuffle_ps(va, va, 0xc9);
    __m128 sb = _mm_shuffle_ps(vb, vb, 0xc9);
    __m128 r = _mm_sub_ps(_mm_mul_ps(vb, sa), _mm_mul_ps(va, sb));
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(r, r, 0xc9));
}

void S2CBC0::func_0002CBC0(float dt)
{
    if (f468 != 0) {
        if (f730 > 0.0f) {
            f730 = f730 - dt;
            return;
        }
    }
    f484 = f484 + dt;
    {
        float t = f744;
        int ti = *(int *)&t & 0x7fffffff;
        float a = *(float *)&ti;
        f488 = f488 + a * dt;
    }
    {
        float t = f744;
        int ti = *(int *)&t & 0x7fffffff;
        float a = *(float *)&ti;
        f48c = f48c + a * dt;
    }
}

#pragma optimize("y", on)
void S2CBC0::func_0002D270()
{
    S2CBC0 *volatile self = this;
    V4_2D270 m1w;
    V4_2D270 d;
    V4_2D270 m1y, m2y, m1z, m2z;
    V4_2D270 c1, c2, v, c3;
    V4_2D270 out1, out2;
    V4_2D270 *r;
    float s;

    m1w.x = self->m1[3];
    m1w.y = self->m1[7];
    m1w.z = self->m1[11];
    m1w.w = 1.0f;
    s = D_002A8490->f248;
    d.w = 1.0f;
    d.x = (m1w.x - self->m2[3]) * s;
    d.y = (m1w.y - self->m2[7]) * s;
    d.z = (m1w.z - self->m2[11]) * s;
    m1y.x = self->m1[1];
    m1y.y = self->m1[5];
    m1y.z = self->m1[9];
    m1y.w = 1.0f;
    m2y.x = self->m2[1];
    m2y.y = self->m2[5];
    m2y.z = self->m2[9];
    m2y.w = 1.0f;
    m1z.x = self->m1[2];
    m1z.y = self->m1[6];
    m1z.z = self->m1[10];
    m1z.w = 1.0f;
    m2z.x = self->m2[2];
    m2z.y = self->m2[6];
    m2z.z = self->m2[10];
    m2z.w = 1.0f;
    c1.x = 0.0f;
    c1.y = 0.0f;
    c1.z = 0.0f;
    c1.w = 1.0f;
    c2.x = 0.0f;
    c2.y = 0.0f;
    c2.z = 0.0f;
    c2.w = 1.0f;
    Cross_2D270(&c1, &m2z, &m1z);
    Cross_2D270(&c2, &m2y, &m1y);
    v.w = 1.0f;
    v.x = (c2.x + c1.x) * s;
    v.y = (c2.y + c1.y) * s;
    v.z = (c2.z + c1.z) * s;
    c3.x = 0.0f;
    c3.y = 0.0f;
    c3.z = 0.0f;
    c3.w = 1.0f;
    Cross_2D270(&c3, (V4_2D270 *)&self->f1e0->f268, &m1w);
    self->f230->func_00197EC0(&out1, &d);
    r = self->f230->func_00197EC0(&out2, &c3);
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
