/* 3 functions from 0x001C7EB0 to 0x001C8960, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Obj { virtual ~Obj(); virtual void d1(); virtual void d2(); };
struct Pool { int func_001AC7B0(void *p, int n); void func_001B26C0(int h); };
struct Entry { char pad[0x2c]; void *e2c; void *e30; void *e34; void *e38; void *e3c; int e40; int e44; };
struct WaterBase { ~WaterBase(); };
struct Water : WaterBase {
    void *vtbl; char pad0[0x28]; Entry *entries; char pad1[8]; int count; Obj *obj3c; char pad2[0x14]; Obj **list54; int h58[4]; int n68; char pad4[0x64]; Obj **arrd0; char pad5[0x34]; void *p108; char pad6[0x114]; Obj *p220;
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

Water::~Water()
{
    vtbl = &D_0028E864;
    if (entries) {
        for (int i = 0; i < count; i++) {
            D_002AA6C0->func_001B26C0(D_002AA6C0->func_001AC7B0((char *)entries[i].e30 + 0x18, 1));
            D_002AA6C0->func_001B26C0(D_002AA6C0->func_001AC7B0((char *)entries[i].e2c + 0x18, 1));
            D_002AA6C0->func_001B26C0(D_002AA6C0->func_001AC7B0((char *)entries[i].e34 + 0x18, 1));
            D_002AA6C0->func_001B26C0(D_002AA6C0->func_001AC7B0((char *)entries[i].e38 + 0x18, 1));
            if (entries[i].e3c) {
                func_001E8390(entries[i].e3c);
                entries[i].e3c = 0;
            }
            entries[i].e40 = 0;
            entries[i].e44 = 0;
        }
        func_001E891B(entries);
        entries = 0;
    }
    if (obj3c) obj3c->d2();
    if (arrd0) {
        for (int i = 0; i < n68; i++) {
            arrd0[i]->d2();
            arrd0[i] = 0;
        }
        func_001E891B(arrd0);
        arrd0 = 0;
    }
    Obj **p = list54;
    if (p) {
        while (*p) { Obj *o = *p; p++; o->d2(); }
        func_001E891B(list54);
        list54 = 0;
    }
    int *q = h58 + 2;
    for (int k = 0; k < 2; k++, q++) {
        if (q[-2] != -1) D_002A829C->func_001B26C0(q[-2]);
        if (q[0] != -1) D_002A829C->func_001B26C0(q[0]);
    }
    if (p108) func_001E891B(p108);
    delete[] p220;
    D_002F08BC = 0;
}

