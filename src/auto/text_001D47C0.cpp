/* 28 functions from 0x001D47C0 to 0x001D5760, found by Ghidra. */
#include "common.h"

extern int D_0028F578;
extern int D_00284E94;
extern int D_0028F584;

static __forceinline void Init_001D48E0(int *p)
{
    p[0x20] = 0x3f800000;
    p[0x1f] = 0;
    p[0x1e] = 0;
    p[0x1d] = 0;
    for (int i = 0; i < 300; i++) {
        p[0x25 + i] = 0;
    }
    for (int i = 0; i < 300; i++) {
        p[0x25 + i] = i;
    }
}

extern int D_002ABD04;

void func_001FFBB0(void);
void __stdcall func_00200390(int index, int value);
void __stdcall func_00200510(int index, int value);
void __stdcall func_001FEE00(int index, int ptr, int size);
void __stdcall func_001FF8D0(int *out);
void __stdcall func_001FF900(int *out);
int __stdcall func_00201A90(int a, int *out);
int __stdcall func_00201B50(int a, int b, int c, int d, int e, int f);

struct C_001446B0 {
    void func_001446B0(int a0, int a1, int a2);
};

struct C_0014A650 {
    void func_0014A650(int a0);
};

struct C_00142D00 {
    void func_00142D00(int a0);
};

struct C_00149480 {
    void func_00149480(void);
};
extern C_00149480 *D_002F0630;

struct C_001D54F0 {
    int unk0;
    C_001446B0 *unk4;
    void func_001D54F0(void);
};

struct C_001D4F40 {
    char pad0[0x6c];
    C_0014A650 *f6c;
    C_00142D00 *f70;
    void func_001D4F40(void);
};

struct C_001D5640 {
    int func_001D5640(u8 param_1);
};

struct C_001D48A0 {
    int unk0;
    int unk4;
    C_001D48A0* func_001D48A0(u8 param_1);
};

struct C_001D48E0 {
    int *func_001D48E0(void);
};

struct C_0014A630 {
    void func_0014A630();
};

struct C_001B65E0 {
    void func_001B65E0();
};

struct C_001D4B00 {
    char pad0[0x6c];
    C_0014A630 *f6c;
    C_001B65E0 *f70;
    int func_001D4B00(void);
};
struct C_001D5480 {
    int unk0;
    int unk4;
    C_001D5480* func_001D5480(void);
};

struct C_001D5350 {
    int unk0;
    int unk4;
    C_001D5350* func_001D5350(void);
};

struct C_001D5600 {
    char pad0[0x58];
    int unk58;
    void func_001D5600(void);
};


C_001D48A0* C_001D48A0::func_001D48A0(u8 param_1)
{
  int func_001E891B(...);

  unk0 = (int)&D_0028F578;
  if (unk4 != 0) {
    func_001E891B(unk4);
  }
  unk0 = (int)&D_00284E94;
  if ((param_1 & 1) != 0) {
    func_001E891B(this);
  }
  return this;
}

int *C_001D48E0::func_001D48E0(void)
{
  int func_001827B0(...);
  int *in_ECX = (int *)this;

  func_001827B0();
  *in_ECX = (int)&D_0028F584;
  in_ECX[0x1f] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x20] = 0x3f800000;
  in_ECX[0x18] = 0x1b02;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  Init_001D48E0(in_ECX);
  in_ECX[0x24] = 0xffffffff;
  in_ECX[0x23] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  return in_ECX;
}

int C_001D4B00::func_001D4B00(void)
{
  f6c->func_0014A630();
  f70->func_001B65E0();
  return 1;
}

C_001D5350* C_001D5350::func_001D5350(void) {
    unk0 = 0;
    unk4 = 0;
    return this;
}

C_001D5480* C_001D5480::func_001D5480(void) {
    extern int D_0028F5CC;
    unk0 = (int)&D_0028F5CC;
    unk4 = 0;
    return this;
}

void C_001D54F0::func_001D54F0(void)
{
    unk4->func_001446B0(0, 0, -1);
}

void C_001D5600::func_001D5600(void) {
    int __stdcall func_001D5190(int);
    func_001D5190(unk58);
}

int C_001D5640::func_001D5640(u8 param_1)
{
  int func_001D5500(...);
  int func_001E891B(...);
  int in_ECX = (int)this;

  func_001D5500();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

/* end */
