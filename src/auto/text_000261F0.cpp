/* 20 functions from 0x000261F0 to 0x00026B60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

struct S_000265C0_V4 {
    float x, y, z, w;
    S_000265C0_V4() { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

void func_00026340(float *dst, float *src);

/* out = b x a */
inline void cross_000265C0(S_000265C0_V4 *out, S_000265C0_V4 *a, S_000265C0_V4 *b)
{
    __m128 vb = _mm_loadu_ps(&b->x);
    __m128 va = _mm_loadu_ps(&a->x);
    __m128 sb = vb;
    __m128 sa = va;

    sb = _mm_shuffle_ps(sb, sb, 0xc9);
    sa = _mm_shuffle_ps(sa, sa, 0xc9);
    va = _mm_mul_ps(va, sb);
    vb = _mm_mul_ps(vb, sa);
    vb = _mm_sub_ps(vb, va);
    vb = _mm_shuffle_ps(vb, vb, 0xc9);
    _mm_storeu_ps(&out->x, vb);
}

static __forceinline float clamp_max_000261F0(float a, float b)
{
 float r;
 _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
 return r;
}
static __forceinline float clamp_min_000261F0(float a, float b)
{
 float r;
 _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
 return r;
}
struct C_00026290 {
    int unk0;
    void *func_00026290(int flags);
};

struct C_000261F0 {
    char pad0[4];
    float f4;
    char pad8[0x1C];
    float f24;
    float f28;
    void func_000261F0(float delta);
};

struct C_000262B0 {
    char pad0[0x18];
    float f18;
    float f1C;
    float GetF1C(void) { return f1C; }
    void func_000262B0(void);
};

int func_000262C0(float *a, float *b);

struct C_00026A70 {
    undefined4 func_00026A70(int param_1);
};

extern int D_0027661C;
void func_001E891B(void *p);

/* base class: GameObject */
struct C_00157660 {
    int unk0;
    void func_00157660(void);
};

struct S_00026A90_Part {
    virtual void v0(int flags);
    virtual void v1();
    virtual void v2();
};

/* BmxBaseVehicle */
struct C_00026A90 : C_00157660 {
    char pad4[0x210];
    S_00026A90_Part *unk214;
    S_00026A90_Part *unk218;
    S_00026A90_Part *unk21C;
    char *unk220;
    char *unk224;
    char *unk228;
    char pad22C[0x5EC - 0x22C];
    S_00026A90_Part *unk5EC;
    S_00026A90_Part *unk5F0;
    S_00026A90_Part *unk5F4;
    void func_00026A90(void);
};

struct C_00026280 {
    char pad0[0x3C];
    int unk3C;
    void func_00026280(int a0);
};

struct C_00026270 {
    char pad0[0x30];
    int unk30;
    void func_00026270(int a0);
};

extern "C" int strcmp(const char *a, const char *b);
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
char *func_001E8BF0(char *dst, const char *src, int n);

struct S_000264C0_Mat {
    __m128 r0;
    __m128 r1;
    __m128 r2;
    __m128 r3;
};

struct C_000264C0 {
    S_000264C0_Mat mat;
    C_000264C0 *func_000264C0(S_000264C0_Mat *src);
};

struct S_00026500_Entry {
    char name[0x20];
    int value;
    char pad[0x2c];
};

struct S_000267F0_V4 {
    float x;
    float y;
    float z;
    float w;
};

extern float D_00276610;

struct C_000269B0 {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    void func_000269B0(float a, float b, float c);
};

struct C_00026A10 {
    float f0;
    float f4;
    float f8;
    float func_00026A10(float a, float b);
};

__declspec(align(16)) struct S_00026960_Mat {
    float m[16];
    void identity(void)
    {
        _mm_store_ps(&m[0], _mm_setzero_ps());
        _mm_store_ps(&m[4], _mm_setzero_ps());
        _mm_store_ps(&m[8], _mm_setzero_ps());
        _mm_store_ps(&m[12], _mm_setzero_ps());
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
    }
};

