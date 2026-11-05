/* 42 functions from 0x0005B8D0 to 0x0005C720, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0005C040 {
    undefined4 func_0005C040(int param_1, int param_2, int param_3, int param_4);
};

struct C_0005C0B0 {
    void func_0005C0B0(int param_1, int param_2, int param_3);
};

struct C_0005C070 {
    undefined4 func_0005C070(int param_1, int param_2, int param_3);
};

struct C_0005C6B0 {
    undefined4 func_0005C6B0(int param_1);
};

struct C_0005C310 {
    void func_0005C310(int param_1, int param_2);
};

struct C_0005C1B0 {
    void func_0005C1B0(int param_1, int param_2);
};

struct C_0005C170 {
    void func_0005C170(int param_1, int param_2);
};

struct C_0005C2F0 {
    undefined4 func_0005C2F0(int param_1, int param_2);
};

struct C_0005C190 {
    undefined4 func_0005C190(int param_1, int param_2);
};

struct C_0005C150 {
    undefined4 func_0005C150(int param_1, int param_2);
};

struct C_0005C020 {
    int func_0005C020(int param_1);
};

struct C_0005C340 {
    void func_0005C340(int param_1);
};

struct C_0005C1E0 {
    void func_0005C1E0(int param_1);
};

struct C_0005C130 {
    void func_0005C130(int param_1);
};

struct C_0005C330 {
    undefined4 func_0005C330(int param_1);
};

struct C_0005C200 {
    undefined4 func_0005C200(int param_1);
};

struct C_0005C1D0 {
    undefined4 func_0005C1D0(int param_1);
};

struct C_0005C120 {
    undefined4 func_0005C120(int param_1);
};

struct C_0005C710 {
    char pad0[0xCE8];
    int unkCE8;
    void func_0005C710(void);
};

struct C_0005C390 {
    char pad0[0xCE4];
    int unkCE4;
    void func_0005C390(void);
};

struct C_0005C370 {
    char pad0[0xCE0];
    int unkCE0;
    void func_0005C370(void);
};

struct C_0005C110 {
    char pad0[0xB34];
    int unkB34;
    void func_0005C110(void);
};

struct C_0005C100 {
    char pad0[0xB30];
    int unkB30;
    void func_0005C100(void);
};

struct C_0005C090 {
    char pad0[0xCEC];
    int unkCEC;
    void func_0005C090(void);
};

struct C_0005C6A0 {
    undefined * func_0005C6A0(void);
};

struct C_0005C700 {
    char pad0[0xCE8];
    int unkCE8;
    int func_0005C700(void);
};

struct C_0005C380 {
    char pad0[0xCE4];
    int unkCE4;
    int func_0005C380(void);
};

struct C_0005C360 {
    char pad0[0xCE0];
    int unkCE0;
    int func_0005C360(void);
};

struct C_0005C0F0 {
    char pad0[0xB34];
    int unkB34;
    int func_0005C0F0(void);
};

struct C_0005C0E0 {
    char pad0[0xB30];
    int unkB30;
    int func_0005C0E0(void);
};

struct C_0005C0A0 {
    char pad0[0xCEC];
    int unkCEC;
    int func_0005C0A0(void);
};

struct S_0005C650_Slot {
    int v[4];
};

struct C_0005C5B0 {
    undefined4 func_0005C5B0(int param_1, int param_2);
};

struct C_0005C600 {
    undefined4 func_0005C600(int param_1, int param_2);
};

struct C_0005C650 {
    char pad0[0x14970];
    S_0005C650_Slot slots[8];
    void func_0005C650(int param_1);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);


int C_0005C020::func_0005C020(int param_1)
{
  int in_ECX = (int)this;
  
  return param_1 * 0x1f98 + 0xd80 + in_ECX;
}

undefined4 C_0005C040::func_0005C040(int param_1, int param_2, int param_3, int param_4)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (in_ECX + 0xd8c + (param_1 * 0x7e6 + param_4 + param_3 * 0xf + param_2 * 0x2d) * 4);
}

undefined4 C_0005C070::func_0005C070(int param_1, int param_2, int param_3)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x270 + (param_2 * 0xf + param_1 * 0x2d + param_3) * 4);
}

void C_0005C090::func_0005C090(void) {
    unkCEC = 1;
}

int C_0005C0A0::func_0005C0A0(void) {
    return unkCEC;
}

void C_0005C0B0::func_0005C0B0(int param_1, int param_2, int param_3)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x270 + (param_2 * 0xf + param_1 * 0x2d + param_3) * 4) = 1;
  return;
}

int C_0005C0E0::func_0005C0E0(void) {
    return unkB30;
}

int C_0005C0F0::func_0005C0F0(void) {
    return unkB34;
}

void C_0005C100::func_0005C100(void) {
    unkB30 = 1;
}

void C_0005C110::func_0005C110(void) {
    unkB34 = 1;
}

undefined4 C_0005C120::func_0005C120(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xb38 + param_1 * 4);
}

void C_0005C130::func_0005C130(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xb38 + param_1 * 4) = 1;
  return;
}

undefined4 C_0005C150::func_0005C150(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xa10 + param_2 * 4 + param_1 * 0xc);
}

void C_0005C170::func_0005C170(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xa10 + param_2 * 4 + param_1 * 0xc) = 1;
  return;
}

undefined4 C_0005C190::func_0005C190(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x810 + (param_2 + param_1 * 8) * 4);
}

void C_0005C1B0::func_0005C1B0(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x810 + (param_2 + param_1 * 8) * 4) = 1;
  return;
}

undefined4 C_0005C1D0::func_0005C1D0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xad0 + param_1 * 4);
}

void C_0005C1E0::func_0005C1E0(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xad0 + param_1 * 4) = 1;
  return;
}

undefined4 C_0005C200::func_0005C200(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xb10 + param_1 * 4);
}

undefined4 C_0005C2F0::func_0005C2F0(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xb58 + param_2 * 4 + param_1 * 0x24);
}

void C_0005C310::func_0005C310(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xb58 + param_2 * 4 + param_1 * 0x24) = 1;
  return;
}

undefined4 C_0005C330::func_0005C330(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xcc0 + param_1 * 4);
}

void C_0005C340::func_0005C340(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xcc0 + param_1 * 4) = 1;
  return;
}

int C_0005C360::func_0005C360(void) {
    return unkCE0;
}

void C_0005C370::func_0005C370(void) {
    unkCE0 = 1;
}

int C_0005C380::func_0005C380(void) {
    return unkCE4;
}

void C_0005C390::func_0005C390(void) {
    unkCE4 = 1;
}

undefined4 C_0005C5B0::func_0005C5B0(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  if (param_2 >= 0 && param_2 <= 100) {
    *(undefined4 *)
     (in_ECX + 0x2098 +
     (param_1 * 0x7e6 + param_2 + *(int *)(param_1 * 0x1f98 + 0xd88 + in_ECX) * 100) * 4) = 1;
    return 1;
  }
  return 0;
}

undefined4 C_0005C600::func_0005C600(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  if ((-1 < param_2) && (param_2 < 0x65)) {
    *(undefined4 *)
     (in_ECX + 0x13f8 +
     (param_1 * 0x7e6 + param_2 + *(int *)(param_1 * 0x1f98 + 0xd88 + in_ECX) * 100) * 4) = 1;
    return 1;
  }
  return 0;
}

void C_0005C650::func_0005C650(int param_1)
{
    extern undefined4 D_002A8490;
    int lo;
    int hi;

    if (param_1 == 0) {
        lo = 0;
        hi = 8;
    } else {
        lo = *(int *)(*(int *)(D_002A8490 + 0x2e0) + 0x48);
        hi = lo;
    }
    if (lo < hi) {
        memset(&slots[lo], 0, (hi - lo) * 16);
    }
}

undefined * C_0005C6A0::func_0005C6A0(void)
{
  extern undefined D_00014970;
  int in_ECX = (int)this;
  
  return ((undefined *)&D_00014970) + in_ECX;
}

undefined4 C_0005C6B0::func_0005C6B0(int param_1)
{
  extern undefined4 D_002A8490;
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (in_ECX + (param_1 + 0x525c + *(int *)(*(int *)(D_002A8490 + 0x2e0) + 0x48) * 4) * 4);
}

int C_0005C700::func_0005C700(void) {
    return unkCE8;
}

void C_0005C710::func_0005C710(void) {
    unkCE8 = 1;
}

