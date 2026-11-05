/* 11 functions from 0x001ECA2C to 0x001ECD6B, found by Ghidra. */
#include "common.h"

extern const double D_0027F710;
int func_001EAFB2(double x);
double func_001F3996(double x);

#pragma optimize("sy", on)
void func_001ECA2C(void)
{
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

unsigned int func_001ECAB4(unsigned int lo, volatile unsigned int hi)
{
    unsigned int e = hi & 0x7ff00000;
    if (e == 0x7ff00000) {
        return hi;
    }
    return e;
}

void func_001ECACA(unsigned short cw)
{
    if (cw != 0x27f) {
    }
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

