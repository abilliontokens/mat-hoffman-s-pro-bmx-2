/* 15 functions from 0x00104B00 to 0x00105AA0, found by Ghidra. */
#include "common.h"

struct V4_00104B00 {
    float x, y, z, w;
};

struct S_00104B00_Tbl {
    char pad0[0x24];
    V4_00104B00 a24[8];
    V4_00104B00 aA4[8];
};

struct S_00104B00_Weights {
    char pad0[0x77e8];
    float f77e8[88];
    float f7948[88];
};

struct S_00104B00_Owner {
    char pad0[0x4dc];
    S_00104B00_Tbl *f4dc;
    char pad4e0[0x52c - 0x4e0];
    S_00104B00_Weights *f52c;
};

struct S_00104B00_Fx {
    void func_001648E0(int a0, float a1, int a2, int a3, int a4);
    void func_00164820(int a0);
};

struct C_00104B00 {
    char pad0[0x24];
    S_00104B00_Owner *f24;
    char pad28[0x480 - 0x28];
    int f480;
    char pad484[0x7f4 - 0x484];
    V4_00104B00 f7f4;
    V4_00104B00 f804;
    V4_00104B00 f814;
    char pad824[0xa00 - 0x824];
    S_00104B00_Fx *fa00;
    S_00104B00_Fx *fa04;
    char pada08[0xa2c - 0xa08];
    int fa2c;
    char pada30[0x1110 - 0xa30];
    int f1110;
    char pad1114[0x11f4 - 0x1114];
    int f11f4;
    char pad11f8[0x15d8 - 0x11f8];
    int f15d8;
    int f15dc;
    char pad15e0[4];
    int f15e4;
    char pad15e8[4];
    int f15ec;
    float f15f0;
    float f15f4;
    char pad15f8[0x1600 - 0x15f8];
    int f1600;
    char pad1604[4];
    int f1608;
    int f160c;
    int f1610;
    char pad1614[0x1664 - 0x1614];
    int f1664;
    char pad1668[0x1800 - 0x1668];
    int f1800;
    float func_00104BB0(int i);
    void func_00104BE0(void);
    void func_001056E0(void);
};

extern V4_00104B00 D_002A3A5C;

V4_00104B00 func_00104B00(V4_00104B00 *a, V4_00104B00 *b)
{
    V4_00104B00 r;

    r.x = a->x * b->x - b->y * a->y - b->z * a->z - b->w * a->w;
    r.y = a->y * b->x + b->w * a->z + b->y * a->x - b->z * a->w;
    r.z = a->z * b->x + b->y * a->w + b->z * a->x - b->w * a->y;
    r.w = a->w * b->x + b->z * a->y + b->w * a->x - b->y * a->z;
    return r;
}

float C_00104B00::func_00104BB0(int i)
{
    if (f480 == 0) {
        return f24->f52c->f7948[i];
    }
    return f24->f52c->f77e8[i];
}

void C_00104B00::func_00104BE0(void)
{
    if (f24 != 0) {
        f7f4 = f24->f4dc->a24[fa2c];
        f804 = f24->f4dc->aA4[fa2c];
        f814 = D_002A3A5C;
    }
}

