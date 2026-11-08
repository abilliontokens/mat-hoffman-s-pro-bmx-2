/* 11 functions from 0x001ECA2C to 0x001ECD6B, found by Ghidra. */
#include "common.h"

int func_001EAFB2(double x);
double func_001F3996(double x);

#pragma optimize("sy", on)
double func_001ECA2C(double x)
{
    return x;
}

void func_001ECA41(unsigned int mask)
{
    unsigned short cw = (unsigned short)((mask & 0x300) | 0x7f);
    (void)cw;
}

int __fastcall func_001ECA58(unsigned int flags)
{
    extern double D_0029545C;
    if (flags & 0x80000) {
        return 7;
    }
    return 1;
}

extern "C" double func_001ECA71(double *p)
{
    return *p;
}

unsigned int func_001ECAB4(unsigned int lo, unsigned int hi)
{
    unsigned int e = hi & 0x7ff00000;
    if (e == 0x7ff00000) {
        return hi;
    }
    return e;
}

void func_001ECACA(void)
{
  return;
}

void func_001ECAD7(void)
{
}

unsigned int func_001ECB01(unsigned int lo, unsigned int hi)
{
    return hi & 0x7ff00000;
}

int func_001ECBB8(double x)
{
    double half;
    if ((func_001EAFB2(x) & 0x90) == 0) {
        if (func_001F3996(x) == x) {
            half = x * 0.5;
            if (func_001F3996(half) == half) {
                return 2;
            }
            return 1;
        }
    }
    return 0;
}

extern double D_002766A8;
extern double D_002766B8;
extern double D_002AED60;
extern double D_002AED58;
extern double D_002AED78;
int func_001ECC19(double x, double y, double *out)
{
    int res = 0;
    double a;
    int n;
    unsigned int *py = (unsigned int *)&y;
    unsigned int *px = (unsigned int *)&x;
    if (x < D_002766A8)
        a = -x;
    else
        a = x;
    if (py[1] == 0x7ff00000 && py[0] == 0) {
        if (a > D_002766B8) {
            *out = D_002AED58;
        } else if (a < D_002766B8) {
            *out = 0.0;
        } else {
            *out = D_002AED60;
            res = 1;
        }
    } else if (py[1] == 0xfff00000 && py[0] == 0) {
        if (a > D_002766B8) {
            *out = 0.0;
        } else if (a < D_002766B8) {
            *out = D_002AED58;
        } else {
            *out = D_002AED60;
            res = 1;
        }
    } else if (px[1] == 0x7ff00000 && px[0] == 0) {
        if (y > D_002766A8) {
            *out = D_002AED58;
        } else if (y < D_002766A8) {
            *out = 0.0;
        } else {
            *out = 1.0;
        }
    } else if (px[1] == 0xfff00000 && px[0] == 0) {
        n = func_001ECBB8(y);
        if (y > D_002766A8) {
            *out = (n == 1) ? -D_002AED58 : D_002AED58;
        } else if (y < D_002766A8) {
            *out = (n == 1) ? D_002AED78 : 0.0;
        } else {
            *out = 1.0;
        }
    }
    return res;
}

