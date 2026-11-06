/* 1 function from 0x000399A0 to 0x0003A990, found by Ghidra. */
#include "common.h"
#include "grid_000392B0.h"

extern float D_002A14D4, D_002A14D8, D_002A14DC, D_002A14E0;
extern float D_00275AEC, D_00275548;
extern int D_00276CA4;

struct S_000399A0_Slot {
    int type;                 /* 0x00 */
    void *f4;                 /* 0x04 */
    S_000392B0_Obj *obj;      /* 0x08 */
    void *f0c;                /* 0x0c */
    void *f10;                /* 0x10 */
};

struct S_000399A0_Obj2 {
    char pad0[0xe8];
    void *fE8;                /* 0xe8 */
    void *fEC;                /* 0xec */
};

struct C_000399A0 {
    char pad0[0x450];
    int f450;
    char pad454[8];
    int f45C, f460, f464, f468;
    char pad46c[0x30];
    S_000392B0_Obj **f49C;
    int f4a0;
    int f4a8;
    float f4ac, f4b0, f4b4;
    char pad4b8[0xac];
    S_000399A0_Slot *f564;
    char pad568[0x3e0];
    float f948;
    int func_00038A70(int *, void **);
    int func_000395A0(S_000392B0_Vec4 pos);
    int func_000399A0(int mode);
};

int C_000399A0::func_000399A0(int mode) {
    return 1;
}
