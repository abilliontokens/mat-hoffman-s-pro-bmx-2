/* 7 functions from 0x0015F120 to 0x0015FF80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_0015F860 {
    undefined4 func_0015F860(byte param_1);
};

struct C_0015F840 {
    undefined4 func_0015F840(byte param_1);
};

struct C_0015FF60_vt {
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual void slot29();
    virtual void slot30();
    virtual void slot31();
    virtual void slot32();
    virtual void slot33();
    virtual void slot34();
    virtual void slot35();
    virtual void slot36();
    virtual void slot37(int a);
};

struct C_0015FF60 {
    char unk00[0x78];
    C_0015FF60_vt *unk78;
    void func_0015FF60(int *a);
};


undefined4 C_0015F840::func_0015F840(byte param_1)
{
  int func_0015E600(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015E600();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0015F860::func_0015F860(byte param_1)
{
  int func_0015F080(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0015F080();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_0015FF60::func_0015FF60(int *a)
{
  unk78->slot37(*a);
}

