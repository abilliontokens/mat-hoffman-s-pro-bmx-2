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

void func_001E8550(char *base, unsigned int num, unsigned int width, int (__cdecl *comp)(const void *, const void *))
{
    char *lo;
    char *hi;
    char *mid;
    char *loguy;
    char *higuy;
    unsigned int size;
    char *lostk[30];
    char *histk[30];
    int stkptr;

    if (num < 2 || width == 0) {
        return;
    }
    stkptr = 0;
    lo = base;
    hi = base + width * (num - 1);

recurse:
    size = (hi - lo) / width + 1;
    if (size <= 8) {
        func_001E84E0(lo, hi, width, comp);
    } else {
        mid = lo + (size / 2) * width;
        if (comp(lo, mid) > 0) {
            swap_bytes(lo, mid, width);
        }
        if (comp(lo, hi) > 0) {
            swap_bytes(lo, hi, width);
        }
        if (comp(mid, hi) > 0) {
            swap_bytes(mid, hi, width);
        }
        loguy = lo;
        higuy = hi;
        for (;;) {
            if (mid > loguy) {
                do {
                    loguy += width;
                } while (loguy < mid && comp(loguy, mid) <= 0);
            }
            if (mid <= loguy) {
                do {
                    loguy += width;
                } while (loguy <= hi && comp(loguy, mid) <= 0);
            }
            do {
                higuy -= width;
            } while (higuy > mid && comp(higuy, mid) > 0);
            if (higuy < loguy) {
                break;
            }
            swap_bytes(loguy, higuy, width);
            if (mid == higuy) {
                mid = loguy;
            }
        }
        higuy += width;
        if (mid < higuy) {
            do {
                higuy -= width;
            } while (higuy > mid && comp(higuy, mid) == 0);
        }
        if (mid >= higuy) {
            do {
                higuy -= width;
            } while (higuy > lo && comp(higuy, mid) == 0);
        }
        if (higuy - lo >= hi - loguy) {
            if (lo < higuy) {
                lostk[stkptr] = lo;
                histk[stkptr] = higuy;
                ++stkptr;
            }
            if (loguy < hi) {
                lo = loguy;
                goto recurse;
            }
        } else {
            if (loguy < hi) {
                lostk[stkptr] = loguy;
                histk[stkptr] = hi;
                ++stkptr;
            }
            if (lo < higuy) {
                hi = higuy;
                goto recurse;
            }
        }
    }
    --stkptr;
    if (stkptr >= 0) {
        lo = lostk[stkptr];
        hi = histk[stkptr];
        goto recurse;
    }
}

#pragma optimize("", on)

void func_001E87E0(void) {
}

#pragma optimize("g", on)
void func_001E87E1(void)
{
    int func_001EB786(...);
    int cropzeros_x(...);
    int fassign_x(...);
    int forcdecpt_x(...);
    int positive_x(...);
    extern int D_002AEA14;
    extern int D_002AEA18;
    extern int D_002AEA1C;
    extern int D_002AEA20;
    extern int D_002AEA24;
    extern int D_002AEA28;
    D_002AEA14 = (int)func_001EB786;
    D_002AEA18 = (int)cropzeros_x;
    D_002AEA1C = (int)fassign_x;
    D_002AEA20 = (int)forcdecpt_x;
    D_002AEA24 = (int)positive_x;
    D_002AEA28 = (int)func_001EB786;
}
#pragma optimize("g", on)

void func_001E8819(void)
{
  int func_001E87E1(...);
  int func_001EB7D7(...);
  func_001E87E1();
  func_001EB7D7();
  return;
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
