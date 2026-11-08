/* 12 functions from 0x00171D00 to 0x00172BA0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
static __forceinline void SqrtR_00171D00(float *r,const float &x);
static __forceinline void MaxR_00171D00(float *r,const float &a,const float &b);
void func_001712D0(float *out, void *in);
struct V3_00171BA0 {
 float x,y,z,w;
 V3_00171BA0() {}
 V3_00171BA0(float a,float b,float c):x(a),y(b),z(c) {}
 V3_00171BA0 operator*(const float &s) const { return V3_00171BA0(x*s,y*s,z*s); }
 V3_00171BA0 operator+(const V3_00171BA0 &o) const { return V3_00171BA0(x+o.x,y+o.y,z+o.z); }
 V3_00171BA0 operator-(const V3_00171BA0 &o) const { return V3_00171BA0(x-o.x,y-o.y,z-o.z); }
 void operator+=(const V3_00171BA0 &o) { x+=o.x; y+=o.y; z+=o.z; }
};
struct V4_00171BA0 {
 float x,y,z,w;
};
struct W3_001729D0 {
 float x,y,z,w;
 W3_001729D0() {}
 W3_001729D0(float a,float b,float c):x(a),y(b),z(c),w(1.0f) {}
 W3_001729D0 operator*(float s) const { return W3_001729D0(x*s,y*s,z*s); }
 W3_001729D0 operator+(const W3_001729D0 &o) const { return W3_001729D0(x+o.x,y+o.y,z+o.z); }
};
static __forceinline float Sqrt_00171BA0(const float &x) { float r; _mm_store_ss(&r,_mm_sqrt_ss(_mm_load_ss(&x))); return r; }
static __forceinline float Max_00171BA0(const float &a,const float &b) { float r; _mm_store_ss(&r,_mm_max_ss(_mm_load_ss(&a),_mm_load_ss(&b))); return r; }

extern int D_00288C44;
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_001576D0 {
    void func_001576D0(void);
    void func_001576C0(void);
    void func_00157660(void);
};

struct C_00193490 {
    C_00193490 *func_00193490(void);
    void func_001938C0(void *a, int b, int c, float *d, float *e, int f);
    void func_00193950(void *a, float *vecA, float *vecB, int d);
};

struct C_00171D00_F14C {
    void func_0019A680(float *a, float *b);
    void func_001983A0(void);
    void func_00198390(void);
    void func_00198E60(void);
    void func_0019A8C0(float *a, float *b);
    void func_00199790(int a, void *b);
    void func_00199110(int a, void *b, void *c, int d, int e, int f);
    void func_0019ABA0(int a, int b);
};

struct C_00172460Obj {
    void func_001332A0(void);
    void func_00133140(int a, int b);
};

struct C_00171D00_C4VT {
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
    virtual void v13(float a);
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
    virtual void v28(float a);
    virtual void v29(void *m);
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34(int a);
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    char pad4[0x20C];
    float f210;
};

struct PhysicsBodyVT {
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
    virtual void v28(float a);
    virtual void v29();
};

struct C_00172090_D0 {
    void func_001A9110(int a, int b, int c, int d, int e, int f, int g, int h);
    void func_001A9220(int a, int b);
    char pad0[0x30];
    int f30;
};

extern float D_00275544;
extern float D_00275460;
extern float D_00283A7C;
extern float D_00283A78;

struct V4_00172090 {
    float x, y, z, w;
    V4_00172090() {}
    V4_00172090(float a, float b, float c) : x(a), y(b), z(c), w(1.0f) {}
};

__declspec(align(16)) struct S_00172090_Mat {
    float m[16];
};

static __forceinline void Zero_00172090(S_00172090_Mat *&p)
{
    __m128 *v = (__m128 *)p;
    v[0] = _mm_setzero_ps();
    v[1] = _mm_setzero_ps();
    v[2] = _mm_setzero_ps();
    v[3] = _mm_setzero_ps();
}

/* PhysicsBody */
struct PhysicsBody {
    void *vtbl;
    char pad4[0x20];
    void *f24;
    char pad28[0x0C];
    int f34;
    char pad38[0x5C];
    float f94;
    float f98;
    float f9C;
    char padA0[0x10];
    C_00193490 *fB0;
    float fB4;
    float fB8;
    float fBC;
    float fC0;
    void *fC4;
    char padC8[8];
    C_00172090_D0 *fD0;
    C_00172460Obj *fD4;
    C_00172460Obj *fD8;
    C_00172460Obj *fDC;
    float fE0;
    float fE4;
    float fE8;
    float fEC;
    float fF0;
    float fF4;
    float fF8;
    int fFC;
    int f100;
    char pad104[0x8];
    float f10C;
    float f110;
    float f114;
    float f118;
    char pad11C[0x10];
    int f12C;
    char pad130[0x14];
    int *f144;
    int f148;
    C_00171D00_F14C *f14C;
    char pad150[0x10];
    float f160;
    float f164;
    float f168;
    char pad16C[0xC4];
    int f230;
          void *func_00171E60(int flags);
    void func_00171F50(int a1, int a2);
    void func_00172420(void);
    void func_00172460(void);
    void func_001724B0(float dt);
    void func_00172000(void);
    void func_00172330(void);
    void func_00171D00(float x,float y,float z,float w);
    void func_001729D0(void);
    void func_00172090(float a0, float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15);
};

