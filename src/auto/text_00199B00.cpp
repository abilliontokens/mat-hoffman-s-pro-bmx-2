/* 12 functions from 0x00199B00 to 0x0019A8C0, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <xmmintrin.h>

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
};

extern float D_002755E8;

struct S_0019A680_V4 {
    float x, y, z, w;
    S_0019A680_V4() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    S_0019A680_V4(float px, float py, float pz, float pw) { x = px; y = py; z = pz; w = pw; }
};

static inline S_0019A680_V4 Vec_0019A680(float x, float y, float z) { return S_0019A680_V4(x, y, z, 1.0f); }
static inline S_0019A680_V4 Add_0019A680(const S_0019A680_V4 &a, const S_0019A680_V4 &b) { return Vec_0019A680(a.x + b.x, a.y + b.y, a.z + b.z); }
static inline S_0019A680_V4 Sub_0019A680(const S_0019A680_V4 &a, const S_0019A680_V4 &b) { return Vec_0019A680(a.x - b.x, a.y - b.y, a.z - b.z); }
static inline S_0019A680_V4 Scale_0019A680(const S_0019A680_V4 &a, float s) { return Vec_0019A680(a.x * s, a.y * s, a.z * s); }

struct C_00199BE0 {
    char pad0[0xb0];
    float fB0[16];
    float fF0[16];
    S_00199B00_F4 f130;
    S_00199B00_F4 f140;
    char pad150[0x170 - 0x150];
    C_00199BE0 *f170;
    C_00199BE0 *f174;
    C_00199BE0 *f178;
    C_00199BE0 *f17c;
    u8 f180;
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
};

void func_001977B0(S_00199B00_F4 *out, const S_00199B00_F4 *in);

static inline void Xform4(S_00199B00_F4 &out, const S_00199B00_F4 &in)
{
    func_001977B0(&out, &in);
}

struct C_00199C20Mat {
    void func_000264C0(void *m);
};

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

void C_00199BE0::func_00199C20(C_00199BE0 *p, void *m)
{
    float *f = (float *)m;

    if (p == this) {
        memset(m, 0, 0x40);
        f[0] = 1.0f;
        f[5] = 1.0f;
        f[10] = 1.0f;
        f[15] = 1.0f;
        return;
    }
    func_00197AA0();
    ((C_00199C20Mat *)m)->func_000264C0((char *)this + 0xf0);
    if (p != 0) {
        func_00198EF0(m, p, m);
    }
}

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

void C_00199BE0::func_0019A680(S_0019A680_V4 *center, S_0019A680_V4 *extent)
{
    func_00197AA0();
    S_0019A680_V4 a;
    S_0019A680_V4 b;
    int flag = 0;
    C_00199BE0 *p;

    if (f180 & 4) {
        flag = 1;
        a = S_0019A680_V4(f130.x - f140.x, f130.y - f140.y, f130.z - f140.z, 1.0f);
        b = S_0019A680_V4(f140.x + f130.x, f140.y + f130.y, f140.z + f130.z, 1.0f);
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

