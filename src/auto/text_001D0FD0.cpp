/* 18 functions from 0x001D0FD0 to 0x001D1BD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D15B0 {
    undefined4 func_001D15B0(void);
};

struct C_001D1A40 {
    char pad0[0x10];
    int unk10;
    void func_001D1A40(void);
};

struct C_001D1480 {
    int unk0;
    void func_001D1480(void);
};

extern int D_0028F1F0;
extern int D_0028F204;
extern int D_0026D94C;

struct C_001D1490 {
    void *vtbl;
    void func_0015A940();
    void *func_001D1490(unsigned int flags);
};

struct C_001D14C0 {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[0xC];
    void *f18;
    char pad1C[0x698];
    u8 f6B4;
    char pad6B5[3];
    void *f6B8;
    u16 f6BC;
    char pad6BE[6];
    float f6C4;
    float f6C8;
    float f6CC;
    float f6D0;
    char pad6D4[4];
    void *f6D8;
    void *f6DC;
    u16 f6E0;
    u16 f6E2;
    void func_0015AD10(int a0);
    C_001D14C0 *func_001D14C0(int a0);
};

struct C_001D1550 {
    char pad0[8];
    int f8;
    char padC[0xC];
    char *f18;
    char pad1C[0x69C];
    void *f6B8;
    char pad6BC[4];
    int f6C0;
    int func_001D1550(int a0);
};

struct C_001D1B70 {
    void *vtbl;
    char pad4[0x6B4];
    void *f6B8;
    void func_0015AE20();
    void *func_001D1B70(unsigned int flags);
};


void C_001D1480::func_001D1480(void) {
    extern int D_0028F1F0;
    int func_0015A940(...);
    unk0 = (int)&D_0028F1F0;
    func_0015A940();
}

void *C_001D1490::func_001D1490(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = &D_0028F1F0;
    func_0015A940();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_001D15B0::func_001D15B0(void)
{
  int __stdcall func_0026ECAA(int);
  int in_ECX = (int)this;
  
  func_0026ECAA((int)(*(undefined4 *)(in_ECX + 0x6b8)));
  *(undefined4 *)(in_ECX + 0x6b8) = 0;
  return 1;
}

int __stdcall func_001D1A30(int a0) {
    return 0;
}

void C_001D1A40::func_001D1A40(void) {
    unk10 = 4;
}

int __stdcall func_001D1A50(int a0, int a1, int a2) {
    return 0;
}

