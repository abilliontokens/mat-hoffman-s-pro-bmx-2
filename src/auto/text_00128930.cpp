/* 10 functions from 0x00128930 to 0x00129930, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
struct C_00129900 {
    void func_00129900(void);
};

extern int D_002B92E4;
extern int D_002B92F4;
extern u32 D_002A3CD8;
extern u32 D_002A3CDC;
extern u32 D_002A3CE0;
extern u32 D_002A3CE4;
extern int D_00283F64;

/* vector initialised to (0, 0, 0, 1) */
struct S_00129050_Vec4 {
    float x, y, z, w;
    S_00129050_Vec4() {
        z = 0;
        y = 0;
        x = 0;
        w = 1.0f;
    }
};

struct S_00129050_Leaf32 {
    S_00129050_Vec4 v[2];
};

struct S_00129050_Leaf20 {
    int unk[5];
};

struct S_002B92E8 {
    void *nodes;
    S_00129050_Leaf32 *leaves;
};

struct S_002B9290 {
    void *nodes;
    S_00129050_Leaf20 *leaves;
};

extern S_002B92E8 *D_002B92E8;
extern S_002B9290 *D_002B9290;

/* tree node, 0x24 bytes, of D_002B92E8 / D_002B9290 ->nodes */
struct S_00129110_Node {
    float f0;
    float f4;
    unsigned short child0;
    unsigned short child1;
    float min[3];
    float max[3];
};

struct C_002B92A0 {
    void func_000264C0(int param_1);
};
extern C_002B92A0 D_002B92A0;
extern C_002B92A0 D_002B9300;

/* BoxCollisionObject (run-time type information), base class CollisionObject */
struct BoxCollisionObject {
    void *vtbl;
    char pad4[0x4C];
    int f50;
    char pad54[0x9C];
    u32 fF0, fF4, fF8, fFC;
    u32 f100, f104, f108, f10C;
    void func_00132EB0(int a0);
    BoxCollisionObject *func_00129840(int a0);
};


extern float D_002B9348;
extern float D_00275460;
extern int D_002B9344;

struct S_00128930_Leaf {
    char pad0[0xC];
    short sx;
    short sy;
    short sz;
};

struct S_00128930_Mat {
    float m[4][4];
};

/* accumulator of ray hits, D_002B92EC */
struct S_00128930_Hit {
    S_00129050_Vec4 v0;
    S_00129050_Vec4 v1;
    S_00129050_Vec4 v2;
    S_00129050_Vec4 v3;
    float minv[3];
    float padMin;
    float maxv[3];
    float padMax;
    S_00129050_Vec4 (*f70)[2];
    S_00129050_Vec4 *f74;
    S_00129050_Vec4 *f78;
    char pad7C[4];
    int count;
    int *f84;
    char pad88[4];
    float *f8C;
    short *f90;
    float t;
    unsigned char fl0 : 1;
    unsigned char fl1 : 1;
};

extern S_00128930_Hit *D_002B92EC;

static inline void Xform_00128930(S_00129050_Vec4 *out, const S_00128930_Mat *mat, const float *v)
{
    __m128 t = _mm_loadu_ps(v);
    _mm_storeh_pi((__m64 *)&out->z, t);
    out->w = 1.0f;
    t = _mm_loadh_pi(t, (__m64 *)&out->z);
    __m128 r0 = _mm_mul_ps(_mm_load_ps(mat->m[0]), t);
    __m128 r1 = _mm_mul_ps(_mm_load_ps(mat->m[1]), t);
    __m128 r2 = _mm_mul_ps(_mm_load_ps(mat->m[2]), t);
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

static inline float Sqrt_00128930(float x) { float r; _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x)); return r; }
static __forceinline float Min_00128930(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }
static __forceinline float Max_00128930(float a, float b) { float r; _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

#pragma optimize("y", off)
int func_00129050(unsigned int a0, unsigned int a1)
{
    int func_00128930(...);

    switch (D_002B92E4) {
    case 1: {
        S_00129050_Leaf20 *leaf = &D_002B9290->leaves[a1 & 0x7fff];
        S_00129050_Vec4 local[2];
        S_00129050_Leaf32 *src = &D_002B92E8->leaves[a0 & 0x7fff];
        local[0] = src->v[0];
        local[1] = src->v[1];
        return func_00128930(leaf, local, a0, &D_002B9300);
    }
    }
    return 0;
}
#pragma optimize("y", on)

#pragma optimize("y", off)
void func_00129350(int a0, int a1, S_002B92E8 *a2, S_002B9290 *a3, int a4, int a5, int a6, int a7)
{
    int func_0011AC30(...);
    int func_0011ACC0(...);
    int func_00129110(...);
    D_002B92F4 = a7;
    D_002B92E4 = a6;
    D_002B92A0.func_000264C0(a4);
    func_0011AC30(&D_002B92A0, &D_002B92A0);
    func_0011ACC0(&D_002B92A0, a5, &D_002B92A0);
    D_002B9300.func_000264C0(a5);
    func_0011AC30(&D_002B9300, &D_002B9300);
    func_0011ACC0(&D_002B9300, a4, &D_002B9300);
    D_002B92E8 = a2;
    D_002B9290 = a3;
    func_00129110(a0, a1);
}
#pragma optimize("y", on)

void func_001294E0(int a0, int a1, int a2, int a3, int a4) {
    extern int D_002B92F4;
    int func_001293F0(...);
    D_002B92F4 = a4;
    func_001293F0(a0, a1, a2, a3);
}

BoxCollisionObject *BoxCollisionObject::func_00129840(int a0)
{
    u32 *p;

    func_00132EB0(a0);
    vtbl = (void *)&D_00283F64;
    p = &fF0;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f100;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fF0 = D_002A3CD8;
    fF4 = D_002A3CDC;
    fF8 = D_002A3CE0;
    fFC = D_002A3CE4;
    f100 = D_002A3CD8;
    f104 = D_002A3CDC;
    f108 = D_002A3CE0;
    f10C = D_002A3CE4;
    f50 = 6;
    return this;
}

void C_00129900::func_00129900(void)
{
  int func_001E891B(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x54) != 0) {
    func_001E891B(*(int *)(in_ECX + 0x54));
    *(undefined4 *)(in_ECX + 0x54) = 0;
  }
  return;
}

void func_00129920(void) {
    int func_00133020(...);
    func_00133020();
}
