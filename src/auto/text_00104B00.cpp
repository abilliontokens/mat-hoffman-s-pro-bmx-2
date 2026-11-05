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

struct S_00104B00_Cam {
    void func_0001EDD0(float a0);
};

struct S_00104B00_Pos {
    char pad0[0x64];
    float f64;
    float f68;
};

struct S_00104B00_Obj {
    int func_000831C0(void);
    void func_001BB4D0(int a0);
};

struct S_00104B00_Plr {
    char pad0[0x568];
    int f568;
    S_00104B00_Obj **f56c;
};

struct S_00104B00_Mgr {
    char pad0[0x64];
    S_00104B00_Plr *f64;
    char pad68[0x170 - 0x68];
    S_00104B00_Obj *f170[1];
};

struct S_00104B00_Global {
    char pad0[0x2a4];
    S_00104B00_Mgr *f2a4;
};

extern S_00104B00_Global *D_002A8490;

struct C_00104B00 {
    char pad0[0x24];
    S_00104B00_Owner *f24;
    char pad28[0x208 - 0x28];
    S_00104B00_Pos *f208;
    char pad20c[0x480 - 0x20c];
    int f480;
    char pad484[0x528 - 0x484];
    float f528;
    char pad52c[0x5ec - 0x52c];
    S_00104B00_Cam *f5ec;
    S_00104B00_Cam *f5f0;
    char pad5f4[0x79c - 0x5f4];
    float f79c;
    float f7a0;
    float f7a4;
    float f7a8;
    float f7ac;
    float f7b0;
    float f7b4;
    float f7b8;
    float f7bc;
    float f7c0;
    float f7c4;
    float f7c8;
    int f7cc;
    char pad7d0[0x7f4 - 0x7d0];
    V4_00104B00 f7f4;
    V4_00104B00 f804;
    V4_00104B00 f814;
    char pad824[0x8a0 - 0x824];
    float f8a0;
    char pad8a4[0xa00 - 0x8a4];
    S_00104B00_Fx *fa00;
    S_00104B00_Fx *fa04;
    char pada08[0xa28 - 0xa08];
    int fa28;
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
    int func_001056E0(void);
    void func_001057A0(void);
    void func_00105800(void);
    void func_00105890(void);
    void func_00105A40(void);
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

int C_00104B00::func_001056E0(void)
{
    if (fa00 != 0) {
        fa00->func_001648E0(f1664, 1.0f, 0, 0, 0);
        fa00->func_00164820(f1664);
    }
    if (fa04 != 0) {
        fa04->func_001648E0(f1800, 1.0f, 0, 0, 0);
        fa04->func_00164820(f1800);
    }
    f11f4 = 0;
    f15e4 = 0;
    f1608 = 0;
    f160c = 0;
    f1610 = 0;
    f1600 = 0;
    f15ec = 0;
    f1110 = 0;
    f15d8 = 1;
    f15dc = 1;
    f15f4 = 1.0f;
    f15f0 = 1.0f;
    return 1;
}

void C_00104B00::func_001057A0(void)
{
    f5ec->func_0001EDD0(f79c);
    f5f0->func_0001EDD0(f7a0);
    f208->f64 = f7a4;
    f208->f68 = f7a8;
    f8a0 = f7ac;
    f528 = f7b0;
}

void C_00104B00::func_00105800(void)
{
    f5ec->func_0001EDD0(f7b4 + f79c);
    f5f0->func_0001EDD0(f7b8 + f7a0);
    f208->f64 = f7bc + f7a4;
    f208->f68 = f7c0 + f7a8;
    f8a0 = f7c4 + f7ac;
    f528 = f7c8 + f7b0;
}

void C_00104B00::func_00105890(void)
{
    S_00104B00_Obj *o = D_002A8490->f2a4->f170[fa2c];
    if (o != 0) {
        int r = o->func_000831C0();
        if (f7cc == 0 && r != 0) {
            f7cc = 1;
            func_00105800();
        } else if (f7cc != 0 && r == 0) {
            f7cc = 0;
            func_001057A0();
        }
    }
}

void C_00104B00::func_00105A40(void)
{
    int i;

    if (D_002A8490->f2a4 != 0) {
        for (i = 0; i < D_002A8490->f2a4->f64->f568; i++) {
            S_00104B00_Obj *o = D_002A8490->f2a4->f64->f56c[i];
            if (o != 0) {
                o->func_001BB4D0(fa28);
            }
        }
    }
}

