/* 31 functions from 0x0001E260 to 0x0001EFA0, found by Ghidra. */
#include "common.h"
extern int D_00275F9C;
extern int D_00275F7C;
extern int D_002B7D54;
extern u32 *D_002B7D4C;
extern u32 D_002B7D50;
extern u32 *D_002A0DAC;
void func_001E891B(void *p);

struct C_0001E930 {
    void *vtbl;
    char pad4[0x28];
    void *func_0001E930(unsigned int flags);
    void func_0001E800();
    void func_0001DFF0();
};

struct GR_BitString {
    void *vtbl;
    u32 unk4;
    void *unk8;
    void *unkC;
    u8 unk10;
    char pad11[3];
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    void func_0001E3F0(u32 *a0, u32 a1, int a2);
    void func_0001E460();
};

struct C_0001EF00 {
    char pad0[0xE0];
    int unkE0;
    void func_0001EF00(int a0);
};

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

void C_0001EF00::func_0001EF00(int a0) {
    unkE0 = a0;
}

