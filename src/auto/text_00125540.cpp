/* 1 function from 0x00125540 to 0x00125F00, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

extern void **D_002B92F4;
extern float D_00275544;
extern float D_00275460;
extern int D_002B9344;

struct V4_00125540 {
    float x, y, z, w;
    V4_00125540() { x = y = z = 0.0f; w = 1.0f; }
    V4_00125540(float px, float py, float pz) { x = px; y = py; z = pz; w = 1.0f; }
    __forceinline V4_00125540 &operator=(const V4_00125540 &v) {
        ((int *)this)[0] = ((const volatile int *)&v)[0];
        ((int *)this)[1] = ((const volatile int *)&v)[1];
        ((int *)this)[2] = ((const volatile int *)&v)[2];
        ((int *)this)[3] = ((const volatile int *)&v)[3];
        return *this;
    }
};

void func_0011F0E0(V4_00125540 *a, V4_00125540 *b, V4_00125540 *c, unsigned short *indices, void **data);
void func_0011F210(V4_00125540 *a, V4_00125540 *b, V4_00125540 *c, unsigned short *indices, void **data);
void func_00123F20(V4_00125540 *outNormal, V4_00125540 *outHit, V4_00125540 *n, V4_00125540 *a, V4_00125540 *b, V4_00125540 *c, V4_00125540 *a2, V4_00125540 *b2, V4_00125540 *c2);
void func_00124760(V4_00125540 *outNormal, V4_00125540 *outHit, V4_00125540 *n, V4_00125540 *a, V4_00125540 *b, V4_00125540 *c, V4_00125540 *a2, V4_00125540 *b2, V4_00125540 *c2);
void func_0011EFA0(float *out, float *in);

static __forceinline void Cross_00125540(float * volatile out, float * volatile a, float * volatile b)
{
    float *pa = a, *pb = b;
    __m128 va = _mm_loadu_ps(pa);
    __m128 vb = _mm_loadu_ps(pb);
    __m128 sa = va, sb = vb;
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    vb = _mm_mul_ps(vb, sa);
    va = _mm_mul_ps(va, sb);
    va = _mm_sub_ps(va, vb);
    va = _mm_shuffle_ps(va, va, 0xc9);
    _mm_storeu_ps(out, va);
}

static __forceinline V4_00125540 Sub_00125540(const V4_00125540 &a, const V4_00125540 &b)
{
    return V4_00125540(a.x - b.x, a.y - b.y, a.z - b.z);
}

static __forceinline V4_00125540 Add_00125540(const V4_00125540 &a, const V4_00125540 &b)
{
    return V4_00125540(a.x + b.x, a.y + b.y, a.z + b.z);
}

static __forceinline V4_00125540 Mul_00125540(const V4_00125540 &v, float s)
{
    return V4_00125540(v.x * s, v.y * s, v.z * s);
}

static __forceinline float Dot_00125540(const V4_00125540 &a, const V4_00125540 &b)
{
    return a.y * b.y + a.x * b.x + a.z * b.z;
}

static __forceinline float Abs_00125540(float f)
{
    int i = *(int *)&f & 0x7fffffff;
    return *(float *)&i;
}

static __forceinline int InTri2D_00125540(float au, float av, float bu, float bv, float cu, float cv, float pu, float pv)
{
    float u1, u2;

    if (pv <= av && pv >= bv) {
        if (pv > cv) {
            u1 = (pv - av) * (bu - au) / (bv - av) + au;
            u2 = (pv - av) * (cu - au) / (cv - av) + au;
        } else {
            u1 = (pv - av) * (bu - au) / (bv - av) + au;
            u2 = (pv - bv) * (cu - bu) / (cv - bv) + bu;
        }
    } else if (pv <= bv && pv >= av) {
        if (pv <= cv) {
            u1 = (pv - av) * (bu - au) / (bv - av) + au;
            u2 = (pv - av) * (cu - au) / (cv - av) + au;
        } else {
            u1 = (pv - av) * (bu - au) / (bv - av) + au;
            u2 = (pv - bv) * (cu - bu) / (cv - bv) + bu;
        }
    } else if (pv <= cv && pv >= bv) {
        if (pv > av) {
            u1 = (pv - bv) * (cu - bu) / (cv - bv) + bu;
            u2 = (pv - av) * (cu - au) / (cv - av) + au;
        } else {
            u1 = (pv - av) * (bu - au) / (bv - av) + au;
            u2 = (pv - bv) * (cu - bu) / (cv - bv) + bu;
        }
    } else if (pv <= bv && pv >= cv) {
        if (pv <= av) {
            u1 = (pv - av) * (cu - au) / (cv - av) + au;
            u2 = (pv - bv) * (cu - bu) / (cv - bv) + bu;
        } else {
            u1 = (pv - av) * (bu - au) / (bv - av) + au;
            u2 = (pv - bv) * (cu - bu) / (cv - bv) + bu;
        }
    } else if (pv <= av && pv >= cv) {
        if (pv > bv) {
            u1 = (pv - av) * (bu - au) / (bv - av) + au;
            u2 = (pv - av) * (cu - au) / (cv - av) + au;
        } else {
            u1 = (pv - av) * (cu - au) / (cv - av) + au;
            u2 = (pv - bv) * (cu - bu) / (cv - bv) + bu;
        }
    } else if (pv <= cv && pv >= av) {
        if (pv <= bv) {
            u1 = (pv - av) * (bu - au) / (bv - av) + au;
            u2 = (pv - av) * (cu - au) / (cv - av) + au;
        } else {
            u1 = (pv - bv) * (cu - bu) / (cv - bv) + bu;
            u2 = (pv - av) * (cu - au) / (cv - av) + au;
        }
    } else {
        return 0;
    }
    return (pu <= u1 && pu >= u2) || (pu <= u2 && pu >= u1);
}

int func_00125540(unsigned short *tri, V4_00125540 dir, V4_00125540 org, float len, V4_00125540 *outHit, V4_00125540 *outNormal, float *outT)
{
    V4_00125540 n, e1, e2, a, b, c;
    V4_00125540 hit;
    float d, t;
    float ax, ay, az;
    float au, av, bu, bv, cu, cv, pu, pv;

    func_0011F0E0(&a, &b, &c, tri, D_002B92F4);
    e1 = Sub_00125540(b, a);
    e2 = Sub_00125540(c, a);
    AsmVec3Cross((float *)&n, (float *)&e1, (float *)&e2);
    func_0011EFA0((float *)&n, (float *)&n);
    d = Dot_00125540(dir, n);
    if (!(d < D_00275544))
        return 0;
    if (len <= D_00275544)
        return 0;
    t = Dot_00125540(Sub_00125540(a, org), n) / (d * len);
    if (t < D_00275544)
        return 0;
    if (t > D_00275460)
        return 0;
    hit = Add_00125540(org, Mul_00125540(Mul_00125540(dir, t), len));
    ax = Abs_00125540(n.x);
    ay = Abs_00125540(n.y);
    az = Abs_00125540(n.z);
    if (az > ax && az > ay) {
        au = a.x; av = a.y; bu = b.x; bv = b.y; cu = c.x; cv = c.y;
        pu = hit.x; pv = hit.y;
    } else if (ay > ax) {
        au = a.x; av = a.z; bu = b.x; bv = b.z; cu = c.x; cv = c.z;
        pu = hit.x; pv = hit.z;
    } else {
        au = a.y; av = a.z; bu = b.y; bv = b.z; cu = c.y; cv = c.z;
        pu = hit.y; pv = hit.z;
    }
    if (!InTri2D_00125540(au, av, bu, bv, cu, cv, pu, pv))
        return 0;
    if (outT && (t < *outT || *outT < D_00275544)) {
        *outT = t;
        if (outHit)
            *outHit = hit;
        if (outNormal) {
            if (D_002B92F4[1] != 0 && D_002B9344 != 0) {
                V4_00125540 a2, b2, c2;
                func_0011F210(&a2, &b2, &c2, tri, D_002B92F4);
                if (D_002B9344 == 1)
                    func_00123F20(outNormal, outHit, &n, &a, &b, &c, &a2, &b2, &c2);
                else
                    func_00124760(outNormal, outHit, &n, &a, &b, &c, &a2, &b2, &c2);
            } else {
                *outNormal = n;
            }
        }
    }
    return 1;
}
