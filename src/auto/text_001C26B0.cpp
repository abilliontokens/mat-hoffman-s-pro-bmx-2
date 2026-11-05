/* 14 functions from 0x001C26B0 to 0x001C36B0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001C2F70 {
    undefined4 func_001C2F70(void);
};

struct UIWidgetMovementControl {
    void func_001C0DD0(int slot, int value, int key);
    void func_001C1030(int slot, int value, int key);
    void func_001C3000(int p1, int p2, int value, int id);
    void func_001C3170(int p1, int p2, int value, int id);
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

void UIWidgetMovementControl::func_001C3000(int p1, int p2, int value, int id)
{
    switch (id) {
    case 0x2c: func_001C0DD0(0, value, 10); break;
    case 0x2d: func_001C0DD0(1, value, 11); break;
    case 0x2e: func_001C0DD0(2, value, 8); break;
    case 0x2f: func_001C0DD0(3, value, 9); break;
    case 0x30: func_001C0DD0(4, value, 2); break;
    case 0x31: func_001C0DD0(5, value, 1); break;
    case 0x32: func_001C0DD0(6, value, 3); break;
    case 0x33: func_001C0DD0(7, value, 0); break;
    case 0x34: func_001C0DD0(8, value, 6); break;
    case 0x35: func_001C0DD0(9, value, 5); break;
    case 0x36: func_001C0DD0(10, value, 14); break;
    case 0x37: func_001C0DD0(11, value, 7); break;
    case 0x38: func_001C0DD0(12, value, 4); break;
    case 0x39: func_001C0DD0(13, value, 15); break;
    case 0x3a: func_001C0DD0(14, value, 13); break;
    case 0x3b: func_001C0DD0(15, value, 12); break;
    }
}

void UIWidgetMovementControl::func_001C3170(int p1, int p2, int value, int id)
{
    switch (id) {
    case 0x2c: func_001C1030(0, value, 10); break;
    case 0x2d: func_001C1030(1, value, 11); break;
    case 0x2e: func_001C1030(2, value, 8); break;
    case 0x2f: func_001C1030(3, value, 9); break;
    case 0x30: func_001C1030(4, value, 2); break;
    case 0x31: func_001C1030(5, value, 1); break;
    case 0x32: func_001C1030(6, value, 3); break;
    case 0x33: func_001C1030(7, value, 0); break;
    case 0x34: func_001C1030(8, value, 6); break;
    case 0x35: func_001C1030(9, value, 5); break;
    case 0x36: func_001C1030(10, value, 14); break;
    case 0x37: func_001C1030(11, value, 7); break;
    case 0x38: func_001C1030(12, value, 4); break;
    case 0x39: func_001C1030(13, value, 15); break;
    case 0x3a: func_001C1030(14, value, 13); break;
    case 0x3b: func_001C1030(15, value, 12); break;
    }
}

