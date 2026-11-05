/* 8 functions from 0x001747F0 to 0x001755A0, found by Ghidra. */
#include "common.h"

extern int D_00288DC4;
void func_001E891B(void *);
void __stdcall func_00171340(int a);

struct C_00175170 {
    int unk0;
    void func_00171980(void);
    void *func_00175170(int flags);
};

struct C_00175110 {
    int unk0;
    char pad4[0x1AC];
    int unk1B0;
    char pad1B4[0xCC];
    int unk280;
    int unk284;
    int unk288;
    int unk28C;
    int unk290;
    int unk294;
    char pad298[0x68];
    int unk300;
    void func_00174580(void);
    void *func_00175110(int a);
};

void *C_00175110::func_00175110(int a) {
    func_00171340(a);
    unk0 = (int)&D_00288DC4;
    unk1B0 = 0;
    unk280 = 1;
    unk284 = 1;
    unk288 = 1;
    unk28C = 1;
    unk290 = 1;
    unk294 = 1;
    func_00174580();
    unk300 = 0;
    return this;
}

void *C_00175170::func_00175170(int flags) {
    unk0 = (int)&D_00288DC4;
    func_00171980();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
