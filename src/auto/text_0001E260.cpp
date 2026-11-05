/* 31 functions from 0x0001E260 to 0x0001EFA0, found by Ghidra. */
#include "common.h"
#include <stdlib.h>
#include "ghidra.h"
struct C_0001E860 {
    void func_0001E860(void);
};

struct C_0001EED0 {
    void func_0001EED0(void);
};

struct C_0001EF40 {
    undefined4 func_0001EF40(void);
};

extern int D_00275F9C;
extern int D_00275F7C;
extern int D_00276004;
extern int D_002B7D54;
extern u32 *D_002B7D4C;
extern u32 D_002B7D50;
extern u32 *D_002A0DAC;
void func_001E891B(void *p);

void *func_001E8AA5(int size);
void func_001E8390(void *p);

/* Fixed-size element pool: chunks are linked through their first word. */
struct C_0001E930 {
    void *vtbl;
    int unk4;
    int unk8;           /* elements per chunk */
    void **unkC;        /* first chunk */
    void **unk10;       /* last chunk */
    void **unk14;       /* spare chunks */
    int unk18;          /* elements used in last chunk */
    unsigned int unk1C; /* element size */
    int unk20;          /* chunk size */
    void **unk24;       /* freed elements */
    int unk28;          /* bytes allocated from the heap */
    int unk2C;          /* bytes in use */
    void *func_0001E930(unsigned int flags);
    void func_0001E790(void **elem);
    int func_0001E7B0();
    void func_0001E800();
    void *func_0001E8A0();
    void func_0001DFF0();
};

struct GR_BitString {
    void *vtbl;
    u32 unk4;
    void *unk8;
    void *unkC;
    u8 unk10;
    char pad11[3];
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    void func_0001E3F0(u32 *a0, u32 a1, int a2);
    GR_BitString(u32 *a0, u32 a1, int a2);
    void func_0001E460();
    void *func_0001E6D0(unsigned int flags);
    void func_0001E710(int a0);
    void func_0001E5D0(int a0);
    void D_0001E650(int a0);
};

struct C_0001EF70 {
    void *vtbl;
    void func_00157660();
    void *func_0001EF70(unsigned int flags);
};

struct C_0001E740 {
    void *vtbl;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    int unk1C;
    int unk20;
    int unk24;
    int unk28;
    void func_0001DFE0();
    C_0001E740 *func_0001E740(int a0, int a1);
};

struct C_0001EF00 {
    char pad0[0xE0];
    int unkE0;
    void func_0001EF00(int a0);
};

struct C_0001EDD0 {
    char pad0[0x28];
    int unk28;
    void func_0001EDD0(int a0);
};

struct C_0001EDC0 {
    char pad0[0x24];
    int unk24;
    void func_0001EDC0(int a0);
};


void GR_BitString::func_0001E3F0(u32 *a0, u32 a1, int a2) {
    unk18 = a2 ? -1 : 0;
    unk4 = a1;
    unk14 = 0;
    vtbl = &D_00275F7C;
    unk8 = a0;
    unk1C = 1;
    unkC = a0;
    unk10 = 0x80;
    D_002B7D54 = 0;
    D_002B7D4C = a0;
    u8 *b = (u8 *)a0;
    D_002B7D50 = (u32)((b[0] << 24) | (b[1] << 16) | (b[2] << 8) | b[3]);
}

void GR_BitString::func_0001E460() {
    vtbl = &D_00275F7C;
    if (unk1C == 0 && unk8 != 0) {
        func_001E891B(unk8);
    }
}

#pragma optimize("y", off)
u32 __stdcall func_0001E550(int a0) {
    u32 *table = D_002A0DAC;
    u32 v = table[a0];
    u32 cur = D_002B7D50;
    D_002B7D54 += a0;
    if (D_002B7D54 < 0x20) {
        v &= cur >> (0x20 - D_002B7D54);
    } else {
        D_002B7D54 -= 0x20;
        D_002B7D4C += 1;
        u32 next = *D_002B7D4C;
        v &= cur << D_002B7D54;
        next = _byteswap_ulong(next);
        D_002B7D50 = next;
        if (D_002B7D54 != 0) {
            v |= next >> (0x20 - D_002B7D54);
        }
    }
    return v;
}
#pragma optimize("", on)

