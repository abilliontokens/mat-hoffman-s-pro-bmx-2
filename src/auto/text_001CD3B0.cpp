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
    int func_001CDED0(S_SoundElem *elem);

    S_SoundElem *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }
};

struct S_SoundGroupFlags {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
    u8 b3 : 1;
    u8 b4 : 1;
    u8 b5 : 1;
    u8 b6 : 1;
    u8 b7 : 1;
};

struct XboxSoundGroup {
    void *vtbl;
    char pad4[0x24];
    int f28;
    char pad2c[4];
    S_SoundElemList list;
    union {
        u8 f40;
        S_SoundGroupFlags f40b;
    };
    char pad41[3];
    int f44;
    void func_0001C8F0(int a);
    XboxSoundGroup *func_001CD770(int a, int b);
    int func_001CD800(void);
    void func_001CD840(int a);
};


XboxSoundGroup *XboxSoundGroup::func_001CD770(int a, int b)
{
    func_0001C8F0(b);
    vtbl = (void *)&D_0028F004;
    list.items = 0;
    list.count = 0;
    list.growBy = 0;
    list.capacity = 0;
    f40b.b0 = 0;
    list.items = (S_SoundElem **)func_001E8A44(0x20);
    f40b.b0 = 1;
    list.growBy = 0x10;
    list.capacity = 8;
    f44 = 0;
    return this;
}

int XboxSoundGroup::func_001CD800(void)
{
    int i;

    for (i = 0; i < list.count; i++) {
        list.at(i)->v6(0);
    }
    return 1;
}

void XboxSoundGroup::func_001CD840(int a)
{
    int i;
    S_SoundElem *e;

    f28 = a;
    for (i = 0; i < list.count; i++) {
        e = list.at(i);
        e->v9(e->f1A8);
    }
}

int S_SoundElemList::func_001CDE90(S_SoundElem *elem)
{
    if (count >= capacity && !func_0015ACA0(count + growBy)) {
        return 0;
    }
    items[count] = elem;
    count++;
    return 1;
}

int S_SoundElemList::func_001CDED0(S_SoundElem *elem)
{
    int i;

    for (i = 0; i < count; i++) {
        if (items[i] == elem) {
            return 0;
        }
    }
    if (count >= capacity && !func_0015ACA0(count + growBy)) {
        return 0;
    }
    items[count] = elem;
    count++;
    return 1;
}

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
