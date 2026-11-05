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

int func_001416E0(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DSHADE_FLAT") == 0) {
        out = 0x1d00;
    } else if (strcmp(buf, "D3DSHADE_GOURAUD") == 0) {
        out = 0x1d01;
    }
    return out;
}

int func_00141A00(C_00168BE0 *cfg, const char *key, int def, int &out)
{
    char buf[64];
    cfg->func_00168BE0(key, "undefined", buf, 64);
    if (strcmp(buf, "undefined") == 0) {
        out = def;
    } else if (strcmp(buf, "D3DPATCHEDGE_DISCRETE") == 0) {
        out = 0;
    } else if (strcmp(buf, "D3DPATCHEDGE_CONTINUOUS") == 0) {
        out = 1;
    }
    return out;
}

int DXParticleSimulation::func_00142150(float dt)
{
    extern float D_00276278;

    if (fA8 != 0) {
        f58 = dt * D_00276278 + f58;
    }
    return 1;
}