void *GR_BitString::func_0001E6D0(unsigned int flags) {
    vtbl = &D_00275F7C;
    if (unk1C == 0 && unk8 != 0) {
        func_001E891B(unk8);
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void GR_BitString::func_0001E710(int a0) {
    if (unk8 == 0 || unk4 == 0)
        return;
    if (a0 < 0) {
        func_0001E5D0(-a0);
        return;
    }
    if (a0 > 0) {
        D_0001E650(a0);
        return;
    }
}

C_0001E740 *C_0001E740::func_0001E740(int a0, int a1) {
    func_0001DFE0();
    int n = (a1 - a0) / a0;
    unk20 = a1;
    vtbl = &D_00275F9C;
    unkC = 0;
    unk10 = 0;
    unk1C = a0;
    unk24 = 0;
    unk28 = 0;
    unk14 = 0;
    unk8 = n;
    unk18 = n;
    return this;
}

void C_0001E930::func_0001E790(void **elem)
{
    if (unk1C > 4) {
        *elem = unk24;
        unk24 = elem;
        unk2C -= unk1C;
    }
}

int C_0001E930::func_0001E7B0()
{
    void **chunk = (void **)func_001E8AA5(unk20);
    if (chunk == 0) {
        return 0;
    }
    if (unkC == 0) {
        unkC = chunk;
    } else {
        *unk10 = chunk;
    }
    unk10 = chunk;
    *chunk = 0;
    unk28 += unk20;
    return 1;
}

void C_0001E930::func_0001E800()
{
    void **p;
    void **cur;

    p = unkC;
    while (p != 0) {
        cur = p;
        p = (void **)*p;
        func_001E8390(cur);
    }
    p = unk14;
    while (p != 0) {
        cur = p;
        p = (void **)*p;
        func_001E8390(cur);
    }
    unkC = 0;
    unk10 = 0;
    unk24 = 0;
    unk28 = 0;
    unk2C = 0;
    unk14 = 0;
    unk18 = unk8;
}

void C_0001E860::func_0001E860(void)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    if ((*(int *)(in_ECX + 0x14) != 0) && (*(int **)(in_ECX + 0x10) != (int *)0x0)) {
      **(int **)(in_ECX + 0x10) = *(int *)(in_ECX + 0x14);
    }
    *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0xc);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 8);
  return;
}

void *C_0001E930::func_0001E8A0()
{
    void **elem;

    if (unk18 < unk8) {
        int n = unk18 + 1;
        elem = (void **)((char *)unk10 + unk1C * n);
        unk18 = n;
    } else {
        elem = unk24;
        if (elem == 0) {
            elem = unk14;
            if (elem == 0) {
                if (func_0001E7B0() == 0) {
                    return 0;
                }
            } else {
                if (unkC == 0) {
                    unkC = elem;
                } else {
                    *unk10 = elem;
                }
                unk10 = unk14;
                unk14 = (void **)*unk10;
                *unk10 = 0;
            }
            elem = (void **)((char *)unk10 + unk1C);
            unk18 = 1;
        } else {
            unk24 = (void **)*elem;
        }
    }
    if (elem != 0) {
        unk2C += unk1C;
    }
    return elem;
}

void *C_0001E930::func_0001E930(unsigned int flags) {
    vtbl = &D_00275F9C;
    func_0001E800();
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0001EDC0::func_0001EDC0(int a0) {
    unk24 = a0;
}

void C_0001EDD0::func_0001EDD0(int a0) {
    unk28 = a0;
}

void C_0001EED0::func_0001EED0(void)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x490) = 0;
  }
  return;
}

void C_0001EF00::func_0001EF00(int a0) {
    unkE0 = a0;
}

undefined4 C_0001EF40::func_0001EF40(void)
{
  int in_ECX = (int)this;
  
  if (((*(int *)(in_ECX + 0xe0) != 0) && (*(int *)(in_ECX + 0xdc) != 0)) &&
     (*(int *)(in_ECX + 0x118) != 0)) {
    return 1;
  }
  return 0;
}

void *C_0001EF70::func_0001EF70(unsigned int flags)
{
    vtbl = (void *)&D_00276004;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

