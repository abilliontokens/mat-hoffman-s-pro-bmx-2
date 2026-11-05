/* 9 functions from 0x000B8AD0 to 0x000B9AD0, found by Ghidra. */
#include "common.h"
struct C_000B8C80 {
    char pad0[0x9C];
    int unk9C;
    void func_000B8C80(int a0);
};


struct BmxUIGlobalManager {
    void *vtbl;
    void *func_000B9A60(int a0);
    void func_001BC770(int a0);
    void *func_000B9AA0(int flags);
    void func_001BC7A0();
};
void func_001E891B(void *);
struct C_000B8AD0 {
    char pad0[0x50];
    int unk50;
    int unk54;
    void func_000B8AD0(int a0, int a1);
    void func_000B67C0();
};
struct Obj1A4100 {
    void func_001A4100(int a0, int a1, int a2);
};
struct C_000B9A80 {
    char pad0[0x30];
    Obj1A4100 *unk30;
    void func_000B9A80(int a0, int a1);
};
extern int D_0027D5FC;

struct C_000B9A30 {
    void *vtbl;
    void *func_000B9A30(int flags);
};

void C_000B8AD0::func_000B8AD0(int a0, int a1)
{
    unk50 = a0;
    unk54 = a1;
    func_000B67C0();
}

void C_000B8C80::func_000B8C80(int a0) {
    unk9C = a0;
}

void *C_000B9A30::func_000B9A30(int flags) {
    extern int D_0027D574;
    void func_00157660();
    void func_001E891B(void *);
    vtbl = (void *)&D_0027D574;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *BmxUIGlobalManager::func_000B9A60(int a0)
{
    func_001BC770(a0);
    vtbl = (void *)&D_0027D5FC;
    return this;
}

void C_000B9A80::func_000B9A80(int a0, int a1)
{
    if (unk30 != 0) {
        unk30->func_001A4100(a0, a1, 0);
    }
}

void *BmxUIGlobalManager::func_000B9AA0(int flags)
{
    vtbl = (void *)&D_0027D5FC;
    func_001BC7A0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

