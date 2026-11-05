/* 24 functions from 0x00156880 to 0x00157810, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
struct C_00157290 {
    undefined4 func_00157290(byte param_1);
};

/* globally owned objects the Game destroys */
struct Obj_00156FC0 {
    virtual void destroyObject(int flags);
    virtual void v1();
};

extern Obj_00156FC0 *D_002EFDB8;
extern Obj_00156FC0 *D_002F07B8;
extern int D_002DF8F4;
extern int D_002DF8F8;
extern int D_002DF94C;

struct S_002AA6C0 {
    void func_00011430(int a, int b);
};
extern S_002AA6C0 *D_002AA6C0;

struct S_002BEAAC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
extern S_002BEAAC *D_002BEAAC;

struct S_002A7CB8 {
    char pad0[0x24];
    u8 f24;
    void func_00157810(void);
};
extern S_002A7CB8 *D_002A7CB8;

struct S_00156F30_Iface {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18(int a);
    virtual void v19();
    virtual void v20();
    virtual int v21(int a);
    virtual int v22(int a, int b);
    virtual int v23(int a, int b);
};

struct VT_Game {
    char pad0[0x80];
    void *(__fastcall *f80)(void *self);
};

struct S_Game_Flags {
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
};

struct Game {
    void *vtbl;
    char pad4[4];
    Obj_00156FC0 *f8;
    char padC[0xc];
    int f18;
    char pad1C[0x214];
    union {
        u8 f230;
        S_Game_Flags f230bits;
    };
    char pad231[0x2f];
    volatile int f260;
    volatile int f264;
    volatile int f268;
    volatile int f26c;
    int f270;
    char pad274[4];
    S_00156F30_Iface *f278;
    int func_00156880(void);
    void func_001568A0(int a, int b, int c, int d);
    int func_00156EA0(int v);
    int func_00156F00(int a, int b);
    int func_00156F30(int a, int b);
    void func_00156FC0(void);
    int func_00157030(void);
};

struct C_00157660 {
    void *vtbl;
    void func_00157660(void);
    void func_0001DFF0(void);
};

extern int D_002DF948;

/* node of the GameObject tree: prev/next siblings, first child, parent */
struct GameObject {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    int pad4;
    GameObject *f8;
    GameObject *fC;
    GameObject *f10;
    GameObject *f14;
    unsigned int f18;
    unsigned int f1C;
    char pad20;
    u8 f21;
    void func_001576E0(void);
    void func_00157740(unsigned int flags);
    unsigned int func_00157770(void);
    GameObject *func_001577A0(GameObject *child, unsigned int b);
};

int func_00135C70(int a, int b, int c, int d);
void func_001D47C0(void);
void func_0014FE50(int a);
void func_0014F9A0(void);

struct C_00156E80 {
    void func_00156E80(void);
};

struct C_001576D0 {
    void func_001576D0(void);
};

struct C_001576C0 {
    void func_001576C0(void);
};


int Game::func_00156880(void)
{
    Obj_00156FC0 *p = (Obj_00156FC0 *)((VT_Game *)vtbl)->f80(this);

    D_002EFDB8 = p;
    return p != 0;
}

void Game::func_001568A0(int a, int b, int c, int d)
{
    f260 = a;
    f264 = b;
    f268 = c;
    f26c = d;
    f270 = 0;
    if (f260 != 0) {
        f270 = 1;
    }
    if (f264 != 0) {
        f270++;
    }
    if (f268 != 0) {
        f270++;
    }
    if (f26c != 0) {
        f270++;
    }
}

void C_00156E80::func_00156E80(void)
{
  int func_001DC974(...);
  int in_ECX = (int)this;
  undefined4 uVar1;
  
  uVar1 = func_001DC974();
  *(undefined4 *)(in_ECX + 0x23c) = uVar1;
  *(undefined4 *)(in_ECX + 0x238) = uVar1;
  return;
}

