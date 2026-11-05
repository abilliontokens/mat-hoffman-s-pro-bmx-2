/* 11 functions from 0x000BFBA0 to 0x000C0B30, found by Ghidra. */
#include "common.h"

extern int D_0027E00C;

struct BmxUIPageDemo {
    void *vtbl;
    char pad4[0x280 - 4];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    char pad294[4];
    int items[20];
    void func_001BE360(int a0);
    BmxUIPageDemo *func_000BFE90(int a0);
    int func_000C0100(int idx);
};

BmxUIPageDemo *BmxUIPageDemo::func_000BFE90(int a0)
{
    int i;

    func_001BE360(a0);
    unk280 = 0;
    unk284 = 1;
    unk288 = 1;
    unk28C = 0;
    unk290 = 0;
    vtbl = &D_0027E00C;
    for (i = 0; i < 20; i++)
        items[i] = -1;
    return this;
}

int BmxUIPageDemo::func_000C0100(int idx)
{
    if (idx >= unk290) {
        return -1;
    }
    return items[idx];
}
