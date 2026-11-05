/* 13 functions from 0x0005E600 to 0x0005F3C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" void *memset(void *dst, int c, unsigned int n);
extern int D_00278484;
extern int D_002A1CB0;
extern int D_002A1CB4;
extern int D_002A1CB8;
extern int D_002A1CBC;

struct C_0005E600 {
    int w[0x38];
    void func_00157600(int a0);
    C_0005E600 *func_0005E600(int a0);
};

struct C_0005E9D0 {
    void func_0005E9D0(float param_1);
};

struct C_0005E9F0 {
    void func_0005E9F0(int param_1);
};

void func_001E891B(void *p);

extern "C" unsigned int strlen(const char *s);
extern "C" int strcmp(const char *a, const char *b);
char *func_001E8920(char *dst, const char *src, int n);

extern int D_0027850C;
extern int D_0027857C;

struct C_0005ECA0 {
    void *vtbl;
    char pad4[0x14];
    int unk18;
    char pad1C[8];
    int unk24[8];
    int unk44[8];
    int unk64[8];
    int unk84[4];
    int unk94[2];
    char pad9C[0xAC - 0x9C];
    int unkAC[5];
    int unkC0[5];
    int unkD4[2];
    int unkDC[2];
    int unkE4[2];
    int unkEC;
    int unkF0;
    int unkF4;
    int unkF8;
    int unkFC;
    int unk100;
    int unk104;
    int unk108;
    int unk10C;
    int unk110;
    int unk114;
    int unk118;
    int unk11C;
    int unk120;
    int unk124;
    char pad128[4];
    int unk12C;
    int unk130;
    void func_00157600(int a0);
    C_0005ECA0 *func_0005ECA0(int a0);
};

struct C_0005E840 {
    char *unk0;
    char pad4[0x4A];
    u8 unk4e;
    u8 unk4f;
    u8 unk50;
    void func_0005E840(const char *name);
};

struct C_0005E790 {
    int unk0;
    void func_00157660(void);
    void *func_0005E790(int flags);
};

struct C_0005E7C0 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x4c];
    unsigned char f58;
    void func_0005E7C0(float param_1, float param_2);
};

struct C_0005E800 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x4c];
    unsigned char f58;
    void func_0005E800(int param_1, int param_2);
};

struct C_0005E960 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x42];
    unsigned char f4e;
    void func_0005E960(int param_1, int param_2);
};

union U_0005E9A0_Color {
    unsigned int raw;
    struct {
        unsigned int lo : 24;
        unsigned int hi : 8;
    } b;
};

struct C_0005E9A0 {
    char pad0[0x48];
    U_0005E9A0_Color f48;
    char pad4c[2];
    unsigned char f4e;
    void func_0005E9A0(unsigned int param_1);
};

struct C_0005E920 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x42];
    unsigned char f4e;
    void func_0005E920(float param_1, float param_2);
};

struct C_5EA10_Pos {
    char pad0[0x24];
    float f24;
};

struct C_5EA10_Rider {
    char pad0[0x9E8];
    C_5EA10_Pos *f9E8;
    C_5EA10_Pos *f9EC;
};

struct C_5EA10_Riders {
    char pad0[0x1A8];
    C_5EA10_Rider *f1A8[8];
};

struct C_5EA10_Game {
    char pad0[0x4E0];
    C_5EA10_Riders *f4E0;
};

struct C_5EA10_Players {
    char pad0[0x64];
    C_5EA10_Game *f64;
    char pad68[0x90 - 0x68];
    int f90;
};

struct C_5EA10_Mode {
    char pad0[4];
    int f4;
    char pad8[0x300 - 8];
    int f300[8];
};

struct C_5EA10_Pad {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual int v44();
};

struct C_5EA10_Event {
    int f0;
    int type;
    int pad;
    int one;
    int flags;
};

struct C_5EA10_Params {
    int one;
    float scale;
    int z[4];
};

struct C_00135D30 {
    void func_00135D30(int dir, C_5EA10_Event *ev, int pad);
};

struct C_5EA10_Input {
    char pad0[0x14];
    C_5EA10_Pad *f14[8];
    char pad34[0xCC0 - 0x34];
    C_00135D30 *fCC0;
};

struct C_5EA10_Root {
    char pad0[8];
    C_5EA10_Input *f8;
    char padC[0x2A4 - 0xC];
    C_5EA10_Players *f2A4;
    char pad2A8[0x2E0 - 0x2A8];
    C_5EA10_Mode *f2E0;
};

struct C_5EA10_Cam {
    char pad0[0x40];
    float f40;
    float f44;
};

struct C_5EA10_World {
    char pad0[0x4E4];
    C_5EA10_Cam *f4E4;
};

extern C_5EA10_Root *D_002A8490;
extern C_5EA10_World *D_002B9120;
extern float D_00275544;
extern float D_00277FBC;
extern float D_002755E8;

struct BmxMenu {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4C();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5C(C_5EA10_Event *ev, C_5EA10_Params *p);
    char pad4[0x20];
    float f24[8];
    float f44[8];
    void func_00157A00(int a0);
    void func_0005EA10(int a0);
};

C_0005E600 *C_0005E600::func_0005E600(int a0)
{
    int *p;
    int i;

    func_00157600(a0);
    w[0] = (int)&D_00278484;
    p = &w[14]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[18]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[22]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[26]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[32];
    i = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
    } while (--i != 0);
    w[55] = 0x3f800000;
    w[54] = 0;
    w[53] = 0;
    w[52] = 0;
    w[9] = 0;
    w[10] = 1;
    w[11] = 0;
    w[12] = 0;
    w[13] = 0;
    w[14] = D_002A1CB0;
    w[15] = D_002A1CB4;
    w[16] = D_002A1CB8;
    w[17] = D_002A1CBC;
    w[18] = D_002A1CB0;
    w[19] = D_002A1CB4;
    w[20] = D_002A1CB8;
    w[21] = D_002A1CBC;
    w[22] = D_002A1CB0;
    w[23] = D_002A1CB4;
    w[24] = D_002A1CB8;
    w[25] = D_002A1CBC;
    w[26] = D_002A1CB0;
    w[27] = D_002A1CB4;
    w[28] = D_002A1CB8;
    w[29] = D_002A1CBC;
    w[30] = 0;
    w[31] = 0;
    memset(&w[32], 0, 0x40);
    w[48] = 0x3f800000;
    w[49] = 0x3f800000;
    w[50] = 0;
    w[51] = 0x424d5518;
    w[52] = D_002A1CB0;
    w[53] = D_002A1CB4;
    w[54] = D_002A1CB8;
    w[55] = D_002A1CBC;
    return this;
}

void *C_0005E790::func_0005E790(int flags)
{
    extern int D_00278484;
    unk0 = (int)&D_00278484;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0005E7C0::func_0005E7C0(float param_1, float param_2)
{
    if (f4 != param_1 || f8 != param_2) {
        f4 = param_1;
        f8 = param_2;
        f58 |= 1;
    }
}

void C_0005E800::func_0005E800(int param_1, int param_2)
{
    float f2 = (float)param_2;
    float f1 = (float)param_1;
    if (f4 == f1 && f8 == f2) {
        return;
    }
    f4 = f1;
    f8 = f2;
    f58 |= 1;
}

void C_0005E840::func_0005E840(const char *name)
{
    int len = strlen(name);
    C_0005E840 *p;
    int n;

    if (unk50 == len && strcmp(unk0, name) == 0) {
        return;
    }
    p = this;
    n = len > p->unk4f ? p->unk4f : len;
    p->unk50 = n;
    func_001E8920(p->unk0, name, n);
    p->unk0[n] = 0;
    p->unk4e |= 2;
    p->unk4e |= 4;
    p->unk4e |= 1;
    p->unk4e |= 8;
}

void C_0005E920::func_0005E920(float param_1, float param_2)
{
    if (f4 != param_1 || f8 != param_2) {
        f4 = param_1;
        f8 = param_2;
        f4e |= 6;
    }
}

void C_0005E960::func_0005E960(int param_1, int param_2)
{
    float f2 = (float)param_2;
    float f1 = (float)param_1;
    if (f4 == f1 && f8 == f2) {
        return;
    }
    f4 = f1;
    f8 = f2;
    f4e |= 6;
}

void C_0005E9A0::func_0005E9A0(unsigned int param_1)
{
    if (f48.raw != param_1) {
        f4e |= 8;
        f48.b.lo = param_1;
    }
}

void C_0005E9D0::func_0005E9D0(float param_1)
{
  int in_ECX = (int)this;
  
  if (*(float *)(in_ECX + 0x34) != param_1) {
    *(float *)(in_ECX + 0x34) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 6;
  }
  return;
}

void C_0005E9F0::func_0005E9F0(int param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x44) != param_1) {
    *(int *)(in_ECX + 0x44) = param_1;
    *(byte *)(in_ECX + 0x4e) = *(byte *)(in_ECX + 0x4e) | 6;
  }
  return;
}

C_0005ECA0 *C_0005ECA0::func_0005ECA0(int a0)
{
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    for (i = 0; i < 8; i++) {
        unk24[i] = 0;
        unk44[i] = 0;
    }
    vtbl = &D_0027857C;
    unkFC = 0;
    unk100 = 0;
    unk18 = -1;
    for (i = 0; i < 2; i++) {
        unkE4[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        unk84[i] = 0;
    }
    unk104 = 0;
    unk108 = 1;
    for (i = 0; i < 2; i++) {
        unk94[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        unkD4[i] = 0;
        unkDC[i] = 0;
    }
    unkF4 = 0;
    unkF0 = 0;
    unk10C = 0;
    unk110 = 0;
    unk114 = -1;
    unk11C = -1;
    unk118 = 0;
    for (i = 0; i < 5; i++) {
        unkAC[i] = 0;
        unkC0[i] = 0;
    }
    for (i = 0; i < 8; i++) {
        unk64[i] = 0;
    }
    unkEC = 0;
    unk124 = 0;
    unk120 = 0;
    unkF8 = 0;
    unk12C = 0;
    unk130 = 1;
    return this;
}

