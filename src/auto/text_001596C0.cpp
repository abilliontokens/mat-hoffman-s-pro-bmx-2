/* 11 functions from 0x001596C0 to 0x0015A660, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0015A4F0 {
    char pad0[0x3C];
    int unk3C;
    void func_0015A4F0(int a0, int a1);
    void func_001A4790(int, int, int, int, int, int, int);
};

struct C_0015A640 {
    undefined4 func_0015A640(byte param_1);
};

struct GrindLine {
    char pad0[0x14];
    char *unk14;
    char *unk18;
    char *unk1C;
    char pad20[0x30];
    void *unk50;
    char pad54[0x24];
    void *unk78;
    int unk7C;
    int unk80;
};

struct GrindLineManager {
    char pad0[0x24];
    int unk24;
    int unk28;
    char pad2C[8];
    GrindLine **unk34;
    int func_0015A520(void);
    void func_0015A180(void *arg);
    void func_0015A490(char *a1, int a2, int a3);
    int func_0015A540(int a1);
    void func_0015A250(GrindLine *a);
};

struct C_001596C0_Sub {
    int func_001A4840(void);
    void func_001A4A20(void);
};

struct C_00193870 {
    void func_00193870(GrindLine *a);
};

struct C_00193500 {
    void func_00193500(void);
};

void func_001E891B(void *p);
int func_001EA426(char *a, char *b);


void C_0015A4F0::func_0015A4F0(int a0, int a1) {
    ((C_0015A4F0*)((char*)this + 64))->func_001A4790(unk3C, 1, a0, a1, 0, 0, 0);
}

int GrindLineManager::func_0015A520(void)
{
    C_001596C0_Sub *sub = (C_001596C0_Sub *)((char *)this + 0x40);
    int r;

    r = sub->func_001A4840();
    if (r == 0) {
        sub->func_001A4A20();
        r = 0;
    }
    return r;
}

undefined4 C_0015A640::func_0015A640(byte param_1)
{
  int func_0015A580(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015A580();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
