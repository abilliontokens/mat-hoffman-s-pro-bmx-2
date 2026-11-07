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
extern float D_00276E9C, D_00276E98;
extern float D_00275544, D_00275460, D_002755EC, D_00275F58, D_002756B8, D_002755E8;
void __stdcall func_00107070(float dt);
float __cdecl func_00016D20(float a);
float __cdecl func_0014F550(float a);
struct C_00113F00 {
    void func_00113F00(float dt);
};

void C_00113F00::func_00113F00(float dt)
{
    char *self = (char *)this;
    volatile int i125c = 0, i1260 = 0, i1268 = 0, i127c = 0;
    volatile int s14 = 0, s18 = 0, s20 = 0, s28 = 0, s2c = 0, s30 = 0, s34 = 0;
    volatile float s38 = 0.0f;
    float v = *(float *)(self + 0x9f8);
    int one;
    char *q;
    int mag;
    float step;

    if (v > 0.9f) {
        v = 0.9f;
    } else if (v < -0.9f) {
        v = -0.9f;
    }
    *(int *)(self + 0x2094) = 0;
    *(int *)(self + 0x2098) = 0;
    if (D_002A8490->f2a4->f1c8 != 0) {
        s2c = *(int *)(self + 0x1264);
        i125c = *(int *)(self + 0x125c);
        i1260 = *(int *)(self + 0x1260);
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
        if (D_002A8490->f2a4->f1c4 != 0) {
            D_002B9208 = (*(int *)((char *)D_002A8490->f2a4->f1c4 + 0xe8) != 0);
        }
        if (self[0x12a9] & 1) {
            *(int *)(self + 0x15f4) = *(int *)(self + 0x1294);
            if (self[0x12a9] & 2) {
                if (*(float *)(self + 0x15f4) > D_002A3AA8) {
                    D_002A3AA8 = *(float *)(self + 0x15f4);
                } else {
                    D_002A3AA8 = *(float *)(self + 0x15f4);
                    *(float *)(self + 0x15f4) = 1.0f;
                }
            }
        }
        if (self[0x12a8] < 0) {
            *(int *)(self + 0x15ec) = 0;
        } else if (*(int *)(self + 0x126c) != 0 &&
                   *(int *)(self + 0x126c) != *(int *)(self + 0x125c) &&
                   D_002B9208 == 0) {
            ((C_00113F00_Fx *)*(int *)(self + 0xa00))->func_00164770();
            ((C_00113F00_Fx *)*(int *)(self + 0xa04))->func_00164770();
            *(float *)(self + 0x15ec) = 1.0f;
        }
        *(int *)(self + 0x126c) = *(int *)(self + 0x125c);
        goto Lend;
    }
    self[0x12a9] &= 0xfe;
    self[0x12a9] &= 0xfd;
    switch (*(int *)(self + 0x15d8)) {
    case 0:
        func_00107070(dt);
        s2c = *(int *)(self + 0x16b8);
        s34 = *(int *)(self + 0x1854);
        i125c = *(int *)(self + 0x1658);
        i127c = *(int *)(self + 0x17f4);
        if (v >= D_00275544) {
            s28 = *(int *)(self + 0x16bc);
            s14 = *(int *)(self + 0x17f8);
            i1260 = *(int *)(self + 0x165c);
            s30 = *(int *)(self + 0x1858);
            *(float *)(self + 0x15e8) = D_00275460 - v;
        } else {
            s28 = *(int *)(self + 0x16c0);
            s14 = *(int *)(self + 0x17fc);
            i1260 = *(int *)(self + 0x1660);
            s30 = *(int *)(self + 0x185c);
            *(float *)(self + 0x15e8) = v + D_00275460;
        }
        *(int *)(self + 0x15f4) = *(int *)(self + 0x163c);
        *(float *)(self + 0x15e4) = D_00275460 - *(float *)(self + 0x1644);
        goto Lcommon;
    case 1:
        i125c = *(int *)(self + 0x1658);
        i127c = *(int *)(self + 0x17f4);
        *(float *)(self + 0x15f4) = *(float *)(self + 0x15f4) - dt;
        while (*(float *)(self + 0x15f4) < D_00275544) {
            *(float *)(self + 0x15f4) = *(float *)(self + 0x15f4) + D_00275460;
        }
        *(int *)(self + 0x2084) = 1;
        *(int *)(self + 0x2088) = 0;
        self[0x12a9] |= 1;
        self[0x12a9] |= 2;
        goto Lend;
    case 2:
        i125c = *(int *)(self + 0x169c);
        i127c = *(int *)(self + 0x1838);
        *(float *)(self + 0x15f4) = D_00275460 / *(float *)(i125c + 0x38) * dt + *(float *)(self + 0x15f4);
        goto Lcommon;
    case 3:
        i125c = *(int *)(self + 0x16d0);
        i127c = *(int *)(self + 0x186c);
        *(float *)(self + 0x15f4) = D_00275460 / *(float *)(i125c + 0x38) * dt + *(float *)(self + 0x15f4);
        *(int *)(self + 0x2084) = 1;
        *(int *)(self + 0x2088) = 0;
        goto Lend;
    case 4:
        i125c = *(int *)(self + 0x16a0);
        i127c = *(int *)(self + 0x183c);
        *(float *)(self + 0x15f4) = D_00275460 / *(float *)(i125c + 0x38) * dt + *(float *)(self + 0x15f4);
        *(int *)(self + 0x2084) = 1;
        *(int *)(self + 0x2088) = 0;
        goto Lend;
    case 5:
        i125c = *(int *)(self + 0x16a4);
        i127c = *(int *)(self + 0x1840);
        *(float *)(self + 0x15f4) = D_00275460 / *(float *)(i125c + 0x38) * dt + *(float *)(self + 0x15f4);
        *(int *)(self + 0x2084) = 1;
        *(int *)(self + 0x2088) = 0;
        goto Lend;
    case 6:
        i125c = *(int *)(self + 0x16a8);
        i127c = *(int *)(self + 0x1844);
        *(float *)(self + 0x15f4) = D_00275460 / *(float *)(i125c + 0x38) * dt + *(float *)(self + 0x15f4);
        *(int *)(self + 0x2084) = 1;
        *(int *)(self + 0x2088) = 0;
        goto Lend;
    case 7:
        i125c = *(int *)(self + 0x16ac);
        i127c = *(int *)(self + 0x1848);
        if (v >= D_00275544) {
            s14 = *(int *)(self + 0x1850);
            i1260 = *(int *)(self + 0x16b4);
            *(float *)(self + 0x15e8) = D_00275460 - v;
        } else {
            s14 = *(int *)(self + 0x184c);
            i1260 = *(int *)(self + 0x16b0);
            *(float *)(self + 0x15e8) = v + D_00275460;
        }
        *(float *)(self + 0x15f4) = D_00275460 / *(float *)(*(int *)(self + 0x16ac) + 0x38) * dt +
                                    *(float *)(self + 0x15f4);
        *(int *)(self + 0x2084) = 1;
        *(int *)(self + 0x2088) = 0;
        goto Lend;
    }
    goto Lend;
Lcommon:
    q = *(char **)(self + 0x208);
    if (*(int *)(q + 0xdc) != 0) {
        if (*(float *)(q + 0x54) > D_00275544) {
            *(int *)(self + 0x1600) = *(int *)(q + 0x54);
        } else if (*(float *)(q + 0x54) < D_00275544) {
            *(int *)(self + 0x1600) = *(int *)(q + 0x54);
        }
    }
    one = 0x3f800000;
    if (*(int *)(self + 0x9a8) == one) {
        if (*(int *)(self + 0x9ac) == one) {
            *(int *)(self + 0x1600) = 0;
        } else {
            *(float *)(self + 0x1600) = *(float *)(self + 0x1600) - dt * D_002755EC;
            if (*(float *)(self + 0x1600) < D_00275F58) {
                *(int *)(self + 0x1600) = 0xbf800000;
            }
        }
    } else if (*(int *)(self + 0x9ac) == one) {
        *(float *)(self + 0x1600) = dt * D_002755EC + *(float *)(self + 0x1600);
        if (*(float *)(self + 0x1600) > D_00275460) {
            *(int *)(self + 0x1600) = one;
        }
    } else {
        s38 = *(float *)(self + 0x9f8) - *(float *)(self + 0x1600);
        mag = *(int *)&s38 & 0x7fffffff;
        step = dt * D_002755EC;
        if (*(float *)&mag > step) {
            if (*(float *)(self + 0x9f8) > *(float *)(self + 0x1600)) {
                *(float *)(self + 0x1600) = step + *(float *)(self + 0x1600);
            } else if (*(float *)(self + 0x9f8) < *(float *)(self + 0x1600)) {
                *(float *)(self + 0x1600) = *(float *)(self + 0x1600) - step;
            }
        }
    }
    i125c = *(int *)(self + 0x1690);
    i127c = *(int *)(self + 0x182c);
    if (*(float *)(self + 0x1600) >= D_00275544) {
        s14 = *(int *)(self + 0x1830);
        i1260 = *(int *)(self + 0x1694);
        *(float *)(self + 0x15e8) = D_00275460 - *(float *)(self + 0x1600);
    } else {
        s14 = *(int *)(self + 0x1834);
        i1260 = *(int *)(self + 0x1698);
        *(float *)(self + 0x15e8) = *(float *)(self + 0x1600) + D_00275460;
    }
    if (*(float *)(self + 0x838) < *(float *)(self + 0x2048)) {
        *(float *)(self + 0x15f4) = dt + *(float *)(self + 0x15f4);
        if (*(int *)(self + 0x680) != 0) {
            *(int *)(self + 0x15f4) = 0;
        }
    }
    *(int *)(self + 0x2084) = 1;
    *(int *)(self + 0x2088) = 0;
Lend:
    (void)dt;
}
