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
