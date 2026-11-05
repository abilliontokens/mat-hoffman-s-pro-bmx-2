/* 7 functions from 0x000195B0 to 0x0001A5A6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0001A3E0 {
    undefined4 func_0001A3E0(byte param_1);
};

extern int D_00275854;
extern int D_002754B8;

void func_001E891B(void *ptr);
void func_001E8390(void *ptr);
int func_00011260(int lo, int hi);

/* global game state */
struct S_002A8490 {
    char pad0[0x238];
    int f238;
};
extern S_002A8490 *D_002A8490;

/* the object the Tiki AI states work on */
struct S_00019790_Owner {
    char pad0[0x4d4];
    int f4d4;
    char pad4d8[0x274];
    int f74c;
    int f750;
    void func_00017D20(int a);
    void func_00019070(void);
    void func_001C6DA0(int a, int b);
};

struct C_00019790 {
    char pad0[8];
    S_00019790_Owner *f8;
    int fC;
    void func_00019790(void);
};

struct C_002754B8 {
    void *vtbl;
    ~C_002754B8() { vtbl = (void *)&D_002754B8; }
    static void operator delete(void *ptr) { func_001E891B(ptr); }
};

struct S_00019830_Sub {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
};

struct C_00019830 {
    void *vtbl;
    char pad4[0x380];
    S_00019830_Sub *unk384;
    void *unk388;
    void *unk38C;
    void *unk390;
    void *unk394;
    char pad398[0x49c - 0x398];
    void *unk49C;
    char pad4A0[4];
    void *unk4A4;
    void func_00019830(void);
    void func_001C75A0(void);
};


undefined4 C_0001A3E0::func_0001A3E0(byte param_1)
{
  int func_00019830(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00019830();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
