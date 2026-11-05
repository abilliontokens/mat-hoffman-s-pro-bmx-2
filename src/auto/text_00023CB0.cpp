/* 4 functions from 0x00023CB0 to 0x00024380, found by Ghidra. */
#include "common.h"

struct C_000229C0 {
    char pad0[0x70];
    int *f70;
    void func_000229C0(int a0);
};

void *func_001E8A44(int size);
extern int D_00276294;

struct C_00157600 {
    void func_00157600(int a);
};

/* the 0x1e0-byte object stored at +0x2c */
struct C_00143580 {
    C_00143580 *func_00143580(int a);
};

/* AmbientDebrisType */
struct C_00023C30 {
    C_00023C30 *func_00023C30(int a, int b, int c, int d);
};

/* the 0x30-byte record tying the other two together */
struct S_00024140_Link {
    C_00023C30 *f0;
    C_00143580 *f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
};

struct AmbientDebris {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_00143580 *f2c;
    C_00023C30 *f30;
    S_00024140_Link *f34;
    AmbientDebris *func_00024140(int a, int b);
};

extern C_000229C0 *D_002B7E18;

void func_00024360(int a0) {
    D_002B7E18->func_000229C0(a0);
}
