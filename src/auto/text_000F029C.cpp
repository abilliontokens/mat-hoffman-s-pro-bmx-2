/* 8 functions from 0x000F029C to 0x000F0DC0, found by Ghidra. */
#include "common.h"

extern int D_002823DC;
extern int D_0028F5DC;

struct C_000F0A00_Widget {
    void func_001B1980();
    void func_001B2270(unsigned int color);
    void func_001B19A0(int v);
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6, float a7, int a8, float a9, int a10, float a11, float a12, int a13);
};

struct C_000F0A00 {
    char pad0[0x3C4];
    int f3C4;
    char pad3C8[0x270];
    C_000F0A00_Widget *f638[9];
    int f65C;
    void func_000F0A00();
};

struct DelObjC_000F0 {
    virtual void Destroy(int a0);
};

/* BmxUIPageOtherVideos */
struct C_000F0D20 {
    void *vtbl;
    char pad4[0x280 - 4];
    int f280, f284, f288, f28C, f290, f294, f298, f29C, f2A0, f2A4, f2A8, f2AC;
    char pad2B0[8];
    char f2B8;
    char pad2B9[0x3BC - 0x2B9];
    int f3BC, f3C0, f3C4, f3C8, f3CC, f3D0, f3D4;
    int arr3D8[4];
    void func_001BE360(int a);
    C_000F0D20 *func_000F0C40(int a);
    DelObjC_000F0 *arr3E8[4];
    DelObjC_000F0 *arr3F8[2];
    DelObjC_000F0 *arr400[4];
    DelObjC_000F0 *arr410[4];
    void func_001BE3F0(void);
    void func_000F0D20(void);
};

void C_000F0D20::func_000F0D20(void)
{
    int i;
    vtbl = &D_002823DC;
    for (i = 0; i < 2; i++) {
        if (arr3F8[i] != 0) {
            arr3F8[i]->Destroy(1);
            arr3F8[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (arr3E8[i] != 0) {
            arr3E8[i]->Destroy(1);
            arr3E8[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if (arr400[i] != 0) {
            arr400[i]->Destroy(1);
            arr400[i] = 0;
        }
        if (arr410[i] != 0) {
            arr410[i]->Destroy(1);
            arr410[i] = 0;
        }
    }
    func_001BE3F0();
}
