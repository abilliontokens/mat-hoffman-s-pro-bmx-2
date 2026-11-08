/* 5 functions from 0x001E8D58 to 0x001E8F6D, found by Ghidra. */
#include "common.h"

void func_001E8D58(void)
{
}

void __fastcall func_001ECA71(int a, void *b);
void __fastcall func_001E8D77(int a, int b)
{
    func_001ECA71(a, (void *)&b);
}

extern "C" double __cdecl log(double);
extern "C" double __cdecl exp(double);
double __cdecl func_001E8D80(double x, double y)
{
    if (y == 0.0) return 1.0;
    if (x == 0.0) return 0.0;
    return exp(y * log(x));
}

extern double D_002AE590;
unsigned char func_001E8F45(double x) {
    unsigned char n = 0;
    if (x == (double)(__int64)x) {
        x *= D_002AE590;
        n++;
        if (x == (double)(__int64)x)
            n++;
    }
    return n;
}

