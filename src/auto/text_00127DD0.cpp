/* 7 functions from 0x00127DD0 to 0x00128930, found by Ghidra. */
#include "common.h"

#include <string.h>
struct S_00128630_V3 { float x,y,z; };
struct S_00128630_Entry { int data[13]; };
void func_00126DD0(S_00128630_Entry *,int,void *,void *,void *,float *,float *,int);
void func_001271E0(S_00128630_Entry *,int,void *,float *,int *);
void *func_001E8AA5(unsigned int);
void func_001E8390(void *);
extern float D_00275544;
void func_001E891B(void *p);

struct S_00127DD0_V4 {
    float x;
    float y;
    float z;
    float w;
};

struct S_00127DD0_Entry {
    S_00127DD0_V4 a;
    S_00127DD0_V4 b;
};

/* binary tree node: split value, two vec4s of payload, two children */
struct S_00127DD0_Node {
    float split;
    S_00127DD0_V4 a;
    S_00127DD0_V4 b;
    int unk24;
    S_00127DD0_Node *left;
    S_00127DD0_Node *right;
};

struct S_00128480_Entry {
    float split, length;
    unsigned short left, right;
    S_00128630_V3 va;
    S_00128630_V3 vb;
};
extern "C" float __cdecl sqrtf(float);
#pragma intrinsic(sqrtf)

struct C_00128910 {
    char pad0[0xC];
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    C_00128910* func_00128910(void);
};


#include <xmmintrin.h>
extern float D_002755E8;

struct V4_00128120 {
    float x, y, z, w;
    V4_00128120(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; }
};

struct __declspec(align(16)) M44_00128120 {
    __m128 m[4];
};

void func_0011AC30(M44_00128120 *out, M44_00128120 *in);
void func_00127DD0(int a0, int a1, int a2, S_00127DD0_Entry *e, V4_00128120 *mid, int count);

static __forceinline void Xform_00128120(float *out, const M44_00128120 *mat, const float *v)
{
    __m128 t = _mm_loadu_ps(v);
    _mm_storeh_pi((__m64 *)(out + 2), t);
    out[3] = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)(out + 2));
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
    _mm_storeu_ps(out, lo);
    out[3] = 1.0f;
}

void func_00128120(int a0, int a1, int a2, M44_00128120 *mat, S_00127DD0_Entry *e, int count)
{
    V4_00128120 *mid;
    M44_00128120 m;
    float *p;
    int i;
    int n;
    float sx, sy, sz;

    mid = (V4_00128120 *)func_001E8AA5(count << 4);
    for (i = 0; i + 3 < count; i += 4) {
        sx = e[i].a.x + e[i].b.x; sy = e[i].a.y + e[i].b.y; sz = e[i].a.z + e[i].b.z;
        mid[i] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
        sx = e[i + 1].a.x + e[i + 1].b.x; sy = e[i + 1].a.y + e[i + 1].b.y; sz = e[i + 1].a.z + e[i + 1].b.z;
        mid[i + 1] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
        sx = e[i + 2].a.x + e[i + 2].b.x; sy = e[i + 2].a.y + e[i + 2].b.y; sz = e[i + 2].a.z + e[i + 2].b.z;
        mid[i + 2] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
        sx = e[i + 3].a.x + e[i + 3].b.x; sy = e[i + 3].a.y + e[i + 3].b.y; sz = e[i + 3].a.z + e[i + 3].b.z;
        mid[i + 3] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
    }
    for (; i < count; i++) {
        sx = e[i].a.x + e[i].b.x; sy = e[i].a.y + e[i].b.y; sz = e[i].a.z + e[i].b.z;
        mid[i] = V4_00128120(sx * D_002755E8, sy * D_002755E8, sz * D_002755E8, 1.0f);
    }
    m = *mat;
    func_0011AC30(&m, &m);
    p = (float *)e;
    for (n = count * 2; n > 0; n--) {
        Xform_00128120(p, &m, p);
        p += 4;
    }
    func_00127DD0(a0, a1, a2, e, mid, count);
    func_001E8390(mid);
}

void func_00128440(S_00127DD0_Node *node)
{
    if (node->split >= D_00275544) {
        func_00128440(node->left);
        func_00128440(node->right);
    }
    func_001E891B(node);
}

void func_001285A0(S_00127DD0_Entry *out, S_00127DD0_Node *node, int *count)
{
    S_00127DD0_Entry *e;
    if (node->split >= D_00275544) {
        do {
            func_001285A0(out, node->left, count);
            node = node->right;
        } while (node->split >= D_00275544);
    }
    e = out + *count;
    e->a = node->a;
    e->b = node->b;
    (*count)++;
}

C_00128910* C_00128910::func_00128910(void) {
    unk14 = 0;
    unk10 = 0;
    unkC = 0;
    unk20 = 0;
    unk1C = 0;
    unk18 = 0;
    return this;
}
