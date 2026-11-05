/* 15 functions from 0x001D5760 to 0x001D6600, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D5AA0 {
    undefined4 func_001D5AA0(void);
};


undefined4 C_001D5AA0::func_001D5AA0(void)
{
  extern undefined4 D_002A829C;
  extern undefined4 D_002AA6C0;
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(short *)(*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x5c) + 4) * 0x10 + 4 +
                                       *(int *)(D_002A829C + 0x14)) + 0x54) + 0x18) * 0x10 + 4 +
          *(int *)(D_002AA6C0 + 0x14));
}
