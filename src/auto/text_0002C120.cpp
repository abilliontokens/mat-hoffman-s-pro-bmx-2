/* 3 functions from 0x0002C120 to 0x0002CBC0, found by Ghidra. */
#include "common.h"

extern float D_00275544;

/* four floats built in a temporary like the callers do */
struct V4_0002C120 {
    float x, y, z, w;
    V4_0002C120() {}
    V4_0002C120(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

struct S_0002C120_Body {
    char pad0[0x28];
    float f28;
    char pad2c[0x20c];
    V4_0002C120 f238;
};

struct S_0002C120_Owner {
    char pad0[0x68];
    int f68;
};

struct S_0002C120_Ground {
    char pad0[0x38];
    float f38;
    float f3c;
};

struct S_0002C120_Normal {
    char pad0[0xd0];
    float vx, vy, vz;
};

struct S_0002C120_Timer {
    float f0;
    char pad4[8];
    int fC;
    float f10;
    void func_0002B180(void);
};

struct C_0002C120 {
    char pad0[0x110];
    float f110;
    char pad114[0xc];
    float f120;
    char pad124[0x1e0 - 0x124];
    S_0002C120_Body *f1e0;
    char pad1e4[4];
    S_0002C120_Owner *f1e8;
    S_0002C120_Ground *f1ec;
    char pad1f0[0x210 - 0x1f0];
    S_0002C120_Normal *f210;
    char pad214[0x444 - 0x214];
    int f444;
    char pad448[0x468 - 0x448];
    int f468;
    int f46c;
    char pad470[0x49c - 0x470];
    float f49c;
    float f4a0;
    float f4a4;
    char pad4a8[0x4f4 - 0x4a8];
    int f4f4;
    char pad4f8[4];
    int f4fc;
    u16 f500;
    char pad502[2];
    float f504;
    float f508;
    float f50c;
    float f510;
    float f514;
    float f518;
    char pad51c[4];
    float f520;
    float f524;
    float f528;
    float f52c;
    float f530;
    char pad534[4];
    float f538;
    V4_0002C120 f53c;
    V4_0002C120 f54c;
    V4_0002C120 f55c;
    char pad56c[0x698 - 0x56c];
    int f698;
    int f69c;
    int f6a0;
    char pad6a4[0x6ac - 0x6a4];
    float f6ac;
    char pad6b0[0x728 - 0x6b0];
    float f728;
    char pad72c[0x778 - 0x72c];
    S_0002C120_Timer f778;
    void func_00028070(void);
    void func_0002C120(int param_1, float param_2);
};

extern float D_002A1184;
extern float D_002A1180;
extern float D_002A117C;
extern float D_00276080;
extern float D_00275460;
extern float D_00275F58;
extern int D_002B9108;
extern int D_002B910C;
extern int D_002B911C;
extern V4_0002C120 D_002A10F0;
extern V4_0002C120 D_002A1100;
extern V4_0002C120 D_002A1110;

float func_0014F870(float x);
V4_0002C120 *func_0001C5E0(V4_0002C120 *out, float s, V4_0002C120 *v);
void func_00026340(V4_0002C120 *in, V4_0002C120 *out);
int func_00026300(float *a, V4_0002C120 *b);

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

void C_0002CB00::func_0002C9A0(float dt)
{
    if (f788 > D_00275544) {
        f788 = f788 - dt;
        if (f788 <= D_00275544) {
            f784 = 0;
        }
    }
    if (f698 != 0) {
        if (f4f4 == 0) {
            S_0002CB00_Vec4 v = f53c;
            f538 = f538 - dt;
            f4f8 = 1;
            float *p = &f1e0->f130;
            p[0] += v.x;
            p[1] += v.y;
            p[2] += v.z;
            f1e0->func_0001EB50(f54c);
            f6a8 = 1;
            if (f538 <= D_00275544) {
                f4f4 = 1;
                f538 = 0;
            }
        } else {
            f538 = dt + f538;
            if (f538 > f534) {
                f4f4 = 0;
                f4f8 = 0;
                f698 = 0;
                f538 = 0;
            }
        }
    }
}

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
