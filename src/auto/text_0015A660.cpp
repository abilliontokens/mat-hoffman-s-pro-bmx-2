/* 30 functions from 0x0015A660 to 0x0015B660, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>

struct C_0015A8E0 {
    int unk0;
    void func_00157660();
    void *func_0015A8E0(int flags);
};

struct ARec {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int pad20;
    int f24;
    char f28;
    char pad29[0x27];
};

struct C_0015A740 {
    char pad0[0x2C];
    int f2C;
    int f30;
    char pad34[4];
    ARec recs[150];
    void func_0015A740(void);
};

struct C_0015A910 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    unsigned char f14;
    char pad15[3];
    int f18;
    C_0015A910 *func_0015A910(int a);
    void func_0015A940(void);
    void *func_0015A970(unsigned char flags);
};

struct C_0015B1A0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    void *func_0015B1A0(int a);
    void func_00157600(int a);
};

struct C_0015AB70 {
    char pad0[8];
    unsigned int f8;
    char padC[0xc];
    unsigned char *f18;
    int func_0015AB70(unsigned int idx);
};

struct S_0015AC20_Game {
    char pad0[0x230];
    unsigned char f230;
};

struct C_0015AC20 {
    char pad0[0x3f8];
    int f3F8;
    char pad3FC[0x149c];
    unsigned int f1898;
    int func_0015AC20(unsigned int flags);
};

struct C_0015ABF0 {
    undefined4 func_0015ABF0(int param_1);
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

/* one 0x108-byte entry of C_0015B470::f0 */
struct S_0015B470_Entry {
    char name[0x104];
    int value;
};

/* growable list of named entries */
struct C_0015B470 {
    S_0015B470_Entry *f0;
    int f4;
    int f8;
    int fC;
    int f10;
    char pad14[0x108];
    int f11C;
    void grow(int n);
    S_0015B470_Entry *at(int i)
    {
        if (i >= f4) {
            grow(i * 2 + 2);
        }
        if (i + 1 > fC) {
            fC = i + 1;
        }
        return &f0[i];
    }
    C_0015B470 *func_0015B470(void);
    void func_0015B4E0(const char *name, int value);
};

/* element of the array owned by S_0015B310_Owned (virtual destructor in slot 0) */
struct S_0015B310_Elem {
    virtual ~S_0015B310_Elem();
    static void operator delete[](void *p) { func_001E891B(p); }
    static void operator delete(void *p) { func_001E891B(p); }
};

struct S_0015B310_Owned {
    virtual ~S_0015B310_Owned();
    int f4;
    S_0015B310_Elem *f8;
    static void operator delete(void *p) { func_001E891B(p); }
};

struct C_0015B310 {
    void *vtbl;
    char pad4[0x20];
    S_0015B310_Owned *f24;
    void *func_0015B310(int flags);
    void func_0015B1C0(void);
    void func_00157660(void);
};

struct C_0015B4C0 {
    void func_0015B4C0(void);
};

/* element of C_0015B150::unk8, an array allocated with new[]: destroyed
   through vtable slot 0 with the vector-delete flags */
struct S_0015B150_Elem {
    virtual void v0(int flags);
    virtual void v1(void);
};

struct C_0015B150 {
    int unk0;
    int unk4;
    int unk8;
    C_0015B150* func_0015B150(void);
    void func_0015B170(void);
    void *func_0015B2C0(unsigned int flags);
};

struct C_00135D90 {
    void func_00135D90(int a, int b);
};

/* growable array of pointers */
struct S_0015A660_List {
    int count;
    void **data;
    int f8;
    int capacity;
    int f10;
    int func_0015ACA0(int n);
    __forceinline void *at(int i)
    {
        if (count > 0 && data != 0 && i < count) {
            return data[i];
        }
        return 0;
    }
};

struct C_001D1480 {
    void func_001D1480(void);
};

struct JoystickDevice {
    void *vtbl;
    char pad4[0x638];
    S_0015A660_List lists[6];
    void func_0015AE20(void);
    void *func_0015B010(unsigned int flags);
    void func_0015AFC0(int idx, int a, int b);
};


void C_0015A740::func_0015A740(void)
{
    for (int i = 0; i < 150; i++) {
        recs[i].f08 = 0;
        recs[i].f0C = 0;
        recs[i].f00 = 0;
        recs[i].f04 = 0;
        recs[i].f10 = 0;
        recs[i].f14 = 0;
        recs[i].f18 = 0;
        recs[i].f1C = 0;
        recs[i].f24 = 0;
        recs[i].f28 = 0;
    }
    f2C = 0;
    f30 = 0;
}

