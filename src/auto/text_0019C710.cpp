/* 7 functions from 0x0019C710 to 0x0019D6C0, found by Ghidra. */
#include "common.h"

struct SoultreeCollisionObject {
    int vtbl;
    char pad_0[0xa0];
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
    void func_0019B760();
    void func_00133E60();
    void *func_0019D650(int flags);
};

extern "C" void __stdcall func_0019BBD0(unsigned short param_1, int *param_2, int param_3, char *param_4, char *param_5);
extern "C" void __stdcall func_0019BD20(unsigned short param_1, int *param_2, char *param_3, char *param_4, int param_5);

void SoultreeCollisionObject::func_0019CBF0(int param_1, int param_2)
{
    int local[2];
    local[0] = unk1C4;
    local[1] = unk1C8;
    switch (unkA6) {
    case 1:
        func_0019BBD0(unk1BC, local, param_1, unkB0, unk1B0);
        return;
    case 2:
    case 3:
    case 4:
    case 5:
        return;
    case 6:
        func_0019BD20(unk1BC, local, unk1B0, unkB0, 1);
        return;
    case 7:
        func_0019BD20(unk1BC, local, unk1B0, unkB0, 0);
        return;
    }
}

void SoultreeCollisionObject::func_0019CCA0(int param_1)
{
    if (unkA6 != 0) {
        func_0019CBF0(unkA4, unkA6);
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}

int SoultreeCollisionObject::func_0019D680(void *param_1)
{
    unsigned int result;
    if (((int *)param_1)[0x14] != 6) {
        return 0;
    }
    result = (unsigned int)func_0019BB80(param_1);
    if (result != 0) {
        func_0019BA70();
        func_0019B890();
    }
    return (int)result;
}

