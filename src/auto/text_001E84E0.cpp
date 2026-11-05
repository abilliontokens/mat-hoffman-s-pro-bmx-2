/* 7 functions from 0x001E84E0 to 0x001E8855, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

static void swap_bytes(char *p, char *q, unsigned int width)
{
    char dummy;

    if (p != q) {
        while (width--) {
            dummy = *p;
            *p = *q;
            *q = dummy;
            p++;
            q++;
        }
    }
}

static void func_001E84E0(char *lo, char *hi, unsigned int width, int (__cdecl *comp)(const void *, const void *))
{
    char *p;
    char *max;

    while (hi > lo) {
        max = lo;
        for (p = lo + width; p <= hi; p += width) {
            if (comp(p, max) > 0) {
                max = p;
            }
        }
        swap_bytes(max, hi, width);
        hi -= width;
    }
}
#pragma optimize("", on)

void func_001E87E0(void) {
}

#pragma optimize("t", off)
void func_001E87E1(void)
{
    int func_001EB786(...);
    extern int D_002AEA14;
    extern int D_002AEA18;
    extern int D_002AEA1C;
    extern int D_002AEA20;
    extern int D_002AEA24;
    extern int D_002AEA28;
    D_002AEA14 = (int)func_001EB786;
    D_002AEA18 = 0;
    D_002AEA1C = 0;
    D_002AEA20 = 0;
    D_002AEA24 = 0;
    D_002AEA28 = (int)func_001EB786;
}
#pragma optimize("", on)

void func_001E8819(void)
{
    void func_001E87E1(void);
    int func_001EB7D7(void);
    func_001E87E1();
    func_001EB7D7();
}

void func_001E8826(undefined4 param_1)
{
  int func_001EB7E9(...);
  int iVar1;
  
  iVar1 = func_001EB7E9();
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  return;
}

#pragma optimize("t", off)
int func_001E8833(void)
{
    int func_001EB7E9(...);
    int *state;
    state = (int *)func_001EB7E9();
    state[5] = state[5] * 214013 + 2531011;
    return (unsigned int)state[5] >> 16 & 0x7fff;
}
#pragma optimize("", on)
