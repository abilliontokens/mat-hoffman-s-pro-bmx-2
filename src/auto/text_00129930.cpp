/* 17 functions from 0x00129930 to 0x0012A870, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00283F64;
void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct Vec4 {
    int x, y, z, w;
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
