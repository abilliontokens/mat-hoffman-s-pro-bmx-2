/* 12 functions from 0x0019B890 to 0x0019C710, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>

extern int D_002B92F0, D_002B92E0;
extern float D_002B9448[];
extern float D_0028B1B0, D_0028B1A0, D_0028B190;
extern float D_0028B248;

static __forceinline void Normalize_0019B890(float *out, const float *in)
{
    __m128 v = _mm_loadu_ps(in);
    __m128 sq = _mm_mul_ps(v, v);
    __m128 d = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    d = _mm_add_ss(d, _mm_shuffle_ps(sq, sq, 0xE1));
    __m128 eps = _mm_set_ss(D_0028B1B0);
    d = _mm_add_ss(d, _mm_and_ps(_mm_cmplt_ss(d, eps), eps));
    __m128 r = _mm_rsqrt_ss(d);
    __m128 dr = _mm_mul_ss(_mm_mul_ss(d, r), r);
    __m128 c2 = _mm_set_ss(D_0028B1A0);
    r = _mm_mul_ss(r, _mm_set_ss(D_0028B190));
    r = _mm_mul_ss(r, _mm_sub_ss(c2, dr));
    r = _mm_shuffle_ps(r, r, 0);
    _mm_storeu_ps(out, _mm_mul_ps(r, v));
}

struct C_0019BA70 {
    char pad0[0x54];
    char *f54;
    void func_0019BA70();
    void func_0019B890();
};

struct S_0019BBD0_Tree { char *nodes; char *leaves; };
struct S_0019BBD0_Vec { float x, y, z, w; };
void func_0011F0E0(S_0019BBD0_Vec *a, S_0019BBD0_Vec *b, S_0019BBD0_Vec *c, void *leaf, void *p);
void __stdcall func_00011FF0(void *base, int count, int size, void *cmp);
int func_00011060(const void *a, const void *b);
struct C_0019BBD0 {
    void func_0019BBD0(unsigned short idx, S_0019BBD0_Tree *tree, int depth, float *m, void *p);
};

void func_00123C50(void *a1, void *a2, void *a3, int a4, void *a5, void *a6, void *a7);

struct __declspec(align(16)) S_Matrix16 {
    f32 m[16];
};

struct C_00199C20 {
    void func_00199C20(int a, S_Matrix16 *m);
};

struct C_000264C0 {
    void func_000264C0(void *a);
};

struct S_0019C690_V3 {
    int a, b, c;
};

struct S_0019C690_Arg {
    char f0[8];
    s16 f8;
    s16 fA;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    s16 f20;
    char pad22[0xE];
    char f30[0x40];
    int f70;
};

struct C_0019C2F0_VT {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(S_Matrix16 *m);
};

/* SoultreeCollisionObject */
struct SoultreeCollisionObject {
    char pad0[0xB0];
    char fB0[0x40];
    __declspec(align(16)) char fF0[0x40];
    char pad130[0x80];
    int f1B0;
    int f1B4;
    int f1B8;
    s16 f1BC;
    s16 f1BE;
    int f1C0;
    int f1C4;
    int f1C8;
    s16 f1CC;
    s16 f1CE;
    char pad1D0[4];
    void *f1D4;
    void func_0019C1E0(void);
    void func_0019BB80(void *a);
    void func_0019C2F0(void);
    void func_0019C690(int a1, S_0019C690_Arg *a2);
    void func_0019C0E0(S_Matrix16 *m);
    void func_0019C210(S_Matrix16 *m);
};

void func_0011ACC0(void *out, void *a, void *b);
void func_00030AC0(float *out, float *v, float *m);

struct C_0019C320 {
    void func_0019C320(undefined4 *param_1);
};


void C_0019BA70::func_0019B890(void)
{
    float *obj = (float *)f54;
    float *sum = obj + 4;
    int i;

    sum[0] = 0.0f;
    sum[1] = 0.0f;
    sum[2] = 0.0f;
    sum[3] = 1.0f;
    if (D_002B92E0 > 0) {
        const float *p = D_002B9448;
        for (i = 0; i < D_002B92E0; i++) {
            sum[0] += p[-2];
            sum[1] += p[-1];
            sum[2] += p[0];
            p += 4;
        }
        Normalize_0019B890(sum, sum);
    }
    float t[4] = { 0.0f, 0.0f, 0.0f, 1.0f };
    Normalize_0019B890(t, obj);
    obj[0] += t[0] * D_0028B248;
    obj[1] += t[1] * D_0028B248;
    obj[2] += t[2] * D_0028B248;
}

void SoultreeCollisionObject::func_0019BB80(void *arg1)
{
    struct {
        int a;
        int b;
    } p;

    p.a = f1C4;
    p.b = f1C8;
    func_00123C50((char *)arg1 + 0xf0, (char *)arg1 + 0x100, (char *)arg1 + 0xb0, 0,
                  &p, (char *)this + 0xb0, (char *)this + 0x1b0);
}

void SoultreeCollisionObject::func_0019C1E0(void)
{
    S_Matrix16 m;

    ((C_00199C20 *)f1C0)->func_00199C20(0, &m);
    func_0019C0E0(&m);
}

void SoultreeCollisionObject::func_0019C210(S_Matrix16 *m)
{
    float *v;
    float x, y, z;

    ((C_000264C0 *)((char *)this + 0x170))->func_000264C0((char *)this + 0x130);
    ((C_000264C0 *)((char *)this + 0x130))->func_000264C0(m);
    func_0011ACC0(fB0, fF0, m);
    *(S_0019C690_V3 *)((char *)this + 0x28) = *(S_0019C690_V3 *)((char *)f1C4 + 0xc);
    *(int *)((char *)this + 0x34) = 0x3f800000;
    v = (float *)((char *)f1C4 + 0x18);
    x = v[0];
    y = v[1];
    z = v[2];
    *(float *)((char *)this + 0x48) = sqrtf(x * x + y * y + z * z);
    func_00030AC0((float *)((char *)this + 0x28), (float *)((char *)this + 0x28), (float *)m);
}

void SoultreeCollisionObject::func_0019C2F0(void)
{
    S_Matrix16 m;

    ((C_00199C20 *)f1C0)->func_00199C20(0, &m);
    ((C_0019C2F0_VT *)this)->v31(&m);
}

void C_0019C320::func_0019C320(undefined4 *param_1)
{
  int in_ECX = (int)this;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x13c);
  param_1[1] = *(undefined4 *)(in_ECX + 0x14c);
  param_1[2] = *(undefined4 *)(in_ECX + 0x15c);
  return;
}

void SoultreeCollisionObject::func_0019C690(int a1, S_0019C690_Arg *a2)
{
    S_0019C690_Arg *e = a2;

    f1C0 = a1;
    f1C4 = e->fC;
    f1C8 = e->f10;
    f1CC = e->f8;
    f1CE = e->fA;
    *(S_0019C690_V3 *)&f1B0 = *(S_0019C690_V3 *)((char *)e + 0x14);
    f1BC = e->f20;
    ((C_000264C0 *)fF0)->func_000264C0(e->f30);
    f1D4 = e;
    e->f70++;
}

