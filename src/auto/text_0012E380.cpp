/* 10 functions from 0x0012E380 to 0x0012F0F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void *func_001E8A44(int size);

struct C_0013B210 {
    int func_0013B930(int a, void *b, int c, int d);
    void func_0013C8A0(int a, void *b, int c, int d);
};
extern C_0013B210 *D_002BEAAC;
extern int D_002843F4;
extern f32 D_002755EC;
extern f32 D_00275460;

struct C_0012C940 {
    void func_0012C940(int a);
};

/* the 0x18-byte block CarProceduralExtended::f414 points to */
struct S_0012E5F0 {
    int count; /* number of 0x18-byte elements in arr */
    u32 f4;
    void *arr;
    u32 fC;
    u32 f10;
};

/* CarProceduralExtended */
struct C_0012EF30 {
    void *vtbl;
    char pad4[0x410];
    S_0012E5F0 *f414;
    char pad418[0xF8];
    f32 f510;
    u32 f514;
    void *f518;
    void *f51c;
    C_0012EF30 *func_0012EF30(int a);
    void func_0012E5F0(int a);
    void func_0012E6B0(int a);
};

struct C_0012E6F0 {
    undefined4 func_0012E6F0(byte param_1);
};


undefined4 C_0012E6F0::func_0012E6F0(byte param_1)
{
  int func_0012CCA0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012CCA0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
