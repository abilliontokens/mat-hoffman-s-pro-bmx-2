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

struct C_00199BE0 {
    char pad0[0x170];
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
    void func_00199BE0(void *m);
    void func_00199C20(C_00199BE0 *p, void *m);
    void func_00199C90(int a0, int a1, int a2, int a3, int a4, int a5);
    void func_00199D70(int a0, int a1, int a2, int a3);
    void func_00199D70(int a0, int a1, int a2, float angle);
    void func_00199E30(int a0, int a1, int a2, int a3, int a4);
};

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
    C_00199BE0 *zero = 0;
    node->func_001982F0();
    if (node->f180 & 1) {
        node->f180 &= 0xfe;
        if (node->f174 != zero) {
            node->f174->func_00197B10();
        }
    }
    for (p = f174; p != node; p = p->f178) {
    }
    if (p == f174) {
        f174 = p->f178;
    }
    if (p->f178 != zero) {
        p->f178->f17c = p->f17c;
    }
    if (p->f17c != zero) {
        p->f17c->f178 = p->f178;
    }
    if (p->f170 != zero) {
        p->f170 = zero;
    }
    if (p->f178 != zero) {
        p->f178 = zero;
    }
    if (p->f17c != zero) {
        p->f17c = zero;
    }
}

