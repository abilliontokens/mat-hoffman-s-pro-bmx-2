/* 31 functions from 0x0001E260 to 0x0001EFA0, found by Ghidra. */
#include "common.h"
struct C_0001EDD0 {
    char pad0[0x28];
    int unk28;
    void func_0001EDD0(int a0);
};

struct C_0001EDC0 {
    char pad0[0x24];
    int unk24;
    void func_0001EDC0(int a0);
};


void C_0001EDC0::func_0001EDC0(int a0) {
    unk24 = a0;
}

void C_0001EDD0::func_0001EDD0(int a0) {
    unk28 = a0;
}

