/* 4 functions from 0x000DA390 to 0x000DB310, found by Ghidra. */
#include "common.h"

struct LookupObj_DA {
    int *func_0018C160(int a);
};

struct GObjRoot_DA {
    char pad0[0x2ec];
    LookupObj_DA *p2EC;
};

extern GObjRoot_DA *D_002A8490;

extern float D_00275AEC;
extern int D_002786A0;
extern int D_00278690;
extern int D_00278678;

struct ClampObj_DA {
    char pad0[0x10];
    float f10;
    float f14;
};

struct MidObj_DA {
    ClampObj_DA *func_0018C070();
};

/* BmxUIPageViewVideosTitle */
struct C_000DB0E0 {
    void func_000DB0E0(void);
    void func_001578D0(void);
};
