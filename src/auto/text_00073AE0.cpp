/* 9 functions from 0x000733F0 to 0x00073EF0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_0027850C;
extern int D_00278D54;

struct C_00073AE0 {
    void *vtbl;                  /* 0x00 */
    char pad04[0x14];            /* 0x04 */
    u32 unk18;                   /* 0x18 */
    char pad1C[0x08];            /* 0x1C */
    u32 unk24[8];                /* 0x24 */
    u32 unk44[8];                /* 0x44 */
    u32 unk64[3];                /* 0x64 */
    u32 unk70[3];                /* 0x70 */
    u32 unk7C[3];                /* 0x7C */
    u32 unk88[3];                /* 0x88 */
    u32 unk94[3];                /* 0x94 */
    char padA0[0x0C];            /* 0xA0 */
    u32 unkAC[2];                /* 0xAC */
    u32 unkB4[5];                /* 0xB4 */
    u32 unkC8[5];                /* 0xC8 */
    u32 unkDC[6];                /* 0xDC */
    char padF4[0x04];            /* 0xF4 */
    u32 unkF8;                   /* 0xF8 */
    u32 unkFC;                   /* 0xFC */
    u32 unk100;                  /* 0x100 */
    u32 unk104;                  /* 0x104 */
    u32 unk108;                  /* 0x108 */
    u32 unk10C;                  /* 0x10C */
    u32 unk110;                  /* 0x110 */
    u32 unk114;                  /* 0x114 */
    u32 unk118;                  /* 0x118 */
    u32 unk11C;                  /* 0x11C */
    u32 unk120;                  /* 0x120 */
    u32 unk124;                  /* 0x124 */
    char pad128[0x04];           /* 0x128 */
    u32 unk12C[8];               /* 0x12C */
    u32 unk14C[8];               /* 0x14C */
    u32 unk16C[8];               /* 0x16C */
    char pad18C[0x08];           /* 0x18C */
    u32 unk194;                  /* 0x194 */
    u32 unk198[2];               /* 0x198 */
    u32 unk1A0[2];               /* 0x1A0 */
    u32 unk1A8;                  /* 0x1A8 */
    u32 unk1AC;                  /* 0x1AC */
    char pad1B0[0x04];           /* 0x1B0 */
    u32 unk1B4;                  /* 0x1B4 */
    u32 unk1B8;                  /* 0x1B8 */
    char pad1BC[0x04];           /* 0x1BC */
    u32 unk1C0;                  /* 0x1C0 */
    void *func_00073AE0(int param_1);
    void func_00157600(int a0);
};

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
    void func_00073C30(void);
};

void *C_00073AE0::func_00073AE0(int param_1) {
    u32 *p;
    int n;
    int i;

    func_00157600(param_1);
    vtbl = &D_0027850C;
    p = unk44;
    n = 8;
    do {
        p[-8] = 0;
        p[0] = 0;
        p++;
    } while (--n != 0);
    vtbl = &D_00278D54;
    unk1C0 = 0;
    unk11C = 0;
    unk18 = -1;
    unkFC = 0;
    unkF8 = 0;
    p = unk70;
    n = 2;
    do {
        p[-3] = 0;
        p[0] = 0;
        p[3] = 0;
        p[6] = 0;
        p++;
    } while (--n != 0);
    for (i = 0; i < 3; i++) {
        unk94[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        unkAC[i] = 0;
    }
    unk120 = 0;
    p = unk1A0;
    n = 2;
    do {
        p[-2] = 0;
        p[0] = 0;
        p++;
    } while (--n != 0);
    unk194 = 0;
    unk124 = 0;
    p = unk14C;
    n = 8;
    do {
        p[-8] = 0;
        p[0] = 0;
        p[8] = 0;
        p++;
    } while (--n != 0);
    unk1AC = 1;
    unk1A8 = -1;
    p = unkC8;
    n = 5;
    do {
        p[-5] = 0;
        p[0] = 0;
        p++;
    } while (--n != 0);
    for (i = 0; i < 6; i++) {
        unkDC[i] = 0;
    }
    unk100 = 0;
    unk104 = 0;
    unk108 = 0;
    unk10C = 0;
    unk110 = 0;
    unk114 = 0;
    unk118 = 0;
    unk1B4 = 0;
    unk1B8 = 0;
    return this;
}

