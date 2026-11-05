/* 12 functions from 0x000B9AD0 to 0x000BA9F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_000BA9D0 {
    undefined4 func_000BA9D0(int param_1);
};

struct C_000BA9B0 {
    undefined4 func_000BA9B0(int param_1);
};

extern int D_0027D6AC;
void func_001E891B(void *p);
void *func_001E8A44(unsigned int size);

struct V_000B9D50 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
};

struct C_000BEDC0 {
    V_000B9D50 *func_000BEDC0(int a);
};

extern int D_0027D75C;

struct C_001BD870 {
    void func_001BD870(int a);
};

struct C_001C3D60 {
    void func_001C3D60(int a);
};
extern C_001C3D60 *D_002F07B8;

struct BmxUIMain {
    void *vtbl;
    char pad4[0x13C];
    int f140;
    char pad144[0xC];
    int f150;
    u8 f154;
    char pad155[0x103];
    int f258;
    int pad25C;
    int f260;
    int f264;
    int f268;
    int f26C;
    int f270;
    int pad274;
    int f278;
    int f27C;
    int f280;
    int f284;
    int f288;
    int f28C;
    int f290;
    int f294;
    int f298;
    int f29C;
    int f2A0;
    int f2A4;
    int f2A8;
    int f2AC;
    int f2B0[8];
    int f2D0[8];
    BmxUIMain *func_000BA360(int a);
    void func_000BE540();
    void func_001577A0(V_000B9D50 *obj, int flags);
    BmxUIMain *func_000B9D30(int a);
    void func_000B9D50();
    void *func_000BA2A0(unsigned int flags);
};

struct C_000BA2D0 {
    char pad0[0x110];
    int count;
    void **items;
    void *unk118;
    int pad11C;
    void *unk120;
    char pad124[0x8];
    void *unk12C;
    void func_000BA2D0();
};


BmxUIMain *BmxUIMain::func_000B9D30(int a)
{
    func_000BA360(a);
    vtbl = (void *)&D_0027D6AC;
    return this;
}

void BmxUIMain::func_000B9D50()
{
    void *m = func_001E8A44(0x98);
    V_000B9D50 *obj = m ? ((C_000BEDC0 *)m)->func_000BEDC0(1) : 0;
    obj->vf28();
    func_001577A0(obj, 0x1000);
}

void func_000BA290(void) {
    int func_000BC7B0(...);
    func_000BC7B0();
}

void *BmxUIMain::func_000BA2A0(unsigned int flags)
{
    vtbl = (void *)&D_0027D6AC;
    func_000BE540();
    if (flags & 1) func_001E891B(this);
    return this;
}

void C_000BA2D0::func_000BA2D0()
{
    if (items) {
        for (int i = 0; i < count; i++) {
            func_001E891B(items[i]);
        }
        func_001E891B(items);
    }
    if (unk120) func_001E891B(unk120);
    if (unk118) func_001E891B(unk118);
    if (unk12C) func_001E891B(unk12C);
}

BmxUIMain *BmxUIMain::func_000BA360(int a)
{
    int i;
    ((C_001BD870 *)this)->func_001BD870(a);
    vtbl = (void *)&D_0027D75C;
    f26C = 0;
    f150 = 0;
    f154 = 0;
    f258 = 0;
    f260 = 0;
    f264 = 0;
    f268 = 0;
    f270 = 0;
    f278 = 0;
    f27C = 0;
    f280 = 0;
    f284 = 0;
    f288 = 0;
    f28C = 0;
    f290 = 0;
    f294 = 0;
    f140 = 0;
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    for (i = 0; i < 8; i++) {
        f2B0[i] = 0;
        f2D0[i] = 0;
    }
    f2A4 = 0;
    f2A8 = 0;
    f2AC = 0;
    D_002F07B8->func_001C3D60(0);
    return this;
}

void __stdcall func_000BA430(int a0, int a1, int a2, int a3) {
}

undefined4 C_000BA9B0::func_000BA9B0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x120) + -4 + param_1 * 4);
}

undefined4 C_000BA9D0::func_000BA9D0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0x110) + -4 + param_1 * 4);
}

