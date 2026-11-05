/* 17 functions from 0x00129930 to 0x0012A870, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00283F64;
void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_00284008;
void *func_001E8A44(int size);

struct Vec4 {
    int x, y, z, w;
};

struct VCall31_129E10 {
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
    virtual void v31(int a);
};

struct CacheNode_129930 {
    void *f0;
    int f4;
    CacheNode_129930 *f8;
};

struct CacheList_129930 {
    int f0;
    CacheNode_129930 *f4;
    void func_00160B90(void);
};

struct CacheVCall_129930 {
    virtual void *v0(int a, int b);
    virtual void v1(void *p);
    virtual void v2();
};

struct Cache_129930 {
    void *vtbl;
    int f4;
    int f8;
    CacheList_129930 *fC;
    void func_0012A2C0(void);
    void func_0012A330(void);
};

struct ListEntry_12A200 {
    int f0;
    int f4;
};

struct BoxCollisionObject {
    void *vtbl;
    char pad4[0x50];
    void *f54;
    char pad58[0x58];
    f32 matrix[16];
    Vec4 fF0;
    Vec4 f100;
    void func_00133E60();
    void func_00133090(int a, int b);
    void *func_0012A1C0(unsigned int flags);
    void func_00129930(Vec4 a1, Vec4 a2);
    void func_001299C0(Vec4 *p1, Vec4 *p2);
    void func_00129DF0(int a, int b);
    void func_00129E10(void);
};

void BoxCollisionObject::func_00129930(Vec4 a1, Vec4 a2)
{
    (**(code **)(*(int *)this + 0x6c))();
    fF0 = a1;
    f100 = a2;
    memset(matrix, 0, 0x40);
    matrix[0] = 1.0f;
    matrix[5] = 1.0f;
    matrix[10] = 1.0f;
    matrix[15] = 1.0f;
}

void BoxCollisionObject::func_001299C0(Vec4 *p1, Vec4 *p2)
{
    if (p1)
        fF0 = *p1;
    if (p2)
        f100 = *p2;
}

void BoxCollisionObject::func_00129DF0(int a, int b)
{
    func_00133090(a, b);
}

void *BoxCollisionObject::func_0012A1C0(unsigned int flags)
{
    vtbl = (void *)&D_00283F64;
    if (f54) {
        func_001E891B(f54);
        f54 = 0;
    }
    func_00133E60();
    if (flags & 1)
        func_001E891B(this);
    return this;
}
