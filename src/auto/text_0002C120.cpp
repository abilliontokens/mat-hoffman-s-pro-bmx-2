/* 3 functions from 0x0002C120 to 0x0002CBC0, found by Ghidra. */
#include "common.h"

extern float D_00275544;

/* a 4-float vector handed by value; built in a temporary like the callers do */
struct S_0002CB00_Vec4 {
    float x, y, z, w;
    S_0002CB00_Vec4(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct S_0002CB00_Target {
    void func_0001EB50(S_0002CB00_Vec4 v);
};

struct C_0002CB00 {
    char pad0[0x1e0];
    S_0002CB00_Target *f1e0;
    char pad1e4[0x56c - 0x1e4];
    int f56c;
    float f570;
    float f574;
    float f578;
    char pad57c[4];
    float f580;
    char pad584[4];
    float f588;
    void func_0002CB00(float dt);
};

void C_0002CB00::func_0002CB00(float dt)
{
    if (f56c != 0) {
        float s = f580;

        f1e0->func_0001EB50(S_0002CB00_Vec4(s * f570, s * f574, s * f578, 1.0f));
        f588 = f588 - dt;
        if (f588 <= D_00275544) {
            f56c = 0;
            f588 = 0;
            f580 = 0;
        }
    }
}
