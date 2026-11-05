/* 7 functions from 0x0019C710 to 0x0019D6C0, found by Ghidra. */
#include "common.h"

struct SoultreeCollisionObject {
    char pad_0[0xa4];
    unsigned short unkA4;
    unsigned char unkA6;
    unsigned char unkA7;
    char pad_A8[0xb0 - 0xa8];
    char unkB0[0x100];
    char unk1B0[0xc];
    unsigned short unk1BC;
    char pad_1BE[0x1c4 - 0x1be];
    int unk1C4;
    int unk1C8;
    void func_0019CCA0(int param_1);
    void func_0019CBF0(int param_1, int param_2);
    int func_0019D680(void *param_1);
    void func_00157A00(int param_1);
    int func_0019BB80(void *param_1);
    void func_0019BA70();
    void func_0019B890();
};

extern "C" void __stdcall func_0019BBD0(unsigned short param_1, int *param_2, int param_3, char *param_4, char *param_5);
extern "C" void __stdcall func_0019BD20(unsigned short param_1, int *param_2, char *param_3, char *param_4, int param_5);