static __forceinline void identity_ref_00026960(S_00026960_Mat *&p)
{
    S_00026960_Mat *q = p;
    _mm_store_ps(&q->m[0], _mm_setzero_ps());
    _mm_store_ps(&q->m[4], _mm_setzero_ps());
    _mm_store_ps(&q->m[8], _mm_setzero_ps());
    _mm_store_ps(&q->m[12], _mm_setzero_ps());
    q->m[0] = 1.0f;
    q->m[5] = 1.0f;
    q->m[10] = 1.0f;
    q->m[15] = 1.0f;
}

static __forceinline float min_ss_00026A10(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&b), _mm_load_ss(&a)));
    return r;
}

struct C_00026500 {
    char pad0[0x2c];
    int count;
    int f30;
    char pad34[0x2c];
    S_00026500_Entry entries[1];
    int func_00026500(const char *name, int value);
};


void C_000261F0::func_000261F0(float delta)
{
    f4 += delta;
    _mm_store_ss(&f4, _mm_max_ss(_mm_set_ss(f4), _mm_set_ss(f24)));
    _mm_store_ss(&f4, _mm_min_ss(_mm_set_ss(f4), _mm_set_ss(f28)));
}

void C_00026270::func_00026270(int a0) {
    unk30 = a0;
}

void C_00026280::func_00026280(int a0) {
    unk3C = a0;
}

void *C_00026290::func_00026290(int flags) {
    extern int D_00276534;
    void func_001E891B(void *);
    unk0 = (int)&D_00276534;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_000262B0::func_000262B0(void) {
    f18 = GetF1C();
}

int func_000262C0(float *a, float *b)
{
    if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2]) {
        return 1;
    }
    return 0;
}

undefined4 func_00026300(float *param_1, float *param_2)
{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 0;
  }
  return 1;
}

void func_000263B0(float *out, float *a, float *b)
{
    __m128 *A = (__m128 *)a;
    __m128 *O = (__m128 *)out;
    O[0] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_load_ps1(&b[0]), A[0]), _mm_mul_ps(_mm_load_ps1(&b[1]), A[1])),
                      _mm_add_ps(_mm_mul_ps(_mm_load_ps1(&b[2]), A[2]), _mm_mul_ps(_mm_load_ps1(&b[3]), A[3])));
    O[1] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_load_ps1(&b[4]), A[0]), _mm_mul_ps(_mm_load_ps1(&b[5]), A[1])),
                      _mm_add_ps(_mm_mul_ps(_mm_load_ps1(&b[6]), A[2]), _mm_mul_ps(_mm_load_ps1(&b[7]), A[3])));
    O[2] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_load_ps1(&b[8]), A[0]), _mm_mul_ps(_mm_load_ps1(&b[9]), A[1])),
                      _mm_add_ps(_mm_mul_ps(_mm_load_ps1(&b[10]), A[2]), _mm_mul_ps(_mm_load_ps1(&b[11]), A[3])));
    O[3] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_load_ps1(&b[12]), A[0]), _mm_mul_ps(_mm_load_ps1(&b[13]), A[1])),
                      _mm_add_ps(_mm_mul_ps(_mm_load_ps1(&b[14]), A[2]), _mm_mul_ps(_mm_load_ps1(&b[15]), A[3])));
}

C_000264C0 *C_000264C0::func_000264C0(S_000264C0_Mat *src)
{
    __m128 r0 = src->r0;
    __m128 r1 = src->r1;
    __m128 r2 = src->r2;
    __m128 r3 = src->r3;

    mat.r0 = r0;
    mat.r1 = r1;
    mat.r2 = r2;
    mat.r3 = r3;
    return this;
}

int C_00026500::func_00026500(const char *name, int value)
{
    int i;
    for (i = 0; i < count; i++) {
        if (strcmp(entries[i].name, name) == 0) {
            f30 = i;
            return i;
        }
    }
    if (count >= 0x96) {
        return 0x95;
    }
    entries[i].value = value;
    func_001E8BF0(entries[count].name, name, 0x1f);
    f30 = count;
    count++;
    return count - 1;
}

