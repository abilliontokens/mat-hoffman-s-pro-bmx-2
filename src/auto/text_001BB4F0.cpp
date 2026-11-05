/* 16 functions from 0x001BB4F0 to 0x001BC310, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BC020 {
    undefined4 func_001BC020(byte param_1);
};

extern int D_0028D244;
extern int D_0028D2BC;

void func_001E891B(void *p);
void func_001BB4F0();

struct C_001BB5F0 {
    void *vtbl;
    void func_00157660();
    void *func_001BB5F0(unsigned int flags);
};

struct C_001BBAA0 {
    void func_001BBAA0(void *a, void *b);
};

struct C_001BB620 {
    char pad0[0xe8];
    int unkE8;
    int unkEC;
    char padF0[0x20];
    int unk110;
    int unk114;
    void func_001D3F50();
    void func_001BB620(void *a1, void *a2, int a3, int a4);
};

struct C_001BB860 {
    void *vtbl;
    char pad4[0xb0];
    void *unkB4;
    void *unkB8;
    void *unkBC;
    void *unkC0;
    void *unkC4;
    void *unkC8;
    void *unkCC;
    void func_00157660();
    void func_001BB860();
};

struct C_001334E0 {
    void func_001334E0(int a);
    void func_001334F0(void *a);
};

struct C_001BB900 {
    char pad0[0x2e4];
    void *unk2e4;
    int func_001BB900(void *a1);
};


void *C_001BB5F0::func_001BB5F0(unsigned int flags)
{
    vtbl = &D_0028D244;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001BB620::func_001BB620(void *a1, void *a2, int a3, int a4)
{
    unkE8 = (int)a1;
    unkEC = (int)a2;
    ((C_001BBAA0 *)a1)->func_001BBAA0(this, (void *)&func_001BB4F0);
    ((C_001BBAA0 *)unkEC)->func_001BBAA0(this, (void *)&func_001BB4F0);
    unk110 = a3;
    unk114 = a4;
    func_001D3F50();
}

undefined4 C_001BC020::func_001BC020(byte param_1)
{
  int func_001BB860(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BB860();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
