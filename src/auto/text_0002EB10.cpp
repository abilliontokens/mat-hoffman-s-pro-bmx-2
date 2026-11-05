/* 11 functions from 0x0002EB10 to 0x0002FA80, found by Ghidra. */
#include "common.h"

extern int D_002768FC;

struct C_0002F190 {
    unsigned int m[12];
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
