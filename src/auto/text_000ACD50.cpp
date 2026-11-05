/* 7 functions from 0x000ACD50 to 0x000AD5C0, found by Ghidra. */
#include "common.h"

struct C_000ACE60_s4 {
    int a;
    int b;
    int c;
    int d;
};

struct C_000ACE60 {
    int unk0;
    char pad4[0x20];
    int unk24;
    C_000ACE60_s4 arr1[8];
    C_000ACE60_s4 arr2[8];
    C_000ACE60_s4 arr3[8];
    int arr4[8];
    int arr5[8];
    C_000ACE60 *func_000ACE60(int param);
};

struct C_000ACF00 {
    int unk0;
    void *func_000ACF00(int flags);
};

struct C_000ACE30 {
    int unk0;
    void *func_000ACE30(int flags);
};

struct C_00157600 {
    void func_00157600(int param_1);
};

struct C_0027C724 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
};

struct C_0027C604 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
};

struct C_000AB4F0 {
    void func_000AB4F0(void *param_1);
};

struct C_000AADB0 {
    void func_000AADB0(void *param_1);
};

struct C_000ACD50 {
    char pad0[0x28];
    void *unk28;
    char pad2C[0x514];
    C_0027C724 *unk540;
    void func_000ACD50(void);
};

struct C_000ACDB0 {
    char pad0[0x28];
    void *unk28;
    char pad2C[0x520];
    C_0027C604 *unk54C;
    void func_000ACDB0(void);
};

struct C_000ACE10 {
    char pad0[0x2C];
    int unk2C;
    void func_00189770(void);
    void func_000ACE10(void);
};

void C_000ACD50::func_000ACD50(void) {
    extern int D_0027C724;
    void *func_001E8A44(...);
    C_0027C724 *p;
    if (unk540 == 0) {
        p = (C_0027C724 *)func_001E8A44(0x2c);
        if (p != 0) {
            ((C_00157600 *)p)->func_00157600(1);
            p->vtbl = &D_0027C724;
            p->unk24 = 0;
            p->unk28 = 0;
        }
        unk540 = p;
    }
    ((C_000AB4F0 *)unk540)->func_000AB4F0(unk28);
}

void C_000ACDB0::func_000ACDB0(void) {
    extern int D_0027C604;
    void *func_001E8A44(...);
    C_0027C604 *p;
    if (unk54C == 0) {
        p = (C_0027C604 *)func_001E8A44(0x2c);
        if (p != 0) {
            ((C_00157600 *)p)->func_00157600(1);
            p->vtbl = &D_0027C604;
            p->unk24 = 0;
            p->unk28 = 0;
        }
        unk54C = p;
    }
    ((C_000AADB0 *)unk54C)->func_000AADB0(unk28);
}

void C_000ACE10::func_000ACE10(void) {
    void __stdcall func_000A3BA0(int);
    func_000A3BA0(unk2C);
    func_00189770();
}

void *C_000ACE30::func_000ACE30(int flags) {
    extern int D_0027B1A4;
    void func_001E891B(void *);
    int func_001BAEC0(...);
    unk0 = (int)&D_0027B1A4;
    func_001BAEC0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_000ACF00::func_000ACF00(int flags) {
    extern int D_0027B274;
    void func_001E891B(void *);
    int func_00157660(...);
    unk0 = (int)&D_0027B274;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

