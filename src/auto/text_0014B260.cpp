/* 4 functions from 0x0014B260 to 0x0014C1C0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <math.h>
#include "asm_helpers.h"

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    Vec4() {}
    Vec4(f32 x_, f32 y_, f32 z_, f32 w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct Mtx44 {
    Vec4 r[4];
    Mtx44() {}
    void func_000264C0(Mtx44 *src);
};

struct VecInit_0014BA80 : Vec4 {
    VecInit_0014BA80() { z = 0; y = 0; x = 0; w = 1.0f; }
    VecInit_0014BA80(f32 x_, f32 y_, f32 z_) { x = x_; y = y_; z = z_; w = 1.0f; }
};
struct __declspec(align(16)) M44_0014BA80 { __m128 m[4]; };
struct S_0014BA80_Node { char pad0[0xF0]; M44_0014BA80 mat; };
struct S_0014BA80_Pair { S_0014BA80_Node *a; S_0014BA80_Node *b; };
extern float D_002755E8;
extern char *D_002B92EC;
extern "C" void *__cdecl memset(void *, int, unsigned int);
void func_00133D80(int);
void func_0011AC30(void *, void *);
void func_00030AC0(void *, void *, void *);
void func_00126740(void *, int, int *, void *, char *, int);
Vec4 *func_0011EEE0(Vec4 *out, Vec4 *a, Vec4 *b);
Vec4 *func_0014AA70(Vec4 *out, Vec4 *a, Vec4 *b);
void func_0001C680(Vec4 *out, Vec4 v, float *m);
#pragma auto_inline(on)
struct V4_0014BA80 {
    f32 x; f32 y; f32 z; f32 w;
    V4_0014BA80() { z = 0; y = 0; x = 0; w = 1.0f; }
    V4_0014BA80(f32 x_, f32 y_, f32 z_, f32 w_) { x = x_; y = y_; z = z_; w = w_; }
};
void func_0001C680(V4_0014BA80 *out, V4_0014BA80 v, float *m);
V4_0014BA80 func_0011EEE0(const V4_0014BA80 &a, const V4_0014BA80 &b);
V4_0014BA80 func_0014AA70(const V4_0014BA80 &a, const V4_0014BA80 &b);
static __forceinline void XformV4_0014BA80(V4_0014BA80 *out, const M44_0014BA80 *mat, const float *v)
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
static __forceinline void Xform_0014BA80(Vec4 *out, const M44_0014BA80 *mat, const float *v)
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
static __forceinline float Abs_0014BA80(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}
#pragma auto_inline(off)
struct DynamicRayCollisionObject {
    int func_0014B260(char *obj);
    char pad_0[0x28];
    Vec4 f28;
    char pad38[0x10];
    float f48;
    char pad4C[0x5a];
    unsigned char unkA6;
    unsigned char unkA7;
    int unkA8;
    S_0014BA80_Pair *fAC;
    Vec4 *fB0;
    char padB4[8];
    f32 *unkBC;
    Vec4 *unkC0;
    Vec4 *unkC4;
    void func_0014BA40(int param_1);
    void func_0014BA80(Vec4 *centre, float *extent);
    void func_0014B940();
    void func_00157A00(int param_1);
};

static inline void Vec4Unused(Vec4 *a, Vec4 *b) {}

#pragma auto_inline(on)
struct V4_0014B940 {
    f32 x; f32 y; f32 z; f32 w;
    V4_0014B940() { z = 0; y = 0; x = 0; w = 1.0f; }
    V4_0014B940(f32 x_, f32 y_, f32 z_, f32 w_) { x = x_; y = y_; z = z_; w = w_; }
    V4_0014B940 ScaleAdd(f32 s, const V4_0014B940 &d) const
    {
        return V4_0014B940(x + s * d.x, y + s * d.y, z + s * d.z, 1.0f);
    }
};

static void DebugLine_0014B940(V4_0014B940 a, V4_0014B940 b) {}
#pragma auto_inline(off)

/* same layout as DynamicRayCollisionObject, so BA40 keeps calling func_0014B940 instead of inlining it */
struct S_0014B940_Obj {
    char pad0[0xA8];
    int unkA8;
    char padAC[0x10];
    f32 *unkBC;
    V4_0014B940 *unkC0;
    V4_0014B940 *unkC4;
    void func_0014B940();
};