void *C_0015A8E0::func_0015A8E0(int flags) {
    extern int D_00287534;
    void func_001E891B(void *);
    unk0 = (int)&D_00287534;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0015A910 *C_0015A910::func_0015A910(int a)
{
    extern int D_00287640;
    f14 &= 0xc0;
    f18 = 0;
    f4 = 0;
    f8 = 0;
    vtbl = (void *)&D_00287640;
    fC = a;
    f10 = -1;
    return this;
}

void C_0015A910::func_0015A940(void)
{
    extern int D_00287640;
    void func_001E8390(void *);
    vtbl = (void *)&D_00287640;
    if (f18 != 0) {
        func_001E8390((void *)f18);
    }
    f18 = 0;
}

void *C_0015A910::func_0015A970(unsigned char flags)
{
    extern int D_00287640;
    void func_001E8390(void *);
    void func_001E891B(void *);
    vtbl = (void *)&D_00287640;
    if (f18 != 0) {
        func_001E8390((void *)f18);
    }
    f18 = 0;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_0015AB70::func_0015AB70(unsigned int idx)
{
    if (idx < f8) {
        if (f18 == 0) {
            return 0;
        }
        return f18[idx * 0xc] & 2;
    }
    return 0;
}

undefined4 C_0015ABF0::func_0015ABF0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 != 0) {
    *(byte *)(in_ECX + 0x6b4) = *(byte *)(in_ECX + 0x6b4) | 4;
    return 1;
  }
  *(byte *)(in_ECX + 0x6b4) = *(byte *)(in_ECX + 0x6b4) & 0xfb;
  return 1;
}

int C_0015AC20::func_0015AC20(unsigned int flags)
{
    extern S_0015AC20_Game *D_002A8490;
    unsigned char bit = (D_002A8490->f230 >> 2) & 1;

    if (bit == 0 && (flags & 0x80)) {
        return 0;
    }
    if (flags == 0x3f) {
        return 1;
    }
    if (bit == 0 || flags != 0x80) {
        if (flags == 0x80000000) {
            return f1898 == 0;
        }
    } else if (f3F8 == 1) {
        return 1;
    }
    if (flags & 0x40) {
        return (f1898 | 0x40) == flags;
    }
    return (f1898 & flags) != 0;
}

int S_0015A660_List::func_0015ACA0(int n)
{
    void *func_001E8A44(int size);
    void func_001E891B(void *p);
    void **p;
    void **old;

    if (n > capacity) {
        p = (void **)func_001E8A44(n * 4);
        if (p != 0) {
            memcpy(p, data, capacity * 4);
            old = data;
            data = p;
            func_001E891B(old);
            capacity = n;
            return 1;
        }
    }
    return 0;
}

void JoystickDevice::func_0015AE20(void)
{
    extern int D_00287674;
    void func_001E891B(void *p);
    S_0015A660_List *l;
    int i;

    vtbl = (void *)&D_00287674;
    l = &lists[6];
    i = 6;
    do {
        l--;
        func_001E891B(l->data);
    } while (--i != 0);
    ((C_001D1480 *)this)->func_001D1480();
}

void JoystickDevice::func_0015AFC0(int idx, int a, int b)
{
    S_0015A660_List *l;
    int i;

    l = &lists[idx];
    for (i = 0; i < l->count; i++) {
        ((C_00135D90 *)l->at(i))->func_00135D90(a, b);
    }
}

C_0015B150* C_0015B150::func_0015B150(void) {
    extern int D_002876E0;
    unk0 = (int)&D_002876E0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

void C_0015B150::func_0015B170(void)
{
    extern int D_002876E0;
    void func_001E891B(void *p);
    int *q;

    unk0 = (int)&D_002876E0;
    if (unk8 != 0) {
        q = (int *)unk8 - 1;
        if (*q != 0) {
            ((S_0015B150_Elem *)unk8)->v0(3);
        } else {
            func_001E891B(q);
        }
    }
}

void *C_0015B1A0::func_0015B1A0(int a)
{
    extern int D_002876EC;
    func_00157600(a);
    vtbl = (void *)&D_002876EC;
    f24 = 0;
    return this;
}

void *C_0015B310::func_0015B310(int flags)
{
    extern int D_002876EC;
    vtbl = (void *)&D_002876EC;
    if (f24 != 0) {
        if (f24->f8 != 0) {
            delete[] f24->f8;
        }
        if (f24 != 0) {
            delete f24;
        }
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_0015B470 *C_0015B470::func_0015B470(void)
{
    extern undefined4 D_002E28F4;
    extern char D_000186A0;
    f10 = 0;
    f4 = 10;
    f8 = (int)&D_000186A0;
    fC = 0;
    f0 = (S_0015B470_Entry *)func_001E8A44(0xa50);
    D_002E28F4 = (undefined4)this;
    f11C = 0;
    return this;
}

void C_0015B4C0::func_0015B4C0(void)
{
  extern undefined4 D_002E28F4;
  int func_001E891B(...);
  int* in_ECX = (int*)this;
  
  D_002E28F4 = 0;
  if (*in_ECX != 0) {
    func_001E891B(*in_ECX);
  }
  return;
}

void C_0015B470::func_0015B4E0(const char *name, int value)
{
    const char *src = name;
    char *d;
    char c;

    at(f11C)->value = value;
    d = at(f11C)->name;
    do {
        c = *src++;
        *d++ = c;
    } while (c != 0);
    f11C++;
}

