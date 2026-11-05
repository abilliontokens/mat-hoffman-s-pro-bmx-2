/* 20 functions from 0x001F4B08 to 0x001F58D5, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern char D_002FB000[0x101];
extern char D_002FB120[0x18];
extern int D_002FB104;
extern int D_002FAFF0;
extern int D_002FAFE8;

unsigned int func_001F4BC8(unsigned int newv, unsigned int mask)
{
    unsigned int func_001F4B96(unsigned int newv, unsigned int mask);

    return func_001F4B96(newv, mask & 0xfff7ffff);
}

void func_001F4BDE(void)
{
    memset(D_002FB000, 0, 0x101);
    memset(D_002FB120, 0, 0x18);
    D_002FB104 = 0;
    D_002FAFF0 = 0;
    D_002FAFE8 = 0;
}

void func_001F4E30(void) {
    int func_001EB302(...);
    func_001EB302(13);
}