#pragma auto_inline(on)
int DynamicRayCollisionObject::func_0014B260(char *obj)
{
    int hit = 0;
    char *g;
    __declspec(align(16)) f32 m[16];
    int cnt[5];
    int i;
    f32 dx, dy, dz, r;
    if (obj == 0 || !(obj[0x21] & 1))
        return 0;
    func_00133D80(*(int *)((char *)this + 0x54));
    g = D_002B92EC;
    memset(*(void **)(g + 0x88), 0, *(int *)((char *)this + 0xa8) * 4);
    dx = *(f32 *)((char *)this + 0xd8) - *(f32 *)(obj + 0x28);
    dy = *(f32 *)((char *)this + 0xdc) - *(f32 *)(obj + 0x2c);
    dz = *(f32 *)((char *)this + 0xe0) - *(f32 *)(obj + 0x30);
    r = *(f32 *)((char *)this + 0xe8) + *(f32 *)(obj + 0x48);
    if (!(dz * dz + (dx * dx + dy * dy) < r * r))
        return 0;
    *(f32 *)(g + 0x94) = 1.0f;
    {
        f32 *p = *(f32 **)(g + 0x8c);
        for (i = 0; i < *(int *)((char *)this + 0xa8); i++)
            *p++ = -1.0f;
    }
    *(int *)(g + 0x80) = 0;
    switch (*(int *)(obj + 0x50)) {
    case 0: {
        char *src = obj + 0xb0;
        ((Mtx44 *)m)->func_000264C0((Mtx44 *)src);
        func_0011AC30(m, m);
        for (i = 0; i < *(int *)((char *)this + 0xa8); i++) {
            func_0001C680((Vec4 *)(*(char **)((char *)this + 0xb8) + i * 16), *(Vec4 *)((char *)*(char **)((char *)this + 0xc4) + i * 16), (float *)m);
            func_00030AC0(*(char **)((char *)this + 0xb4) + i * 16, (char *)*(char **)((char *)this + 0xc0) + i * 16, m);
        }
        func_00030AC0((char *)this + 0xc8, (char *)this + 0xd8, m);
        cnt[0] = *(int *)(obj + 0x1c4);
        cnt[1] = *(int *)(obj + 0x1c8);
        func_00126740((void *)this, 0, cnt, obj + 0x1b0, g, 1);
        {
            int *f = *(int **)(g + 0x88);
            Vec4 *a = *(Vec4 **)(g + 0x78);
            Vec4 *b = *(Vec4 **)(g + 0x74);
            for (i = 0; i < *(int *)((char *)this + 0xa8); i++, f++, a++, b++) {
                if (*f) {
                    hit = 1;
                    func_00030AC0(a, a, src);
                    func_0001C680(b, *b, (float *)src);
                }
            }
        }
        if (hit) {
            func_00030AC0(g + 0x30, g + 0x30, src);
            func_0001C680((Vec4 *)(g + 0x20), *(Vec4 *)(g + 0x20), (float *)src);
            func_0001C680((Vec4 *)(g + 0x40), *(Vec4 *)(g + 0x40), (float *)src);
        }
        break;
    }
    case 1: {
        int nsub = *(int *)(obj + 0x190);
        for (int s = 0; s < nsub; s++) {
            char *sub = *(char **)(*(char **)(obj + 0x1a0) + s * 4);
            char *src = sub + 0xb0;
            AsmCopyMatrix(m, src);
            func_0011AC30(m, m);
            for (i = 0; i < *(int *)((char *)this + 0xa8); i++) {
                func_0001C680((Vec4 *)(*(char **)((char *)this + 0xb8) + i * 16), *(Vec4 *)((char *)*(char **)((char *)this + 0xc4) + i * 16), (float *)m);
                AsmTransformPoint((float *)(*(char **)((char *)this + 0xb4) + i * 16), (float *)((char *)*(char **)((char *)this + 0xc0) + i * 16), (float *)m);
            }
            cnt[0] = *(int *)(sub + 0x1c4);
            cnt[1] = *(int *)(sub + 0x1c8);
            func_00126740((void *)this, 0, cnt, sub + 0x1b0, g, 1);
            {
                int *f = *(int **)(g + 0x88);
                Vec4 *a = *(Vec4 **)(g + 0x78);
                Vec4 *b = *(Vec4 **)(g + 0x74);
                for (i = 0; i < *(int *)((char *)this + 0xa8); i++, f++, a++, b++) {
                    if (*f) {
                        hit = 1;
                        AsmTransformPoint((float *)a, (float *)a, (float *)src);
                        func_0001C680(b, *b, (float *)src);
                    }
                }
            }
            if (hit) {
                AsmTransformPoint((float *)(g + 0x30), (float *)(g + 0x30), (float *)src);
                func_0001C680((Vec4 *)(g + 0x20), *(Vec4 *)(g + 0x20), (float *)src);
                func_0001C680((Vec4 *)(g + 0x40), *(Vec4 *)(g + 0x40), (float *)src);
            }
        }
        break;
    }
    case 2:
    case 3:
        return hit;
    }
    return hit;
}

