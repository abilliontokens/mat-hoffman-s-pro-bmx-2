/* 9 functions from 0x00089290 to 0x0008A190, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0008A000 {
    undefined4 func_0008A000(int param_1);
};

struct C_0005E840 {
    void func_0005E840(int param_1);
};

struct C_001D6600 {
    void func_001D6600(void);
};

struct C_00089FA0 {
    char pad0[0x24];
    C_001D6600 *unk24;
    C_001D6600 *unk28;
    C_001D6600 *unk2C;
    C_001D6600 *unk30;
    char pad34[0xf4];
    int unk128;
    int unk12C;
    void func_00089FA0(void);
};

struct C_0008A020 {
    char pad0[0x24];
    C_0005E840 *unk24;
    C_0005E840 *unk28;
    void func_0008A020(int param_1);
};

struct C_0008A040 {
    char pad0[0x2c];
    C_0005E840 *unk2C;
    C_0005E840 *unk30;
    void func_0008A040(int param_1);
};

struct C_0008A080 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A080(void);
};

struct C_0008A060 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A060(void);
};

struct C_0008A0A0 {
    char pad0[0x128];
    int unk128;
    int unk12C;
    void func_0008A0A0(void);
};


void C_00089FA0::func_00089FA0(void)
{
    if (unk128 == 0) {
        if (unk12C != 0) {
            unk24->func_001D6600();
            unk30->func_001D6600();
            return;
        }
    } else if (unk12C == 0) {
        unk28->func_001D6600();
        unk2C->func_001D6600();
        return;
    }
    unk24->func_001D6600();
    unk2C->func_001D6600();
}

undefined4 C_0008A000::func_0008A000(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(in_ECX + 0x120) = param_1;
  return 1;
}

void C_0008A020::func_0008A020(int param_1)
{
    unk24->func_0005E840(param_1);
    unk28->func_0005E840(param_1);
}

void C_0008A040::func_0008A040(int param_1)
{
    unk2C->func_0005E840(param_1);
    unk30->func_0005E840(param_1);
}

void C_0008A060::func_0008A060(void) {
    unk128 = 1;
    unk12C = 0;
}

void C_0008A080::func_0008A080(void) {
    unk128 = 0;
    unk12C = 1;
}

void C_0008A0A0::func_0008A0A0(void) {
    unk128 = 0;
    unk12C = 0;
}
