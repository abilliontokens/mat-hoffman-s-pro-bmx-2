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

struct C_001D5AD0 {
    char pad0[0x38];
    unsigned int f38;
    char pad3C[0x1C];
    unsigned char f58;
    void func_001D5AD0(void);
};
struct S_002B91AC {
    char pad0[0x24];
    C_001D5AD0 *unk24;
    C_001D5AD0 *unk28;
    C_001D5AD0 *unk2C;
    C_001D5AD0 *unk30;
    char pad34[0x1C];
    C_001D5AD0 *unk50;
    C_001D5AD0 *unk54;
    char pad58[0x10];
    C_001D5AD0 *unk68;
    C_001D5AD0 *unk6C;
};
extern S_002B91AC *D_002B91AC;
struct C_000ECC60_124 {
    char pad0[0x138];
    int f138;
};
struct C_000ECC60 {
    char pad0[0x124];
    C_000ECC60_124 *f124;
    char pad128[0x178];
    C_001D5AD0 *f2A0[16];
    char pad2E0[0x2C];
    int f30C;
    int f310;
    char pad314[0x10];
    int f324;
    char pad328[8];
    int f330;
    char pad334[8];
    int f33C;
    char pad340[0x1C];
    int f35C;
    char pad360[0x28];
    short f388;
    void func_000ECC60(void);
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

void C_000ED0E0::func_000ED0E0(void) {
    int i;
    vtbl = &D_00281C8C;
    if (f288 != 0) {
        f288->Destroy(1);
        f288 = 0;
    }
    f3C4 = 0;
    f3C8 = 0;
    f3D8 = 0;
    for (i = 0; i < 11; i++) f3E4[i] = 0;
    for (i = 0; i < 4; i++) {
        if (f4B8[i] != 0) {
            f4B8[i]->Destroy(1);
            f4B8[i] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (f4C8[i] != 0) {
            f4C8[i]->Destroy(1);
            f4C8[i] = 0;
        }
    }
    func_001BE3F0();
}

