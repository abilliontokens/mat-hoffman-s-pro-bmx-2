/* 2 functions from 0x00120B20 to 0x001217F0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

static __forceinline float Min_00120B20(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_00120B20(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

extern float D_002B9348;
extern void **D_002B92F4;

struct S_0011F4B0_V4 { float x, y, z, w; };
struct S_001206E0_Tri { int pad0[2]; float t; short x, y, z; };
struct S_00120B20_Seg { S_0011F4B0_V4 a, b; };

void func_0011F0E0(void *a, void *b, void *c, void *indices, void **data);
void func_0011F540(S_0011F4B0_V4 *out, S_0011F4B0_V4 pos, float *m);
void func_00030A30(S_0011F4B0_V4 *out, S_0011F4B0_V4 v, float *m);
int func_0011FF30(S_0011F4B0_V4 *p, void *tri);
float func_0011F8E0(S_0011F4B0_V4 *a, S_0011F4B0_V4 *b, S_0011F4B0_V4 *c, S_0011F4B0_V4 *d);
void func_00030AC0(float *out, float *a, float *m);
void func_0001C680(S_0011F4B0_V4 *out, S_0011F4B0_V4 v, float *m);

extern S_0011F4B0_V4 D_002A3C3C[3];
extern S_0011F4B0_V4 D_002B9350[15];
extern float D_00275544;
void func_00030AC0(float *out, float *a, float *m);
void func_0001C680(S_0011F4B0_V4 *out, S_0011F4B0_V4 v, float *m);

extern S_0011F4B0_V4 D_002A3C3C[3];
extern S_0011F4B0_V4 D_002B9350[15];
extern float D_00275544;

static inline void Cross_00120FF0(S_0011F4B0_V4 *a, S_0011F4B0_V4 *b, S_0011F4B0_V4 *out)
{
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&a->x), _mm_shuffle_ps(_mm_loadu_ps(&b->x), _mm_loadu_ps(&b->x), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(&b->x), _mm_shuffle_ps(_mm_loadu_ps(&a->x), _mm_loadu_ps(&a->x), 0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&a->x), _mm_shuffle_ps(_mm_loadu_ps(&b->x), _mm_loadu_ps(&b->x), 0xc9)),
                   _mm_mul_ps(_mm_loadu_ps(&b->x), _mm_shuffle_ps(_mm_loadu_ps(&a->x), _mm_loadu_ps(&a->x), 0xc9))), 0xc9));
}
static __forceinline float Abs_00120FF0(float f) { int i = *(int *)&f & 0x7fffffff; return *(float *)&i; }
static __forceinline float Dot_00120FF0(S_0011F4B0_V4 *a, S_0011F4B0_V4 *b) { return a->y * b->y + a->x * b->x + a->z * b->z; }

int func_00120B20(S_001206E0_Tri *tri, S_00120B20_Seg *seg, float radius, int unused, float *m)
{
    S_0011F4B0_V4 n;
    S_0011F4B0_V4 d;
    S_0011F4B0_V4 v0;
    S_0011F4B0_V4 p;
    S_0011F4B0_V4 v1;
    S_0011F4B0_V4 v2;
    S_0011F4B0_V4 tmp;
    S_0011F4B0_V4 proj;
    S_0011F4B0_V4 e;
    float hx, hy, hz, t, dist;
    int adist;

    n.x = tri->x * D_002B9348;
    n.y = tri->y * D_002B9348;
    n.z = tri->z * D_002B9348;
    d.x = 0.0f; d.y = 0.0f; d.z = 0.0f; d.w = 1.0f;
    v0.x = 0.0f; v0.y = 0.0f; v0.z = 0.0f; v0.w = 1.0f;
    p.x = 0.0f; p.y = 0.0f; p.z = 0.0f; p.w = 1.0f;
    v1.x = 0.0f; v1.y = 0.0f; v1.z = 0.0f; v1.w = 1.0f;
    v2.x = 0.0f; v2.y = 0.0f; v2.z = 0.0f; v2.w = 1.0f;
    func_0011F0E0(&v0, &v1, &v2, tri, D_002B92F4);
    func_0011F540(&p, seg->a, m);
    tmp.x = seg->b.x - seg->a.x;
    tmp.y = seg->b.y - seg->a.y;
    tmp.z = seg->b.z - seg->a.z;
    tmp.w = 1.0f;
    func_00030A30(&d, tmp, m);
    t = -((n.x * p.x + n.y * p.y + n.z * p.z + tri->t) / (n.x * d.x + n.y * d.y + n.z * d.z));
    t = Max_00120B20(Min_00120B20(t, 1.0f), 0.0f);
    hx = d.x * t + p.x;
    hy = d.y * t + p.y;
    hz = d.z * t + p.z;
    dist = (hx - v0.x) * n.x + (hy - v0.y) * n.y + (hz - v0.z) * n.z;
    adist = *(int *)&dist & 0x7fffffff;
    if (*(float *)&adist < radius) {
        return 0;
    }
    proj.x = hx - n.x * dist;
    proj.y = hy - n.y * dist;
    proj.z = hz - n.z * dist;
    proj.w = 1.0f;
    if (func_0011FF30(&proj, tri) != 0) {
        return 1;
    }
    e.x = v1.x - v0.x;
    e.y = v1.y - v0.y;
    e.z = v1.z - v0.z;
    e.w = 1.0f;
    if (func_0011F8E0(&p, &d, &v0, &e) < radius) {
        return 1;
    }
    e.x = v2.x - v1.x;
    e.y = v2.y - v1.y;
    e.z = v2.z - v1.z;
    e.w = 1.0f;
    if (func_0011F8E0(&p, &d, &v1, &e) < radius) {
        return 1;
    }
    e.x = v0.x - v2.x;
    e.y = v0.y - v2.y;
    e.z = v0.z - v2.z;
    e.w = 1.0f;
    if (func_0011F8E0(&p, &d, &v2, &e) >= radius) {
        return 0;
    }
    return 1;
}
