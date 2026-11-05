/* 12 functions from 0x00171D00 to 0x00172BA0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
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
    virtual void v28();
    virtual void v29();
};

struct C_00172090_D0 {
    void func_001A9110(int a, int b, int c, int d, int e, int f, int g, int h);
    void func_001A9220(int a, int b);
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
    S_00172090_Mat *q = p;
    _mm_store_ps(&q->m[0], _mm_setzero_ps());
    _mm_store_ps(&q->m[4], _mm_setzero_ps());
    _mm_store_ps(&q->m[8], _mm_setzero_ps());
    _mm_store_ps(&q->m[12], _mm_setzero_ps());
}

/* PhysicsBody */
struct PhysicsBody {
    void *vtbl;
    char pad4[0x20];
    void *f24;
    char pad28[0x88];
    C_00193490 *fB0;
    char padB4[0x10];
    void *fC4;
    char padC8[8];
    C_00172090_D0 *fD0;
    C_00172460Obj *fD4;
    C_00172460Obj *fD8;
    C_00172460Obj *fDC;
    char padE0[0x4C];
    int f12C;
    char pad130[0x1C];
    C_00171D00_F14C *f14C;
    char pad150[0xE0];
    int f230;
          void *func_00171E60(int flags);
    void func_00171F50(int a1, int a2);
    void func_00172420(void);
    void func_00172460(void);
    void func_00172000(void);
    void func_00172330(void);
    void func_00171D00(float x,float y,float z,float w);
    void func_001729D0(void);
};

struct C_001729D0_Cam { void func_00199A70(int a, float *b); void func_00199790(int a, float *b); void func_0019AC50(void); };
struct C_001729D0_Node { char pad[0x20]; float m[4]; float pos[4]; };
struct C_001729D0_Obj {
    char pad0[0x54]; C_001729D0_Node *f54; char pad58[0x4F]; unsigned char fA7;
    void func_0014AC30(float *a, int b); void func_00133ED0(void);
    float func_00133F10(int a); float func_00134770(int a, int b);
};
extern float D_002A8BA0, D_002A8BA4, D_002A8BA8, D_002A8BE8;

struct S_00171F10_F60 {
    char pad0[0x28];
    void *f28;
};

struct S_00171F10_Arg0 {
    char pad0[0x60];
    S_00171F10_F60 *f60;
    C_00171D00_C4VT *f64;
};

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
static __forceinline void SqrtR_00171D00(float *r,const float &x) { _mm_store_ss(r,_mm_sqrt_ss(_mm_load_ss(&x))); }
static __forceinline void MaxR_00171D00(float *r,const float &a,const float &b) { _mm_store_ss(r,_mm_max_ss(_mm_load_ss(&a),_mm_load_ss(&b))); }
