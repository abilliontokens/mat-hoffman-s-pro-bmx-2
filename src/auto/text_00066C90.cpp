/* 3 functions from 0x00066C90 to 0x00067AA0, found by Ghidra. */
#include "common.h"

extern int D_0027850C;
extern int D_002787FC;
struct PtrObj_66C { void func_001D6410(); };
struct VObj_66C { virtual void v0(int); };
extern "C" void __cdecl func_001E891B(void *);

struct C_00066C90 {
    void *vtbl;
    char pad4[0x14];
    int unk18;
    char pad1C[8];
    int unk24[8];
    int unk44[8];
    int unk64[2];
    int unk6C[2];
    char pad74[4];
    int a78[3];
    char pad84[0xC];
    int a90[2];
    int unk98[5];
    int unkAC[5];
    int unkC0[6];
    int unkD8[8];
    int unkF8;
    int unkFC;
    int unk100;
    int unk104;
    int unk108;
    int unk10C;
    int unk110;
    char pad114[4];
    int unk118[8];
    int unk138;
    int unk13C[2];
    int unk144[2];
    int unk14C;
    int unk150;
    char pad154[4];
    int unk158;
    int unk15C;
    char pad160[4];
    int unk164;
    int unk168;
    void func_00066DC0();
    void func_00157660();
    void func_00157600(int a0);
    C_00066C90 *func_00066C90(int a0);
};

C_00066C90 *C_00066C90::func_00066C90(int a0)
{
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    for (i = 0; i < 8; i++) {
        unk24[i] = 0;
        unk44[i] = 0;
    }
    vtbl = &D_002787FC;
    unk168 = 0;
    unk108 = 0;
    unk18 = -1;
    unk100 = 0;
    unkFC = 0;
    unkF8 = 0;
    for (i = 0; i < 2; i++) {
        unk64[i] = 0;
        unk6C[i] = 0;
    }
    for (i = 0; i < 3; i++) {
        a78[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        a90[i] = 0;
    }
    unk10C = 0;
    for (i = 0; i < 2; i++) {
        unk13C[i] = 0;
        unk144[i] = 0;
    }
    unk138 = 0;
    unk110 = 0;
    for (i = 0; i < 8; i++) {
        unk118[i] = 0;
    }
    unk15C = 1;
    unk158 = -1;
    for (i = 0; i < 5; i++) {
        unk98[i] = 0;
        unkAC[i] = 0;
    }
    for (i = 0; i < 6; i++) {
        unkC0[i] = 0;
    }
    unk104 = 0;
    for (i = 0; i < 8; i++) {
        unkD8[i] = 0;
    }
    unk14C = 0;
    unk150 = 0;
    unk164 = 0;
    return this;
}
