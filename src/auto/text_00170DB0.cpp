/* 11 functions from 0x00170DB0 to 0x00171D00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_00288B4C;
extern int D_00288C44;
void func_001E891B(void *);
void __stdcall func_00171340(int a);

struct C_000264C0 {
    void func_000264C0(void *param_1);
};

struct C_001712A0 {
    int unk0;
    void func_00171980(void);
    void *func_001712A0(int flags);
};

struct C_00171230 {
    char pad0[0x22C];
    int unk22C;
    void func_00157A00(int a);
    void func_00171230(int a);
};

struct C_00171270 {
    int unk0;
    char pad4[0x1AC];
    int unk1B0;
    void func_00170B60(void);
    void *func_00171270(int a);
};

struct C_00171980 {
    int unk0;
    char pad4[0x22C];
    int unk230;
    void func_00157660(void);
    void func_00171980(void);
};

struct C_001719B0 {
    void func_001719B0(int param_1);
};

extern float D_00275544;
extern float D_00275460;

struct C_001719D0 {
    char pad0[0x210];
    float f210;
    float f214;
    void func_001719D0(float param);
};


void C_00171230::func_00171230(int a) {
    ((C_000264C0 *)((char *)this + 0x2c0))->func_000264C0((char *)this + 0x280);
    ((C_000264C0 *)((char *)this + 0x280))->func_000264C0((void *)(unk22C + 0xf0));
    func_00157A00(a);
}

void *C_00171270::func_00171270(int a) {
    func_00171340(a);
    unk0 = (int)&D_00288B4C;
    unk1B0 = 2;
    func_00170B60();
    return this;
}

void *C_001712A0::func_001712A0(int flags) {
    unk0 = (int)&D_00288B4C;
    func_00171980();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00171980::func_00171980(void) {
    void *p = (void *)unk230;
    unk0 = (int)&D_00288C44;
    if (p != 0) {
        func_001E891B(p);
    }
    func_00157660();
}

void C_001719B0::func_001719B0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 != 0) {
    *(int *)(in_ECX + 0x22c) = param_1;
  }
  return;
}
