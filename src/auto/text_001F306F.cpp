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
