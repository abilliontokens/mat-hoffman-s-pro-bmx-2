/* 8 functions from 0x0017D580 to 0x0017E2C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_0028909C;
extern void *D_002EFD80;

struct S_QuadTreeListNode {
    S_QuadTreeListNode *next;
    void *slot[4];
};
struct S_QuadTreePool {
    S_QuadTreeListNode *func_0001E8A0(void);
    void func_0001E790(S_QuadTreeListNode *node);
};
struct S_QuadTreeGlobal {
    char pad0[0x90];
    S_QuadTreePool *f90;
    S_QuadTreePool *f94;
    u8 f98;
    char pad99[0x880 - 0x99];
    int f880;
};

extern int D_002890E8;
struct S_QTNode { void *vtbl; int f4; int f8; int fC; float f10; };
extern "C" void *__cdecl func_001E8A44(unsigned int size);

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
    virtual void v0();
    virtual void func_0017DC40(int x0, int y0, int x1, int y1, int size);
    C_0017DC00 **arr4;
    int f8;
    void func_0017D500(int a0, int a1);
    void func_0017DC00();
    void *func_0017CFF0(void *item);
    void *func_0017DAE0(void *item, int x0, int y0, int x1, int y1, int x, int y, int size, int minSize);
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

S_QTNode *func_0017D630()
{
    S_QTNode *n = (S_QTNode *)func_001E8A44(0x14);
    if (n != 0) {
        n->vtbl = &D_002890E8;
        n->f8 = 0;
        n->f4 = 0;
        ((S_QuadTreeGlobal *)D_002EFD80)->f880++;
        n->fC = 0;
        n->f10 = -3.4028235e38f;
        return n;
    }
    return 0;
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

void *C_0017DC00::func_0017DAE0(void *item, int x0, int y0, int x1, int y1, int x, int y, int size, int minSize)
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
                        item = child->func_0017DAE0(item, x0, y0, x1, y1, cx, cy, size >> 1, minSize);
                    } else {
                        item = child->func_0017CFF0(item);
                    }
                }
            }
        }
    }
    if (f8) {
        S_QuadTreeListNode *n = ((S_QuadTreeGlobal *)D_002EFD80)->f94->func_0001E8A0();
        n->slot[0] = this;
        n->next = (S_QuadTreeListNode *)item;
        return n;
    }
    return item;
}

void C_0017DC00::func_0017DC00()
{
    int i;

    for (i = 0; i < 4; i++) {
        C_0017DC00 *child;
        if (arr4 && (child = arr4[i]) != 0) {
            child->func_0017DC00();
        }
    }
    ((C_0017DC00 *)D_002EFD80)->func_0017D120(f8);
}

void C_0017DC00::func_0017DC40(int x0, int y0, int x1, int y1, int size)
{
    int xe = x1 + size;
    int ye = y1 + size;
    int half = size >> 1;

    if (arr4) {
        if (x0 >= xe) {
            if (y0 >= ye) {
                if (arr4[0]) arr4[0]->func_0017DC40(x0, y0, x1, y1, half);
                if (arr4[1]) arr4[1]->func_0017DC40(x0, y0, x1, ye, half);
                if (arr4[2]) arr4[2]->func_0017DC40(x0, y0, xe, y1, half);
                if (arr4[3]) arr4[3]->func_0017DC40(x0, y0, xe, ye, half);
            } else {
                if (arr4[1]) arr4[1]->func_0017DC40(x0, y0, x1, ye, half);
                if (arr4[0]) arr4[0]->func_0017DC40(x0, y0, x1, y1, half);
                if (arr4[3]) arr4[3]->func_0017DC40(x0, y0, xe, ye, half);
                if (arr4[2]) arr4[2]->func_0017DC40(x0, y0, xe, y1, half);
            }
        } else {
            if (y0 >= ye) {
                if (arr4[2]) arr4[2]->func_0017DC40(x0, y0, xe, y1, half);
                if (arr4[3]) arr4[3]->func_0017DC40(x0, y0, xe, ye, half);
                if (arr4[0]) arr4[0]->func_0017DC40(x0, y0, x1, y1, half);
                if (arr4[1]) arr4[1]->func_0017DC40(x0, y0, x1, ye, half);
            } else {
                if (arr4[3]) arr4[3]->func_0017DC40(x0, y0, xe, ye, half);
                if (arr4[2]) arr4[2]->func_0017DC40(x0, y0, xe, y1, half);
                if (arr4[1]) arr4[1]->func_0017DC40(x0, y0, x1, ye, half);
                if (arr4[0]) arr4[0]->func_0017DC40(x0, y0, x1, y1, half);
            }
        }
    }
    ((C_0017DC00 *)D_002EFD80)->func_0017D500(f8, 0);
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

