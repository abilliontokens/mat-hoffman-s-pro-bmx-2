/* 7 functions from 0x000ACD50 to 0x000AD5C0, found by Ghidra. */
#include "common.h"

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
