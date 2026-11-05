/* 8 functions from 0x0017D580 to 0x0017E2C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_0028909C;
extern void *D_002EFD80;

struct C_0017D580 {
    undefined4 func_0017D580(byte param_1);
};

struct C_0017DAC0 {
    undefined4 func_0017DAC0(byte param_1);
};

struct C_0017D5A0 {
    void *vtbl;
    char pad4[0x94];
    u32 flags98;
    char pad9C[0x7E4];
    u32 unk880;
    s32 unk884;
    u32 unk888;
    u32 unk88C;
    u32 unk890;
    u32 unk894;
    u32 unk898;
    u32 unk89C;
    char pad8A0[0x10];
    u32 unk8B0;
    void func_00192720();
    void func_0017C360(int a1, int a2, int a3, int a4, int a5);
    C_0017D5A0 *func_0017D5A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

struct C_0017DC00 {
    char pad0[4];
    C_0017DC00 **arr4;
    int f8;
    void func_0017DC00();
    void func_0017D120(int a0);
    void func_0017E1D0(int x0, int y0, int x1, int y1, int x, int y, int size, int minSize);
};


undefined4 C_0017D580::func_0017D580(byte param_1)
{
  int func_0017C520(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0017C520();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0017D5A0 *C_0017D5A0::func_0017D5A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  func_00192720();
  vtbl = &D_0028909C;
  D_002EFD80 = this;
  flags98 &= ~1;
  unk880 = 0;
  unk888 = 0;
  unk88C = 0;
  unk890 = 0;
  unk898 = 0;
  unk894 = 0;
  unk89C = 0;
  unk8B0 = 0;
  unk884 = -1;
  func_0017C360(a1, a3, a4, a6, a7);
  return this;
}

undefined4 C_0017DAC0::func_0017DAC0(byte param_1)
{
  int func_0017CE40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_0017CE40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_0017DC00::func_0017DC00()
{
  int i;

  for (i = 0; i < 4; i++) {
    if (arr4 && arr4[i]) {
      arr4[i]->func_0017DC00();
    } else {
      break;
    }
  }
  ((C_0017DC00 *)D_002EFD80)->func_0017D120(f8);
}

void C_0017DC00::func_0017E1D0(int x0, int y0, int x1, int y1, int x, int y, int size, int minSize)
{
    int i;

    if (size >= minSize) {
        for (i = 0; i < 4; i++) {
            C_0017DC00 *child;
            if (arr4 && (child = arr4[i]) != 0) {
                int cx = x + ((i & 2) ? size : 0);
                int cy = y + ((i & 1) ? size : 0);
                if (x0 <= cx + size && x1 >= cx && y0 <= cy + size && y1 >= cy) {
                    if (cx < x0 || cx + size > x1 || cy < y0 || cy + size > y1) {
                        child->func_0017E1D0(x0, y0, x1, y1, cx, cy, size >> 1, minSize);
                    } else {
                        child->func_0017DC00();
                    }
                }
            }
        }
    }
    ((C_0017DC00 *)D_002EFD80)->func_0017D120(f8);
}