int Game::func_00156EA0(int v)
{
    f230bits.b3 = v;
    f278->v18(v);
    return 1;
}

int Game::func_00156F00(int a, int b)
{
    if (f230 & 8) {
        return 1;
    }
    return f278->v22(a, b) != 0;
}

int Game::func_00156F30(int a, int b)
{
    if (f230 & 8) {
        return 1;
    }
    if (f230 & 4) {
        if (func_00135C70(0x32, 0, a, 0x80) != 0) {
            func_001D47C0();
            D_002AA6C0->func_00011430(1, 0);
        }
        if (func_00135C70(0x3d, 0, a, 0x80) != 0) {
            D_002DF8F8 = 1 - D_002DF8F8;
        }
    }
    return f278->v23(a, b) != 0;
}

void Game::func_00156FC0(void)
{
    extern int D_002870A4;
    vtbl = (void *)&D_002870A4;
    if (D_002EFDB8 != 0) {
        D_002EFDB8->destroyObject(1);
        D_002EFDB8 = 0;
    }
    if (D_002F07B8 != 0) {
        D_002F07B8->v1();
        if (D_002F07B8 != 0) {
            D_002F07B8->destroyObject(1);
        }
        D_002F07B8 = 0;
    }
    if (D_002DF8F4 != 0) {
        func_0014FE50(D_002DF8F4);
    }
    D_002BEAAC->v2();
    func_0014F9A0();
}

int Game::func_00157030(void)
{
    if (D_002EFDB8 != 0) {
        D_002EFDB8->destroyObject(1);
        D_002EFDB8 = 0;
    }
    if (D_002F07B8 != 0) {
        D_002F07B8->v1();
        if (D_002F07B8 != 0) {
            D_002F07B8->destroyObject(1);
        }
        D_002F07B8 = 0;
    }
    f230 |= 0x10;
    if (D_002A7CB8 != 0 && f18 != 0 && D_002A7CB8->f24 != 0) {
        D_002A7CB8->func_00157810();
    }
    if (f278 != 0) {
        f278->v2();
        f278 = 0;
    }
    if (f8 != 0) {
        f8->destroyObject(1);
        f8 = 0;
    }
    return 1;
}

undefined4 C_00157290::func_00157290(byte param_1)
{
  int func_00156FC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00156FC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00157660::func_00157660(void)
{
    extern int D_0028715C;
    int n = D_002DF94C - 1;
    vtbl = (void *)&D_0028715C;
    D_002DF94C = n;
    func_0001DFF0();
}

void C_001576C0::func_001576C0(void)
{
  int* in_ECX = (int*)this;
  
  *(byte *)((int)in_ECX + 0x21) = *(byte *)((int)in_ECX + 0x21) & 0xfc;
                    
                    
  (**(code **)(*in_ECX + 0x20))();
  return;
}

void C_001576D0::func_001576D0(void)
{
  int* in_ECX = (int*)this;
  
  *(byte *)((int)in_ECX + 0x21) = *(byte *)((int)in_ECX + 0x21) | 3;
                    
                    
  (**(code **)(*in_ECX + 0x24))();
  return;
}

void GameObject::func_001576E0(void)
{
    GameObject *c;

    f21 &= 0xfc;
    for (c = f10; c != 0; c = c->fC) {
        if (!(c->f21 & 8)) {
            c->v5();
        }
    }
}

void GameObject::func_00157740(unsigned int flags)
{
    GameObject *p = this;
    GameObject *q;

    f1C |= flags;
    while (p->f14 != 0) {
        q = p->f14;
        q->f1C |= p->f18 | p->f1C;
        p = q;
    }
}

unsigned int GameObject::func_00157770(void)
{
    GameObject *c;
    unsigned int r = 0;

    for (c = f10; c != 0; c = c->fC) {
        r |= c->func_00157770();
    }
    f1C = r;
    return f18 | r;
}