struct C_001729D0_Cam { void func_00199A70(int a, float *b); void func_00199790(int a, float *b); void func_0019AC50(void); V4_00171BA0 *func_00198040(V4_00171BA0 *a, V4_00171BA0 *b); };
struct C_001729D0_Node { char pad[0x20]; float m[4]; float pos[4]; };
struct C_001729D0_Obj {
    char pad0[0x54]; C_001729D0_Node *f54; char pad58[0x4F]; unsigned char fA7;
    void func_0014AC30(float *a, int b); void func_00133ED0(void);
    float func_00133F10(int a); int func_00134770(int a, int b);
};
extern float D_002A8BA0, D_002A8BA4, D_002A8BA8;
extern const float D_002A8BE8;
extern float D_002A8BE0, D_002A8BE4;
extern float D_00288D00, D_00288D10, D_00288D20;

struct C_001724B0_C4 {
    char pad0[0x28];
    float f28;
    char pad2C[0x200];
    C_001729D0_Cam *f22c;
    char pad230[0x8];
    float f238;
    float f23c;
    float f240;
    char pad244[0x24];
    float f268;
    float f26c;
    float f270;
};

static __forceinline void Cross_001724B0(float *out, const float *a, const float *b)
{
    __m128 va = _mm_loadu_ps(a), vb = _mm_loadu_ps(b);
    __m128 r = _mm_sub_ps(_mm_mul_ps(va, _mm_shuffle_ps(vb, vb, 0xc9)),
                          _mm_mul_ps(vb, _mm_shuffle_ps(va, va, 0xc9)));
    _mm_storeu_ps(out, _mm_shuffle_ps(r, r, 0xc9));
}

static __forceinline void Normalize_001724B0(float *volatile outArg, const float *volatile inArg)
{
    const float *in = inArg;
    float *out = outArg;
    __m128 v = _mm_loadu_ps(in), sq = _mm_mul_ps(v, v);
    __m128 len = _mm_add_ss(_mm_movehl_ps(sq, sq), sq);
    len = _mm_add_ss(len, _mm_shuffle_ps(sq, sq, 0xe1));
    __m128 minv = _mm_load_ss(&D_00288D20);
    __m128 cmp = _mm_cmplt_ss(len, minv);
    len = _mm_add_ss(len, _mm_and_ps(cmp, minv));
    __m128 r = _mm_rsqrt_ss(len);
    __m128 t = _mm_mul_ss(_mm_mul_ss(len, r), r);
    __m128 scale = _mm_mul_ss(_mm_mul_ss(r, _mm_load_ss(&D_00288D00)), _mm_sub_ss(_mm_load_ss(&D_00288D10), t));
    scale = _mm_shuffle_ps(scale, scale, 0);
    _mm_storeu_ps(out, _mm_mul_ps(scale, v));
}

struct S_00171F10_F60 {
    char pad0[0x28];
    void *f28;
};

struct S_00171F10_Arg0 {
    char pad0[0x60];
    S_00171F10_F60 *f60;
    C_00171D00_C4VT *f64;
};

