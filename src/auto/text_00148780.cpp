/* 24 functions from 0x00148780 to 0x00149620, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct ShaderData_00148E80 { char name[0x40]; char name2[0x40]; int f80; int f84; };
struct Manager_00148E80 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
 virtual void Set(int, const void *);
 virtual short Create(const void *, int);
};
struct Entry16_00148910 { int f0; int pad4[3]; };
struct Resource_00148E80 {
 char pad0[0x14];
 Entry16_00148910 *f14;
 int func_001617F0(const char *, int);
 ShaderData_00148E80 *func_00161850(int);
};
struct Parser_00148910;
struct Item12_00148910 { int a, b, c; };
struct Entry8_00148910 { int id; int val; };
struct DXShaderDescriptor {
 int func_00148910(int a0, Parser_00148910 *p, int id, int idx, int arg4);
 char pad0[8]; short f8; unsigned char fA; char padB[9]; int f14; short f18[4]; char f20[4];
 unsigned char fl0 : 1; unsigned char fl1 : 1; unsigned char fl2 : 1; unsigned char fl3 : 1; unsigned char fl4 : 4;
 char pad25; short f26; short f28; short pad2A; Item12_00148910 *f2C; Entry8_00148910 *f30; int f34; int f38; int f3C;
 int func_00148E80(const char *);
 void func_00145370(Parser_00148910 *, ShaderData_00148E80 *, int, Item12_00148910 *, int *);
 void func_001458E0(Parser_00148910 *, ShaderData_00148E80 *, Entry8_00148910 *, int *);
 void func_00146540(Parser_00148910 *);
 short func_001B0D00(Parser_00148910 *);
 short func_001B0710(Parser_00148910 *);
};
struct Parser_00148910 {
 void func_00169710(char *out);
 int func_00168BE0(const char *a, const char *b, char *out, int n);
 void func_00168C20(const char *key, int n, void *out);
};
void __cdecl func_001ADCC0(char *dst, int n, const char *fmt, ...);
int __cdecl func_001EA426(const char *a, const char *b);
void __cdecl func_0014FF00(int, int, int, char *, int);
short __cdecl func_00144AE0(char *, int, int, int);
extern char D_002867F0[], D_002867E8[], D_00286730[], D_0028671C[], D_00286710[], D_0028670C[], D_002867DC[], D_00286720[];
extern char D_002867C8[], D_002867B4[], D_002867A8[], D_00275630[], D_0028679C[], D_0028678C[], D_00275678[], D_00286784[];
extern char D_0028676C[], D_002A719C[], D_002BEF60[];
extern Resource_00148E80 *D_002A829C;
extern ShaderData_00148E80 *D_002AA470;
struct Manager2_00148910 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
 virtual void Set(int, int);
 virtual short Create(const void *, int);
};
extern Manager_00148E80 *D_002A751C, *D_002A6D84;
extern Manager2_00148910 *D_002AA6C0;
extern char D_002A7130[], D_002BED60[], D_002A7148[], D_002BEE60[];
extern void __cdecl func_0014A7B0(char *, const char *);
extern void *__cdecl func_001E8A44(unsigned int);
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);
extern "C" int __cdecl memcmp(const void *a, const void *b, unsigned int size);
extern "C" int __cdecl strcmp(const char *a, const char *b);
struct C_001488F0 {
    undefined4 func_001488F0(byte param_1);
};

struct C_00149300 {
    void func_00149300(void);
};

extern int D_00286824;
extern int D_00285C84;
extern int D_00285C78;
extern int D_00284E94;
extern int D_00285CA0;
extern int D_00285C94;
extern int D_00144CD0;

struct C_00149380 {
    void *vtbl;
    void func_001B0F10();
    C_00149380();
};

struct AnimSrc_001487D0 {
    char pad0[0x40];
    int count;
    void func_001467A0();
    void func_00146DC0();
};

struct VObj_00148780 {
    virtual void f0();
    virtual void f1();
};

/* object walked by C_00149480::func_00149480: vtable, a sub-object pointer at +4,
   flags at +0xC/+0x18/+0x24 */
struct Item_00149480 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    void *f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
};

extern int D_00286818;

