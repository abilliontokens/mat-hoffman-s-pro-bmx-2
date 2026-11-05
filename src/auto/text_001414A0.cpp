/* 12 functions from 0x001414A0 to 0x00142180, found by Ghidra. */
#include "common.h"

extern "C" int strcmp(const char *a, const char *b);

struct C_00168BE0 {
    void func_00168BE0(const char *key, const char *def, char *buf, int size);
};

struct DXParticleSimulation {
    char pad0[0x58];
    float f58;
    char pad5c[0x4c];
    int fA8;
    int func_00142150(float dt);
};
