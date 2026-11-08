/* 12 functions from 0x00199B00 to 0x0019A8C0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <xmmintrin.h>
#include "asm_helpers.h"

void func_00198EF0(void *a, void *b, void *c);
void func_0011F5A0(void *m, int a, int b, int c, int d, int e);
void __stdcall func_00199D70(int a0, int a1, int a2, int a3);

float func_0014F510(float x);
float func_0014F550(float x);
void func_0011F400(void *m, int a, int b, int c, int d, int e);

struct Vec3i {
    int x, y, z;
    void Set(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
};

struct C_00199BE0;

static __forceinline void ResetLink(C_00199BE0 *&ref, C_00199BE0 *value)
{
    if (ref != value) {
        ref = value;
    }
}

struct C_00199BE0Mat {
    void func_000264C0(void *m);
};

struct S_00199B00_F4 {
    float x, y, z, w;
    S_00199B00_F4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    S_00199B00_F4(float px, float py, float pz) { x = px; y = py; z = pz; w = 1.0f; }
};

extern float D_002755E8;
extern "C" float sqrtf(float);

struct S_0019A680_V4 {
    float x, y, z, w;
    S_0019A680_V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    S_0019A680_V4(float px, float py, float pz, float pw) { x = px; y = py; z = pz; w = pw; }
    S_0019A680_V4 &operator=(const S_0019A680_V4 &v) { ((int*)this)[0]=((const int*)&v)[0]; ((int*)this)[1]=((const int*)&v)[1]; ((int*)this)[2]=((const int*)&v)[2]; ((int*)this)[3]=((const int*)&v)[3]; return *this; }
};

static inline S_0019A680_V4 Vec_0019A680(float x, float y, float z) { return S_0019A680_V4(x, y, z, 1.0f); }
static inline S_0019A680_V4 Add_0019A680(const S_0019A680_V4 &a, const S_0019A680_V4 &b) { return Vec_0019A680(a.x + b.x, a.y + b.y, a.z + b.z); }
static inline S_0019A680_V4 Sub_0019A680(const S_0019A680_V4 &a, const S_0019A680_V4 &b) { return Vec_0019A680(a.x - b.x, a.y - b.y, a.z - b.z); }
static inline S_0019A680_V4 Scale_0019A680(const S_0019A680_V4 &a, float s) { return Vec_0019A680(a.x * s, a.y * s, a.z * s); }

static inline S_00199B00_F4 pVec_0019A680(float x, float y, float z) { S_00199B00_F4 r; r.x = x; r.y = y; r.z = z; r.w = 1.0f; return r; }
static inline S_00199B00_F4 pAdd_0019A680(const S_00199B00_F4 &a, const S_00199B00_F4 &b) { return pVec_0019A680(a.x + b.x, a.y + b.y, a.z + b.z); }
static inline S_00199B00_F4 pSub_0019A680(const S_00199B00_F4 &a, const S_00199B00_F4 &b) { return pVec_0019A680(a.x - b.x, a.y - b.y, a.z - b.z); }
static inline S_00199B00_F4 pScale_0019A680(const S_00199B00_F4 &a, float s) { return pVec_0019A680(a.x * s, a.y * s, a.z * s); }

struct C_00199BE0 {
    char pad0[0xb0];
    float fB0[16];
    float fF0[16];
    S_0019A680_V4 f130;
    S_0019A680_V4 f140;
    S_00199B00_F4 f150;
    S_00199B00_F4 f160;
    C_00199BE0 *f170;
    C_00199BE0 *f174;
    C_00199BE0 *f178;
    C_00199BE0 *f17c;
    u8 f180;
    char pad181[3];
    float f184;
    float f188;
    void func_00197B10(void);
    void func_001982F0(void);
    void func_00197AA0(void);
    void func_00199CF0(int a0, int a1, int a2, int a3, float angle);
    void func_0019A210(C_00199BE0 *node);
    S_00199B00_F4 func_00198120(S_00199B00_F4 *p);
    S_00199B00_F4 func_00199B00(C_00199BE0 *other);
    void func_00199BE0(void *m);
    void func_00199C20(C_00199BE0 *p, void *m);
    void func_00199C90(int a0, int a1, int a2, int a3, int a4, int a5);
    void func_00199D70(int a0, int a1, int a2, int a3);
    void func_00199D70(int a0, int a1, int a2, float angle);
    void func_00199E30(int a0, int a1, int a2, int a3, int a4);
    void func_00199E50(S_00199B00_F4 v, int a4, int a5, int a6, int a7, float angle);
    void func_0019A0A0(float sx, float sy, float sz);
    void func_001985D0(int *flag, S_0019A680_V4 *a, S_0019A680_V4 *b, float *m, int n);
    void func_0019A680(S_0019A680_V4 *center, S_0019A680_V4 *extent);
    S_00199B00_F4 func_00197F70(S_00199B00_F4 *p);
    void func_00198440(S_00199B00_F4 *center, float *radius, int n);
    void func_0019A2D0(void);
};

extern float D_00275544;

void func_001977B0(S_00199B00_F4 *out, const S_00199B00_F4 *in);

static inline void Xform4(S_00199B00_F4 &out, const S_00199B00_F4 &in)
{
    func_001977B0(&out, &in);
}

struct C_00199C20Mat {
    void func_000264C0(void *m);
};

/* the original unit defines this earlier, so MSVC knows which registers it keeps */
void C_00199BE0::func_00197B10(void)
{
    if (f178 != 0) {
        f178->func_00197B10();
    }
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

S_00199B00_F4 C_00199BE0::func_00199B00(C_00199BE0 *other) {
if(other==this) return S_00199B00_F4(fB0[3],fB0[7],fB0[11]);
S_00199B00_F4 v;
func_00197AA0();
v.x=fF0[3];v.y=fF0[7];v.z=fF0[11];
if(other) v=other->func_00198120(&v);
return v;
}

void C_00199BE0::func_00199BE0(void *m)
{
    ((C_00199BE0Mat *)((char *)this + 0xb0))->func_000264C0(m);
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

#pragma optimize("y", on)
void C_00199BE0::func_00199C20(C_00199BE0 *p, void *m)
{
    if (p == this) {
        AsmIdentityMatrix(m);
        return;
    }
    func_00197AA0();
    ((C_00199C20Mat *)m)->func_000264C0((char *)this + 0xf0);
    if (p != 0) {
        func_00198EF0(m, p, m);
    }
}
#pragma optimize("", on)
void C_00199BE0::func_00199C90(int a0, int a1, int a2, int a3, int a4, int a5)
{
    func_0011F5A0((char *)this + 0xb0, a0, a1, a2, a4, a5);
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00199BE0::func_00199CF0(int a0, int a1, int a2, int a3, float angle)
{
    float s = func_0014F510(angle);
    float c = func_0014F550(angle);
    func_0011F5A0((char *)this + 0xb0, a0, a1, a2, *(int *)&s, *(int *)&c);
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00199BE0::func_00199D70(int a0, int a1, int a2, float angle)
{
    struct { float x, y, z, w; } saved;
    saved.x = *(float *)((char *)this + 0xbc);
    saved.y = *(float *)((char *)this + 0xcc);
    saved.z = *(float *)((char *)this + 0xdc);
    float s = func_0014F510(angle);
    float c = func_0014F550(angle);
    func_0011F400((char *)this + 0xb0, a0, a1, a2, *(int *)&s, *(int *)&c);
    *(float *)((char *)this + 0xbc) = saved.x;
    *(float *)((char *)this + 0xcc) = saved.y;
    *(float *)((char *)this + 0xdc) = saved.z;
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00199BE0::func_00199E30(int a0, int a1, int a2, int a3, int a4)
{
    func_00199D70(a0, a1, a2, a4);
}

void C_00199BE0::func_00199E50(S_00199B00_F4 v, int a4, int a5, int a6, int a7, float angle)
{
    S_00199B00_F4 t;

    AsmTransformPoint(&t.x, &v.x, fB0);
    fB0[3] = t.x;
    fB0[7] = t.y;
    fB0[11] = t.z;
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174) f174->func_00197B10();
    }

    func_00199CF0(a4, a5, a6, a7, angle);
    v.x = -v.x;
    v.y = -v.y;
    v.z = -v.z;
    v.w = 1.0f;

    AsmTransformPoint(&t.x, &v.x, fB0);
    fB0[3] = t.x;
    fB0[7] = t.y;
    fB0[11] = t.z;
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174) f174->func_00197B10();
    }
}

#pragma optimize("a", on)
void C_00199BE0::func_0019A0A0(float sx, float sy, float sz)
{
    S_00199B00_F4 v;
    S_00199B00_F4 *po = &v;
    S_00199B00_F4 &ri = v;

    v.x = fB0[0];
    v.y = fB0[4];
    v.w = 1.0f;
    v.z = fB0[8];
    func_001977B0(po, &ri);
    v.x *= sx;
    v.y *= sx;
    v.z *= sx;
    fB0[0] = v.x;
    fB0[4] = v.y;
    fB0[8] = v.z;

    v.x = fB0[1];
    v.y = fB0[5];
    v.z = fB0[9];
    func_001977B0(po, &ri);
    v.x *= sy;
    v.y *= sy;
    v.z *= sy;
    fB0[1] = v.x;
    fB0[5] = v.y;
    fB0[9] = v.z;

    v.x = fB0[2];
    v.y = fB0[6];
    v.z = fB0[10];
    func_001977B0(po, &ri);
    v.x *= sz;
    v.y *= sz;
    v.z *= sz;
    fB0[2] = v.x;
    fB0[6] = v.y;
    fB0[10] = v.z;

    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}
#pragma optimize("", on)
void C_00199BE0::func_0019A210(C_00199BE0 *node)
{
    C_00199BE0 *p;
    node->func_001982F0();
    if (node->f180 & 1) {
        node->f180 &= 0xfe;
        if (node->f174 != 0) {
            node->f174->func_00197B10();
        }
    }
    for (p = f174; p != node; p = p->f178) {
    }
    if (p == f174) {
        f174 = p->f178;
    }
    if (p->f178 != 0) {
        p->f178->f17c = p->f17c;
    }
    if (p->f17c != 0) {
        p->f17c->f178 = p->f178;
    }
    if (p->f170 != 0) {
        p->f170 = 0;
    }
    if (p->f178 != 0) {
        p->f178 = 0;
    }
    if (p->f17c != 0) {
        p->f17c = 0;
    }
}

void C_00199BE0::func_0019A2D0(void)
{
    if (f180 & 0x10) {
        func_00197AA0();
        S_0019A680_V4 a;
        float radius = 0;

        if (f180 & 4) {
            *(S_00199B00_F4 *)&a = func_00197F70((S_00199B00_F4 *)&f130);
            radius = f184;
        }
        for (C_00199BE0 *p = f174; p != 0; p = p->f178) {
            p->func_00198440((S_00199B00_F4 *)&a, &radius, 1);
        }
        f150 = func_00198120((S_00199B00_F4 *)&a);
        f160.x = radius;
        f160.y = radius;
        f160.z = radius;
        f188 = radius;
    } else {
        func_00197AA0();
        S_0019A680_V4 b;
        S_0019A680_V4 a;
        int flag = 0;

        if (f180 & 4) {
            flag = 1;
            b = Sub_0019A680(f130, f140);
            a = Add_0019A680(f130, f140);
        }
        for (C_00199BE0 *p = f174; p != 0; p = p->f178) {
            p->func_001985D0(&flag, &b, &a, fF0, 1);
        }
        S_0019A680_V4 t = Scale_0019A680(Add_0019A680(a, b), D_002755E8);
        *(S_0019A680_V4 *)&f150 = t;
        S_0019A680_V4 u = Scale_0019A680(Sub_0019A680(a, b), D_002755E8);
        *(S_0019A680_V4 *)&f160 = u;
        f188 = AsmSqrtF(f160.x * f160.x + f160.y * f160.y + f160.z * f160.z);
    }
    if (f188 > D_00275544) {
        f180 |= 0x40;
    }
}

void C_00199BE0::func_0019A680(S_0019A680_V4 *center, S_0019A680_V4 *extent)
{
    func_00197AA0();
    S_0019A680_V4 a;
    S_0019A680_V4 b;
    int flag = 0;
    C_00199BE0 *p;

    if (f180 & 4) {
        flag = 1;
        a = Sub_0019A680(f130, f140);
        b = Add_0019A680(f130, f140);
    }
    for (p = f174; p != 0; p = p->f178) {
        p->func_001985D0(&flag, &a, &b, fF0, 1);
    }
    if (center != 0) {
        *center = Scale_0019A680(Add_0019A680(b, a), D_002755E8);
    }
    if (extent != 0) {
        *extent = Scale_0019A680(Sub_0019A680(b, a), D_002755E8);
    }
}