/* RestoreFrameBufferDataItem allocation helper: ctor stores the real vtable */
struct New_001493E0 {
    void *vtbl;
    New_001493E0() { vtbl = (void *)&D_00286818; }
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
};

struct Node_001492A0 {
    Node_001492A0 *next;
    char *unk4;
    VObj_00148780 *unk8;
    VObj_00148780 *unkC;
    VObj_00148780 *unk10;
};

struct C_001492A0 {
    void *vtbl;
    u32 unk4;
    AnimSrc_001487D0 *unk8;
    u32 unkC;
    Node_001492A0 *unk10;
    void func_001492A0();
};

struct C_001493B0 {
    void *vtbl;
    void func_001B0E90();
    void *func_001493B0(unsigned int flags);
};

struct Obj_00149310 {
    char pad0[8];
    int unk8;
    int unkC;
    int unk10;
};

struct C_00149310 {
    void *vtbl;
    char pad4[0x10];
    Obj_00149310 *unk14;
    void func_001B0EA0(int a1, void **p);
    void func_00149310(int a1, int a2, int a3, int a4);
};

struct C_001493E0 {
    void *vtbl;
    char pad4[8];
    void *unkC;
    void func_001493E0();
};

struct C_00148780 {
    void *vtbl;
    u32 unk4;
    AnimSrc_001487D0 *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    void *unk20;
    void func_001AF710();
    void *func_00148780(unsigned int flags);
    void func_001487D0();
};

struct C_00148820 {
    void *vtbl;
    u32 unk4;
    void *unk8;
    u32 unkC;
    void func_00144E70();
    C_00148820(int a1, void *a2);
};


struct C_00149480 {
    void *vtbl;
    int unk4;
    int unk8;
    void *unkC;
    Item_00149480 *items[1];
    void func_00149480(void);
};
extern int D_002BF0AC;
extern int D_002BF0B4;
extern int D_002BF0B8;
extern int D_002BF0BC;
extern int D_002BF0C0;
extern int D_002BF0C4;
extern int D_002BF0D8;
extern unsigned int D_002BF0DC;

struct C_00149280 {
    void *vtbl;
    void *func_00149280(int a0);
};

struct C_00148850 {
    void *vtbl;
    u32 unk4;
    void *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    void *func_00148850(unsigned int flags);
};

struct C_001488B0 {
    void *vtbl;
    u32 unk4;
    void *unk8;
    u32 unkC;
    void func_00144E70();
    void *func_001488B0(C_001488B0 *a);
};

struct C_001AC790 {
    void func_001AC790(int param_1);
};

struct C_00149040 {
    void *vtbl;
    u32 unk4;
    void *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    void func_001B01A0();
    void *func_00149040(unsigned int flags);
};

struct C_001490F0 {
    void *vtbl;
    void func_001B0230();
    void *func_001490F0(unsigned int flags);
};

struct C_001490A0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001490A0 {
    void *vtbl;
    u32 f4;
    C_001490A0_Obj *f8;
    void func_001B01C0();
    void *func_001490A0(unsigned int flags);
};

struct Anim_00149120_Data {
    int v0;
    int v1;
    int v2;
    int v3;
};

struct Anim_00149120 {
    int a0;
    Anim_00149120_Data data;
};

struct AnimSrc_00149120 {
    char pad0[0x34];
    Anim_00149120 *arr;
    char pad38[8];
    int count;
};

struct C_00149120 {
    void *vtbl;
    u32 unk4;
    AnimSrc_00149120 *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    Anim_00149120 *unk20;
    void func_001B07F0(int a0, int a1);
    void *func_00149120(int a0, int a1);
};

struct C_001491E0 {
    void *vtbl;
    u32 unk4;
    AnimSrc_00149120 *unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    Anim_00149120 *unk20;
    void func_001B08F0(C_001491E0 *a0);
    void *func_001491E0(C_001491E0 *a0);
};

struct C_00149450 {
    void *vtbl;
    void func_001B0F70();
    void *func_00149450(unsigned int flags);
};

