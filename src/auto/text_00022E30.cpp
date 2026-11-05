/* 6 functions from 0x00022E30 to 0x00023CB0, found by Ghidra. */
#include "common.h"

extern int D_00276218;
struct S_Vec4i_00023C30 {
    int x, y, z, w;
};
extern S_Vec4i_00023C30 D_002A0F74;

void func_001E891B(void *p);

/* AmbientDebrisType */
struct C_00023BE0 {
    void *vtbl;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    float unk2C;
    int unk30;
    int unk34;
    int unk38;
    float unk3C;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    void *func_00023BE0(int flags);
    C_00023BE0 *func_00023C30(int a, int b, int c, int d);
};

void *C_00023BE0::func_00023BE0(int flags)
{
    vtbl = &D_00276218;
    if (unk18 != 0) {
        func_001E891B((void *)unk18);
        unk18 = 0;
        unk14 = 0;
    }
    if (unkC != 0) {
        func_001E891B((void *)unkC);
        unkC = 0;
        unk8 = 0;
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

struct Vec4_00023C30 {
    int x, y, z;
    float w;
    Vec4_00023C30() {
        x = y = z = 0;
        w = 1.0f;
    }
    void Set(int nx, int ny, int nz, int nw) {
        x = nx;
        y = ny;
        z = nz;
        *(int *)&w = nw;
    }
};

struct C_00023C30 {
    Vec4_00023C30 v0;
    int unk10;
    char pad14[8];
    int unk1C;
    Vec4_00023C30 v20;
    Vec4_00023C30 v30;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    C_00023C30(int a, int b, int c, int d);
};

C_00023C30::C_00023C30(int a, int b, int c, int d)
{
    unk44 = b;
    unk48 = a;
    unk4C = c;
    unk50 = d;
    unk1C = 0;
    *(S_Vec4i_00023C30 *)&v0 = D_002A0F74;
    unk40 = 0;
    unk10 = 1;
}

