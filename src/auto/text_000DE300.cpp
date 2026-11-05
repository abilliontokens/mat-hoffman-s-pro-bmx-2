/* 5 functions from 0x000DE300 to 0x000DE730, found by Ghidra. */
#include "common.h"

struct C_000DE_Widget {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_000DE_Elem {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
};

/* BmxUIPageHorseWord */
struct C_000DE300 {
    char pad0[0x2EC];
    C_000DE_Elem *unk2EC;
    char pad2F0[0x314 - 0x2F0];
    short unk314;
    char pad316[0x328 - 0x316];
    C_000DE_Widget *unk328;
    C_000DE_Widget *unk32C;
    void func_001BF000();
    void func_000DE300();
    void func_000DE390();
};

/* anything the page owns and frees through its virtual destructor */
struct S_000DE650_Obj {
    virtual ~S_000DE650_Obj();
};

extern int D_0027F8E4;

/* BmxUIPageMusicPlaylist: six rows of 18 owned objects, then two more groups */
struct C_000DE650 {
    void *vtbl;
    char pad4[0x920];
    S_000DE650_Obj *row0[18];
    S_000DE650_Obj *row1[18];
    S_000DE650_Obj *row2[18];
    S_000DE650_Obj *row3[18];
    S_000DE650_Obj *row4[18];
    S_000DE650_Obj *row5[18];
    S_000DE650_Obj *group4[4];
    S_000DE650_Obj *group2[2];
    void func_001BE3F0();
    void func_000DE650();
};

void C_000DE300::func_000DE300()
{
    unk32C->func_001B1980();
    unk328->func_001B1980();
    unk32C->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
    unk328->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, 0, 0, 1.15f, 0, 0.25f, 0, 0);
}

void C_000DE300::func_000DE390()
{
    C_000DE_Elem *e = unk2EC;
    e->f38 = ((int)unk314 << 24) | (e->f38 & 0xffffff);
    e->b58 |= 2;
    func_001BF000();
}

void C_000DE650::func_000DE650()
{
    int i;

    vtbl = (void *)&D_0027F8E4;
    for (i = 0; i < 18; i++) {
        if (row0[i]) {
            delete row0[i];
            row0[i] = 0;
        }
        if (row1[i]) {
            delete row1[i];
            row1[i] = 0;
        }
        if (row2[i]) {
            delete row2[i];
            row2[i] = 0;
        }
        if (row3[i]) {
            delete row3[i];
            row3[i] = 0;
        }
        if (row4[i]) {
            delete row4[i];
            row4[i] = 0;
        }
        if (row5[i]) {
            delete row5[i];
            row5[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (group4[i]) {
            delete group4[i];
            group4[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (group2[i]) {
            delete group2[i];
            group2[i] = 0;
        }
    }
    func_001BE3F0();
}

