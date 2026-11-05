/* 11 functions from 0x0002EB10 to 0x0002FA80, found by Ghidra. */
#include "common.h"

extern int D_002768FC;

struct C_0002F190 {
    float m[12];
    C_0002F190 *func_0002F190(void);
};

struct BmxCameraController_0002EF20 {
    void *vtbl;
    char pad4[0x34 - 4];
    int unk34;
    char pad38[4];
    int unk3C;
    int unk40;
    int unk44;
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int unk58;
    int unk5C;
    int unk60;
    int unk64;
    int unk68;
    int unk6C;
    int unk70;
    int unk74;
    void func_0012B550(int a0);
    BmxCameraController_0002EF20 *func_0002EF20(int a0);
};

BmxCameraController_0002EF20 *BmxCameraController_0002EF20::func_0002EF20(int a0)
{
    func_0012B550(a0);
    unk70 = 0;
    unk34 = 0;
    unk68 = 0;
    unk50 = 0;
    unk58 = 0;
    unk5C = 0;
    unk60 = 0;
    unk54 = 0;
    unk64 = 0;
    unk6C = 0;
    unk3C = 0;
    unk40 = 0;
    unk44 = 0;
    unk48 = 0;
    unk4C = 0;
    unk74 = 0;
    vtbl = &D_002768FC;
    return this;
}

C_0002F190 *C_0002F190::func_0002F190(void)
{
    m[2] = 0;
    m[1] = 0;
    m[0] = 0;
    m[3] = 0x3f800000;
    m[6] = 0;
    m[5] = 0;
    m[4] = 0;
    m[7] = 0x3f800000;
    m[10] = 0;
    m[9] = 0;
    m[8] = 0;
    m[11] = 0x3f800000;
    return this;
}