void *C_00148780::func_00148780(unsigned int flags)
{
    void func_001E891B(void *);
    vtbl = &D_00285C84;
    unk1C = (u32)&D_00285C78;
    if (unk20 != 0) {
        func_001E891B(unk20);
    }
    unk1C = (u32)&D_00284E94;
    func_001AF710();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00148780::func_001487D0()
{
    void *func_001E8A44(int);
    void __stdcall func_00011FF0(void *p, int a1, int a2, int *a3);
    int n = unk8->count;
    void *p;
    if (n) {
        p = func_001E8A44(n * 0x14);
        if (p)
            func_00011FF0(p, 0x14, n, &D_00144CD0);
        else
            p = 0;
        unk20 = p;
    } else {
        unk20 = 0;
    }
}

void *C_00148850::func_00148850(unsigned int flags)
{
  void func_001E891B(void *);
  extern int D_00285C00;

  vtbl = (void *)&D_00285CA0;
  unkC = (u32)&D_00285C94;
  if (unk10 != 0) {
    func_001E891B((void *)unk10);
  }
  if (unk14 != 0) {
    func_001E891B((void *)unk14);
  }
  unkC = (u32)&D_00284E94;
  vtbl = (void *)&D_00285C00;
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void *C_001488B0::func_001488B0(C_001488B0 *a)
{
  extern int D_00285C00;

  *(volatile void **)&vtbl = (void *)&D_00285C00;
  *(volatile u32 *)&unk4 = *(volatile u32 *)&a->unk4;
  *(volatile u32 *)&unk8 = *(volatile u32 *)&a->unk8;
  *(volatile u32 *)&unkC = (u32)&D_00284E94;
  *(volatile void **)&vtbl = (void *)&D_00285CA0;
  *(volatile u32 *)&unkC = (u32)&D_00285C94;
  func_00144E70();
  return this;
}

C_00148820::C_00148820(int a1, void *a2)
{
    *(volatile u32 *)&unk4 = 0;
    *(volatile u32 *)&unk8 = (u32)a2;
    *(volatile u32 *)((char *)this + 0xC) = (u32)&D_00284E94;
    *(volatile u32 *)&vtbl = (u32)&D_00285CA0;
    *(volatile u32 *)&unkC = (u32)&D_00285C94;
    func_00144E70();
}

undefined4 C_001488F0::func_001488F0(byte param_1)
{
  int func_001452A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001452A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int DXShaderDescriptor::func_00148910(int a0, Parser_00148910 *p, int id, int idx, int arg4)
{
    Item12_00148910 items[128];
    char path[0x104];
    char name[0x40];
    char tmp3[0x40];
    char tmp2[0x40];
    char buf[0x40];
    char loopName[0x40];
    char bufA[0x40];
    int n;
    int flag2;
    int x;
    int flag;
    int count2;
    int val;
    int count1;
    ShaderData_00148E80 *sd;
    int i;
    int size;

    count1 = 0;
    count2 = 0;
    sd = D_002A829C->func_00161850(id);
    if (sd == 0)
        sd = D_002AA470;
    func_001ADCC0(name, 0x40, D_002867E8, D_002867F0, idx + 1);
    p->func_00169710(name);
    p->func_00168BE0(D_00286730, (const char *)sd, buf, 0x40);
    if (p->func_00168BE0(D_00286710, D_0028671C, tmp2, 0x40)) {
        if (func_001EA426(tmp2, D_0028671C) == 0)
            f14 = 0;
        else if (func_001EA426(tmp2, D_0028670C) == 0)
            f14 = 1;
    } else {
        f14 = sd->f80;
    }
    f26 = D_002A751C->Create(buf, 0);
    if (f14 == 1) {
        func_0014A7B0(D_002BED60, D_002A7130);
        D_002A751C->Set(f26, D_002BED60);
    } else if (strcmp("Water.xvu", buf) == 0) {
        func_0014A7B0(D_002BEF60, D_002A719C);
        D_002A751C->Set(f26, D_002BEF60);
    } else {
        func_0014A7B0(D_002BEE60, D_002A7148);
        D_002A751C->Set(f26, D_002BEE60);
    }
    p->func_00168BE0(D_00286720, sd->name2, tmp3, 0x40);
    f28 = D_002A6D84->Create(tmp3, 0);
    D_002A6D84->Set(f28, 0);
    flag = 1;
    p->func_00168C20(D_002867C8, 1, &flag);
    fl1 = flag;
    p->func_00168C20(D_002867B4, 1, &n);
    fA = n;
    if (fA == 0) {
        func_00145370(p, sd, 0, items, &count1);
    } else {
        for (i = 0; i < fA; i++) {
            func_001ADCC0(loopName, 0x40, D_002867E8, D_002867A8, i + 1);
            p->func_00168BE0(loopName, D_00275630, bufA, -1);
            if (bufA[0] == 0)
                func_0014FF00(D_002A829C->f14[id].f0, 0, 0, bufA, 0);
            if (bufA[0] == 0x26) {
                f18[i] = func_00144AE0(bufA, 0, 0, 0);
            } else if (func_001EA426(bufA, D_0028679C) == 0) {
                f18[i] = -3;
            } else if (func_001EA426(bufA, D_0028678C) == 0) {
                f18[i] = -4;
            } else {
                func_001ADCC0(path, 0x104, D_00275678, a0, bufA);
                f18[i] = D_002AA6C0->Create(path, 0);
                val = sd->f84;
                func_001ADCC0(loopName, 0x40, D_002867E8, D_00286784, i + 1);
                p->func_00168C20(loopName, val, &val);
                switch (val) {
                case 0:
                    x = 0;
                    break;
                case 1:
                    x = 2;
                    break;
                }
                D_002AA6C0->Set(f18[i], x);
            }
            func_00145370(p, sd, i, &items[count1], &count1);
            func_001ADCC0(loopName, 0x40, D_002867E8, D_0028676C, i + 1);
            p->func_00168C20(loopName, i, &flag2);
            f20[i] = flag2;
        }
    }
    size = (*(volatile int *)&count1) * 12;
    f2C = (Item12_00148910 *)func_001E8A44(size);
    memcpy(f2C, items, size);
    f38 = count1;
    fl0 = (fA == 2);
    func_001458E0(p, sd, (Entry8_00148910 *)items, &count2);
    size = count2 * 8;
    f30 = (Entry8_00148910 *)func_001E8A44(size);
    memcpy(f30, items, size);
    f3C = count2;
    for (i = 0; i < f3C; i++) {
        if (f30[i].id == 0x8f)
            break;
    }
    fl3 = (f30[i].val == 2);
    func_00146540(p);
    func_001B0D00(p);
    f8 = func_001B0710(p);
    return 1;
}

int DXShaderDescriptor::func_00148E80(const char *name) {
    int count = 0;
    int count2 = 0;
    char buffer[0x600];
    ShaderData_00148E80 *data = D_002A829C->func_00161850(D_002A829C->func_001617F0(name, 1));
    if (!data) data = D_002AA470;
    f14 = data->f80;
    f26 = D_002A751C->Create(data, 0);
    if (f14 == 1) {
        func_0014A7B0(D_002BED60, D_002A7130);
        D_002A751C->Set(f26, D_002BED60);
    } else {
        func_0014A7B0(D_002BEE60, D_002A7148);
        D_002A751C->Set(f26, D_002BEE60);
    }
    f28 = D_002A6D84->Create((char *)data + 0x40, 0);
    D_002A6D84->Set(f28, 0);
    fl0 = 0;
    fl1 = 1;
    f18[0] = D_002AA6C0->Create(name, 0);
    f20[0] = 0;
    fA = 1;
    int mode;
    switch (data->f84) { case 0: mode = 0; break; case 1: mode = 2; break; }
    D_002AA6C0->Set(f18[0], mode);
    func_00145370(0, data, 0, (Item12_00148910 *)buffer, &count);
    unsigned int size = count * 12;
    f2C = (Item12_00148910 *)func_001E8A44(size);
    memcpy(f2C, buffer, size);
    f38 = count;
    func_001458E0(0, data, (Entry8_00148910 *)buffer, &count2);
    int n = *(volatile int *)&count2;
    f30 = (Entry8_00148910 *)func_001E8A44(n * 8);
    size = n * 8;
    memcpy(f30, buffer, size);
    f3C = n;
    return 1;
}

void *C_00149040::func_00149040(unsigned int flags)
{
  void func_001E891B(void *);
  extern int D_0028617C;
  extern int D_00286170;
  extern C_001AC790 *D_002A71C0;
  extern C_001AC790 *D_002A71C4;

  vtbl = (void *)&D_0028617C;
  unkC = (u32)&D_00286170;
  if (unk10 != 0) {
    D_002A71C0->func_001AC790(-(int)unk10);
  }
  if (unk14 != 0) {
    D_002A71C4->func_001AC790(-(int)unk14);
  }
  unkC = (u32)&D_00284E94;
  func_001B01A0();
  if (flags & 1) {
    func_001E891B(this);
  }
  return this;
}

void *C_001490A0::func_001490A0(unsigned int flags)
{
    void func_001E891B(void *);
    extern int D_002862FC;
    extern int D_002862F0;
    vtbl = (void *)&D_002862FC;
    f4 = (u32)&D_002862F0;
    if (f8) {
        f8->v2();
        f8 = 0;
    }
    f4 = (u32)&D_00284E94;
    func_001B01C0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_001490F0::func_001490F0(unsigned int flags)
{
    void func_001E891B(void *);
    extern int D_0028634C;
    vtbl = (void *)&D_0028634C;
    func_001B0230();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
extern "C" void *memcpy(void *, const void *, unsigned int);
void *C_00149120::func_00149120(int a0, int a1)
{
    void *func_001E8A44(int);
    void __stdcall func_00011FF0(void *p, int a1, int a2, int *a3);
    func_001B07F0(a0, a1);
    *(volatile u32 *)&unk1C = (u32)&D_00284E94;
    _ReadWriteBarrier();
    *(volatile void **)&vtbl = (void *)&D_00285C84;
    *(volatile u32 *)&unk1C = (u32)&D_00285C78;
    int n = unk8->count;
    void *p;
    if (n) {
        p = func_001E8A44(n * 0x14);
        if (p)
            func_00011FF0(p, 0x14, n, &D_00144CD0);
        else
            p = 0;
        unk20 = (Anim_00149120 *)p;
    } else {
        unk20 = 0;
    }
    AnimSrc_00149120 *src = unk8;
    int cnt = src->count;
    for (int i = 0; i < cnt; i++) {
        unk20[i].a0 = src->arr[i].a0;
        (*(Anim_00149120 * volatile *)&unk20)[i].data = src->arr[i].data;
    }
    return this;
}
void *C_001491E0::func_001491E0(C_001491E0 *a0)
{
    void *func_001E8A44(int);
    void __stdcall func_00011FF0(void *p, int a1, int a2, int *a3);
    func_001B08F0(a0);
    *(volatile u32 *)&unk1C = (u32)&D_00284E94;
    _ReadWriteBarrier();
    *(volatile void **)&vtbl = (void *)&D_00285C84;
    *(volatile u32 *)&unk1C = (u32)&D_00285C78;
    int n = unk8->count;
    void *p;
    if (n) {
        p = func_001E8A44(n * 0x14);
        if (p)
            func_00011FF0(p, 0x14, n, &D_00144CD0);
        else
            p = 0;
        unk20 = (Anim_00149120 *)p;
    } else {
        unk20 = 0;
    }
    if (unk20 != 0) {
        memcpy(unk20, a0->unk20, unk8->count * 0x14);
    }
    return this;
}

void *C_00149280::func_00149280(int a0)
{
  int __stdcall func_001B0E60(int);
  extern int D_00286808;

  func_001B0E60(a0);
  vtbl = (void *)&D_00286808;
  return this;
}

void C_001492A0::func_001492A0()
{
    AnimSrc_001487D0 *owner = unk8;

    owner->func_001467A0();
    Node_001492A0 *n = unk10;
    while (n != 0) {
        char *p = n->unk4;
        if (n->unk8)
            n->unk8->f1();
        if (n->unkC)
            n->unkC->f1();
        if (n->unk10)
            n->unk10->f1();
        (*(VObj_00148780 **)(p + 0x10))->f1();
        n = n->next;
    }
    owner->func_00146DC0();
}

void C_00149300::func_00149300(void)
{
  int* in_ECX = (int*)this;
  
                    
                    
  (**(code **)(*in_ECX + 4))();
  return;
}

void C_00149310::func_00149310(int a1, int a2, int a3, int a4)
{
    C_00149310 *self = this;

    func_001B0EA0(a1, (void **)&self);
    Obj_00149310 *o = unk14;
    o->unk8 = a2;
    o->unkC = a3;
    o->unk10 = a4;
}

void func_00149350(void)
{
  int __stdcall func_001FF940(int, int);
  extern undefined4 D_002EFDB8;
  int __stdcall func_00200230(int);
  func_001FF940((int)(*(undefined4 *)(D_002EFDB8 + 0x58)), (int)(*(undefined4 *)(D_002EFDB8 + 0x5c)));
  func_00200230((int)(*(int *)(D_002EFDB8 + 4) + 0x1e0));
  return;
}

C_00149380::C_00149380()
{
    func_001B0F10();
    vtbl = &D_00286824;
}

void func_001493A0(void) {
    int func_001B1010(...);
    func_001B1010();
}

void *C_001493B0::func_001493B0(unsigned int flags)
{
    void func_001E891B(void *);
    extern int D_00286808;

    vtbl = (void *)&D_00286808;
    func_001B0E90();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001493E0::func_001493E0()
{
    int __fastcall func_001FEBD0(int a, void *b);
    extern undefined4 D_002EFDB8;
    extern VObj_00148780 *D_002BF0C8;
    VObj_00148780 *p;

    if (unkC != 0) {
        ((VObj_00148780 *)((char *)unkC + 4))->f1();
    }
    func_001FEBD0(0x21, (void *)(*(int *)(D_002EFDB8 + 4) + 0x170));
    func_001FEBD0(0x3, (void *)(D_002EFDB8 + 0x74));
    p = D_002BF0C8;
    if (p == 0) {
        p = (VObj_00148780 *)new New_001493E0;
        D_002BF0C8 = p;
    }
    p->f1();
}

void *C_00149450::func_00149450(unsigned int flags)
{
    void func_001E891B(void *);

    vtbl = &D_00286824;
    func_001B0F70();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00149480::func_00149480(void)
{
 int __fastcall func_001FEBD0(int,void*);
 void __fastcall func_0001E860(void*);
 extern undefined4 D_002EFDB8;
 int one=1;
 C_00149480 * volatile self=this;
 D_002BF0AC=0;
 if (!(D_002BF0DC & one)) {
 D_002BF0DC |= one; D_002BF0D8=unk4;
 }
 D_002BF0B4=0; D_002BF0B8=0; D_002BF0BC=0; D_002BF0C0=0; D_002BF0C4=0;
 int p=*(int*)(D_002EFDB8+4);
 float v[8]; v[0]=0.0f;v[1]=0.0f;v[2]=0.0f;v[3]=1.0f;v[4]=0.5f;v[5]=0.5f;v[6]=0.5f;v[7]=0.5f;
 func_001FEBD0(0,v); func_001FEBD0(one,v+4);
 func_001FEBD0(0x21,(void*)(p+0x170)); func_001FEBD0(3,(void*)(D_002EFDB8+0x74));
 int n=self->unk4;
 if(n>0) { int off=0x10; for(;n>0;--n) {
 Item_00149480 *obj=*(Item_00149480**)(off+(char*)self);
 if(obj) {
 if(obj->f4 && !obj->fC) ((VObj_00148780*)((char*)obj->f4+12))->f1();
 int frame=obj->f18;
 if(frame==self->unk8) {
 if(obj->f4 && obj->fC) {
 ((VObj_00148780*)((char*)obj->f4+12))->f1();
 if(!obj->f24) {obj->v1(); ((C_001493E0*)obj)->func_001493E0();}
 else {obj->v2(); ((C_001493E0*)obj)->func_001493E0();}
 } else {
 if(!obj->f24) obj->v1(); else obj->v2();
 }
 }
 if(!obj->f4 && obj->fC) ((C_001493E0*)obj)->func_001493E0();
 }
 off+=4;
 } }
 func_0001E860(self->unkC); self->unk8++;
}

