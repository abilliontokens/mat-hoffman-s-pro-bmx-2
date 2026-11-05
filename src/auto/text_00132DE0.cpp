/* 23 functions from 0x00132DE0 to 0x00133D90, found by Ghidra. */
#include "common.h"
struct C_00133730 {
    char pad0[0x60];
    int unk60;
    char pad64[0x4];
    int unk68;
    void func_00133730(int a0, int a1);
};

struct C_00133570 {
    char pad0[0x80];
    int unk80;
    void func_00133570(int a0);
};

struct C_001334E0 {
    char pad0[0x74];
    int unk74;
    void func_001334E0(int a0);
};


void C_001334E0::func_001334E0(int a0) {
    unk74 = a0;
}

void C_00133570::func_00133570(int a0) {
    unk80 = a0;
}

void C_00133730::func_00133730(int a0, int a1) {
    unk60 = a0;
    unk68 = a1;
}

void func_00133D80(int a0) {
    extern int D_002B92EC;
    D_002B92EC = a0;
}

