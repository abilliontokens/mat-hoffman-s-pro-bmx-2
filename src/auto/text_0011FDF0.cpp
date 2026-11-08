/* 5 functions from 0x0011FDF0 to 0x00120B20, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline float Min_0011FDF0(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_0011FDF0(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Abs_0011FDF0(const float &f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }

static __forceinline float AbsVal_00120470(float f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }

extern float D_00275544;
extern float D_002B9348;
extern void **D_002B92F4;
struct S_0011F4B0_V4 { float x, y, z, w; };
struct S_00120470_V4c { float x, y, z, w; S_00120470_V4c() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; } };
struct S_00120470_Triangle { S_0011F4B0_V4 a, n, b, c; };
void func_0011F540(S_0011F4B0_V4 *out, S_0011F4B0_V4 pos, float *m);
void func_0011F0E0(void *a, void *b, void *c, void *indices, void **data);
int func_0011FF30(S_0011F4B0_V4 *p, void *tri);
float func_0011FDF0(void *p, void *a, void *b);
void func_0011EFA0(S_0011F4B0_V4 *out, S_0011F4B0_V4 *in);
struct S_001206E0_Tri { int pad0[2]; float t; short x, y, z; };
struct S_001206E0_Hit {
    int max;
    int count;
    float t;
    int pad0[6];
    S_0011F4B0_V4 v24;
    int pad1[8];
    S_0011F4B0_V4 v54;
    int pad2[8];
    int f84;
};
extern S_001206E0_Hit *D_002B92EC;
static __forceinline void Cross_0011FF30(S_0011F4B0_V4 *out, S_0011F4B0_V4 *a, S_0011F4B0_V4 *b)
{
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(_mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&a->x), _mm_shuffle_ps(_mm_loadu_ps(&b->x), _mm_loadu_ps(&b->x), 0xc9)), _mm_mul_ps(_mm_loadu_ps(&b->x), _mm_shuffle_ps(_mm_loadu_ps(&a->x), _mm_loadu_ps(&a->x), 0xc9))), _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&a->x), _mm_shuffle_ps(_mm_loadu_ps(&b->x), _mm_loadu_ps(&b->x), 0xc9)), _mm_mul_ps(_mm_loadu_ps(&b->x), _mm_shuffle_ps(_mm_loadu_ps(&a->x), _mm_loadu_ps(&a->x), 0xc9))), 0xc9));
}


float func_0011FDF0(float *p, float *a, float *b)
{
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];
    float t = ((p[2] - a[2]) * dz + ((p[0] - a[0]) * dx + (p[1] - a[1]) * dy)) / (dy * dy + dx * dx + dz * dz);
    float ex;
    float ey;
    float ez;
    float r;

    t = Max_0011FDF0(Min_0011FDF0(t, 1.0f), 0.0f);
    ex = p[0] - (t * dx + a[0]);
    ey = p[1] - (dy * t + a[1]);
    ez = p[2] - (dz * t + a[2]);
    _mm_store_ss(&r, _mm_sqrt_ss(_mm_set_ss(ez * ez + ey * ey + ex * ex)));
    return r;
}

int func_0011FF30(S_0011F4B0_V4 *p, void *t)
{
    short *tri = (short *)t;
    S_0011F4B0_V4 n, a, b, c, u, v, w, x;
    n.x = (float)tri[6] * D_002B9348;
    n.y = (float)tri[7] * D_002B9348;
    n.z = (float)tri[8] * D_002B9348;
    a.z = 0.0f; a.y = 0.0f; a.x = 0.0f; a.w = 1.0f;
    b.z = 0.0f; b.y = 0.0f; b.x = 0.0f; b.w = 1.0f;
    c.z = 0.0f; c.y = 0.0f; c.x = 0.0f; c.w = 1.0f;
    u.z = 0.0f; u.y = 0.0f; u.x = 0.0f;
    v.z = 0.0f; v.y = 0.0f; v.x = 0.0f;
    w.z = 0.0f; w.y = 0.0f; w.x = 0.0f;
    func_0011F0E0(&a, &b, &c, tri, D_002B92F4);
    u.x = b.x - a.x; u.y = b.y - a.y; u.z = b.z - a.z; u.w = 1.0f;
    v.x = c.x - a.x; v.y = c.y - a.y; v.z = c.z - a.z; v.w = 1.0f;
    w.x = p->x - a.x; w.y = p->y - a.y; w.z = p->z - a.z; w.w = 1.0f;
    x.w = 1.0f;
    AsmVec3Cross(&x.x, &u.x, &w.x);
    if (!(x.y * n.y + x.x * n.x + x.z * n.z > D_00275544)) return 0;
    AsmVec3Cross(&x.x, &w.x, &v.x);
    if (!(x.y * n.y + x.x * n.x + x.z * n.z > D_00275544)) return 0;
    u.x = c.x - b.x; u.y = c.y - b.y; u.z = c.z - b.z; u.w = 1.0f;
    v.x = a.x - b.x; v.y = a.y - b.y; v.z = a.z - b.z; v.w = 1.0f;
    w.x = p->x - b.x; w.y = p->y - b.y; w.z = p->z - b.z; w.w = 1.0f;
    AsmVec3Cross(&x.x, &u.x, &w.x);
    if (!(x.y * n.y + x.x * n.x + x.z * n.z > D_00275544)) return 0;
    AsmVec3Cross(&x.x, &w.x, &v.x);
    if (!(x.y * n.y + x.x * n.x + x.z * n.z > D_00275544)) return 0;
    return 1;
}

int func_00120470(short *tri, S_0011F4B0_V4 pos, float radius, int unused, float *m)
{
    S_00120470_Triangle triangle;
    float delta[4], scaled[4];
    float d, absD;
    int absI;
    func_0011F540(&pos, pos, m);
    triangle.n.x = (float)tri[6] * D_002B9348;
    triangle.n.y = (float)tri[7] * D_002B9348;
    triangle.n.z = (float)tri[8] * D_002B9348;
    triangle.a.z = 0.0f; triangle.a.y = 0.0f; triangle.a.x = 0.0f; triangle.a.w = 1.0f;
    triangle.b.z = 0.0f; triangle.b.y = 0.0f; triangle.b.x = 0.0f; triangle.b.w = 1.0f;
    triangle.c.z = 0.0f; triangle.c.y = 0.0f; triangle.c.x = 0.0f; triangle.c.w = 1.0f;
    func_0011F0E0(&triangle.a, &triangle.b, &triangle.c, tri, D_002B92F4);
    delta[0] = pos.x - triangle.a.x; delta[1] = pos.y - triangle.a.y; delta[2] = pos.z - triangle.a.z;
    d = delta[2] * triangle.n.z + (delta[0] * triangle.n.x + delta[1] * triangle.n.y);
    absI = *(int *)&d & 0x7fffffff;
    absD = *(float *)&absI;
    if (absD > radius) return 0;
    scaled[0] = triangle.n.x * d; scaled[1] = triangle.n.y * d; scaled[2] = triangle.n.z * d;
    triangle.n.x = pos.x - scaled[0];
    triangle.n.y = pos.y - scaled[1];
    triangle.n.z = pos.z - scaled[2];
    triangle.n.w = 1.0f;
    if (func_0011FF30(&triangle.n, tri)) return 1;
    {
        float e = func_0011FDF0(&pos, &triangle.a, &triangle.b);
        absI = *(int *)&e & 0x7fffffff;
        absD = *(float *)&absI;
        if (absD < radius) return 1;
    }
    {
        float e = func_0011FDF0(&pos, &triangle.b, &triangle.c);
        absI = *(int *)&e & 0x7fffffff;
        absD = *(float *)&absI;
        if (absD < radius) return 1;
    }
    {
        float e = func_0011FDF0(&pos, &triangle.c, &triangle.a);
        absI = *(int *)&e & 0x7fffffff;
        absD = *(float *)&absI;
        if (absD < radius) return 1;
    }
    return 0;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
int func_001206E0(short *tri, S_0011F4B0_V4 pos, float radius, int unused, float *m)
{
    int result = 0;
    S_0011F4B0_V4 n;
    S_0011F4B0_V4 v0;
    S_0011F4B0_V4 proj;
    S_0011F4B0_V4 v1;
    S_0011F4B0_V4 v2;
    float scaled[4];
    float delta[4];
    float t;
    volatile int bits;
    S_001206E0_Hit *hit;

    func_0011F540(&pos, pos, m);
    n.x = (float)tri[6] * D_002B9348;
    n.y = (float)tri[7] * D_002B9348;
    n.z = (float)tri[8] * D_002B9348;
    n.w = 1.0f;
    v0.z = 0.0f; v0.y = 0.0f; v0.x = 0.0f; v0.w = 1.0f;
    v1.z = 0.0f; v1.y = 0.0f; v1.x = 0.0f; v1.w = 1.0f;
    v2.z = 0.0f; v2.y = 0.0f; v2.x = 0.0f; v2.w = 1.0f;
    func_0011F0E0(&v0, &v1, &v2, tri, D_002B92F4);
    delta[0] = pos.x - v0.x;
    delta[1] = pos.y - v0.y;
    delta[2] = pos.z - v0.z;
    t = delta[2] * n.z + (delta[0] * n.x + delta[1] * n.y);
    if (t < D_00275544) return 0;
    if (t > radius) return 0;
    scaled[0] = n.x * t;
    scaled[1] = n.y * t;
    scaled[2] = n.z * t;
    proj.x = pos.x - scaled[0];
    proj.y = pos.y - scaled[1];
    proj.z = pos.z - scaled[2];
    proj.w = 1.0f;
    if (func_0011FF30(&proj, tri)) goto hit;
    {
        float d = func_0011FDF0(&pos, &v0, &v1);
        _ReadWriteBarrier();
        bits = *(unsigned int *)&d & 0x7fffffff;
        if (*(float *)&bits < radius) goto hit;
    }
    {
        float d = func_0011FDF0(&pos, &v1, &v2);
        _ReadWriteBarrier();
        bits = *(unsigned int *)&d & 0x7fffffff;
        if (*(float *)&bits < radius) goto hit;
    }
    {
        float d = func_0011FDF0(&pos, &v2, &v0);
        _ReadWriteBarrier();
        bits = *(unsigned int *)&d & 0x7fffffff;
        if (!(*(float *)&bits < radius)) goto done;
    }
hit:
    result = 1;
    hit = D_002B92EC;
    if (hit == NULL) goto done;
    if (hit->count >= hit->max) goto done;
    if (hit->count != 0 && !(t < hit->t)) {
        result = 0;
        return result;
    }
    func_0011EFA0(&hit->v24, &n);
    hit->v54 = proj;
    hit->t = t;
    hit->f84 = 0;
    hit->count = 1;
done:
    return result;
}
int func_001209F0(float *a, float *b, float *p, float r2)
{
    float d[4];
    float s[4];
    float dd, t, t2, ex, ey, ez;
    d[0] = p[0] - a[0];
    d[1] = p[1] - a[1];
    d[2] = p[2] - a[2];
    dd = d[1] * d[1] + (d[0] * d[0] + d[2] * d[2]);
    ex = p[0] - b[0];
    ey = p[1] - b[1];
    ez = p[2] - b[2];
    if (dd <= r2 || ex * ex + ey * ey + ez * ez <= r2)
        return 1;
    s[0] = b[0] - a[0];
    s[1] = b[1] - a[1];
    s[2] = b[2] - a[2];
    t = s[2] * d[2] + (s[0] * d[0] + s[1] * d[1]);
    t2 = t * t;
    if (t < D_00275544)
        return 0;
    if (dd - r2 > t2)
        return 0;
    if (s[0] * s[0] + s[1] * s[1] + s[2] * s[2] > t2)
        return 1;
    return 0;
}
