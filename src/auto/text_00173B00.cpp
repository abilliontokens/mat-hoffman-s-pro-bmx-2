/* 13 functions from 0x00173B00 to 0x001747F0, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

struct PhIface { virtual void v00(); void func_00133ED0(); };
struct S_00173B00_Rig;
struct PhObj {
    void *vtbl; char pad4[0x2c];
    int f30, f34, f38;
    char pad3c[0x78];
    float fb4, fb8, fbc, fc0;
    S_00173B00_Rig *fc4; PhIface *fc8; PhIface *fcc; PhObj *fd0; PhIface *fd4; PhIface *fd8;
    char padDC[0x40];
    float f11c, f120, f124, f128;
    int func_00173B00(float dt);
    int func_00157A00(float dt);
    void func_001729D0();
    void func_00172000();
    void func_001730B0(float dt);
    void func_001724B0(float dt);
};
struct PhGlobal { char pad[0x124]; int f124; };
extern PhGlobal *D_002A8490;
extern float D_002A8BEC;
extern float D_00275460;
extern float D_00275544;
extern float D_002755E8;
extern float D_00277FBC;

struct Vec4 {
    f32 x, y, z, w;
};

struct S_00173B00_Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(float a); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(float a);
};

struct S_00173B00_Rig {
    char pad0[0x6c];
    Vec4 f6c;
    Vec4 f7c;
    char pad8c[0x170 - 0x8c];
    float f170, f174, f178;
    char pad17c[0x1b4 - 0x17c];
    int f1b4;
};

static inline float Min_00173B00(float a, float b) { return AsmMinF(a, b); }
static inline float Max_00173B00(float a, float b) { return AsmMaxF(a, b); }
static inline float Abs_00173B00(float x) { int i = *(int *)&x & 0x7fffffff; return *(float *)&i; }
static __forceinline float AbsV_00173B00(volatile float x) { int i = *(volatile int *)&x & 0x7fffffff; return *(float *)&i; }
static __forceinline float MinV_00173B00(volatile float a, volatile float b) { return AsmMinF(a, b); }
static __forceinline float MaxV_00173B00(volatile float a, volatile float b) { return AsmMaxF(a, b); }
float func_00011170(float *v);

extern Vec4 D_002EF740;
extern Vec4 D_002A8C18;
static __forceinline void Zero3(int *p) { p[0]=0; p[1]=0; p[2]=0; }
static __forceinline void ZeroVec3(int *p) { int i; for (i = 0; i < 3; i++) p[i] = 0; }
static __forceinline void CopyVec4(int *d, const int *s) { int i; for (i = 0; i < 4; i++) d[i] = s[i]; }

struct __declspec(align(16)) Mat4_001741C0 {
    float m[16];
};

struct C_00198040 {
    void func_00198040(void *a0, void *a1);
    void func_00197EC0(void *a0, void *a1);
};

extern Vec4 D_002A8BA0;
extern float D_002A8BA4, D_002A8BA8, D_002A8BAC;
void *func_001E8A44(int size);

struct C_00198330 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7C();
    virtual void v80(); virtual void v84(); virtual void v88();
    virtual void v8C(int a0, int a1, int a2);
    virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9C();
    virtual void vA0();
    C_00198330 *func_00143580(int a);
    void func_00197E70(Vec4 *a0);
    void func_00199600(Vec4 v);
    void func_00199A70(C_00198330 *a0, Vec4 *a1);
    void func_001994C0(int a0, Vec4 *a1, Vec4 *a2);
};

struct PhysicsRigidBody {
    char pad0[0x44];
    Vec4 f44;
    Vec4 f54;
    Vec4 f64;
    char pad74[0xD8];
    C_00198330 *f14C;
    char pad150[0xDC];
    C_00198040 *f22C;
    char pad230[8];
    Vec4 f238;
    char pad248[0x20];
    Vec4 f268;
    char pad278[0x20];
    int f298[2][3];
    int f2B0[2][3];
    Vec4 f2C8[2];
    int f2E8[2][3];
    void func_001746D0();
    void func_00174580();
    Vec4 *func_001744D0(Vec4 *out);
    void *func_00174530(void *a0);
    void func_00173580(int a0, int a1, int a2, int a3, int a4);
    void func_001577A0(void *a0, int a1);
    PhysicsRigidBody *func_00173F70(Vec4 a, Vec4 b, Vec4 c, int a12, int a13, int a14, int a15, int a16);
    PhysicsRigidBody *func_001740B0(C_00198330 *a0, int a1, int a2, int a3, int a4, int a5);
    void *func_001744B0(void *a0);
};

static __forceinline float LengthSq(float x, float y, float z, float w) {
    return x * x + y * y + z * z + w * w;
}
static __forceinline float Sqrt_001743A0(float x) { return AsmSqrtF(x); }
struct C_00174550 {
    char pad0[0x28C];
    int unk28C;
    int unk290;
    int unk294;
    void func_00174550(int a0, int a1, int a2);
};


int PhObj::func_00173B00(float dt)
{
    if (D_002A8490->f124 != 0)
        return 1;
    f124 = 0.0f;
    f128 = 0.0f;
    if (fc4->f1b4 != 0) {
        if (f30 != 0 && f34 != 0) {
            func_001724B0(dt);
            f124 = func_00011170(&fc4->f6c.x);
            f128 = func_00011170(&fc4->f7c.x);
        } else if (f30 == 0 || f34 == 0) {
            ((S_00173B00_Obj *)fcc)->v13(dt);
            float total = 0.0f;
            float step = Min_00173B00(dt, D_002A8BEC);
            *(Vec4 *)&fb4 = D_002A8BA0;
            if (D_00275544 < dt) {
                do {
                    float a170, a174, a178, ab4, ab8, abc;
                    ((S_00173B00_Obj *)this)->v28(step);
                    ((S_00173B00_Obj *)fd0)->v13(step);
                    a170 = AbsV_00173B00(fc4->f170); ab4 = AbsV_00173B00(fb4);
                    if (a170 > ab4) fb4 = fc4->f170;
                    a174 = AbsV_00173B00(fc4->f174); ab8 = AbsV_00173B00(fb8);
                    if (a174 > ab8) fb8 = fc4->f174;
                    a178 = AbsV_00173B00(fc4->f178); abc = AbsV_00173B00(fbc);
                    if (a178 > abc) fbc = fc4->f178;
                    ((S_00173B00_Obj *)fc4)->v13(step);
                    f124 = Max_00173B00(f124, Sqrt_001743A0(fc4->f6c.x * fc4->f6c.x + fc4->f6c.y * fc4->f6c.y + fc4->f6c.z * fc4->f6c.z));
                    f128 = Max_00173B00(f128, Sqrt_001743A0(fc4->f7c.x * fc4->f7c.x + fc4->f7c.y * fc4->f7c.y + fc4->f7c.z * fc4->f7c.z));
                    total += step;
                    step = Min_00173B00(D_002A8BEC, dt - total);
                } while (total < dt);
            }
            func_001729D0();
            func_00172000();
            fd4->func_00133ED0();
            fd8->func_00133ED0();
            if (f30 != 0) {
                if (fd0->f30 != 0) f11c = 0.0f;
                else f11c += dt;
                if (f11c > f120) f34 = 1;
            }
        }
        func_001730B0(dt);
    }
    f38 = 0;
    return func_00157A00(dt);
}

PhysicsRigidBody *PhysicsRigidBody::func_00173F70(Vec4 a, Vec4 b, Vec4 c, int a12, int a13, int a14, int a15, int a16)
{
    Vec4 *p = &f44;
    *p = a;
    f54 = b;
    f64 = c;
    *(int *)(pad74 + 0x30) = a13;
    void *m = func_001E8A44(0x1e0);
    f14C = m ? ((C_00198330 *)m)->func_00143580(1) : 0;
    f14C->v8C(a14, 0, 0);
    func_001577A0(f14C, 0);
    if (p->x == D_002A8BA0.x && p->y == D_002A8BA0.y && p->z == D_002A8BA0.z)
        f14C->func_00197E70(p);
    f14C->func_00199600(D_002A8BA0);
    func_00173580(a12, a13, a14, a15, a16);
    return this;
}

PhysicsRigidBody *PhysicsRigidBody::func_001740B0(C_00198330 *a0, int a1, int a2, int a3, int a4, int a5)
{
    f14C = a0;
    a0->func_00199A70(0, &f44);
    f14C->func_001994C0(0, &f54, &f64);
    func_00173580(a1, a2, a3, a4, a5);
    return this;
}

Vec4 func_00174110(Vec4 *src) {
Vec4 r;
Vec4 *dst=&r;
int w,z,y,x;
float sum=LengthSq(src->x,src->y,src->z,src->w);
if(sum!=D_00275544) {
float root=AsmSqrtF(sum);
float inv=D_00275460/root;
float p[4];
p[0]=inv*src->x; x=*(int*)&p[0];
p[1]=inv*src->y; y=*(int*)&p[1];
p[2]=inv*src->z; z=*(int*)&p[2];
p[3]=inv*src->w; w=*(int*)&p[3];
} else { w=0; x=w; y=w; z=w; }
((int*)dst)[0]=x; ((int*)dst)[1]=y; ((int*)dst)[2]=z; ((int*)dst)[3]=w;
return r;
}

Mat4_001741C0 func_001741C0(const float *q)
{
    Mat4_001741C0 r;
    float b2 = q[1] + q[1];
    float c2 = q[2] + q[2];
    float d2 = q[3] + q[3];
    float ab = b2 * q[0];
    float ac = c2 * q[0];
    float ad = d2 * q[0];
    float bc = c2 * q[1];
    float bd = d2 * q[1];
    float cd = d2 * q[2];
    float bb = b2 * q[1];
    float cc = c2 * q[2];
    float dd = d2 * q[3];
    r.m[12] = 0.0f;
    r.m[13] = 0.0f;
    r.m[14] = 0.0f;
    r.m[3] = 0.0f;
    r.m[7] = 0.0f;
    r.m[11] = 0.0f;
    r.m[15] = 1.0f;
    r.m[0] = D_00275460 - (dd + cc);
    r.m[4] = bc + ad;
    r.m[8] = bd - ac;
    r.m[1] = bc - ad;
    r.m[5] = D_00275460 - (dd + bb);
    r.m[9] = cd + ab;
    r.m[2] = bd + ac;
    r.m[6] = cd - ab;
    r.m[10] = D_00275460 - (cc + bb);
    return r;
}

Vec4 *func_001742F0(Vec4 *dst, Vec4 *a, Vec4 *b)
{
    Vec4 r;
    r.x = (a->z * b->y + b->z * a->w + a->y * b->x) * D_00277FBC;
    r.y = (a->x * b->x + a->z * b->z - a->w * b->y) * D_002755E8;
    r.z = (a->x * b->y + b->x * a->w - a->y * b->z) * D_002755E8;
    r.w = (a->y * b->y + b->z * a->x - a->z * b->x) * D_002755E8;
    return *dst = r, dst;
}

float func_0014FBA0(float a0, float a1);
Vec4 *func_001743A0(Vec4 *dst, Vec4 *q)
{
    Vec4 r;
    float a = (q->y * q->z + q->w * q->x) * 2.0f;
    float d = D_00275460 - (q->w * q->w + q->y * q->y) * 2.0f;
    float b = (q->w * q->y + q->x * q->z) * 2.0f;
    float c = (q->w * q->z - q->y * q->x) * 2.0f;
    float e = D_00275460 - (q->z * q->z + q->y * q->y) * 2.0f;
    r.w = 1.0f;
    r.y = -func_0014FBA0(b, e);
    r.z = -func_0014FBA0(a, d);
    d = d*d+a*a;
    float s = AsmSqrtF(d);
    r.x = -func_0014FBA0(-c, s);
    *dst=r;
    return dst;
}

void *PhysicsRigidBody::func_001744B0(void *a0)
{
    f22C->func_00198040(a0, &f238);
    return a0;
}

Vec4 *PhysicsRigidBody::func_001744D0(Vec4 *out)
{
    *out = f238;
    return out;
}

void *PhysicsRigidBody::func_00174530(void *a0)
{
    f22C->func_00197EC0(a0, &f268);
    return a0;
}

void C_00174550::func_00174550(int a0, int a1, int a2) {
    unk28C = a0;
    unk290 = a1;
    unk294 = a2;
}

void PhysicsRigidBody::func_00174580()
{
    *(Vec4 *)((char *)this + 0x130) = D_002A8C18;
    *(Vec4 *)((char *)this + 0x140) = D_002A8C18;
    *(Vec4 *)((char *)this + 0x6c) = D_002A8C18;
    *(Vec4 *)((char *)this + 0x7c) = D_002A8C18;
    *(Vec4 *)((char *)this + 0x238) = D_002A8C18;
    *(Vec4 *)((char *)this + 0x248) = D_002A8C18;
    *(Vec4 *)((char *)this + 0x5c) = D_002A8C18;
    *(Vec4 *)((char *)this + 0x268) = D_002A8C18;
    *(int *)((char *)this + 0x28) = 0;
    ((C_00198330 *)this)->vA0();
}

void PhysicsRigidBody::func_001746D0()
{
    int i;

    for (i = 0; i < 2; i++) {
        ZeroVec3(f298[i]);
        f2C8[i] = D_002EF740;
        ZeroVec3(f2B0[i]);
        ZeroVec3(f2E8[i]);
    }
}

