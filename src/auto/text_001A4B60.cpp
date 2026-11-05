/* 13 functions from 0x001A4B60 to 0x001A5B10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern int D_0028B84C;
void func_001E891B(void *p);
void func_00030AC0(float *out, float *v, float *m);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct Vec4 {
    int x, y, z, w;
};

struct C_000264C0 {
    void func_000264C0(void *param_1);
};

struct C_00199C20 {
    void func_00199C20(int a, void *out);
};

struct __declspec(align(16)) S_Matrix16 {
    f32 m[16];
};

/* SphereCollisionObject */
struct C_SphereCollisionObject {
    void *vtbl;
    char pad4[0x24];
    Vec4 f28;
    char pad38[0x10];
    int f48;
    char pad4c[0x8];
    void *f54;
    char pad58[0x50];
    Vec4 fA8;
    char padB8[0x8];
    __declspec(align(16)) f32 matrix[16];
    int f100;
    char pad104[0xC];
    void *f110;
    void func_00133E60();
    void func_001A52D0(void *a);
    void func_001A5370(void);
    void *func_001A57A0(unsigned int flags);
};

struct C_SphereCollisionObjectVT {
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
    virtual void func_001A52D0(void *a);
};

struct S_001A5730_Item {
    f32 x, y, z, w;
};

struct C_001A5730 {
    char pad0[0x14];
    f32 f14;
    f32 f18;
    f32 f1c;
    f32 f20;
    S_001A5730_Item arr24[3];
    S_001A5730_Item arr54[3];
    void func_001A5730(void);
};

struct C_001A52C0 {
    void func_001A52C0(void);
};


void C_001A52C0::func_001A52C0(void)
{
  int* in_ECX = (int*)this;
  
                    
                    
  (**(code **)(*in_ECX + 0x80))();
  return;
}

void C_SphereCollisionObject::func_001A52D0(void *a)
{
    if (a == 0) {
        memset(matrix, 0, 0x40);
        matrix[0] = 1.0f;
        matrix[5] = 1.0f;
        matrix[10] = 1.0f;
        matrix[15] = 1.0f;
    } else {
        ((C_000264C0 *)matrix)->func_000264C0(a);
    }
    f28 = fA8;
    f48 = f100;
    func_00030AC0((float *)&f28, (float *)&f28, matrix);
}

void C_SphereCollisionObject::func_001A5370(void)
{
    if (f110) {
        S_Matrix16 m;
        ((C_00199C20 *)f110)->func_00199C20(0, &m);
        ((C_SphereCollisionObjectVT *)this)->func_001A52D0(&m);
    } else {
        ((C_SphereCollisionObjectVT *)this)->func_001A52D0(0);
    }
}

void C_001A5730::func_001A5730(void)
{
    int i;
    C_001A5730 *o = this;

    o->f14 = o->f18 = o->f1c = 0.0f;
    o->f20 = 1.0f;
    for (i = 0; i < 3; i++) {
        o->arr24[i].x = o->arr24[i].y = o->arr24[i].z = 0.0f;
        o->arr24[i].w = 1.0f;
    }
    for (i = 0; i < 3; i++) {
        o->arr54[i].x = o->arr54[i].y = o->arr54[i].z = 0.0f;
        o->arr54[i].w = 1.0f;
    }
}

void func_001A5790(void) {
    int func_001A4FC0(...);
    func_001A4FC0();
}

void *C_SphereCollisionObject::func_001A57A0(unsigned int flags)
{
    vtbl = (void *)&D_0028B84C;
    if (f54) {
        func_001E891B(f54);
        f54 = 0;
    }
    func_00133E60();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

