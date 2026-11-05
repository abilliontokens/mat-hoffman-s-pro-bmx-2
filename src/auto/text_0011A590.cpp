/* 11 functions from 0x0011A590 to 0x0011B240, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern int D_00283D5C;

void func_001E891B(void *p);

struct C_0011AB60 {
    void *vtbl;
    void func_00157660();
    void *func_0011AB60(int flags);
};

struct C_0011AB90Arg {
    char pad0[0x22c];
    int f22c;
};

struct C_0011AB90 {
    char pad0[0x24];
    C_0011AB90Arg *f24;
    int f28;
    void func_0011A4B0();
    void func_001D3F50();
    void func_0011AB90(C_0011AB90Arg *arg);
};

void func_0011AC30(float *out, float *in);
void func_0011ACC0(void *a, void *b, float *m);
