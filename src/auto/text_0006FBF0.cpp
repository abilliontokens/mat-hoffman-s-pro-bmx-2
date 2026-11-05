/* 7 functions from 0x0006FBF0 to 0x000707D0, found by Ghidra. */
#include "common.h"
struct C_001D5AD0 { void func_001D5AD0(void); void func_001D6600(void); void func_0005E840(int a0); };
struct S_00070450_Data {
    char pad0[0x7b8];
    int f7b8;
    char pad7bc[4];
    int f7c0;
    char pad7c4[0xec0 - 0x7c4];
    int fec0;
    char pad_ec4[0xee8 - 0xec4];
    int fee8;
};
struct S_00070450_Mgr {
    char pad0[4];
    S_00070450_Data *f4;
};
struct S_00070450_Global {
    char pad0[0x2e8];
    S_00070450_Mgr *f2e8;
};
extern S_00070450_Global *D_002A8490;
struct C_00070360 {
    char pad0[0x6C];
    int unk6C;
    char pad70[0x50];
    int unkC0, unkC4;
    C_001D5AD0 *unkC8, *unkCC;
    char padD0[8];
    C_001D5AD0 *unkD8;
    char padDC[4];
    C_001D5AD0 *unkE0;
    char padE4[0xc];
    C_001D5AD0 *unkF0;
    char padF4[4];
    C_001D5AD0 *unkF8;
    char padFC[4];
    C_001D5AD0 *unk100;
    int unk104;
    char pad108[0x20];
    C_001D5AD0 *unk128, *unk12C;
    C_001D5AD0 *unk130[3];
    C_001D5AD0 *unk13C;
    C_001D5AD0 *unk140, *unk144, *unk148, *unk14C;
    C_001D5AD0 *unk150[2];
    C_001D5AD0 *unk158[5];
    C_001D5AD0 *unk16C[5];
    C_001D5AD0 *unk180[1];
    int func_0006FF80(void);
    void func_00070360(void);
    void func_00070450(void);
};
struct C_000707C0 {
    char pad0[0xFC];
    int unkFC;
    void func_000707C0(int a0);
};


void C_00070360::func_00070360(void) {
    int i;
    unkC8->func_001D5AD0();
    unkCC->func_001D5AD0();
    for (i = 0; i < 5; i++) {
        unk158[i]->func_001D5AD0();
        unk16C[i]->func_001D5AD0();
    }
    if (!unk104) {
        for (i = 0; i < 2; i++) unk150[i]->func_001D5AD0();
    }
    if (unkC0) unk128->func_001D5AD0();
    else unk140->func_001D5AD0();
    if (unk104) {
        if (unkC4) unk12C->func_001D5AD0();
        else unk14C->func_001D5AD0();
    } else {
        unk144->func_001D5AD0();
        unk148->func_001D5AD0();
    }
    if (unk6C && !unk104) unkD8->func_001D5AD0();
    if (unkF0) unkF0->func_001D5AD0();
}

void C_00070360::func_00070450(void) {
    int i;
    int n;

    if (unk104) {
        unk130[0]->func_0005E840(D_002A8490->f2e8->f4->f7b8);
        unk130[0]->func_001D5AD0();
        unk13C->func_0005E840(D_002A8490->f2e8->f4->f7c0);
        unk13C->func_001D5AD0();
    } else {
        for (i = 0; i < 3; i++) {
            unk130[i]->func_001D5AD0();
        }
    }
    unkE0->func_0005E840(unk104 ? D_002A8490->f2e8->f4->fec0 : D_002A8490->f2e8->f4->fee8);
    unkE0->func_001D5AD0();
    if (unk104) {
        unk100->func_001D5AD0();
    } else {
        n = func_0006FF80();
        for (i = 0; i < n; i++) {
            unk180[i]->func_001D5AD0();
        }
        unkF8->func_001D5AD0();
    }
}

void C_000707C0::func_000707C0(int a0) {
    unkFC = a0;
}
