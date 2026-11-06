/* 1 function from 0x00113F00 to 0x001160C0, found by Ghidra. */
#include "common.h"

struct C_00113F00_Fx {
    void func_00164770();
};
struct C_00113F00_GMgr {
    char pad0[0x1c4];
    int f1c4;
    int f1c8;
};
struct C_00113F00_Global {
    char pad0[0x2a4];
    C_00113F00_GMgr *f2a4;
};
extern C_00113F00_Global *D_002A8490;
extern int D_002B9208;
extern float D_002A3AA8;
struct C_00113F00 {
    void func_00113F00(float dt);
};
