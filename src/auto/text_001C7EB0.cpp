/* 3 functions from 0x001C7EB0 to 0x001C8960, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Obj { virtual ~Obj(); virtual void d1(); virtual void d2(); };
struct Pool { int func_001AC7B0(void *p, int n); void func_001B26C0(int h); };
struct Entry { char pad[0x2c]; void *e2c; void *e30; void *e34; void *e38; void *e3c; int e40; int e44; };
struct WaterBase { void func_00157660(); };
struct Water : WaterBase {
    void *vtbl; char pad0[0x28]; Entry *entries; char pad1[8]; int count; Obj *obj3c; char pad2[0x14]; Obj **list54; int h58[4]; int n68; char pad4[0x64]; Obj **arrd0; char pad5[0x34]; void *p108; char pad6[0x114]; void *p220;
    ~Water();
};
extern int D_0028E864, D_002F08BC;
extern Pool *D_002AA6C0, *D_002A829C;
void func_001E8390(void *);
void func_001E891B(void *);
struct C_001C8720 {
    undefined4 func_001C8720(byte param_1);
};


undefined4 C_001C8720::func_001C8720(byte param_1)
{
  int func_001C75A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001C75A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
