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

extern int D_002A8E7C, D_002A8E80, D_002A8E84, D_002A8E88;

struct RadiusLineCollisionObject {
    void *vtbl;
    char pad4[0x4c];
    int unk50;
    char pad54[0x52];
    unsigned char unkA6;
    unsigned char unkA7;
    char padA8[0x48];
    int fF0, fF4, fF8, fFC;
    int f100, f104, f108, f10C;
    int f110, f114, f118, f11C;
    RadiusLineCollisionObject *func_0017E620(int a0);
    void func_00132EB0(int a0);
    void func_0017E8E0(int param_1);
    void func_0017E7C0();
    void func_00157A00(int param_1);
};

struct Vec4_0017E6F0 { float x, y, z, w; };

struct C_0017E6F0 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0C();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2C();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3C();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4C();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5C();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6C();
    char pad4[0xAC];
    float mB0[16];
    Vec4_0017E6F0 fF0;
    Vec4_0017E6F0 f100;
    float f110, f114, f118, f11C;
    void func_0017E6F0(Vec4_0017E6F0 a, Vec4_0017E6F0 b, float r);
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

void C_0017F0A0::func_0017F0A0(int a0) {
    unkA7 |= 0x40;
    func_00133020(a0);
}

