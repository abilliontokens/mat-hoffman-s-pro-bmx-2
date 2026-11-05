/* 14 functions from 0x001C26B0 to 0x001C36B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C2F70 {
    undefined4 func_001C2F70(void);
};

struct UIWidgetMovementControl {
    void func_001C0DD0(int slot, int value, int key);
    void func_001C3000(int p1, int p2, int value, int id);
};


undefined4 C_001C2F70::func_001C2F70(void)
{
  int __stdcall func_001C04D0(int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x6c) != 0) {
    func_001C04D0((int)(*(int *)(in_ECX + 0x6c)));
  }
  return 1;
}
