/* 18 functions from 0x00085630 to 0x00086530, found by Ghidra. */
#include "common.h"
struct C_00086150 {
    char pad0[0xC4];
    int unkC4;
    void func_00086150(int a0);
};

struct C_00086140 {
    char pad0[0xF4];
    int unkF4;
    void func_00086140(int a0);
};

struct C_00086130 {
    char pad0[0xF0];
    int unkF0;
    void func_00086130(int a0);
};

struct C_00086190 {
    char pad0[0xC4];
    int unkC4;
    void func_00086190(void);
};

struct C_00086180 {
    char pad0[0xC4];
    int unkC4;
    int func_00086180(void);
};


void C_00086130::func_00086130(int a0) {
    unkF0 = a0;
}

void C_00086140::func_00086140(int a0) {
    unkF4 = a0;
}

void C_00086150::func_00086150(int a0) {
    unkC4 = a0;
}

int C_00086180::func_00086180(void) {
    return unkC4;
}

void C_00086190::func_00086190(void) {
    unkC4 = 0;
}

