/* 5 functions from 0x0006B4B0 to 0x0006C470, found by Ghidra. */
#include "common.h"

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_0006B4B0 {
    char pad0[0x98];
    C_001D5AD0 *unk98;
    C_001D5AD0 *unk9C;
    char padA0[0xB8 - 0xA0];
    C_001D5AD0 *unkB8[2];
    char padC0[0xF8 - 0xC0];
    C_001D5AD0 *unkF8[5];
    char pad10C[4];
    C_001D5AD0 *unk10C[16];
    char pad14C[0x154 - 0x14C];
    int unk154;
    char pad158[0x164 - 0x158];
    int unk164;
    int unk168;
    void func_0006B4B0(void);
};

struct C_001B1980 {
    void func_001B1980(void);
};

extern int D_0027850C;
extern int D_002789F4;

struct C_0006C380 {
    void *vtbl;
    char pad4[0x14];
    int unk18;
    char pad1C[8];
    int unk24[8];
    int unk44[8];
    int unk64[2];
    C_001B1980 *unk6C;
    C_001B1980 *unk70;
    int unk74[2];
    int unk7C[5];
    int unk90[5];
    C_001B1980 *unkA4;
    C_001B1980 *unkA8;
    C_001B1980 *unkAC;
    C_001B1980 *unkB0;
    char padB4[4];
    int unkB8;
    int unkBC;
    int unkC0;
    int unkC4;
    int unkC8;
    int unkCC;
    int unkD0;
    int unkD4;
    int unkD8;
    float unkDC;
    int unkE0;
    int unkE4;
    int unkE8;
    void func_00157600(int a0);
    C_0006C380 *func_0006C380(int a0);
};

struct C_001B17D0 {
    void func_001B17D0(char *s);
};

struct C_0005E840 {
    void func_0005E840(void *p);
};

struct S_0006BBF0_15C {
    char pad0[0x21];
    u8 unk21;
    char pad22[0x1f4 - 0x22];
    int unk1f4;
};

struct S_0006BBF0_Res {
    char pad0[0xed0];
    int unkED0;
};

struct S_0006BBF0_2E8 {
    char pad0[4];
    S_0006BBF0_Res *unk4;
};

struct S_0006BBF0_Global {
    char pad0[0x2e8];
    S_0006BBF0_2E8 *unk2E8;
};

extern S_0006BBF0_Global *D_002A8490;
extern char D_00277038[];
extern int D_002789B8;

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern "C" int func_001AC330(char *dst, int src, char *suffix);

struct C_0006BBF0 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18(int a);
    char pad4[0x64 - 4];
    C_001B17D0 *unk64[7];
    char pad80[0x158 - 0x80];
    int unk158;
    S_0006BBF0_15C *unk15C;
    char pad160[4];
    int unk164;
    int unk168;
    int unk16C;
    int unk170;
    char pad174[4];
    C_0005E840 *unk178;
    char pad17C[0x184 - 0x17C];
    int unk184;
    int unk188;
    char pad18C[0x1a8 - 0x18C];
    int unk1a8;
    char pad1AC[0x1b4 - 0x1AC];
    int unk1b4;
    int unk1b8;
    int unk1bc;
    C_0005E840 *unk1c0;
    int unk1c4;
    int unk1c8;
    int unk1cc;
    int unk1d0;
    int unk1d4;
    int unk1d8;
    char pad1DC[0x1e4 - 0x1DC];
    int unk1e4;
    char pad1E8[4];
    int unk1ec;
    int unk1f0;
    char pad1F4[0x1fc - 0x1F4];
    int unk1fc;
    int func_0006BBF0(void);
};

struct S_0006BD40_Msg {
    char pad0[8];
    int unk8;
};

struct C_00031610 {
    void func_00031610(int a, int b);
};

