/* 12 functions from 0x0014C1C0 to 0x0014CC60, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0014CA60 {
    undefined4 func_0014CA60(void);
};

struct C_0014C530 {
    char pad0[0xEC];
    int unkEC;
    void func_0014C530(void);
};

extern int D_00286924;
extern int D_002BF254;
extern f32 D_0027A094;
void func_001E891B(void *p);
void func_001E8390(void *p);
void __stdcall func_00201100(void *p);

struct C_0014C6F0 {
    void *vtbl;
    void func_0014C540();
    void func_00133E60();
    void *func_0014C6F0(int flags);
};

struct C_0014C7D0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_0014C720 {
    u8 b0;
    char pad1[0x7F];
    u8 b80;
    char pad81[0x7F];
    u8 b100;
    char pad101[0x7F];
    f32 f180;
    f32 f184;
    f32 f188;
    f32 f18C;
    f32 f190;
    f32 f194;
    f32 f198;
    f32 f19C;
    f32 f1A0;
    f32 f1A4;
    f32 f1A8;
    f32 f1AC;
    f32 f1B0;
    f32 f1B4;
    f32 f1B8;
    f32 f1BC;
    f32 f1C0;
    f32 f1C4;
    f32 f1C8;
    char pad1CC[0x20];
    u32 f1EC;
    u32 f1F0;
    u32 f1F4;
    C_0014C7D0_Obj *f1F8;
    char pad1FC[0xC];
    void *f208;
    void func_0014C720();
    void func_0014C7D0();
    f32 func_0014C830(char param);
    f32 func_0014C860(char param);
};

struct C_0014CC20 {
    char pad0[0xE];
    u8 bE;
    char padF[2];
    s8 b11;
    f32 func_0014CC20(void);
};


void C_0014C530::func_0014C530(void) {
    extern int D_002B9344;
    int func_0014B260(...);
    D_002B9344 = unkEC;
    func_0014B260();
}

void *C_0014C6F0::func_0014C6F0(int flags)
{
    vtbl = &D_00286924;
    func_0014C540();
    func_00133E60();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_0014C720::func_0014C720()
{
    b0 = 0;
    b80 = 0;
    b100 = 0;
    f180 = 0.0f;
    f184 = 0.0f;
    f188 = 0.0f;
    f18C = 0.0f;
    f190 = 0.0f;
    f194 = 0.0f;
    f198 = 0.0f;
    f19C = 0.0f;
    f1A0 = 0.0f;
    f1A4 = 0.0f;
    f1A8 = 0.0f;
    f1AC = 0.0f;
    f1B0 = 0.0f;
    f1B4 = 0.0f;
    f1B8 = 0.0f;
    f1BC = 1.0f;
    f1C0 = 1.0f;
    f1C4 = 0.0f;
    f1C8 = 0.5f;
    f1EC = 0;
    f1F4 = 0;
    f1F0 = 0;
    f1F8 = 0;
}

void C_0014C720::func_0014C7D0()
{
    if (f1F8)
        f1F8->v2();
    if (f1F0)
        func_001E8390((void *)f1F0);
    if (f1F4)
        func_001E8390((void *)f1F4);
    if (f208)
        func_00201100(f208);
    D_002BF254 = 0;
}

f32 C_0014C720::func_0014C830(char param)
{
    return (f180 - f184) * param * D_0027A094 + f180;
}

undefined4 C_0014CA60::func_0014CA60(void)
{
  extern undefined4 D_002BF250;
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(D_002BF250 + 0x54 + (uint)*(byte *)(in_ECX + 0xe) * 4) + 0x1ec);
}

