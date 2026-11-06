/* 4 functions from 0x001EA23F to 0x001EA3CB, found by Ghidra. */
#include "common.h"
extern int D_002AE65C;
extern double D_002AED60, D_002766B8, D_002766A8;
int func_001F3AFB(int, int);
int func_001F39D3(double);
double func_001F38A3(int, double, int);
double func_001EAF91(double, double);
double func_001F38F6(int, int, double, double, int);
double func_001F3996(double);

extern int D_002AEA38;
extern unsigned short *D_002AEA30;
int func_001EC5F1(int, int);

extern int D_002AEA38;
extern unsigned short *D_002AEA30;
int func_001EC5F1(int, int);

#pragma optimize("t", off)
int func_001EA23F(int c)
{
    if (D_002AEA38 > 1) {
        return func_001EC5F1(c, 2);
    }
    return *(unsigned char *)&D_002AEA30[c] & 2;
}
#pragma optimize("", on)

#pragma optimize("t", off)
int func_001EA268(int c)
{
    if (D_002AEA38 > 1) {
        return func_001EC5F1(c, 4);
    }
    return *(unsigned char *)&D_002AEA30[c] & 4;
}
#pragma optimize("", on)

#pragma optimize("t", off)
int func_001EA291(int c)
{
    if (D_002AEA38 > 1) {
        return func_001EC5F1(c, 8);
    }
    return D_002AEA30[c] & 8;
}

double func_001EA2BA(double x, double *ip)
{
    extern int D_002AE65C;
    extern double D_002AED60;
    extern double D_002766A8;
    extern u8 D_0000FFFF[];
    u32 func_001F3AFB(u32, u32);
    int func_001F39D3(...);
    double func_001F38A3(int, double, u32);
    double func_001F38F6(int, int, double, double, u32);
    double func_001F3996(double);
    double func_001EAF91(double, double);
    u32 cw;
    double r;
    double result;

    cw = func_001F3AFB(0, 0);
    func_001F3AFB(D_002AE65C, (u32)D_0000FFFF);
    if ((((unsigned short *)&x)[3] & 0x7ff0) == 0x7ff0) {
        *ip = D_002AED60;
        switch (func_001F39D3(x)) {
        case 1:
        case 2:
            *ip = x;
            x = func_001EAF91(0.0, x);
            func_001F3AFB(cw, (u32)D_0000FFFF);
            return x;
        case 3:
            *ip = x;
            return func_001F38A3(0x1c, x, cw);
        }
        r = x + 1.0;
        *ip = r;
        return func_001F38F6(8, 0x1c, x, r, cw);
    }
    r = func_001F3996(x);
    *ip = r;
    result = x - r;
    if (result == D_002766A8) {
        ((unsigned short *)&result)[3] |= ((unsigned short *)&x)[3] & 0x8000;
    }
    func_001F3AFB(cw, (u32)D_0000FFFF);
    return result;
}

#pragma optimize("", on)

