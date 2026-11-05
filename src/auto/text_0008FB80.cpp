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
