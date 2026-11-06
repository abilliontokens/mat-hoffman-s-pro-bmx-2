/* 2 functions from 0x0002CBC0 to 0x0002D730, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <string.h>

struct V4_2D270 { float x, y, z, w; };

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

void S2CBC0::func_0002D270()
{
    V4_2D270 m1w = { m1[3], m1[7], m1[11], 1.0f };
    float s = D_002A8490->f248;
    V4_2D270 d;
    d.x = (m1w.x - m2[3]) * s;
    d.y = (m1w.y - m2[7]) * s;
    d.z = (m1w.z - m2[11]) * s;
    d.w = 0.0f;
    V4_2D270 m1y = { m1[1], m1[5], m1[9], 1.0f };
    V4_2D270 m2y = { m2[1], m2[5], m2[9], 1.0f };
    V4_2D270 m1z = { m1[2], m1[6], m1[10], 1.0f };
    V4_2D270 m2z = { m2[2], m2[6], m2[10], 1.0f };
    V4_2D270 c1, c2, v, c3;
    Cross_2D270(&c1, &m2z, &m1z);
    Cross_2D270(&c2, &m2y, &m1y);
    v.x = (c2.x + c1.x) * s;
    v.y = (c2.y + c1.y) * s;
    v.z = (c2.z + c1.z) * s;
    v.w = 1.0f;
    Cross_2D270(&c3, (V4_2D270 *)&f1e0->f268, &m1w);
    V4_2D270 out1, out2;
    f230->func_00197EC0(&out1, &d);
    V4_2D270 *r = f230->func_00197EC0(&out2, &c3);
    out1.x += r->x;
    out1.y += r->y;
    out1.z += r->z;
    f1e0->f238 += out1.x;
    f1e0->f23c += out1.y;
    f1e0->f240 += out1.z;
    f1e0->f268 += v.x;
    f1e0->f26c += v.y;
    f1e0->f270 += v.z;
    char buf[0x40];
    func_000263B0(buf, m1, f230->f0f0);
    char copy[0x40];
    memcpy(copy, buf, 0x40);
    f230->func_0019AD60(0, copy);
    func_0002A7C0();
}
