/* 4 functions from 0x000C6E70 to 0x000C7DF0, found by Ghidra. */
#include "common.h"

extern int D_0027E28C;

struct S_000C7_Obj {
    virtual void destroying(int flag);
};

struct BmxUIPageTwoPlayer {
    void *vtbl;
    char pad4[0x308 - 4];
    S_000C7_Obj *arr308[4];
    S_000C7_Obj *arr318[2];
    void func_001BE3F0(void);
    void func_000C7900(void);
};

void BmxUIPageTwoPlayer::func_000C7900(void)
{
    int i;
    vtbl = (void *)&D_0027E28C;
    for (i = 0; i < 4; i++) {
        if (arr308[i] != 0) {
            arr308[i]->destroying(1);
            arr308[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (arr318[i] != 0) {
            arr318[i]->destroying(1);
            arr318[i] = 0;
        }
    }
    func_001BE3F0();
}
