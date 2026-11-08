/* 12 functions from 0x0019B890 to 0x0019C710, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline float Sqrt_0019C0E0(float x)
{
    float r;
    _mm_store_ss(&r, _mm_sqrt_ss(*(__m128 *)&x));
    return r;
}

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
    sq = _mm_load_ss(&D_0028B1B0);
    d = _mm_add_ss(d, _mm_and_ps(_mm_cmplt_ss(d, sq), sq));
    sq = _mm_rsqrt_ss(d);
    __m128 dr = _mm_mul_ss(_mm_mul_ss(d, sq), sq);
    __m128 c2 = _mm_set_ss(D_0028B1A0);
    sq = _mm_mul_ss(sq, _mm_set_ss(D_0028B190));
    sq = _mm_mul_ss(sq, _mm_sub_ss(c2, dr));
    sq = _mm_shuffle_ps(sq, sq, 0);
    _mm_storeu_ps(out, _mm_mul_ps(sq, v));
}

struct C_0019BA70 {
    char pad0[0x54];
    char *f54;
    void func_0019BA70();
    void func_0019B890();
};

struct S_0019BBD0_Tree { char *nodes; char *leaves; };
struct S_0019BBD0_Vec { float x, y, z, w; };
struct S_0019BBD0_V4 {
    float x, y, z, w;
    S_0019BBD0_V4()
    {
        z = 0.0f;
        y = 0.0f;
        x = 0.0f;
        w = 1.0f;
    }
};
void func_00030AC0(float *out, float *v, float *m);
void func_0011F0E0(S_0019BBD0_Vec *a, S_0019BBD0_Vec *b, S_0019BBD0_Vec *c, void *leaf, void *p);
void __stdcall func_00011FF0(void *base, int count, int size, void *cmp);
int func_00011060(const void *a, const void *b);
struct C_0019BBD0 {
    void func_0019BBD0(unsigned short idx, S_0019BBD0_Tree *tree, int depth, float *m, void *p);
    void func_0019BD20(unsigned short idx, S_0019BBD0_Tree *tree, void *p, float *m, int depth);
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
    void func_0019C350(struct S_0019C350_V4 *centre, float *extent);
};

/* bounding shape of a SoultreeCollisionObject: centre and half extents */
struct S_0019C350_Shape {
    char pad0[0xC];
    float cx;
    float cy;
    float cz;
    float ex;
    float ey;
    float ez;
};

