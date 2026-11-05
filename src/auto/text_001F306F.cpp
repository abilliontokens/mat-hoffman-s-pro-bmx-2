/* 29 functions from 0x001F306F to 0x001F3B78, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001F3237 {
    undefined * func_001F3237(void);
};

struct C_001F3275 {
    int unk0;
    void func_001F3275(void);
};

struct C_001F325D {
    int unk0;
    char pad4[8];
    void func_001F31D2(int param_1);
    C_001F325D *func_001F325D(int param_1);
};

struct C_001F318D {
    int unk0;
    char *unk4;
    int unk8;
    C_001F318D *func_001F318D(char **param_1);
};

struct S8_001F {
    int unk0;
    int unk4;
    S8_001F *func_001EF11B(int param_1);
    int func_001EF1E7(void);
    S8_001F *func_001EEF4F(int param_1);
};

struct C_001F306F_P1 {
    void func_001EF759(void *param_1);
};

struct C_001F311D_Ret {
    int func_001EFAB5(void);
};

struct C_001F311D_A {
    char pad0[8];
    C_001F311D_Ret *func_001EFD3B(void *param_1, int param_2, void *param_3, int param_4);
};

struct C_001F311D_P1 {
    void func_001EEEE6(void *param_1);
};

struct C_001EEE62 {
    void *func_001EEE62(int param_1, int param_2);
};


undefined * C_001F3237::func_001F3237(void)
{
  extern undefined D_00295F08;
  int in_ECX = (int)this;
  undefined *puVar1;
  
  puVar1 = *(undefined **)(in_ECX + 4);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = ((undefined *)&D_00295F08);
  }
  return puVar1;
}

void C_001F3275::func_001F3275(void) {
    extern int D_00295F1C;
    int func_001F3221(...);
    unk0 = (int)&D_00295F1C;
    func_001F3221();
}
