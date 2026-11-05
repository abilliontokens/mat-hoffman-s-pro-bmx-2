/* 13 functions from 0x0017E2C0 to 0x0017F2B0, found by Ghidra. */
#include "common.h"

extern int D_00289134;
extern int D_002891C4;

void func_001E891B(void *p);

struct C_0017EE30 {
    void *vtbl;
    void *func_0017EE30(unsigned int flags);
    void func_00133070();
    void func_00133E60();
};

struct C_0017F050 {
    void *vtbl;
    char pad4[0x4C];
    int unk50;
    char pad54[0x9C];
    u16 unkF0;
    char padF2[2];
    u32 unkF4;
    u32 unkF8;
    void *unkFC;
    void *unk100;
    u32 unk104;
    C_0017F050 *func_0017F050(int a0);
    void func_00132EB0(int a0);
};

struct C_0017F0A0 {
    char pad0[0xA7];
    u8 unkA7;
    void func_0017F0A0(int a0);
    void func_00133020(int a0);
};

struct RadiusLineCollisionObject {
    char pad_0[0xa6];
    unsigned char unkA6;
    unsigned char unkA7;
    void func_0017E8E0(int param_1);
    void func_0017E7C0();
    void func_00157A00(int param_1);
};

void RadiusLineCollisionObject::func_0017E8E0(int param_1)
{
    if (unkA6 != 0) {
        func_0017E7C0();
    }
    unkA7 = unkA7 & 0xef;
    func_00157A00(param_1);
}

void *C_0017EE30::func_0017EE30(unsigned int flags) {
    vtbl = &D_00289134;
    func_00133070();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0017F050 *C_0017F050::func_0017F050(int a0) {
    func_00132EB0(a0);
    unkF0 = 0;
    unkF4 = 0;
    unkF8 = 0;
    unkFC = 0;
    unk100 = 0;
    unk104 = 0;
    vtbl = &D_002891C4;
    unk50 = 2;
    return this;
}

