/* 13 functions from 0x00025240 to 0x000261F0, found by Ghidra. */
#include "common.h"
struct C_00025E10 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    int unk3C;
    C_00025E10* func_00025E10(void);
};

struct C_00026120 {
    char pad0[0x20];
    int unk20;
    void func_00026120(int a0);
};

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


C_00025E10* C_00025E10::func_00025E10(void) {
    extern int D_00276534;
    unk0 = (int)&D_00276534;
    unk20 = 0;
    unkC = 0;
    unk14 = 0;
    unk10 = 0;
    unk18 = 0;
    unk4 = 0;
    unk8 = 0;
    unk24 = 0;
    unk28 = 0;
    unk2C = 0;
    unk1C = 0;
    unk30 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    return this;
}

float C_000260F0::func_000260F0(void) {
    return unkC;
}

float C_00026100::func_00026100(void) {
    return unk14;
}

float C_00026110::func_00026110(void) {
    return unk28;
}

void C_00026120::func_00026120(int a0) {
    unk20 = a0;
}

