/* 8 functions from 0x000377E0 to 0x00038760, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_00276DDC;
extern char D_002A5870[], D_00276C34[];
struct S_000380B0_Manager {
    void func_0013DFF0(char *, int);
    void func_0013B260(int);
};
extern S_000380B0_Manager *D_002BEAAC;
void func_001ADCC0(char *, int, const char *, ...);
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
struct S_000380B0_Node {
    char pad0[0x14]; int count; void *data;
};
struct S_000380B0_Array {
    int count; void *data; char pad8[0xC];
    void clear() { memset(data, 0, count * 4); count = 0; }
};
struct S_000380B0_Widget {
    virtual void v0(int); virtual void v1(); virtual void v2();
};
struct BmxEventEditor {
    void *vtbl;
    char pad4[0x498];
    void *f49C;
    char pad4A0[0x9C];
    S_000380B0_Widget *f53C;
    int f540;
    S_000380B0_Widget *f544, *f548, *f54C;
    char pad550[0x40];
    S_000380B0_Widget *f590, *f594, *f598, *f59C;
    S_000380B0_Array a, b, c, d;
    void func_000380B0();
    void func_00033220();
};
struct C_00037820 {
    undefined4 func_00037820(int param_1);
};

struct C_000377E0 {
    int func_000377E0(void);
};

extern int D_00276CE4;
extern int D_002A8490;
void func_001E891B(void *p);
void __stdcall func_00035300(void *a, int b);

struct C_000378A0 {
    int unk0;
    void func_00157660();
    void *func_000378A0(int flags);
};

struct C_000377F0 {
    int count;
    int *items;
    undefined4 func_000377F0(int param_1);
};

struct S_00037840_A {
    char pad0[0x64];
    int f64;
};

struct S_00037840_B {
    char pad0[0x24];
    int f24;
    char pad28[0xB4];
    int fDC;
    void func_001BB4D0(int a);
};


int C_000377E0::func_000377E0(void)
{
  int in_ECX = (int)this;
  
  return *(int *)(in_ECX + 0x5a0) - *(int *)(in_ECX + 0x484);
}

undefined4 C_000377F0::func_000377F0(int param_1)
{
    if (((0 < count) && (items != 0)) && (param_1 < count)) {
        items[param_1] = items[count - 1];
        count--;
        return 1;
    }
    return 0;
}

undefined4 C_00037820::func_00037820(int param_1)
{
  int* in_ECX = (int*)this;
  
  if (((0 < *in_ECX) && (in_ECX[1] != 0)) && (param_1 < *in_ECX)) {
    return *(undefined4 *)(in_ECX[1] + param_1 * 4);
  }
  return 0;
}

void func_00037840(int a1, S_00037840_B *a2, int a3, int a4)
{
    if (a4 == 0)
        return;
    if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(D_002A8490 + 0x2a4) + 0x64) + 0x4e0) + 0x1a8) + 0x1e0) != *(int *)(a1 + 0x64))
        return;
    func_00035300(&a2->f24, a2->fDC);
    a2->func_001BB4D0(0);
}

void *C_000378A0::func_000378A0(int flags)
{
    unk0 = (int)&D_00276CE4;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

