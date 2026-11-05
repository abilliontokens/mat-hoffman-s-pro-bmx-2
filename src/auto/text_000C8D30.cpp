/* 8 functions from 0x000C8D30 to 0x000C9940, found by Ghidra. */
#include "common.h"
extern int D_0027E3F4;
extern int D_00278DD0;

struct DelObjC_000C {
    virtual void Destroy(int a0);
};

struct ElemC {
    char pad0[0x38];
    unsigned int f38;
    char pad3c[0x1c];
    unsigned char b58;
};

struct C_000C8D30 {
    void func_000C8D30();
};

struct C_000C8F10 {
    void func_000C5E40();
    void func_000C8D30();
    void func_00157960();
    void func_000C8F10();
};

struct BmxUIPageOptions {
    void *vtbl;
    char pad4[0x2CC - 4];
    short unk2CC;
    char pad2ce[0xa];
    ElemC *arr2D8[4];
    char pad2e8[0x44];
    DelObjC_000C *arr334[12];
    void func_001BE3F0();
    void func_001BF000();
    void func_001B1980();
    void func_001B17D0(char *s);
    void func_000C8E60();
    void func_000C8F10();
    void func_000C9860();
};

struct BmxUIPageGameOptions {
    void *vtbl;
    char pad4[0x334 - 4];
    DelObjC_000C *arr334[12];
    void func_001BE3F0();
    void func_000C9050();
};

void BmxUIPageOptions::func_000C8E60()
{
    for (int i = 0; i < 4; i++) {
        ElemC *e = arr2D8[i];
        e->f38 = ((int)unk2CC << 24) | (e->f38 & 0xffffff);
        e->b58 |= 2;
    }
    func_001BF000();
}

void C_000C8F10::func_000C8F10(void) {
    func_000C5E40();
    func_000C8D30();
    func_00157960();
}

void BmxUIPageGameOptions::func_000C9050()
{
    vtbl = &D_0027E3F4;
    for (int i = 0; i < 12; i++) {
        if (arr334[i] != 0) {
            arr334[i]->Destroy(1);
            arr334[i] = 0;
        }
    }
    func_001BE3F0();
}

