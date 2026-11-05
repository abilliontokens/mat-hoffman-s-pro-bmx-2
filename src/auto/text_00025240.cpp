/* 13 functions from 0x00025240 to 0x000261F0, found by Ghidra. */
#include "common.h"
struct C_00026110 {
    char pad0[0x28];
    float unk28;
    float func_00026110(void);
};

struct C_00026100 {
    char pad0[0x14];
    float unk14;
    float func_00026100(void);
};

struct C_000260F0 {
    char pad0[0xC];
    float unkC;
    float func_000260F0(void);
};


float C_000260F0::func_000260F0(void) {
    return unkC;
}

float C_00026100::func_00026100(void) {
    return unk14;
}

float C_00026110::func_00026110(void) {
    return unk28;
}

