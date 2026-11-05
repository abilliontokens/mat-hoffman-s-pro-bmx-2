/* 13 functions from 0x001A4B60 to 0x001A5B10, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern int D_0028B84C;
extern int D_0028B8DC;
void func_001E891B(void *p);
void func_00030AC0(float *out, float *v, float *m);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct C_00157600 {
    void func_00157600(void *a);
    void func_00157660(void);
};

/* SplashScreenManager */
struct SplashScreenManager {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    char pad2C[0x80];
    int fAC;
    int fB0;
    int fB4;
    int fB8;
    u8 fBC;
    char padBD[0x103];
    int f1C0;
    int f1C4;
    int f1C8;
    void **f1CC;
    int f1D0;
    void **f1D4;
    int f1D8;
    int f1DC;
    SplashScreenManager *func_001A58D0(void *a);
    void func_001A5950(void);
};

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
    void func_001A57E0(int a, int b, int c, int d, f32 r, void *e);
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
        C_001A5730 *func_001A5730(void);
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

C_001A5730 *C_001A5730::func_001A5730(void)
{
    u32 *p;
    int n;

    p = (u32 *)&f14;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&arr24[0];
    n = 3;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    p = (u32 *)&arr54[0];
    n = 3;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--n != 0);
    return this;
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

SplashScreenManager *SplashScreenManager::func_001A58D0(void *a)
{
    ((C_00157600 *)this)->func_00157600(a);
    fAC = 0;
    fB0 = 0;
    fBC = 0;
    f24 = 0;
    f28 = 0;
    f1C0 = 0;
    fB4 = 0;
    fB8 = 0;
    f1C8 = 0;
    f1CC = 0;
    f1D0 = 0;
    f1D4 = 0;
    f1D8 = 0;
    f1DC = 0;
    vtbl = (void *)&D_0028B8DC;
    f1C4 = 1;
    return this;
}

void SplashScreenManager::func_001A5950(void)
{
    int i;

    vtbl = (void *)&D_0028B8DC;
    if (f1CC != 0) {
        for (i = 0; i < f1D0; i++) {
            func_001E891B(f1CC[i]);
        }
        func_001E891B(f1CC);
    }
    if (f1D4 != 0) {
        for (i = 0; i < f1D8; i++) {
            func_001E891B(f1D4[i]);
        }
        func_001E891B(f1D4);
    }
    ((C_00157600 *)this)->func_00157660();
}