void S_0014B940_Obj::func_0014B940()
{
    V4_0014B940 a;
    V4_0014B940 t;
    volatile V4_0014B940 b;
    int i;

    b.z = 0.0f;
    b.y = 0.0f;
    b.x = 0.0f;
    b.w = 1.0f;
    for (i = 0; i < unkA8; i++) {
        f32 s = unkBC[i];

        a = unkC0[i];
        t.x = a.x + s * unkC4[i].x;
        t.y = a.y + s * unkC4[i].y;
        t.z = a.z + s * unkC4[i].z;
        t.w = 1.0f;
        b.w = t.w;
        b.x = t.x;
        b.y = t.y;
        b.z = t.z;
    }
}
#pragma auto_inline(off)
void DynamicRayCollisionObject::func_0014BA40(int param_1)
{
    if (unkA6 != 0) {
        func_0014B940();
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}

#pragma auto_inline(on)
void DynamicRayCollisionObject::func_0014BA80(Vec4 *centre, float *extent)
{
    V4_0014BA80 axes[3];
    V4_0014BA80 c;
    V4_0014BA80 a;
    V4_0014BA80 b;
    V4_0014BA80 mn(3.4028235e+38f, 3.4028235e+38f, 3.4028235e+38f, 1.0f);
    V4_0014BA80 mx(-3.4028235e+38f, -3.4028235e+38f, -3.4028235e+38f, 1.0f);
    int i;
    for (i = 0; i < unkA8; i++) {
        S_0014BA80_Node *n = fAC[i].a;
        if (n != 0) {
            AsmTransformPoint((float *)&a, &fB0[i * 2].x, (float *)&n->mat);
        } else {
            a = *(V4_0014BA80 *)&fB0[i * 2];
        }
        n = fAC[i].b;
        if (n != 0) {
            AsmTransformPoint((float *)&b, &fB0[i * 2 + 1].x, (float *)&n->mat);
        } else {
            b = *(V4_0014BA80 *)&fB0[i * 2 + 1];
        }
        mn = func_0011EEE0(func_0011EEE0(mn, b), a);
        mx = func_0014AA70(func_0014AA70(mx, b), a);
    }
    V4_0014BA80 h((mx.x - mn.x) * D_002755E8, (mx.y - mn.y) * D_002755E8, (mx.z - mn.z) * D_002755E8, 1.0f);
    c = V4_0014BA80((mx.x + mn.x) * D_002755E8, (mx.y + mn.y) * D_002755E8, (mx.z + mn.z) * D_002755E8, 1.0f);
    f28 = *(Vec4 *)&c;
    float rad = AsmSqrtF(h.x * h.x + h.y * h.y + h.z * h.z);
    f48 = rad;
    M44_0014BA80 m;
    AsmIdentityMatrix(&m);
    axes[0] = V4_0014BA80(h.x, 0.0f, 0.0f, 1.0f);
    axes[1] = V4_0014BA80(0.0f, h.y, 0.0f, 1.0f);
    axes[2] = V4_0014BA80(0.0f, 0.0f, h.z, 1.0f);
    AsmTransformPoint((float *)centre, &c.x, (float *)&m);
    func_0001C680(&axes[0], axes[0], (float *)&m);
    func_0001C680(&axes[1], axes[1], (float *)&m);
    func_0001C680(&axes[2], axes[2], (float *)&m);
    extent[0] = Abs_0014BA80(axes[2].x) + Abs_0014BA80(axes[1].x) + Abs_0014BA80(axes[0].x);
    extent[1] = Abs_0014BA80(axes[2].y) + Abs_0014BA80(axes[1].y) + Abs_0014BA80(axes[0].y);
    extent[2] = Abs_0014BA80(axes[2].z) + Abs_0014BA80(axes[1].z) + Abs_0014BA80(axes[0].z);
}
#pragma auto_inline(off)
