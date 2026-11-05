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
    char pad0[0x130];
    float f130;
    float f134;
    float f138;
    void func_0001EB50(S_0002CB00_Vec4 v);
};

struct C_0002CB00 {
    char pad0[0x1e0];
    S_0002CB00_Target *f1e0;
    char pad1e4[0x4f4 - 0x1e4];
    int f4f4;
    int f4f8;
    char pad4fc[0x534 - 0x4fc];
    float f534;
    float f538;
    S_0002CB00_Vec4 f53c;
    S_0002CB00_Vec4 f54c;
    char pad55c[0x56c - 0x55c];
    int f56c;
    float f570;
    float f574;
    float f578;
    char pad57c[4];
    float f580;
    char pad584[4];
    float f588;
    char pad58c[0x698 - 0x58c];
    int f698;
    char pad69c[0x6a8 - 0x69c];
    int f6a8;
    char pad6ac[0x784 - 0x6ac];
    int f784;
    float f788;
    void func_0002C9A0(float dt);
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
