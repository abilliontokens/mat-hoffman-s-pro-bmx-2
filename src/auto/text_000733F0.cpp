/* 9 functions from 0x000733F0 to 0x00073EF0, found by Ghidra. */
#include "common.h"

struct C_000739D0 {
    void func_000737A0(void);
    void func_00073620(void);
    void func_00157960(void);
    void func_000739D0(void);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_00073620 {
    char pad0[0x6C];
    int unk6C;
    C_001D5AD0 *unk70;
    C_001D5AD0 *unk74;
    C_001D5AD0 *unk78;
    C_001D5AD0 *unk7C;
    char pad80[0x10];
    C_001D5AD0 *unk90[5];
    C_001D5AD0 *unkA4[5];
    void func_00073620(void);
};

struct C_000683F0 {
    void func_000683F0(void);
};

struct C_000739F0_F64 {
    char pad0[0x190];
    C_000683F0 *unk190;
};

struct C_000739F0 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void virt4();
    char pad4[0x60];
    C_000739F0_F64 *unk64;
    char pad68[4];
    int unk6C;
    char pad70[0x14];
    float unk84;
    void func_0005EA10(float param_1);
    void func_000739F0(float param_1);
};

struct C_00031610 {
    void func_00031610(int param_1, int param_2);
};

struct C_00073A50 {
    char pad0[0x64];
    C_00031610 *unk64;
    char pad68[4];
    int unk6C;
    char pad70[0x14];
    float unk84;
    char pad88[4];
    int unk8C;
    int func_00157BF0(int *param_1, int param_2);
    int func_00073A50(int *param_1, int param_2);
};

extern int D_00278D54;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

static inline void DeleteObj(C_001D6410 *p)
{
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
    }
}

struct C_00073C30_V {
    virtual void destroyObject(int flags);
};

struct SPFPSResultsScreen {
    void *vtbl;
    char pad04[0x60];
    C_001D6410 *unk64[3];
    C_001D6410 *unk70[3];
    C_001D6410 *unk7C[3];
    C_001D6410 *unk88[3];
    char pad94[0xC];
    int unkA0;
    int unkA4;
    int unkA8;
    C_00073C30_V *unkAC[2];
    C_00073C30_V *unkB4[5];
    C_00073C30_V *unkC8[5];
    C_00073C30_V *unkDC[6];
    C_00073C30_V *unkF4;
    C_001D6410 *unkF8;
    C_001D6410 *unkFC;
    C_001D6410 *unk100;
    C_001D6410 *unk104;
    C_001D6410 *unk108;
    C_001D6410 *unk10C;
    C_001D6410 *unk110;
    C_001D6410 *unk114;
    C_001D6410 *unk118;
    char pad11C[0x7C];
    C_00073C30_V *unk198[2];
    C_00073C30_V *unk1A0[2];
    char pad1A8[0x14];
    C_001D6410 *unk1BC;
    void func_00157660(void);
    void func_00073C30(void);
};

void C_00073620::func_00073620(void) {
    unk78->func_001D5AD0();
    unk7C->func_001D5AD0();
    C_001D5AD0 **ptr = &unkA4[0];
    int count = 5;
    do {
        (*(ptr - 5))->func_001D5AD0();
        (*ptr)->func_001D5AD0();
        ptr++;
        count--;
    } while (count != 0);
    if (unk6C != 0) {
        unk74->func_001D5AD0();
        return;
    }
    unk70->func_001D5AD0();
}

void C_000739D0::func_000739D0(void) {
    func_000737A0();
    func_00073620();
    func_00157960();
}

void C_000739F0::func_000739F0(float param_1) {
    extern float D_00278500;
    unk84 += param_1;
    if (unk6C != 0 && unk84 >= D_00278500) {
        virt4();
        unk64->unk190->func_000683F0();
    }
    func_0005EA10(param_1);
}

int C_00073A50::func_00073A50(int *param_1, int param_2) {
    extern int D_002B9040;
    int func_001361E0(int, int, int *, int);
    if (unk8C != 0) {
        D_002B9040 = param_1[2];
        unk8C = 0;
    }
    if (unk6C == 0) {
        if (func_001361E0(5, 2, param_1, -2147483648) == 0 &&
            func_001361E0(24, 2, param_1, -2147483648) == 0) {
            return func_00157BF0(param_1, param_2);
        }
        unk64->func_00031610(4, 1);
        unk6C = 1;
        unk84 = 0.0f;
    }
    return 0;
}

void SPFPSResultsScreen::func_00073C30(void)
{
    int i;
    vtbl = &D_00278D54;
    for (i = 0; i < 2; i++) {
        if (unk64[i]) { unk64[i]->func_001D6410(); func_001E891B(unk64[i]); }
        if (unk70[i]) { unk70[i]->func_001D6410(); func_001E891B(unk70[i]); }
        if (unk7C[i]) { unk7C[i]->func_001D6410(); func_001E891B(unk7C[i]); }
        if (unk88[i]) { unk88[i]->func_001D6410(); func_001E891B(unk88[i]); }
    }
    unkA0 = 0;
    unkA4 = 0;
    unkA8 = 0;
    if (unkFC) { unkFC->func_001D6410(); func_001E891B(unkFC); }
    if (unkF8) { unkF8->func_001D6410(); func_001E891B(unkF8); }
    for (i = 0; i < 2; i++) {
        if (unkAC[i]) { unkAC[i]->destroyObject(1); unkAC[i] = 0; }
    }
    for (i = 0; i < 2; i++) {
        if (unk198[i]) { unk198[i]->destroyObject(1); unk198[i] = 0; }
        if (unk1A0[i]) { unk1A0[i]->destroyObject(1); unk1A0[i] = 0; }
    }
    if (unkF4) { unkF4->destroyObject(1); unkF4 = 0; }
    for (i = 0; i < 5; i++) {
        if (unkB4[i]) { unkB4[i]->destroyObject(1); unkB4[i] = 0; }
        if (unkC8[i]) { unkC8[i]->destroyObject(1); unkC8[i] = 0; }
    }
    for (i = 0; i < 6; i++) {
        if (unkDC[i]) { unkDC[i]->destroyObject(1); unkDC[i] = 0; }
    }
    if (unk100) { unk100->func_001D6410(); func_001E891B(unk100); unk100 = 0; }
    if (unk104) { unk104->func_001D6410(); func_001E891B(unk104); unk104 = 0; }
    if (unk108) { unk108->func_001D6410(); func_001E891B(unk108); unk108 = 0; }
    if (unk10C) { unk10C->func_001D6410(); func_001E891B(unk10C); unk10C = 0; }
    if (unk114) {
        if (unk10C) { unk10C->func_001D6410(); func_001E891B(unk10C); unk10C = 0; }
    }
    if (unk110) { unk110->func_001D6410(); func_001E891B(unk110); unk110 = 0; }
    if (unk114) { unk114->func_001D6410(); func_001E891B(unk114); unk114 = 0; }
    if (unk118) { unk118->func_001D6410(); func_001E891B(unk118); unk118 = 0; }
    if (unk1BC) { unk1BC->func_001D6410(); func_001E891B(unk1BC); unk1BC = 0; }
    func_00157660();
}

