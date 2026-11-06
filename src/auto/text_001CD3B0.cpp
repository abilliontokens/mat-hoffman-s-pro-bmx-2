/* 20 functions from 0x001CD3B0 to 0x001CE140, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001CDC20;
struct S_001CD3B0_Sub { char pad0[0x28]; int f28; };
struct C_001CD3B0 {
    char pad0[0x2c];
    S_001CD3B0_Sub *f2c;
    char pad30[0x68];
    int f98;
    char pad9c[0x1c];
    int fB8;
    int fBC;
    int func_001CD3B0(int param_1);
};
int func_001CB0A0(int x);
int __stdcall func_00220AD6(int a, int b);
inline void *operator new(unsigned int, void *p) { return p; }
struct SoundVec4 { int x,y,z,w; };
extern SoundVec4 D_002ABA44, D_002ABA74, D_002ABA64;
extern char D_0028F09C, D_0028EECC;
int __stdcall func_0021FBC1(int);
void func_0021FB99();
int __stdcall func_002228B1(int, void **, int);
int __stdcall func_00222353(void *, float, float, float, int);
int __stdcall func_00222309(void *, float, float, float, float, float, float, int);
int __stdcall func_002223AC(void *, float, float, float, int);
int __stdcall func_0022195C(void *);
void func_001CBC10(int, const char *, int);
struct XboxSoundInterface {
 char pad0[0x2c]; unsigned char f2c; char pad2d[3]; void *f30;
 char pad34[0xa0]; int fD4; char padD8[0x20];
 SoundVec4 fF8, f108, f118, f128;
 C_001CDC20 *f138;
 int func_001CB170(const char *, int *);
 int func_001CBF20();
 int func_001CBF90(float);
 void func_001CC0C0(float);
 int func_001CDF30(int a, int b);
};
struct S_001CD7D0_Arg {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(int a);
};
struct S_001CD7D0_Sub {
    void func_001CBCF0(S_001CD7D0_Arg *p);
};
struct C_001CD7D0 {
    char pad0[0x30];
    S_001CD7D0_Sub f30;
    void func_001CD7D0(S_001CD7D0_Arg *p);
};
struct C_001CE120 {
    undefined4 func_001CE120(byte param_1);
};

struct C_001CD590 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(int a);
    char pad4[0x34];
    int f38;
    char pad3c[0x64];
    unsigned char fA0;
    int func_001CD450(int a, int b);
    int func_001CD590(int a, int b);
};

extern "C" void __stdcall D_00220AE0(void *obj, int arg);

/* XboxMusic (slot 18 pause/resume handler) */
struct C_001CD510 {
    char pad0[0xa0];
    unsigned char fa0;
    char pada1[0x17];
    void *fb8;
    void *fbc;
    char padc0[8];
    int fc8;
    int fcc;
    int func_001CD510(int a);
    int func_001CB6D0(void);
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
extern char D_00040000;
extern char D_00010000;

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

struct S_001CD940_Buf {
    int f0;
    int f4;
};

struct S_001CD940_Dev {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual int v9(int a);
    char pad4[4];
    char f8[0x104];
    u8 f10C;
    char pad10d[0x33];
    void *f140;
    char pad144[0x58];
    int f19C;
    int f1A0;
    char pad1a4[4];
    int f1A8;
    char pad1ac[8];
    char f1B4[0x24];
    char f1D8[0x10];
    char f1E8[0x10];
    char f1F8[0x10];
    u8 f208;
    int func_001CC4B0(void *a, void *b, void *c, void *d);
};

struct C_001CD940 {
    char pad0[4];
    S_001CD940_Dev *f4;
    char f8[4];
    void *fC;
    int f10;
    char pad14[0xc];
    u8 f20;
    int func_001CD940(S_001CD940_Dev *dev);
};

int __stdcall func_00220B26(void *a, S_001CD940_Buf **out, void *c);
int __stdcall func_00221B47(void *a, S_001CD940_Buf *b);
int __stdcall func_002228F8(int *desc, void **out);
int __stdcall func_001DDB7E(int a, int b, int c, int d);

int C_001CD3B0::func_001CD3B0(int param_1)
{
    int v;
    int r;
    int e;
    if (f98 == param_1)
        return 1;
    if (f2c != 0)
        v = f2c->f28 * param_1 / 100;
    else
        v = param_1;
    r = func_001CB0A0(v);
    int h = fB8;
    e = func_00220AD6(h, r);
    if (e < 0) {
        func_001CBC10(e, &D_0028EECC, 0xdb1);
    } else {
        h = fBC;
        e = func_00220AD6(h, r);
        if (e < 0) {
            func_001CBC10(e, &D_0028EECC, 0xdb5);
        } else {
            f98 = param_1;
            return 1;
        }
    }
    return 0;
}

int C_001CD510::func_001CD510(int a)
{
    if (!(fa0 & 1)) {
        return 0;
    }
    if (a != 0) {
        if (fcc != 1 && fc8 == 2 && fcc == 2) {
            D_00220AE0(fb8, 1);
            D_00220AE0(fbc, 1);
            fcc = 1;
            return 1;
        }
    } else if (fcc == 1) {
        func_001CB6D0();
    }
    return 1;
}

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

void C_001CD7D0::func_001CD7D0(S_001CD7D0_Arg *p)
{
    p->v6(0);
    p->v2();
    f30.func_001CBCF0(p);
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

extern "C" void *memset(void *d, int c, unsigned int n);
#pragma intrinsic(memset)
int C_001CD940::func_001CD940(S_001CD940_Dev *dev)
{
    S_001CD940_Buf *buf;
    int desc[6];
    int r;

    r = func_00220B26(dev->f8, &buf, f8);
    if (r < 0)
        return r;
    if (fC != 0) {
        r = func_00221B47(fC, buf);
        if (r < 0)
            return r;
    } else {
        memset(desc, 0, sizeof(desc));
        if (dev->f10C & 8)
            desc[0] |= 0x10;
        desc[0] |= (int)&D_00040000;
        desc[1] = 3;
        desc[2] = (int)buf;
        r = func_002228F8(desc, &fC);
        if (r < 0)
            return r;
    }
    if (f10 == 0) {
        f10 = func_001DDB7E(0xd800, -1, 0, 0x204);
        if (f10 == 0)
            return 0x8007000e;
    }
    void (__stdcall *enter)(void *) = _imp__RtlEnterCriticalSection;
    dev->f1A0 = dev->f19C = buf->f4;
    enter(D_002F08EC->f138 + 0x50);
    void (__stdcall *leave)(void *) = _imp__RtlLeaveCriticalSection;
    dev->f140 = this;
    f4 = dev;
    leave(D_002F08EC->f138 + 0x50);
    if (!dev->v9(dev->f1A8)) {
        goto fail;
    }
    if (!dev->func_001CC4B0(dev->f1B4, dev->f1E8, dev->f1F8, dev->f1D8)) {
fail:
        enter(D_002F08EC->f138 + 0x50);
        dev->f140 = 0;
        f4 = 0;
        leave(D_002F08EC->f138 + 0x50);
        return 0x80004005;
    }
    f20 |= 8;
    enter(D_002F08EC->f138 + 0x50);
    f4->f208 |= 8;
    f4->f208 &= 0xbf;
    leave(D_002F08EC->f138 + 0x50);
    return 0;
}

int C_001CDB10::func_001CDB10(void)
{
    unsigned long status;
    unsigned int i;
    unsigned long *p;

    if (f20 & 4) {
        func_00220AE5(fC, 0, 0, 1);
        f8->Release();
        f8 = 0;
        _imp__RtlEnterCriticalSection(D_002F08EC->f138 + 0x50);
        if (f4 != 0) {
            f4->f140 = 0;
            f4->f208 &= 0xf7;
        }
        _imp__RtlLeaveCriticalSection(D_002F08EC->f138 + 0x50);
        func_001CB9A0();
        f20 &= 0xfb;
        return 0;
    }
    if ((f20 & 2) || f4->func_001CB440() != 0 || (f4->f208 & 8) == 0) {
        return 0;
    }
    for (;;) {
        i = 0;
        p = f14;
        do {
            if (*p != 0x8000000a) {
                goto mismatch;
            }
            i++;
            p++;
        } while (i < 3);
        if ((f20 & 1) == 0) {
            return 0;
        }
        goto done;
mismatch:
        if (f20 & 1) {
            goto done;
        }
        if (func_001CB9F0(i) < 0) {
            return 0x80004005;
        }
        if (func_001CBB50(i) < 0) {
            return 0x80004005;
        }
    }
done:
    fC->GetStatus(&status);
    if ((status & (unsigned long)&D_00040000) == 0 && (status & (unsigned long)&D_00010000) != 0) {
        return 0;
    }
    f20 |= 6;
    return 0;
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

