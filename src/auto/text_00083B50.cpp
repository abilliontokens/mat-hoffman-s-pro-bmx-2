/* 9 functions from 0x00083B50 to 0x000849F0, found by Ghidra. */
#include "common.h"

extern int D_002795C4;
void func_001E891B(void *p);

struct S_00083B50_B {
    char pad0[0x4];
    u32 f4;
    char pad8[0x2C8];
    u32 f2D0;
};

struct S_00083B50_A {
    char pad0[0x2E0];
    S_00083B50_B *f2E0;
};

extern S_00083B50_A *D_002A8490;

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00084980_24 {
    void func_001D6410(void);
};

struct C_00084980_V {
    virtual void v0(int a);
};

struct HuntPointsOverlay {
    void *vtbl;              /* 0x00 */
    char pad04[0x20];        /* 0x04 */
    C_00084980_24 *unk24;    /* 0x24 */
    C_00084980_24 *unk28;    /* 0x28 */
    C_00084980_V *unk2C;     /* 0x2C */
    C_00084980_V *unk30;     /* 0x30 */
    u32 unk34;               /* 0x34 */
    u32 unk38;               /* 0x38 */
    u32 unk3C;               /* 0x3C */
    u32 unk40;               /* 0x40 */
    HuntPointsOverlay *func_00084930(int param_1);
    void func_00084980(void);
};

struct C_000848F0 {
    char pad0[0xD50];
    u32 unkD50;
    u32 unkD54;
    u32 unkD58;
    u32 unkD5C;
    char padD60[0x4];
    u32 unkD64;
    char padD68[0xC];
    u32 unkD74;
    void func_000848F0(void);
};
struct C_000843C0 {
    char pad0[0xC5C];
    int unkC5C;
    char padC60[0x4];
    char unkC64;
    char padC65[0x3B];
    int unkCA0;
    void func_000843C0(void);
};

struct C_000847A0 {
    char pad0[0x120];
    int unk120;
    char pad124[0x10];
    int unk134;
    void func_000847A0(void);
};


void C_000843C0::func_000843C0(void) {
    unkC5C = 0;
    unkC64 = 0;
    unkCA0 = 0;
}

void C_000847A0::func_000847A0(void) {
    unk134 = 0;
    unk120 = 0;
}
