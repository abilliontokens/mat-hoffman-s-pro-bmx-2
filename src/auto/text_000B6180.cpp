/* 5 functions from 0x000B6180 to 0x000B6A70, found by Ghidra. */
#include "common.h"

extern int D_002BA154;
extern int D_002BA148;
extern int D_002B911C;
extern int D_000B6160;
void func_000B6140();
void *func_001E8A44(int size);

struct C_000B6640_Obj {
    char pad0[0x60];
    void *unk60;
    int unk64;
    char pad68[0x34];
    void *unk9C;
    C_000B6640_Obj *func_0017F050(int a0);
    void func_0017F0A0(int a0);
    void func_00133660(int a0);
};

struct C_000B6640 {
    char pad0[0x88];
    int unk88;
    char pad8C[4];
    int unk90;
    char pad94[0x13C];
    C_000B6640_Obj *unk1D0;
    C_000B6640_Obj *unk1D4;
    C_000B6640 *func_000B6640(int a0, int a1);
    void func_001577A0(C_000B6640_Obj *child, int a1);
};

struct C_000B6810 {
    int unk0;
    void *func_000B6810(int flags);
    void func_00157660(void);
};

struct C_000B67C0 {
    char pad_0[0x50];
    int unk50;
    int unk54;
    char pad_58[0x64 - 0x58];
    int unk64;
    int unk68;
    int unk6C;
    void func_000B67C0(void);
};

C_000B6640 *C_000B6640::func_000B6640(int a0, int a1)
{
    C_000B6640_Obj *p;

    unk88 = a1;
    unk90 = a0;
    p = (C_000B6640_Obj *)func_001E8A44(0x110);
    unk1D0 = p ? p->func_0017F050(1) : 0;
    unk1D0->func_0017F0A0(2);
    func_001577A0(unk1D0, -1);
    unk1D0->func_00133660(D_002BA154);
    unk1D0->unk9C = (void *)func_000B6140;
    unk1D0->unk60 = this;
    unk1D0->unk64 = unk88;
    p = (C_000B6640_Obj *)func_001E8A44(0x110);
    unk1D4 = p ? p->func_0017F050(1) : 0;
    unk1D4->func_0017F0A0(2);
    func_001577A0(unk1D4, -1);
    unk1D4->func_00133660(D_002BA154);
    unk1D4->unk9C = (void *)&D_000B6160;
    unk1D4->unk60 = this;
    unk1D4->unk64 = unk88;
    unk1D0->func_00133660(D_002BA154);
    unk1D4->func_00133660(D_002BA154);
    unk1D0->func_00133660(D_002BA148);
    unk1D4->func_00133660(D_002BA148);
    unk1D0->func_00133660(D_002B911C);
    unk1D4->func_00133660(D_002B911C);
    return this;
}

void C_000B67C0::func_000B67C0(void)
{
    int a = unk50;
    unk64 = (a != 0 && unk54 != 0);
    unk68 = (a != 0 || unk54 != 0);
    if (a == 0) {
        unk6C = (unk54 != 0);
    } else {
        unk6C = (unk54 == 0);
    }
}

void *C_000B6810::func_000B6810(int flags)
{
    extern int D_0027D4C4;
    void func_001E891B(void *);
    unk0 = (int)&D_0027D4C4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
