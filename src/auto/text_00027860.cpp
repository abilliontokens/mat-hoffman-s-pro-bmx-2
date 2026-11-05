/* 7 functions from 0x00027860 to 0x00028130, found by Ghidra. */
#include "common.h"
struct C_00027C30 {
    char pad0[0x4F4];
    int unk4F4;
    int unk4F8;
    char pad4FC[0x3C];
    int unk538;
    char pad53C[0x15C];
    int unk698;
    void func_00027C30(void);
};

struct C_00027D40 {
    char pad0[0x56C];
    int unk56C;
    char pad570[0x10];
    int unk580;
    char pad584[0x4];
    int unk588;
    void func_00027D40(void);
};


void C_00027C30::func_00027C30(void) {
    unk4F4 = 0;
    unk4F8 = 0;
    unk538 = 0;
    unk698 = 0;
}

void C_00027D40::func_00027D40(void) {
    unk56C = 0;
    unk588 = 0;
    unk580 = 0;
}
