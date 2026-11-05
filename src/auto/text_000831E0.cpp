/* 18 functions from 0x000831E0 to 0x00083B50, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

extern float D_00275544;

static inline void CopyName(char *dst, const char *src)
{
    char c;
    do {
        c = *src;
        *dst = c;
        src++;
        dst++;
    } while (c != 0);
}

struct C_00083710 {
    void func_00083710(undefined4 param_1, undefined4 param_2);
};

struct C_000831E0 {
    char pad0[0x54];
    int f54;
    int f58;
    char pad5C[8];
    int f64;
    char pad68[0xCC - 0x68];
    int fCC;
    int fD0;
    int fD4;
    int fD8;
    char padDC[0x120 - 0xDC];
    int f120;
    int f124;
    int f128;
    char pad12C[0x138 - 0x12C];
    float f138;
    char pad13C[0x150 - 0x13C];
    int f150;
    char pad154[0x15C - 0x154];
    int f15C;
    char pad160[0x198 - 0x160];
    int f198;
    char s19C[0x200 - 0x19C];
    int f200;
    int f204;
    char pad208[4];
    int f20C;
    char s210[0x274 - 0x210];
    int f274;
    int f278;
    char s27C[0x64];
    int f2E0;
    int f2E4;
    int f2E8;
    int a2EC[100];
    int a47C[100];
    int f60C;
    int f610;
    char s614[0x64];
    char s678[4][0x64];
    int f808[4];
    char pad818[0xC28 - 0x818];
    int fC28;
    int fC2C;
    char padC30[0xC40 - 0xC30];
    int fC40;
    int fC44;
    int fC48;
    int fC4C;
    char padC50[4];
    int fC54;
    int fC58;
    int fC5C;
    char padC60[4];
    char sC64[0xCA0 - 0xC64];
    float fCA0;
    char sCA4[0x32];
    char sCD6[0x32];
    void func_000831E0(void);
    void func_000836C0(int a, float b);
    void func_00083850(void);
    void func_00083880(void);
    int func_000839F0(const char *name, int a, int id);
    void func_00083A70(const char *name);
    void func_000838B0(int a0);
    void func_000838F0(const char *name, int flag);
    int func_00083970(const char *name, int a1, int key);
    void func_00083B20(const char *name);
};

extern float D_002755E8;

struct C_000836A0 {
    char pad0[0xCC];
    int unkCC;
    float unkD0;
    void func_000836A0(float a0);
};

struct C_00083B00 {
    char pad0[0x17C];
    int unk17C;
    int unk180;
    void func_00083B00(int a0);
};

struct C_00083960 {
    char pad0[0x204];
    int unk204;
    void func_00083960(void);
};

struct C_00083950 {
    char pad0[0x200];
    int unk200;
    void func_00083950(void);
};


void C_000831E0::func_000831E0(void)
{
    int i;
    memset(sCA4, 0, 0x32);
    memset(sCD6, 0, 0x32);
    fD4 = 0;
    fD8 = 0;
    f138 = 0;
    f120 = 0;
    f124 = 0;
    fC2C = 0;
    f2E4 = 0;
    f2E8 = 0;
    f64 = 0;
    fC4C = 0;
    fD0 = 0;
    f274 = 0;
    f54 = 0;
    f58 = 0;
    fCC = 0;
    f198 = 0;
    f200 = 0;
    f204 = 0;
    fC40 = 0;
    fC44 = 0;
    fC48 = 0;
    fC54 = 0;
    for (i = 0; i < 100; i++) {
        a2EC[i] = -1;
        a47C[i] = -1;
    }
}

void C_000836A0::func_000836A0(float a0) {
    unkCC = 1;
    unkD0 = a0 + unkD0;
}

void C_000831E0::func_000836C0(int a, float b)
{
    f138 = b + f138;
    if (b > D_00275544) {
        f15C = 2;
    }
    f128 = 1;
    fD0 = a;
    fCC = 1;
}

void C_00083710::func_00083710(undefined4 param_1, undefined4 param_2)
{
  int func_001ADCC0(...);
  extern undefined D_00276F28;
  int in_ECX = (int)this;
  
  func_001ADCC0(in_ECX + 0xca4,0x32,((undefined *)&D_00276F28),param_1);
  *(undefined4 *)(in_ECX + 0x150) = 1;
  *(undefined4 *)(in_ECX + 0x58) = 1;
  *(undefined4 *)(in_ECX + 0x5c) = param_2;
  return;
}

void C_000831E0::func_00083850(void)
{
    fC40 = 1;
    f15C = 2;
    f138 = f138 + 0.5f;
}

void C_000831E0::func_00083880(void)
{
    fC44 = 1;
    f15C = 2;
    f138 = f138 + 0.5f;
}

void C_000831E0::func_000838B0(int a0)
{
    fC54 = 1;
    fC58 = a0;
    f15C = 2;
    f138 = f138 + D_002755E8;
}

void C_000831E0::func_000838F0(const char *name, int flag)
{
    char *dst = s19C;
    char c;

    do {
        c = *name++;
        *dst++ = c;
    } while (c != 0);
    f198 = 1;
    f150 = 1;
    if (flag != 0) {
        f15C = 2;
        f138 = f138 + D_002755E8;
    }
}

void C_00083950::func_00083950(void) {
    unk200 = 1;
}

void C_00083960::func_00083960(void) {
    unk204 = 1;
}

int C_000831E0::func_00083970(const char *name, int a1, int key)
{
    int i;
    char *dst;
    char c;

    if (*name == 0) {
        return 0;
    }
    for (i = 0; i < f2E4; i++) {
        if (a2EC[i] == key) {
            return 0;
        }
    }
    a2EC[f2E4] = key;
    f2E4++;
    dst = s210;
    do {
        c = *name++;
        *dst++ = c;
    } while (c != 0);
    f274 = a1;
    f20C = 1;
    return 1;
}

int C_000831E0::func_000839F0(const char *name, int a, int id)
{
    int i;
    if (*name != 0) {
        for (i = 0; i < f2E8; i++) {
            if (a47C[i] == id) {
                return 0;
            }
        }
        a47C[f2E8] = id;
        f2E8++;
        CopyName(s27C, name);
        f2E0 = a;
        f278 = 1;
        return 1;
    }
    return 0;
}

void C_000831E0::func_00083A70(const char *name)
{
    int i;
    if (fC28 == 0 && f60C == 0) {
        if (*name != 0) {
            CopyName(s614, name);
            f60C = 1;
        }
    } else {
        for (i = 0; i < 4; i++) {
            if (f808[i] == 0) {
                CopyName(s678[i], name);
                f808[i] = 1;
                return;
            }
        }
    }
}

void C_00083B00::func_00083B00(int a0) {
    unk17C = 1;
    unk180 = a0;
}

void C_000831E0::func_00083B20(const char *name)
{
    char *dst = sC64;
    char c;

    fC5C = 1;
    do {
        c = *name++;
        *dst++ = c;
    } while (c != 0);
    fCA0 = 1.0f;
}

