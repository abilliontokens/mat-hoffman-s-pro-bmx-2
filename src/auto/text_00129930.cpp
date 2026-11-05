/* 17 functions from 0x00129930 to 0x0012A870, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00283F64;
void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct BoxCollisionObject {
    void *vtbl;
    char pad4[0x50];
    void *f54;
    char pad58[0x58];
    f32 matrix[16];
    int fF0[4];
    int f100[4];
    void func_00133E60();
    void func_00133090(int a, int b);
    void *func_0012A1C0(unsigned int flags);
    void func_00129930(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    void func_001299C0(int *p1, int *p2);
    void func_00129DF0(int a, int b);
};
