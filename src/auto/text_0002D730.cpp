/* 1 function from 0x0002D730 to 0x0002EB10, found by Ghidra. */
#include "common.h"

struct S_2D730_Mgr {
    void *func_00026500(int a, void *b);
};

struct S_2D730_Sub {
    void func_00025E50(float f);
};

extern int D_002B7EA4;
extern int D_002B7EA0;
extern int D_002B7E9C;
extern int D_002B7E98;
extern int D_002A7CB8;
extern int D_002767AC;
extern int D_002767A4;
extern int D_002A1190;
extern float D_00275460;

struct S_2D730_Node {
    void **vtbl;
    char pad4[0x238 - 4];
    float f238, f23C, f240;
};

struct S_2D730_State {
    char pad0[0x50];
    int f50, f54;
    char pad58[0x68 - 0x58];
    int f68;
};

struct C_0002D730 {
    char pad0[0x1e0];
    S_2D730_Node *f1e0;
    void *f1e4;
    S_2D730_State *f1e8;
    char pad1ec[0x454 - 0x1ec];
    int f454;
    char pad458[0x468 - 0x458];
    int f468;
    char pad46c[0x5f0 - 0x46c];
    S_2D730_Sub *f5f0;
    char pad5f4[0x69c - 0x5f4];
    int f69c;
    char pad6a0[0x6a8 - 0x6a0];
    int f6a8;
    char pad6ac[0x6c8 - 0x6ac];
    int f6c8;
    char pad6cc[0x6dc - 0x6cc];
    float f6dc, f6e0, f6e4;
    char pad6e8[0x6fc - 0x6e8];
    float f6fc, f700;
    void func_0002D730(float dt);
    void func_00027D60(void);
};

extern float D_00275AEC;
int func_000292C0(void);

void C_0002D730::func_0002D730(float dt)
{
    int one = 1;

    if (!(D_002B7EA4 & 1)) {
        D_002B7EA4 |= 1;
        D_002B7EA0 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(-1, &D_002767AC);
    }
    if (!(D_002B7EA4 & 2)) {
        D_002B7EA4 |= 2;
        *(float *)&D_002B7E9C = D_00275460 / (float)D_002A1190;
    }
    if (!(D_002B7EA4 & 4)) {
        D_002B7EA4 |= 4;
        D_002B7E98 = (int)((S_2D730_Mgr *)D_002A7CB8)->func_00026500(-1, &D_002767A4);
    }
    if (f454 != 0)
        f5f0->func_00025E50(dt);
    func_00027D60();
    if (f69c != 0) {
        f6fc = f6fc + dt;
        if (f6fc > f700) {
            f1e0->f238 = f1e0->f238 + f6dc * D_00275AEC;
            f1e0->f23C = f1e0->f23C + f6e0 * D_00275AEC;
            f1e0->f240 = f1e0->f240 + f6e4 * D_00275AEC;
            if (f1e8->f50 == 0 && f1e8->f54 == 0 && f468 == 0 && one) {
                if (func_000292C0() == 0) {
                    f69c = 0;
                    f6a8 = 0;
                }
            }
        }
    }
    if (f1e8->f68 != 0)
        f6c8 = 0;
}
