/* 3 functions from 0x000CDEB0 to 0x000CEA00, found by Ghidra. */
#include "common.h"

struct LookupObj_CDE {
    int *func_0018C160(int a);
};

struct GObjRoot_CDE {
    char pad0[0x2ec];
    LookupObj_CDE *p2EC;
};

extern GObjRoot_CDE *D_002A8490;

extern float D_00275AEC;
extern int D_00278690;
extern int D_002786A0;
extern int D_00278678;

struct ClampObj_CDE {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_CDE {
    ClampObj_CDE *func_0018C070();
};

struct SubElem_CDE {
    ClampObj_CDE *func_001D5AA0();
};

/* BmxUIPageRider */
struct C_000CDEB0 {
    char pad0[0x390];
    SubElem_CDE *a390[8];
    SubElem_CDE *a3b0[8];
    char pad3d0[0x3f8 - 0x3d0];
    SubElem_CDE *a3f8[2];
    SubElem_CDE *a400[16];
    void func_000CDEB0(void);
    void func_001578D0(void);
};

struct C_000CE0A0 {
    char pad0[0x4C4];
    int unk4C4;
    int unk4C8;
    int unk4CC;
    int unk4D0;
    int unk4D4;
    void func_000CE0A0(void);
};


void C_000CE0A0::func_000CE0A0(void) {
    unk4C4 = 255;
    unk4C8 = 0;
    unk4CC = 0;
    unk4D0 = 0;
    unk4D4 = 1048576000;
}