struct C_0006BD40 {
    void *vtbl;
    char pad4[0x154 - 4];
    int unk154;
    int unk158;
    C_00031610 *unk15C;
    int unk160;
    char pad164[4];
    int unk168;
    char pad16C[0x174 - 0x16C];
    char **unk174;
    C_0005E840 *unk178;
    int unk17C;
    int unk180;
    int unk184;
    int unk188;
    char pad18C[0x1a8 - 0x18C];
    int unk1a8;
    char pad1AC[0x1b4 - 0x1AC];
    int unk1b4;
    int unk1b8;
    int unk1bc;
    char pad1C0[0x1d8 - 0x1C0];
    int unk1d8;
    char pad1DC[0x1e4 - 0x1DC];
    int unk1e4;
    int unk1e8;
    int unk1ec;
    int unk1f0;
    int unk1f4;
    S_0006BD40_Msg *unk1f8;
    void func_00157BF0(S_0006BD40_Msg *m, int a);
    int func_0006BD40(S_0006BD40_Msg *m, int a);
};

extern int D_002B9024;
extern char D_002789C4[];
extern char D_002789C0[];
extern char D_002789BC[];
extern "C" int func_001361E0(int a, int b, S_0006BD40_Msg *m, int key);
extern "C" char *func_001E8AF0(char *a, char *b);

struct C_0006BB90 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    char pad4[0x64 - 4];
    C_001B1980 *unk64[8];
    char pad84[0x150 - 0x84];
    int unk150;
    char pad154[0x1b4 - 0x154];
    int unk1b4;
    int unk1b8;
    void func_0006BB90(void);
};

void C_0006BB90::func_0006BB90(void) {
    D_002EFDB8->vf7(1);
    unk1b4 = 0;
    unk1b8 = 0;
    D_002EFDB8->vf8();
    unk150 = 0;
    for (int i = 0; i < 8; i++) {
        unk64[i]->func_001B1980();
    }
    vf4();
}

int C_0006BBF0::func_0006BBF0(void)
{
    char name[7];
    char path[20];
    int i;

    vf6();
    vf18(0);
    unk15C->unk21 &= ~4;
    unk1b4 = 0;
    unk1bc = 0;
    unk1b8 = 0;
    unk15C->unk1f4 = 1;
    unk170 = 0;
    unk164 = 0;
    unk168 = 0;
    unk16C = 0;
    unk184 = 0;
    unk1c4 = 0;
    unk1c8 = 0;
    unk1cc = 0;
    unk1d0 = 0;
    unk1d4 = 0;
    unk188 = 0;
    unk1ec = 0;
    unk1f0 = 0;
    unk1d8 = 0x10;
    for (i = 0; i < 7; i++) {
        func_001ADCC0(name, 0x104, D_00277038, i + 1);
        func_001AC330(path, D_002A8490->unk2E8->unk4->unkED0, name);
        unk64[i]->func_001B17D0(path);
    }
    unk188 = 0x24;
    unk178->func_0005E840(&D_002789B8);
    unk1c0->func_0005E840(&D_002789B8);
    unk1fc = 0;
    unk158 = -1;
    unk1e4 = 1;
    unk1a8 = 1;
    return 1;
}

C_0006C380 *C_0006C380::func_0006C380(int a0)
{
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    for (i = 0; i < 8; i++) {
        unk24[i] = 0;
        unk44[i] = 0;
    }
    vtbl = &D_002789F4;
    unkCC = 0;
    unkD0 = 0;
    unk18 = -1;
    unkC8 = 0;
    unkC4 = 0;
    for (i = 0; i < 2; i++) {
        unk64[i] = 0;
        unk74[i] = 0;
    }
    unkD4 = 0;
    unkDC = 0.5f;
    unkB8 = -1;
    for (i = 0; i < 2; i++) {
        (&unk6C)[i] = 0;
    }
    unkBC = 0;
    unkC0 = 0;
    unkE0 = 0;
    unkD8 = 0;
    unkE8 = 1;
    unkE4 = -1;
    for (i = 0; i < 5; i++) {
        unk7C[i] = 0;
        unk90[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        (&unkA4)[i] = 0;
    }
    return this;
}

