/* 9 functions from 0x001C5DE0 to 0x001C6DA0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

struct S_001C63F0_Work {
    Vec4 *pq;
    Vec4 q;
};

struct S_001C6820_Pair {
    f32 time;
    int value;
};

struct S_001C6820_Elem {
    char pad0[0x4C];
    S_001C6820_Pair *pairs;
    int count;
    char pad54[4];
};

struct C_001C6820 {
    char pad0[0xC0];
    S_001C6820_Elem *elems;
    int idx;
    int func_001C6820(f32 param_1);
};

struct C_001C67C0VT {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void func_vtbl3(int a, Vec4 *out);
};

struct C_001C67C0 {
    char pad0[0x10];
    C_001C67C0VT *obj10;
    void func_001C67C0(Vec4 *out, int param_2);
};

struct S_001C64A0_Node {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int idx, Vec4 *v, int a, int b, int c);
    virtual void v5(int idx, Vec4 *v, int a, int b, int c);
    S_001C64A0_Node *f4;
    char pad8[4];
    int fC;
    char pad10[4];
    S_001C64A0_Node **f14;
    char pad18[4];
    int f1C;
    S_001C64A0_Node *findRoot()
    {
        S_001C64A0_Node *root = this;
        int i;
        for (i = 0; i < f1C; i++) {
            if (f14[i]->f4 == 0) {
                root = f14[i];
            }
        }
        return root;
    }
};

static __forceinline Vec4 vec3_neg(Vec4 *v)
{
    Vec4 r;
    r.w = 1.0f;
    r.x = -v->x;
    r.y = -v->y;
    r.z = -v->z;
    return r;
}

void func_001C63F0(Vec4 *out, Vec4 *vin, f32 *m)
{
    Vec4 q;
    q.z = 0;
    q.y = 0;
    q.x = 0;
    q.w = 1.0f;
    Vec4 *pq = &q;
    __m128 v = _mm_loadu_ps(&vin->x);
    __m128 r0 = _mm_load_ps(m);
    _mm_storeh_pi((__m64 *)&pq->z, v);
    __m128 r1 = _mm_load_ps(m + 4);
    pq->w = 1.0f;
    __m128 r2 = _mm_load_ps(m + 8);
    v = _mm_loadh_pi(v, (__m64 const *)&pq->z);
    r0 = _mm_mul_ps(r0, v);
    r1 = _mm_mul_ps(r1, v);
    r2 = _mm_mul_ps(r2, v);
    __m128 lo = _mm_unpacklo_ps(r0, r1);
    __m128 hi = _mm_unpackhi_ps(r0, r1);
    __m128 t = _mm_movehl_ps(v, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, t);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&pq->x, lo);
    pq->w = 1.0f;
    ((u32 *)out)[0] = ((u32 *)pq)[0];
    ((u32 *)out)[1] = ((u32 *)pq)[1];
    ((u32 *)out)[2] = ((u32 *)pq)[2];
    ((u32 *)out)[3] = ((u32 *)pq)[3];
}

void func_001C64A0(S_001C64A0_Node *obj)
{
    Vec4 b;
    Vec4 a;
    int i;
    S_001C64A0_Node *root = obj->findRoot();

    a.z = 0;
    a.y = 0;
    a.x = 0;
    a.w = 1.0f;
    root->v5(0, &a, 0, 0, 0);
    b.w = 1.0f;
    b.x = -a.x;
    b.y = -a.y;
    b.z = -a.z;
    a = b;
    a.y = 0;
    for (i = 0; i < root->fC; i++) {
        b.z = 0;
        b.y = 0;
        b.x = 0;
        b.w = 1.0f;
        root->v5(i, &b, 0, 0, 0);
        b.x = a.x + b.x;
        b.y = b.y + a.y;
        b.z = b.z + a.z;
        root->v4(i, &b, 0, 0, 0);
    }
}

void C_001C67C0::func_001C67C0(Vec4 *out, int param_2)
{
    Vec4 local;
    local.z = 0;
    local.y = 0;
    local.x = 0;
    local.w = 1.0f;
    this->obj10->func_vtbl3(param_2, &local);
    ((u32 *)out)[0] = ((u32 *)&local)[0];
    ((u32 *)out)[1] = ((u32 *)&local)[1];
    ((u32 *)out)[2] = ((u32 *)&local)[2];
    ((u32 *)out)[3] = ((u32 *)&local)[3];
}

int C_001C6820::func_001C6820(f32 param_1)
{
    S_001C6820_Elem *e = &this->elems[this->idx];
    int count = e->count;
    int i = 0;
    int result = 0;
    if (count > 0) {
        S_001C6820_Pair *p = this->elems[this->idx].pairs;
        do {
            if (!(param_1 > p->time)) {
                return result;
            }
            result = p->value;
            i++;
            p++;
        } while (i < count);
    }
    return result;
}
