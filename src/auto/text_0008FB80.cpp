/* 1 function from 0x0008FB80 to 0x0008FCB0, found by Ghidra. */
#include "common.h"

extern float D_00275544;
extern char D_00276F28[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_000843E0 {
    void func_000843E0(int a);
};

struct C_000831E0 {
    void func_000831E0(void);
};

struct C_0008FB80 {
    char pad0[0x50];
    int f50;
    int f54;
    char pad58[4];
    int f5C;
    int f60;
    char pad64[4];
    char s68[0xCC - 0x68];
    int fCC;
    float fD0;
    int fD4;
    int fD8;
    char padDC[0x128 - 0xDC];
    int f128;
    char pad12C[0x138 - 0x12C];
    float f138;
    char pad13C[0x150 - 0x13C];
    int f150;
    char pad154[0x15C - 0x154];
    int f15C;
    char pad160[0x198 - 0x160];
    int f198;
    char pad19C[0xC5C - 0x19C];
    int fC5C;
    char padC60[4];
    char fC64;
    char padC65[0xCA0 - 0xC65];
    int fCA0;
    char sCA4[0x32];
    char sCD6[0x32];
    void func_0008FB80(char *name, int a, float b, int c, int d);
};

void C_0008FB80::func_0008FB80(char *name, int a, float b, int c, int d)
{
    char ch;
    char *src;
    char *dst;

    f60 = f5C;
    f5C = d;
    if (f50 == 1) {
        f50 = 0;
        ((C_000843E0 *)this)->func_000843E0(0);
        fC5C = 0;
        fC64 = 0;
        fCA0 = 0;
        ((C_000831E0 *)this)->func_000831E0();
    }
    if (fD4 == 0) {
        func_001ADCC0(sCA4, 0x32, D_00276F28, name);
        fD4++;
    } else {
        func_001ADCC0(sCD6, 0x32, D_00276F28, sCA4);
        func_001ADCC0(sCA4, 0x32, D_00276F28, name);
        fD4 = 2;
    }
    src = name;
    dst = s68;
    do {
        ch = *src;
        *dst = ch;
        src++;
        dst++;
    } while (ch != 0);
    fD8++;
    fD0 = (float)a;
    f138 = b + f138;
    if (b > D_00275544) {
        f15C = 2;
    }
    f54 = 1;
    fCC = 1;
    f150 = 1;
    f128 = 1;
    f198 = 0;
}
