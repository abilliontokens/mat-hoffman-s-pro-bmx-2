/* 1 function from 0x0003E660 to 0x0003EB20, found by Ghidra. */
#include "common.h"
struct S_0003E660_Vec4 { float x, y, z, w; };
struct S_0003E660_Block { char pad[0x358]; int w; int h; int d; };
struct S_0003E660_Obj {
    char pad[0x28];
    int f28;
    void func_00197E70(S_0003E660_Vec4 *a);
    void func_00197B40(S_0003E660_Vec4 *b, S_0003E660_Vec4 *c);
};
struct S_0003E660_Slot { int type; int pad4; S_0003E660_Obj *obj; };
struct C_0003E660 {
    char pad0[0x440];
    float f440;
    char pad444[0x45C - 0x444];
    int f45C;
    int f460;
    char pad464[0x49C - 0x464];
    int *f49C;
    char pad4A0[0x564 - 0x4A0];
    S_0003E660_Slot *f564;
    int func_00038A70(void *param_1, void **param_2);
    int func_00038B10(void *obj, S_0003E660_Vec4 va, S_0003E660_Vec4 vb, int *ox, int *oy, int *oz, int flag);
    int func_0003E410();
    int func_0003E660();
};
extern float D_00276E9C;
extern float D_00276E98;
extern float D_00275548;
