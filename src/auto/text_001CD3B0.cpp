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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    virtual void v19(int a);
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
    void func_00157A00(int a);
    void func_00157A90(int a);
    XboxSoundGroup *func_001CD770(int a, int b);
    int func_001CD800(void);
    void func_001CD840(int a);
    int func_001CD890(int a, int b);
    void func_001CD8F0(int a);
};

int __stdcall func_001DDC28(int a);
int __stdcall func_001DDDD6(int a, int b);
int __stdcall func_001DD13C(int a);
extern "C" void __stdcall MmFreeContiguousMemory(void *p);
void func_001E891B(void *p);

struct C_001CDCF0 {
    int f0;
    int f4;
    char pad8[0xc];
    void *f14;
    char pad18[0x10];
    void *f28;
    char pad2c[0x10];
    void *f3C;
    void func_001CDCF0(void);
};

struct S_001CDE40_Iface {
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
};

struct S_001CDE40_Obj {
    char pad0[8];
    S_001CDE40_Iface *f8;
    S_001CDE40_Iface *fC;
    void *f10;
};

struct S_001CDE40_Owner {
    void func_001CBCF0(S_001CDE40_Obj *obj);
};

extern "C" void (__stdcall *_imp__RtlInitializeCriticalSection)(void *cs);

struct S_OwnedElemList {
    S_SoundElemList list;
    u8 flags;
    char pad[3];

    S_OwnedElemList()
    {
        list.items = 0;
        list.count = 0;
        list.growBy = 0;
        list.capacity = 0;
        flags &= 0xfe;
    }

    void init(int n)
    {
        list.items = (S_SoundElem **)func_001E8A44(n * 4);
        list.growBy = 0x10;
        list.capacity = n;
        flags |= 1;
    }
};

struct C_001CDC20 {
    int f0;
    int f4;
    int f8;
    int fC;
    S_OwnedElemList l0;
    S_OwnedElemList l1;
    S_OwnedElemList l2;
    int f4C;
    char f50[0x18];
    C_001CDC20(int a, int b);
};


struct S_Slot {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    u8 lo : 3;
    u8 busy : 1;
};
struct S_SlotList {
    int count;
    S_Slot **items;
    S_Slot *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }
};
struct S_Owner { char pad[0x138]; char *f138; };
extern S_Owner *D_002F08EC;
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);

int __stdcall func_00220AE5(void *obj, int a, int b, int c);

struct S_001CDB10_Iface {
    virtual unsigned long __stdcall v0();
    virtual unsigned long __stdcall Release();
    virtual unsigned long __stdcall v2();
    virtual long __stdcall GetStatus(unsigned long *out);
};

struct S_001CDB10_Dev {
    char pad0[0x140];
    int f140;
    char pad144[0xc4];
    u8 f208;
    int func_001CB440(void);
};

struct C_001CDB10 {
    char pad0[4];
    S_001CDB10_Dev *f4;
    S_001CDB10_Iface *f8;
    S_001CDB10_Iface *fC;
    unsigned long f10;
    unsigned long f14[3];
    u8 f20;
    int func_001CB9A0(void);
    int func_001CB9F0(unsigned int i);
    int func_001CBB50(unsigned int i);
    int func_001CDB10(void);
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

int XboxSoundGroup::func_001CD890(int a, int b)
{
    int i;

    f44 = a;
    func_00157A90(a);
    for (i = 0; i < list.count; i++) {
        list.at(i)->v18(a);
    }
    return 1;
}

void XboxSoundGroup::func_001CD8F0(int a)
{
    int i;

    for (i = 0; i < list.count; i++) {
        list.at(i)->v19(a);
    }
    func_00157A00(a);
}

C_001CDC20::C_001CDC20(int a, int b)
{
    f0 = -1;
    f4 = -1;
    f4C = 0;
    l0.init(1);
    l1.init(1);
    l2.init(1);
    f8 = b;
    fC = a;
    _imp__RtlInitializeCriticalSection(f50);
}

void C_001CDCF0::func_001CDCF0(void)
{
    if (f4 != -1) {
        func_001DDC28(f4);
    }
    if (f0 != -1) {
        func_001DDDD6(f0, -1);
        func_001DD13C(f0);
    }
    if (f4 != -1) {
        func_001DD13C(f4);
    }
    func_001E891B(f3C);
    func_001E891B(f28);
    func_001E891B(f14);
}

void __stdcall func_001CDE40(S_001CDE40_Owner *owner, S_001CDE40_Obj *obj)
{
    owner->func_001CBCF0(obj);
    if (obj != 0) {
        if (obj->f8 != 0) {
            obj->f8->Release();
        }
        if (obj->fC != 0) {
            obj->fC->Release();
        }
        if (obj->f10 != 0) {
            MmFreeContiguousMemory(obj->f10);
        }
        func_001E891B(obj);
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