struct S_0019C350_V4 {
    float x;
    float y;
    float z;
    float w;
    S_0019C350_V4()
    {
        z = 0.0f;
        y = 0.0f;
        x = 0.0f;
        w = 1.0f;
    }
    S_0019C350_V4(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct __declspec(align(16)) S_0019C350_M {
    __m128 m[4];
};

void func_0001C680(S_0019C350_V4 *out, S_0019C350_V4 v, float *m);

static __forceinline float Abs_0019C350(float f)
{
    unsigned u = *(unsigned *)&f;

    u &= 0x7fffffff;
    return *(float *)&u;
}

static inline void Xform_0019C350(S_0019C350_V4 *out, const S_0019C350_M *mat, const float *v)
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
    __m128 junk;
    junk = _mm_movehl_ps(junk, r2);
    lo = _mm_add_ps(lo, hi);
    r2 = _mm_add_ps(r2, junk);
    hi = _mm_movehl_ps(hi, lo);
    lo = _mm_movelh_ps(lo, r2);
    hi = _mm_shuffle_ps(hi, r2, 0x14);
    lo = _mm_add_ps(lo, hi);
    _mm_storeu_ps(&out->x, lo);
    out->w = 1.0f;
}

void func_0011ACC0(void *out, void *a, void *b);
void func_00030AC0(float *out, float *v, float *m);

struct C_0019C320 {
    void func_0019C320(undefined4 *param_1);
};


void C_0019BA70::func_0019B890(void)
{
float *obj=(float*)f54;
volatile S_0019BBD0_Vec iv;
float *sum=obj+4;
float x, y, z;
iv.x=0.0f; sum[0]=iv.x;
iv.y=0.0f; sum[1]=iv.y;
iv.z=0.0f; sum[2]=iv.z;
iv.w=1.0f; sum[3]=iv.w;
if(D_002B92E0>0) {
const float *p=D_002B9448;
int i;
for(i=0;i<D_002B92E0;++i) {
sum[0]=p[-2]+sum[0];
sum[1]=p[-1]+sum[1];
sum[2]=sum[2]+p[0];
p+=4;
}
float *in=sum;
float *out=sum;
AsmVec3Normalize(out,in);
}
S_0019BBD0_V4 t;
AsmVec3Normalize(&t.x,obj);
x=*(volatile float *)&t.x*D_0028B248;
y=*(volatile float *)&t.y*D_0028B248;
z=*(volatile float *)&t.z*D_0028B248;
obj[0]+=x;obj[1]+=y;obj[2]+=z;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
void C_0019BA70::func_0019BA70()
{
    float *v = (float *)f54 + 4;
    S_0019BBD0_V4 t;
    *(S_0019BBD0_V4 *)v = t;
    for (int i = D_002B92F0; i < D_002B92E0; ++i) {
        float *p = D_002B9448 + i * 4;
        v[0] = p[-2] + v[0];
        float *r = p + 4;
        v[1] = r[-5] + v[1];
        v[2] = v[2] + r[-4];
    }
    float *in = v;
    float *out = v;
    AsmVec3Normalize(out, in);
    D_002B92F0 = D_002B92E0;
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

void C_0019BBD0::func_0019BBD0(unsigned short idx, S_0019BBD0_Tree *tree, int depth, float *m, void *p)
{
    char *node;

    if (depth != 0) {
        do {
            if (idx & 0x8000)
                return;
            node = tree->nodes + idx * 36;
            func_0019BBD0(*(unsigned short *)(node + 8), tree, depth - 1, m, p);
            depth = depth - 1;
            idx = *(unsigned short *)(node + 10);
        } while (depth != 0);
    }
    if (!(idx & 0x8000))
        return;
    S_0019BBD0_V4 a, b, c;
    S_0019BBD0_Vec out[3];
    func_0011F0E0((S_0019BBD0_Vec *)&a, (S_0019BBD0_Vec *)&b, (S_0019BBD0_Vec *)&c, tree->leaves + (idx & 0x7fff) * 20, p);
    func_00011FF0(out, 0x10, 3, (void *)func_00011060);
    func_00030AC0((float *)&out[0], &a.x, m);
    func_00030AC0((float *)&out[1], &b.x, m);
    func_00030AC0((float *)&out[2], &c.x, m);
}

extern float D_002EFF1C, D_00283F50, D_002755EC;
void func_0011F210(void *a, void *b, float *v1, float *v2, float *v3);
void C_0019BBD0::func_0019BD20(unsigned short idx, S_0019BBD0_Tree *tree, void *p, float *m, int depth)
{
    char *node;

    if (idx & 0x8000)
        return;
    do {
        node = tree->nodes + idx * 36;
        func_0019BD20(*(unsigned short *)(node + 8), tree, p, m, depth);
        idx = *(unsigned short *)(node + 0xa);
    } while (!(idx & 0x8000));

    char *leaf = tree->leaves + (idx & 0x7fff) * 20;
    S_0019BBD0_Vec a;
    S_0019BBD0_V4 v1, v2, v3;
    a.x = (float)*(short *)(leaf + 0xc) * D_002EFF1C;
    a.y = (float)*(short *)(leaf + 0xe) * D_002EFF1C;
    a.z = (float)*(short *)(leaf + 0x10) * D_002EFF1C;
    func_0011F0E0((S_0019BBD0_Vec *)&v3, (S_0019BBD0_Vec *)&v2, (S_0019BBD0_Vec *)&v1, leaf, p);
    S_0019BBD0_Vec centre;
    centre.x = (v2.x + v3.x + v1.x) * D_00283F50;
    centre.y = (v2.y + v3.y + v1.y) * D_00283F50;
    centre.z = (v2.z + v3.z + v1.z) * D_00283F50;
    centre.w = 1.0f;
    S_0019BBD0_Vec v;
    v.x = a.x * D_002755EC;
    v.y = a.y * D_002755EC;
    v.z = a.z * D_002755EC;
    v.w = 1.0f;
    func_0001C680((S_0019C350_V4 *)&v, *(S_0019C350_V4 *)&v, m);
    func_00030AC0((float *)&v3, (float *)&v3, m);
    func_00030AC0((float *)&v2, (float *)&v2, m);
    func_00030AC0((float *)&v1, (float *)&v1, m);
    func_00030AC0((float *)&centre, (float *)&centre, m);
    if (*(int *)((char *)p + 4) != 0) {
        S_0019BBD0_V4 d, c, b;
        S_0019BBD0_Vec t;
        func_0011F210(&d, &c, (float *)&b, (float *)leaf, (float *)p);
        t = *(S_0019BBD0_Vec *)&d;
        func_0001C680((S_0019C350_V4 *)&t, *(S_0019C350_V4 *)&d, m);
        t = *(S_0019BBD0_Vec *)&c;
        func_0001C680((S_0019C350_V4 *)&t, *(S_0019C350_V4 *)&c, m);
        t = *(S_0019BBD0_Vec *)&b;
        func_0001C680((S_0019C350_V4 *)&t, *(S_0019C350_V4 *)&b, m);
    }
}

void SoultreeCollisionObject::func_0019C0E0(S_Matrix16 *m)
{
    S_Matrix16 *mm;
    S_0019BBD0_Vec v;
    float *d;
    float x, y, z;

    ((C_000264C0 *)((char *)this + 0x170))->func_000264C0(m);
    ((C_000264C0 *)((char *)this + 0x130))->func_000264C0(m);
    func_0011ACC0((char *)this + 0xb0, (char *)this + 0xf0, m);
    mm = m;
    v.x = mm->m[3];
    v.y = mm->m[7];
    v.z = mm->m[11];
    v.w = 1.0f;
    *(S_0019BBD0_Vec *)((char *)this + 0x28) = v;
    d = (float *)((char *)f1C4 + 0x18);
    x = d[0];
    y = d[1];
    z = d[2];
    *(float *)((char *)this + 0x48) = AsmSqrtF(z * z + y * y + x * x);
    func_00030AC0((float *)((char *)this + 0x28), (float *)((char *)this + 0x28), (float *)m);
    ((C_0019C2F0_VT *)this)->v31(m);
}

void SoultreeCollisionObject::func_0019C1E0(void)
{
    S_Matrix16 m;

    ((C_00199C20 *)f1C0)->func_00199C20(0, &m);
    func_0019C0E0(&m);
}

static __forceinline void SetPoint_0019C210(float *d, const float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = 1.0f;
}

void SoultreeCollisionObject::func_0019C210(S_Matrix16 * volatile m)
{
 SoultreeCollisionObject * volatile self=this;
 SoultreeCollisionObject *s;
 float *src,*dst,*v; float x,y,z;
 ((C_000264C0*)((char*)this+0x170))->func_000264C0((char*)this+0x130);
 ((C_000264C0*)((char*)self+0x130))->func_000264C0(m);
 s=self; func_0011ACC0((float*)((char*)s+0xb0),(float*)((char*)s+0xf0),m);
 s=self; dst=(float*)((char*)s+0x28); src=(float*)((char*)s->f1C4+0xc);
 dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2]; dst[3]=1.0f;
 s=self; v=(float*)((char*)s->f1C4+0x18); x=v[0]; y=v[1]; z=v[2];
 volatile float square=x*x+y*y+z*z; float r=sqrtf(square);
 s=self; *(float*)((char*)s+0x48)=r;
 s=self; func_00030AC0((float*)((char*)s+0x28),(float*)((char*)s+0x28),(float*)m);
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

#pragma auto_inline(on)
void SoultreeCollisionObject::func_0019C350(S_0019C350_V4 *centre, float *extent)
{
    S_0019C350_Shape *s = (S_0019C350_Shape *)f1C4;
    S_0019C350_V4 c(s->cx, s->cy, s->cz, 1.0f);
    S_0019C350_V4 axes[3];
    S_0019C350_V4 a0(s->ex, 0.0f, 0.0f, 1.0f);
    S_0019C350_V4 a1(0.0f, s->ey, 0.0f, 1.0f);
    S_0019C350_V4 a2(0.0f, 0.0f, s->ez, 1.0f);

    axes[0] = a0;
    axes[1] = a1;
    axes[2] = a2;
    AsmTransformPoint((float *)centre, &c.x, (float *)fB0);
    func_0001C680(&axes[0], axes[0], (float *)fB0);
    func_0001C680(&axes[1], axes[1], (float *)fB0);
    func_0001C680(&axes[2], axes[2], (float *)fB0);
    extent[0] = Abs_0019C350(axes[2].x) + Abs_0019C350(axes[1].x) + Abs_0019C350(axes[0].x);
    extent[1] = Abs_0019C350(axes[2].y) + Abs_0019C350(axes[1].y) + Abs_0019C350(axes[0].y);
    extent[2] = Abs_0019C350(axes[2].z) + Abs_0019C350(axes[1].z) + Abs_0019C350(axes[0].z);
}
#pragma auto_inline(off)
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

