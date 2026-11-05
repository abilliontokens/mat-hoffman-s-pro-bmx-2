/* 4 functions from 0x00106810 to 0x00107380, found by Ghidra. */
#include "common.h"
int func_001E8833(void);
extern float D_00278C58;

struct S_106E30_Fx {
    void func_001B3E70(void *a, void *b, float c, float d, float e);
    void func_001B4970(void);
};
struct S_106E30_Cfg {
    char pad0[0x1ac];
    int f1ac;
    char pad1b0[4];
    int f1b4;
    int f1b8;
    int f1bc;
    char v1c0[0x10];
    char v1d0[0x10];
    char v1e0[0x10];
    char v1f0[0x10];
    char v200[0x10];
    char v210[0x10];
};
struct C_00106E30 {
    char pad0[0x950];
    S_106E30_Cfg *f950;
    char pad954[0x1238 - 0x954];
    S_106E30_Fx *f1238;
    S_106E30_Fx *f123c;
    S_106E30_Fx *f1240;
    void func_00106E30(void);
};

void C_00106E30::func_00106E30(void)
{
    if (f950->f1ac != 0) {
        if (f950->f1b4 != 0) {
            float x = (float)func_001E8833() / 32768.0f;
            float y = (float)func_001E8833() / 32768.0f;
            float z = (float)func_001E8833() / 32768.0f * 0.3f;
            f1238->func_001B3E70(f950->v1c0, f950->v1f0, z + 0.1f, y + 0.5f, x * x);
        } else {
            f1238->func_001B4970();
        }
        if (f950->f1b8 != 0) {
            float x = (float)func_001E8833() / 32768.0f;
            float y = (float)func_001E8833() / 32768.0f;
            float z = (float)func_001E8833() / 32768.0f * 0.3f;
            f123c->func_001B3E70(f950->v1d0, f950->v200, z + 0.1f, y + 0.5f, x * x);
        } else {
            f123c->func_001B4970();
        }
        if (f950->f1bc != 0) {
            float x = (float)func_001E8833() / 32768.0f;
            float y = (float)func_001E8833() / 32768.0f;
            float z = (float)func_001E8833() / 32768.0f * 0.3f;
            f1240->func_001B3E70(f950->v1e0, f950->v210, z + 0.1f, y + 0.5f, x * x);
        } else {
            f1240->func_001B4970();
        }
    } else {
        f1238->func_001B4970();
        f123c->func_001B4970();
        f1240->func_001B4970();
    }
}
