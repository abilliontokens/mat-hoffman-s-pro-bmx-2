/* 31 functions from 0x0001E260 to 0x0001EFA0, found by Ghidra. */
#include "common.h"
#include <stdlib.h>
#include "ghidra.h"
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

struct C_0001E930 {
    void *vtbl;
    char pad4[0x28];
    void *func_0001E930(unsigned int flags);
    void func_0001E800();
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

