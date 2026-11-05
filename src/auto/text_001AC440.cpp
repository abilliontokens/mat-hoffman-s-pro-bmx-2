/* 16 functions from 0x001AC440 to 0x001ACFE0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001AC900 {
    undefined4 func_001AC900(byte param_1);
};

struct C_001AC790 {
    void func_001AC790(int param_1);
};

void *func_001E8A44(unsigned int size);
void func_001E891B(void *p);
int func_001EA426(const char *a, const char *b);

struct StringTableEntry {
    const char *name;
    int value;
    int data;
    int refCount;
};

struct StringTable {
    void *vtbl;
    int unk4;
    int count;
    int capacity;
    int unk10;
    StringTableEntry *entries;
    int func_001AC680(const char *name, int value);
    void func_001AC750(int index, int data);
    int func_001AC7B0(const char *name);
};

struct DynamicStringTable {
    void func_001AC830();
    void *func_001AC920(int flags);
};


void C_001AC790::func_001AC790(int param_1)
{
  int in_ECX = (int)this;
  int *piVar1;
  
  piVar1 = (int *)(param_1 * 0x10 + 0xc + *(int *)(in_ECX + 0x14));
  *piVar1 = *piVar1 + -1;
  return;
}

undefined4 C_001AC900::func_001AC900(byte param_1)
{
  int func_001AC3D0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AC3D0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

