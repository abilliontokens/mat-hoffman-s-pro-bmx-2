/* 20 functions from 0x001CD3B0 to 0x001CE140, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001CE120 {
    undefined4 func_001CE120(byte param_1);
};

extern int D_0028F004;
void *func_001E8A44(int size);

struct S_SoundElem {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a);
    virtual void v7();
    virtual void v8();
    virtual void v9(int a);
    char pad4[0x1a4];
    int f1A8;
};

struct S_SoundElemList {
    int count;
    S_SoundElem **items;
    int growBy;
    int capacity;
    int func_0015ACA0(int newCapacity);
    int func_001CDE90(S_SoundElem *elem);

    S_SoundElem *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }
};

struct XboxSoundGroup {
    void *vtbl;
    char pad4[0x24];
    int f28;
    char pad2c[4];
    S_SoundElemList list;
    u8 f40;
    char pad41[3];
    int f44;
    void func_0001C8F0(int a);
    XboxSoundGroup *func_001CD770(int a, int b);
    int func_001CD800(void);
    void func_001CD840(int a);
};


undefined4 C_001CE120::func_001CE120(byte param_1)
{
  int func_001CC140(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001CC140();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
