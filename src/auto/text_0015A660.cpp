/* 30 functions from 0x0015A660 to 0x0015B660, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0015A8E0 {
    int unk0;
    void func_00157660();
    void *func_0015A8E0(int flags);
};

struct ARec {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int pad20;
    int f24;
    char f28;
    char pad29[0x27];
};

struct C_0015A740 {
    char pad0[0x2C];
    int f2C;
    int f30;
    char pad34[4];
    ARec recs[150];
    void func_0015A740(void);
};

struct C_0015A910 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    unsigned char f14;
    char pad15[3];
    int f18;
    C_0015A910 *func_0015A910(int a);
    void func_0015A940(void);
    void *func_0015A970(unsigned char flags);
};

struct C_0015B1A0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void *func_0015B1A0(int a);
    void func_00157600(int a);
};

struct C_0015AB70 {
    char pad0[8];
    unsigned int f8;
    char padC[0xc];
    unsigned char *f18;
    int func_0015AB70(unsigned int idx);
};

struct S_0015AC20_Game {
    char pad0[0x230];
    unsigned char f230;
};

typedef bool Ret_0015AC20;

struct C_0015AC20 {
    char pad0[0x3f8];
    int f3F8;
    char pad3FC[0x149c];
    unsigned int f1898;
    Ret_0015AC20 func_0015AC20(unsigned int flags);
};

struct C_0015ABF0 {
    undefined4 func_0015ABF0(int param_1);
};

struct C_0015B4C0 {
    void func_0015B4C0(void);
};

struct C_0015B150 {
    int unk0;
    int unk4;
    int unk8;
    C_0015B150* func_0015B150(void);
};


void C_0015A740::func_0015A740(void)
{
    for (int i = 0; i < 150; i++) {
        recs[i].f08 = 0;
        recs[i].f0C = 0;
        recs[i].f00 = 0;
        recs[i].f04 = 0;
        recs[i].f10 = 0;
        recs[i].f14 = 0;
        recs[i].f18 = 0;
        recs[i].f1C = 0;
        recs[i].f24 = 0;
        recs[i].f28 = 0;
    }
    f2C = 0;
    f30 = 0;
}

void *C_0015A8E0::func_0015A8E0(int flags) {
    extern int D_00287534;
    void func_001E891B(void *);
    unk0 = (int)&D_00287534;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0015A910 *C_0015A910::func_0015A910(int a)
{
    extern int D_00287640;
    f14 &= 0xc0;
    f18 = 0;
    f4 = 0;
    f8 = 0;
    vtbl = (void *)&D_00287640;
    fC = a;
    f10 = -1;
    return this;
}

void C_0015A910::func_0015A940(void)
{
    extern int D_00287640;
    void func_001E8390(void *);
    vtbl = (void *)&D_00287640;
    if (f18 != 0) {
        func_001E8390((void *)f18);
    }
    f18 = 0;
}

void *C_0015A910::func_0015A970(unsigned char flags)
{
    extern int D_00287640;
    void func_001E8390(void *);
    void func_001E891B(void *);
    vtbl = (void *)&D_00287640;
    if (f18 != 0) {
        func_001E8390((void *)f18);
    }
    f18 = 0;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_0015AB70::func_0015AB70(unsigned int idx)
{
    return (idx < f8 && f18 != 0) ? (f18[idx * 0xc] & 2) : 0;
}

undefined4 C_0015ABF0::func_0015ABF0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 != 0) {
    *(byte *)(in_ECX + 0x6b4) = *(byte *)(in_ECX + 0x6b4) | 4;
    return 1;
  }
  *(byte *)(in_ECX + 0x6b4) = *(byte *)(in_ECX + 0x6b4) & 0xfb;
  return 1;
}

Ret_0015AC20 C_0015AC20::func_0015AC20(unsigned int flags)
{
    extern S_0015AC20_Game *D_002A8490;
    unsigned char bit = (D_002A8490->f230 >> 2) & 1;

    if (bit == 0 && (char)flags < 0) {
        return 0;
    }
    if (flags == 0x3f) {
        return 1;
    }
    if (bit == 0 || flags != 0x80) {
        if (flags == 0x80000000) {
            return f1898 == 0;
        }
    } else if (f3F8 == 1) {
        return 1;
    }
    if ((flags & 0x40) == 0) {
        return (f1898 & flags) != 0;
    }
    return (f1898 | 0x40) == flags;
}

C_0015B150* C_0015B150::func_0015B150(void) {
    extern int D_002876E0;
    unk0 = (int)&D_002876E0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

void *C_0015B1A0::func_0015B1A0(int a)
{
    extern int D_002876EC;
    func_00157600(a);
    vtbl = (void *)&D_002876EC;
    f24 = 0;
    return this;
}

void C_0015B4C0::func_0015B4C0(void)
{
  extern undefined4 D_002E28F4;
  int func_001E891B(...);
  int* in_ECX = (int*)this;
  
  D_002E28F4 = 0;
  if (*in_ECX != 0) {
    func_001E891B(*in_ECX);
  }
  return;
}

