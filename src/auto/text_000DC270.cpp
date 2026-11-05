/* 6 functions from 0x000DC270 to 0x000DD1B0, found by Ghidra. */
#include "common.h"

extern int D_0027F84C;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct DelObjC_000DC {
    virtual void Destroy(int a0);
};

/* BmxUIPageHorseWord */
struct C_000DD130 {
    void *vtbl;
    char pad4[0x2E8];
    DelObjC_000DC *unk2EC;
    char pad2F0[0x40];
    C_001D6410 *unk330;
    char pad334[0xC];
    DelObjC_000DC *arr340[2];
    void func_001BE3F0();
    void func_000DD130();
};

struct C_000DCBF0 {
    char pad0[0x2F0];
    int unk2F0;
    int unk2F4;
    int unk2F8;
    int unk2FC;
    int unk300;
    int unk304;
    void func_000DCBF0(void);
};


void C_000DCBF0::func_000DCBF0(void) {
    unk2F0 = 0;
    unk2F4 = 128;
    unk2F8 = 128;
    unk2FC = 0;
    unk300 = 1048576000;
    unk304 = 0;
}

void C_000DD130::func_000DD130()
{
    C_001D6410 *p = unk330;
    vtbl = &D_0027F84C;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
    }
    if (unk2EC != 0) {
        unk2EC->Destroy(1);
        unk2EC = 0;
    }
    for (int i = 0; i < 2; i++) {
        if (arr340[i] != 0) {
            arr340[i]->Destroy(1);
            arr340[i] = 0;
        }
    }
    func_001BE3F0();
}

