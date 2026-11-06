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
extern float D_00275544, D_00275460, D_002755EC, D_00275F58, D_002756B8, D_002755E8;
void __stdcall func_00107070(float dt);
struct C_00113F00 {
    void func_00113F00(float dt);
};

void C_00113F00::func_00113F00(float dt)
{
    char *self = (char *)this;
    float v = *(float *)(self + 0x9f8);
    int i125c = 0, i1260 = 0, i1268 = 0, i127c = 0;
    int s14 = 0, s18 = 0, s20 = 0, s2c = 0, s30 = 0, s34 = 0;
    (void)dt; (void)i125c; (void)i1260; (void)i1268; (void)i127c;
    (void)s14; (void)s18; (void)s20; (void)s2c; (void)s30; (void)s34;
    if (v > 0.9f) {
        v = 0.9f;
    } else if (v < -0.9f) {
        v = -0.9f;
    }
    *(int *)(self + 0x2094) = 0;
    *(int *)(self + 0x2098) = 0;
    if (D_002A8490->f2a4->f1c8 != 0) {
        i125c = *(int *)(self + 0x125c);
        i1260 = *(int *)(self + 0x1260);
        s2c = *(int *)(self + 0x1264);
        i1268 = *(int *)(self + 0x1268);
        i127c = *(int *)(self + 0x127c);
        s14 = *(int *)(self + 0x1280);
        s34 = *(int *)(self + 0x1284);
        s30 = *(int *)(self + 0x1288);
        *(int *)(self + 0x15f4) = *(int *)(self + 0x1290);
        *(int *)(self + 0x15e4) = *(int *)(self + 0x1298);
        *(int *)(self + 0x15e8) = *(int *)(self + 0x129c);
        s20 = *(int *)(self + 0x128c);
        s18 = *(unsigned char *)(self + 0x12a8) & 1;
        *(int *)(self + 0x1614) = *(int *)(self + 0x12a0);
        *(int *)(self + 0x1618) = *(int *)(self + 0x12a4);
    }
}
