/* 1 function from 0x00075C70 to 0x00075F30, found by Ghidra. */
#include "common.h"

extern int D_00278DF4;
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

struct MPFPSResultsScreen {
    void *vtbl;
    char pad04[0x60];
    C_001D6410 *unk64[3];
    C_001D6410 *unk70[3];
    C_001D6410 *unk7C[3];
    C_001D6410 *unk88[3];
    char pad94[0xC];
    float unkA0;
    float unkA4;
    float unkA8;
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
    void func_00075C70(void);
};

void MPFPSResultsScreen::func_00075C70(void)
{
    int i;
    vtbl = &D_00278DF4;
    for (i = 0; i < 2; i++) {
        DeleteObj(unk64[i]);
        DeleteObj(unk70[i]);
        DeleteObj(unk7C[i]);
        DeleteObj(unk88[i]);
    }
    for (int j = 0; j < 3; j++) {
        (&unkA0)[j] = 0.0f;
    }
    DeleteObj(unkFC);
    DeleteObj(unkF8);
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
    if (unk100) { DeleteObj(unk100); unk100 = 0; }
    if (unk104) { DeleteObj(unk104); unk104 = 0; }
    if (unk108) { DeleteObj(unk108); unk108 = 0; }
    if (unk10C) { DeleteObj(unk10C); unk10C = 0; }
    if (unk114) {
        DeleteObj(unk10C);
        unk10C = 0;
    }
    if (unk110) { DeleteObj(unk110); unk110 = 0; }
    if (unk114) { DeleteObj(unk114); unk114 = 0; }
    if (unk118) { DeleteObj(unk118); unk118 = 0; }
    if (unk1BC) { DeleteObj(unk1BC); unk1BC = 0; }
    func_00157660();
}
