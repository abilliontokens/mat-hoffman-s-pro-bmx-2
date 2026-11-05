/* 6 functions from 0x000342C0 to 0x00034EF0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00034890 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    C_00034890* func_00034890(void);
};


void func_000347F0(char *param_1)
{
  int func_001E8D25(...);
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    cVar2 = func_001E8D25((int)*param_1);
    *param_1 = cVar2;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

C_00034890* C_00034890::func_00034890(void) {
    unk0 = -1;
    unk4 = 0;
    unk8 = 0;
    unkC = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    return this;
}