extern "C" float sqrtf(float);
#pragma intrinsic(sqrtf)
void PhysicsBody::func_00171D00(float x,float y,float z,float w)
{
 float v[4];
 v[2]=0.0f; v[1]=0.0f; v[0]=0.0f; v[3]=1.0f;
 func_001712D0(v,(char *)this+0x160);
 V3_00171BA0 &up=*(V3_00171BA0 *)v;
 float d=v[1]*y+v[0]*x+v[2]*z;
 V3_00171BA0 r=V3_00171BA0(x,y,z)-up*d;
 float *f=(float *)((char *)this+0x160);
 float len2=f[0]*f[0]+f[1]*f[1]+f[2]*f[2];
 float len=AsmSqrtF(len2);
 float zero=0.0f;
 float t=AsmMaxF(d-len, zero);
 *(V3_00171BA0 *)f+=up*t+r;
}
void *PhysicsBody::func_00171E60(int flags)
{
    int p = f230;

    vtbl = (void *)&D_00288C44;
    if (p != 0) {
        func_001E891B((void *)p);
    }
    ((C_001576D0 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_00171EA0(float *out, float *in) {
    AsmVec3Normalize(out, in);
}

void func_00171F10(S_00171F10_Arg0 *arg)
{
    C_00171D00_C4VT *obj = arg->f64;

    if (arg->f60->f28 != 0) {
        obj->v34(1);
    }
}

void PhysicsBody::func_00171F50(int a1, int a2)
{
    float vecB[4];
    float vecA[4];
    C_00193490 *p = (C_00193490 *)func_001E8A44(0x28);

    fB0 = p != 0 ? p->func_00193490() : 0;
    vecA[2] = 0.0f;
    vecA[1] = 0.0f;
    vecA[0] = 0.0f;
    vecA[3] = 1.0f;
    vecB[2] = 0.0f;
    vecB[1] = 0.0f;
    vecB[0] = 0.0f;
    vecB[3] = 1.0f;
    f14C->func_0019A8C0(vecA, vecB);
    fB0->func_001938C0(&f24, a1, a2, vecA, vecB, 0);
}

void PhysicsBody::func_00172000(void)
{
    float vecB[4];
    float vecA[4];

    if (fB0 != 0) {
        vecA[2] = 0.0f;
        vecA[1] = 0.0f;
        vecA[0] = 0.0f;
        vecA[3] = 1.0f;
        vecB[2] = 0.0f;
        vecB[1] = 0.0f;
        vecB[0] = 0.0f;
        vecB[3] = 1.0f;
        f14C->func_0019A8C0(vecA, vecB);
        fB0->func_00193950(&f24, vecA, vecB, 0);
    }
}

void PhysicsBody::func_00172090(float a0, float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15)
{
    V4_00172090 a;
    V4_00172090 b;
    S_00172090_Mat m;
    float s;
    float r;

    a.z = 0.0f;
    a.y = 0.0f;
    a.x = 0.0f;
    a.w = 1.0f;
    b.z = 0.0f;
    b.y = 0.0f;
    b.x = 0.0f;
    b.w = 1.0f;
    f14C->func_0019A680(&a.x, &b.x);
    b = V4_00172090(b.x + b.x, b.y + b.y, b.z + b.z);
    s = b.z * b.z + b.y * b.y + b.x * b.x;
    r = AsmSqrtF(s);
    f114 = r;
    if (f114 > D_00275544) {
        f118 = D_00275460 / f114;
    }
    ((C_00171D00_C4VT *)fC4)->v28(D_00283A7C * a0);
    AsmZeroMatrix(&m);
    m.m[0] = ((C_00171D00_C4VT *)fC4)->f210 * D_00283A78 * (b.z * b.z + b.y * b.y) * a1;
    m.m[5] = ((C_00171D00_C4VT *)fC4)->f210 * D_00283A78 * (b.z * b.z + b.x * b.x) * a1;
    m.m[15] = 1.0f;
    m.m[10] = ((C_00171D00_C4VT *)fC4)->f210 * D_00283A78 * (b.y * b.y + b.x * b.x) * a1;
    ((C_00171D00_C4VT *)fC4)->v29(&m);
    fD0->func_001A9110(a2, a3, a4, a5, a6, a8, a8, a8);
    fD0->func_001A9220(0, a7);
    fE0 = a9;
    fE4 = a10;
    fE8 = a11;
    fEC = a12;
    fF0 = a13;
    fF4 = a14;
    fF8 = a15;
    fFC = *(int *)&fE0;
    f100 = *(int *)&fE4;
}

void PhysicsBody::func_00172330(void)
{
    f14C->func_00198E60();
    fD8->func_001332A0();
    fD4->func_001332A0();
    fDC->func_001332A0();
    f14C->func_00199790(0, (char *)this + 0x44);
    f14C->func_00199110(0, (char *)this + 0x54, (char *)this + 0x64, 0, 1, 0);
    ((C_00171D00_C4VT *)fD8)->v32();
    ((C_00171D00_C4VT *)fD4)->v32();
    f14C->func_0019ABA0(*(int *)((char *)this + 0xa8), 2);
    fD8->func_00133140(*(int *)((char *)this + 0xac), 2);
    fD4->func_00133140(*(int *)((char *)this + 0xac), 2);
    fDC->func_00133140(*(int *)((char *)this + 0xac), 2);
    ((C_00171D00_C4VT *)fC4)->v34(0);
    ((C_00171D00_C4VT *)fC4)->v45();
}

void PhysicsBody::func_00172420(void)
{
    f12C = 0;
    ((C_001576D0 *)this)->func_001576D0();
    ((C_00171D00_C4VT *)fC4)->v34(1);
    f14C->func_001983A0();
    ((PhysicsBodyVT *)this)->v29();
}

void PhysicsBody::func_00172460(void)
{
    ((C_001576D0 *)this)->func_001576C0();
    ((C_00171D00_C4VT *)fC4)->v34(0);
    f14C->func_00198390();
    f14C->func_00198E60();
    fD4->func_001332A0();
    fD8->func_001332A0();
    fDC->func_001332A0();
}

#pragma optimize("y", off)
void PhysicsBody::func_001724B0(float dt)
{
    V4_00171BA0 a;
    V4_00171BA0 b;
    V4_00171BA0 v[2];
    float dot;
    int i;
    C_001729D0_Node *node;
    V4_00171BA0 tmp;

    a.z = 0.0f; a.y = 0.0f; a.x = 0.0f; a.w = 1.0f;
    b.z = 0.0f; b.y = 0.0f; b.x = 0.0f; b.w = 1.0f;
    for (i = 0; i < 2; i++) {
        v[i].z = 0.0f; v[i].y = 0.0f; v[i].x = 0.0f; v[i].w = 1.0f;
    }

    ((C_001729D0_Cam *)*(void **)(*(char **)((char *)this + 0xc4) + 0x22c))->func_00199A70(0, &v[0].x);
    ((PhysicsBodyVT *)this)->v28(dt);
    ((C_00171D00_C4VT *)*(void **)((char *)this + 0xc4))->v13(dt);
    fD0->f30 = 0;

    for (;;) {
        ((C_001729D0_Cam *)*(void **)(*(char **)((char *)this + 0xc4) + 0x22c))->func_00199A70(0, &v[1].x);
        ((C_001729D0_Obj *)fDC)->func_0014AC30(&v[0].x, 0);
        ((C_001729D0_Obj *)fDC)->func_00133ED0();
        if (f148 != 0) {
            ((C_001729D0_Obj *)fDC)->func_00134770(*f144, f148);
        } else {
            ((C_001729D0_Obj *)fDC)->func_00133F10(0);
        }
        if ((((C_001729D0_Obj *)fDC)->fA7 & 0x20) == 0) {
            return;
        }
        node = ((C_001729D0_Obj *)fDC)->f54;
        fD0->f30 = 1;
        *(V4_00171BA0 *)&f94 = *(V4_00171BA0 *)((char *)node + 0x20);
        dot = f9C * ((C_001724B0_C4 *)fC4)->f240
            + f94 * ((C_001724B0_C4 *)fC4)->f238
            + f98 * ((C_001724B0_C4 *)fC4)->f23c;
        {
            int adot = *(int *)&dot & 0x7fffffff;
            if (*(float *)&adot != D_002A8BE4) {
                f34 = 0;
            }
        }
        if (f34 != 0) {
            float s = -(f10C + D_00275460);
            fB4 = dot * f94 * s;
            fB8 = dot * f98 * s;
            fBC = dot * f9C * s;
            fC0 = 1.0f;
            ((C_001724B0_C4 *)fC4)->f238 += fB4;
            ((C_001724B0_C4 *)fC4)->f23c += fB8;
            ((C_001724B0_C4 *)fC4)->f240 += fBC;
            a.x = ((C_001724B0_C4 *)fC4)->f238 - dot * f94;
            a.y = ((C_001724B0_C4 *)fC4)->f23c - dot * f98;
            a.z = ((C_001724B0_C4 *)fC4)->f240 - dot * f9C;
            a.w = 1.0f;
            AsmVec3Cross(&((C_001724B0_C4 *)fC4)->f268, (float *)((char *)node + 0x20), &a.x);
            AsmVec3Normalize(&((C_001724B0_C4 *)fC4)->f268, &((C_001724B0_C4 *)fC4)->f268);
            *(V4_00171BA0 *)&((C_001724B0_C4 *)fC4)->f268 =
                *((C_001724B0_C4 *)fC4)->f22c->func_00198040(&tmp, (V4_00171BA0 *)&((C_001724B0_C4 *)fC4)->f268);
            {
                float k = ((C_001724B0_C4 *)fC4)->f28 * f118 * f110;
                ((C_001724B0_C4 *)fC4)->f268 *= k;
                ((C_001724B0_C4 *)fC4)->f26c *= k;
                ((C_001724B0_C4 *)fC4)->f270 *= k;
            }
        }
        {
            float d2 = (node->pos[2] - v[1].z) * f9C
                     + (node->pos[0] - v[1].x) * f94
                     + (node->pos[1] - v[1].y) * f98;
            float t = AsmMaxF(d2, D_002A8BE0);
            t = t + t;
            b.x = v[1].x + t * f94;
            b.y = v[1].y + t * f98;
            b.z = v[1].z + t * f9C;
            b.w = 1.0f;
            ((C_001729D0_Cam *)f14C)->func_00199790(0, &b.x);
            ((C_001729D0_Cam *)f14C)->func_0019AC50();
        }
    }
}
#pragma optimize("", on)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
#pragma optimize("a", on)
void PhysicsBody::func_001729D0(void)
{
    char *p = (char *)this;
    V3_00171BA0 *src = (V3_00171BA0 *)(p + 0x84);
    V3_00171BA0 v;

    v.z = 0.0f; v.y = 0.0f; v.x = 0.0f; v.w = 1.0f;
    ((C_001729D0_Cam *)*(void **)(*(char **)(p + 0xc4) + 0x22c))->func_00199A70(0, &src->x);
    V3_00171BA0 *dst = (V3_00171BA0 *)(p + 0x74);
    if (dst->x == D_002A8BA0 && dst->y == D_002A8BA4 && dst->z == D_002A8BA8) {
        *(V3_00171BA0 *)(p + 0x74) = *(V3_00171BA0 *)(p + 0x84);
    }
    ((C_001729D0_Obj *)fDC)->func_0014AC30(&dst->x, 0);
    ((C_001729D0_Obj *)fDC)->func_00133ED0();
    if (*(int *)(p + 0x148) != 0) {
        ((C_001729D0_Obj *)fDC)->func_00134770(**(int **)(p + 0x144), *(int *)(p + 0x148));
    } else {
        ((C_001729D0_Obj *)fDC)->func_00133F10(0);
    }
    if (((C_001729D0_Obj *)fDC)->fA7 & 0x20) {
        C_001729D0_Node *n = ((C_001729D0_Obj *)fDC)->f54;
        V3_00171BA0 *m = (V3_00171BA0 *)((char *)n + 0x20);
        *(V3_00171BA0 *)(p + 0x94) = *m;
        V3_00171BA0 w = *m * D_002A8BE8 + *(V3_00171BA0 *)((char *)n + 0x30);
        v = w;
        w.w = 1.0f;
        ((C_001729D0_Cam *)f14C)->func_00199790(0, &v.x);
        ((C_001729D0_Cam *)f14C)->func_0019AC50();
        *dst = v;
        return;
    }
    *(V4_00171BA0 *)(p + 0x74) = *(V4_00171BA0 *)(p + 0x84);
}
#pragma optimize("", on)
static __forceinline void SqrtR_00171D00(float *r,const float &x) { _mm_store_ss(r,_mm_sqrt_ss(_mm_load_ss(&x))); }
static __forceinline void MaxR_00171D00(float *r,const float &a,const float &b) { _mm_store_ss(r,_mm_max_ss(_mm_load_ss(&a),_mm_load_ss(&b))); }
