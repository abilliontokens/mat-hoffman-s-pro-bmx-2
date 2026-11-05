/* 7 functions from 0x0006FBF0 to 0x000707D0, found by Ghidra. */
#include "common.h"
struct C_001D5AD0 { void func_001D5AD0(void); };
struct C_00070360 {
    char pad0[0x6C];
    int unk6C;
    char pad70[0x50];
    int unkC0, unkC4;
    C_001D5AD0 *unkC8, *unkCC;
    char padD0[8];
    C_001D5AD0 *unkD8;
    char padDC[0x14];
    C_001D5AD0 *unkF0;
    char padF4[0x10];
    int unk104;
    char pad108[0x20];
    C_001D5AD0 *unk128, *unk12C;
    char pad130[0x10];
    C_001D5AD0 *unk140, *unk144, *unk148, *unk14C;
    C_001D5AD0 *unk150[2];
    C_001D5AD0 *unk158[5];
    C_001D5AD0 *unk16C[5];
    void func_00070360(void);
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

void C_000707C0::func_000707C0(int a0) {
    unkFC = a0;
}