void func_000265C0(float *out, float *t, S_000265C0_V4 *pa, S_000265C0_V4 *pb, int flag1, int flag2)
{
    S_000265C0_V4 va = *pa;
    S_000265C0_V4 vb = *pb;
    S_000265C0_V4 v2;

    if (flag1) {
        cross_000265C0(&v2, &va, &vb);
        if (flag2) {
            cross_000265C0(&vb, &v2, &va);
        } else {
            cross_000265C0(&va, &vb, &v2);
        }
    }
    func_00026340(&vb.x, &vb.x);
    func_00026340(&va.x, &va.x);
    cross_000265C0(&v2, &va, &vb);
    out[0] = v2.x;
    out[4] = v2.y;
    out[8] = v2.z;
    out[1] = vb.x;
    out[5] = vb.y;
    out[9] = vb.z;
    out[2] = va.x;
    out[6] = va.y;
    out[10] = va.z;
    out[12] = 0.0f;
    out[13] = 0.0f;
    out[14] = 0.0f;
    out[3] = t[0];
    out[7] = t[1];
    out[11] = t[2];
    out[15] = 1.0f;
}

S_000267F0_V4 func_000267F0(float *v, float *m)
{
    S_000267F0_V4 r;

    r.x = m[1] * v[1] + m[2] * v[2] + m[0] * v[0];
    r.y = m[5] * v[1] + m[4] * v[0] + m[6] * v[2];
    r.z = m[9] * v[1] + m[8] * v[0] + m[10] * v[2];
    r.w = 1.0f;
    return r;
}

S_000267F0_V4 func_00026880(float *v, float *m)
{
    S_000267F0_V4 r;

    r.x = m[8] * v[2] + m[4] * v[1] + m[0] * v[0];
    r.y = m[9] * v[2] + m[5] * v[1] + m[1] * v[0];
    r.z = m[10] * v[2] + m[6] * v[1] + m[2] * v[0];
    r.w = 1.0f;
    return r;
}

S_000267F0_V4 func_00026910(float *m, int col)
{
    S_000267F0_V4 r;

    r.x = m[col];
    r.y = m[col + 4];
    r.z = m[col + 8];
    r.w = 1.0f;
    return r;
}

S_00026960_Mat func_00026960(void)
{
    S_00026960_Mat m;
    S_00026960_Mat * volatile p = &m;
    S_00026960_Mat *q = p;
    __m128 *v = (__m128 *)q;
    __m128 z = _mm_setzero_ps();

    v[0] = z;
    v[1] = z;
    v[2] = z;
    v[3] = z;
    q->m[0] = 1.0f;
    q->m[5] = 1.0f;
    q->m[10] = 1.0f;
    q->m[15] = 1.0f;
    return m;
}

void C_000269B0::func_000269B0(float a, float b, float c)
{
    if (a != D_00276610) {
        f0 = a;
    }
    if (b != D_00276610) {
        f4 = b;
        f8 = 1.0f;
    }
    if (c != D_00276610) {
        fC = c;
        f10 = -c;
    }
}

float C_00026A10::func_00026A10(float a, float b)
{
    C_00026A10 * volatile self = this;
    float t = min_ss_00026A10(f4, b);

    self->f8 = t / self->f4;
    self->f0 = (a - self->f0) * self->f8 + self->f0;
    return self->f0;
}

undefined4 C_00026A70::func_00026A70(int param_1)
{
  int in_ECX = (int)this;
  
  if ((*(int *)(in_ECX + 0x1d8) != 0) && (*(int *)(*(int *)(in_ECX + 0x1d8) + 0x68) == param_1)) {
    return 1;
  }
  return 0;
}

void C_00026A90::func_00026A90(void)
{
    unk0 = (int)&D_0027661C;
    if (unk220 != 0) {
        func_001E891B(unk220);
    }
    if (unk224 != 0) {
        func_001E891B(unk224);
    }
    if (unk228 != 0) {
        func_001E891B(unk228);
    }
    if (unk214 != 0) {
        unk214->v2();
        unk214 = 0;
    }
    if (unk218 != 0) {
        unk218->v2();
        unk218 = 0;
    }
    if (unk21C != 0) {
        unk21C->v2();
        unk21C = 0;
    }
    if (unk5EC != 0) {
        unk5EC->v0(1);
        unk5EC = 0;
    }
    if (unk5F0 != 0) {
        unk5F0->v0(1);
        unk5F0 = 0;
    }
    if (unk5F4 != 0) {
        unk5F4->v0(1);
        unk5F4 = 0;
    }
    func_00157660();
}

