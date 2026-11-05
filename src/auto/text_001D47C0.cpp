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

extern int D_002AA470;
void *func_001E8A44(int size);

struct C_00144640 {
    C_00144640 *func_00144640(void);
    virtual void v0(int flags);
    virtual void v1(int a, int b);
    int unk4;
    int unk8;
    u8 unkC;
    char padD[3];
    void *unk10;
};

struct S_0012B2B0_Rect {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fC;
    u32 f10;
    u32 f14;
};

struct C_0012B2B0 {
    void func_0012B2B0(S_0012B2B0_Rect *in, S_0012B2B0_Rect *out);
};

struct S_002EFDB8 {
    int unk0;
    C_0012B2B0 *unk4;
};
extern S_002EFDB8 *D_002EFDB8;

/* XboxRenderQueueTweak */
struct C_001D5490 {
    int unk0;
    C_00144640 *unk4;
    void func_001D5490(void);
    void func_001D54B0(int a);
};

/* XboxViewportChangeSurfaceData */
struct C_001D53A0 {
    C_00144640 *unk0;
    struct C_001D48A0 *unk4;
    void func_001D53A0(int a);
    void func_001D5430(S_0012B2B0_Rect *in, S_0012B2B0_Rect *out, int c);
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

extern float D_00275460;
extern float D_00275F58;
int func_001B2BF0(int param_1);

struct C_001D5470 {
    C_001446B0 *unk0;
    int unk4;
    void func_001D5470(void);
};

struct C_001D5170 {
    int func_001D5110(int param);
    int func_001D5170(int param_1);
};

struct C_001D52F0 {
    char pad0[0x28];
    float unk28;
    char pad2C[0x4c - 0x2c];
    float unk4C;
    float unk50;
    char pad54[0x74 - 0x54];
    float unk74;
    float unk78;
    void func_001D52F0(float a, float b);
};

struct S_001D5360_Obj {
    virtual void Destroy(int flag);
    char pad4[8];
    unsigned char flagsC;
};

struct C_001D5360 {
    S_001D5360_Obj *unk0;
    S_001D5360_Obj *unk4;
    void func_001D5360(void);
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

int func_001D4B20(void)
{
    if (D_002F0630 != 0 && D_002ABD04 != 0) {
        D_002F0630->func_00149480();
    }
    return 1;
}

void C_001D4F40::func_001D4F40(void)
{
    func_001FFBB0();
    func_00200390(0, 0);
    func_00200390(1, 0);
    func_00200390(2, 0);
    func_00200390(3, 0);
    func_00200510(0, 0);
    func_00200510(1, 0);
    func_00200510(2, 0);
    func_00200510(3, 0);
    func_001FEE00(0, 0, 0);
    func_001FEE00(1, 0, 0);
    func_001FEE00(2, 0, 0);
    func_001FEE00(3, 0, 0);
    func_001FEE00(4, 0, 0);
    func_001FEE00(5, 0, 0);
    f6c->func_0014A650(0);
    f70->func_00142D00(0);
}

int __stdcall func_001D5110(int param)
{
    int a[1];
    int b[4];
    int c[5];

    func_001FF8D0(a);
    func_001FF900(b);
    if (func_00201A90(b[0], c) != 0) {
        return 0;
    }
    return func_00201B50(b[0], b[1], c[4], 0, 3, param) >= 0;
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
