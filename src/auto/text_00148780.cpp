/* 24 functions from 0x00148780 to 0x00149620, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);
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
    void *unk20;
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
    if (n == 0) {
        unk20 = 0;
        return;
    }
    void *p = func_001E8A44(n * 0x14);
    if (p != 0) {
        func_00011FF0(p, 0x14, n, &D_00144CD0);
        unk20 = p;
    } else {
        p = 0;
        unk20 = p;
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
  *(volatile u32 *)&unk4 = a->unk4;
  unk8 = a->unk8;
  *(volatile u32 *)&unkC = (u32)&D_00284E94;
  *(volatile void **)&vtbl = (void *)&D_00285CA0;
  *(volatile u32 *)&unkC = (u32)&D_00285C94;
  func_00144E70();
  return this;
}

C_00148820::C_00148820(int a1, void *a2)
{
    *(volatile u32 *)&unk4 = 0;
    *(volatile void **)&unk8 = a2;
    *(volatile int *)((char *)this + 0xC) = (int)&D_00284E94;
    *(volatile void **)&vtbl = (void *)&D_00285CA0;
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

void *C_00149120::func_00149120(int a0, int a1)
{
    void *func_001E8A44(int);
    void __stdcall func_00011FF0(void *p, int a1, int a2, int *a3);
    func_001B07F0(a0, a1);
    *(volatile u32 *)&unk1C = (u32)&D_00284E94;
    *(volatile void **)&vtbl = (void *)&D_00285C84;
    *(volatile u32 *)&unk1C = (u32)&D_00285C78;
    int n = unk8->count;
    if (n == 0) {
        unk20 = 0;
    } else {
        void *p = func_001E8A44(n * 0x14);
        if (p != 0) {
            func_00011FF0(p, 0x14, n, &D_00144CD0);
            unk20 = (Anim_00149120 *)p;
        } else {
            p = 0;
            *(volatile void **)&unk20 = p;
        }
    }
    for (int i = 0; i < unk8->count; i++) {
        ((Anim_00149120 *)unk20)[i].a0 = unk8->arr[i].a0;
        ((Anim_00149120 *)unk20)[i].data = unk8->arr[i].data;
    }
    return this;
}

void *C_001491E0::func_001491E0(C_001491E0 *a0)
{
    void *func_001E8A44(int);
    void __stdcall func_00011FF0(void *p, int a1, int a2, int *a3);
    func_001B08F0(a0);
    *(volatile u32 *)&unk1C = (u32)&D_00284E94;
    *(volatile void **)&vtbl = (void *)&D_00285C84;
    *(volatile u32 *)&unk1C = (u32)&D_00285C78;
    int n = unk8->count;
    if (n == 0) {
        unk20 = 0;
    } else {
        void *p = func_001E8A44(n * 0x14);
        if (p != 0) {
            func_00011FF0(p, 0x14, n, &D_00144CD0);
            unk20 = (Anim_00149120 *)p;
        } else {
            p = 0;
            *(volatile void **)&unk20 = p;
        }
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
    void *func_001E8A44(int size);
    extern undefined4 D_002EFDB8;
    extern VObj_00148780 *D_002BF0C8;
    extern int D_00286818;
    VObj_00148780 *p;

    if (unkC != 0) {
        ((VObj_00148780 *)((char *)unkC + 4))->f1();
    }
    func_001FEBD0(0x21, (void *)(*(int *)(D_002EFDB8 + 4) + 0x170));
    func_001FEBD0(0x3, (void *)(D_002EFDB8 + 0x74));
    if (D_002BF0C8 == 0) {
        p = (VObj_00148780 *)func_001E8A44(4);
        if (p != 0)
            *(int *)p = (int)&D_00286818;
    } else {
        p = D_002BF0C8;
    }
    D_002BF0C8 = p;
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

