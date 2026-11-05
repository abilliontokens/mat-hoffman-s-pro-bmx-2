/* 24 functions from 0x00030A30 to 0x000318A0, found by Ghidra. */
#include "common.h"
struct C_00030CD0 {
    char pad0[0x78];
    int unk78;
    void func_00030CD0(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00030F00 {
    void *vtbl;
    void *func_00030F00(unsigned int flags);
};

struct C_00030B20 {
    char pad0[0x170];
    float f170;
    float f174;
    float f178;
    char pad17c[0xBC];
    float f238;
    float f23c;
    float f240;
    void func_00030B20(float x, float y, float z, float w);
};


struct Vec4_00030A30 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00030B90 {
    char pad0[0x180];
    float f180;
    float f184;
    float f188;
    char pad18c[0xdc];
    float f268;
    float f26c;
    float f270;
    void func_00030B90(float x, float y, float z, float w);
};

struct V_00031430 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
};

extern V_00031430 *D_002EFDB8;

struct C_001576C0 {
    void func_001576C0(void);
};

struct C_00031430 {
    void func_00031430(void);
};

struct V4_00030E70 {
    float x;
    float y;
    float z;
    float w;
    V4_00030E70() {}
    V4_00030E70(float x_, float y_, float z_, float w_) {
        x = x_;
        y = y_;
        z = z_;
        w = w_;
    }
};

struct S_00030E70_Target {
    char pad0[0x190];
    float f190;
    float f194;
    float f198;
};

struct C_00030E70 {
    char pad0[0x58];
    V4_00030E70 f58;
    float f68;
    float f6c;
    float f70;
    char pad74[4];
    S_00030E70_Target *f78;
    int func_00030E70(int a0);
};

void __stdcall func_0001C750(V4_00030E70 a, V4_00030E70 b);

void *func_001E8A44(int size);
void func_001E891B(void *p);

struct C_0009A290 {
    char pad0[0x194];
    int f194;
    C_0009A290 *func_0009A290(void *a0, char *a1, int a2);
    void func_0009C770(void);
};

struct C_00031840 {
    char pad0[0x64];
    char *f64;
    char pad68[0x158];
    C_0009A290 *f1C0;
    void func_00031840(void);
};

void func_00030A30(Vec4_00030A30 *out, float x, float y, float z, float w, float *m)
{
    Vec4_00030A30 r;
    r.x = x * m[0] + (y * m[4] + z * m[8]);
    r.y = x * m[1] + (y * m[5] + z * m[9]);
    r.z = x * m[2] + (y * m[6] + z * m[10]);
    r.w = 1.0f;
    *out = r;
}

void func_00030AC0(float *out, float *v, float *m)
{
    out[0] = v[0] * m[0] + v[1] * m[1] + v[2] * m[2] + v[3] * m[3];
    out[1] = v[0] * m[4] + v[1] * m[5] + v[2] * m[6] + v[3] * m[7];
    out[2] = v[0] * m[8] + v[1] * m[9] + v[2] * m[10] + v[3] * m[11];
    out[3] = 1.0f;
}

void C_00030B20::func_00030B20(float x, float y, float z, float w)
{
    f170 = x + f170;
    f174 = y + f174;
    f178 = z + f178;
    f238 = x + f238;
    f23c = y + f23c;
    f240 = z + f240;
}

void C_00030B90::func_00030B90(float x, float y, float z, float w)
{
    f180 = x + f180;
    f184 = y + f184;
    f188 = z + f188;
    f268 = x + f268;
    f26c = y + f26c;
    f270 = z + f270;
}

void C_00030CD0::func_00030CD0(int a0) {
    unk78 = a0;
}

int C_00030E70::func_00030E70(int a0)
{
    S_00030E70_Target *t = f78;
    V4_00030E70 v(t->f190 + f68, t->f194 + f6c, t->f198 + f70, 1.0f);
    func_0001C750(f58, v);
    return 1;
}

void *C_00030F00::func_00030F00(unsigned int flags)
{
    extern int D_00276A24;
    void func_001E891B(void *);

    vtbl = (void *)&D_00276A24;
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_00031400(void) {
    int func_001578D0(...);
    func_001578D0();
}

int func_00031410(void) {
    int func_00157960(...);
    func_00157960();
    return 1;
}

void func_00031420(void) {
    int func_001576D0(...);
    func_001576D0();
}

void C_00031430::func_00031430(void)
{
    D_002EFDB8->v8();
    ((C_001576C0 *)this)->func_001576C0();
}

void func_00031630(void) {
    int func_000314F0(...);
    func_000314F0();
}

