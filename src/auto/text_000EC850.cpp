/* 8 functions from 0x000EC850 to 0x000ED850, found by Ghidra. */
#include "common.h"
struct C_000ECD90 {
    char pad0[0x364];
    int unk364;
    char pad368[0x18];
    int unk380;
    int unk384;
    int unk388;
    int unk38C;
    int unk390;
    void func_000ECD90(void);
};

extern void *D_00281C8C;
struct C_000ED0E0_Obj {
    virtual void Destroy(int flags);
};
struct C_000ED0E0 {
    void *vtbl;
    char pad4[0x284];
    C_000ED0E0_Obj *f288;
    char pad28C[0x138];
    int f3C4;
    int f3C8;
    char pad3CC[0xC];
    int f3D8;
    char pad3DC[8];
    int f3E4[11];
    char pad410[0xA8];
    C_000ED0E0_Obj *f4B8[4];
    C_000ED0E0_Obj *f4C8[2];
    void func_001BE3F0(void);
    void func_000ED0E0(void);
};

void C_000ECD90::func_000ECD90(void) {
    unk380 = 0;
    unk384 = 255;
    unk388 = unk364;
    unk38C = 0;
    unk390 = 1048576000;
}
