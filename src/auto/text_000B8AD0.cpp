/* 9 functions from 0x000B8AD0 to 0x000B9AD0, found by Ghidra. */
#include "common.h"
struct C_000B8C80 {
    char pad0[0x9C];
    int unk9C;
    void func_000B8C80(int a0);
};


struct BmxUIGlobalManager {
    void *vtbl;
    void *func_000B9A60(int a0);
    void func_001BC770(int a0);
};
struct C_000B8AD0 {
    char pad0[0x50];
    int unk50;
    int unk54;
    void func_000B8AD0(int a0, int a1);
    void func_000B67C0();
};
struct Obj1A4100 {
    void func_001A4100(int a0, int a1, int a2);
};
struct C_000B9A80 {
    char pad0[0x30];
    Obj1A4100 *unk30;
    void func_000B9A80(int a0, int a1);
};
extern int D_0027D5FC;

void C_000B8C80::func_000B8C80(int a0) {
    unk9C = a0;
}
