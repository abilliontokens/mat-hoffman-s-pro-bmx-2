/* 24 functions from 0x00156880 to 0x00157810, found by Ghidra. */
#include "common.h"
extern float D_00276098, D_002756DC, D_00275F64, D_0028714C, D_00275544, D_00275460;
extern int D_002DF944, D_002DF918;
extern float D_002DF91C[10];
extern float D_002DF920, D_002DF924, D_002DF928, D_002DF92C, D_002DF930, D_002DF934, D_002DF938, D_002DF93C, D_002DF940;
void func_00220AFD();
extern int D_002870A4;
extern char D_002A7A84[];
extern char D_002A7AA0[];
void *func_001E8A44(unsigned int size);
void func_0014FDD0();
#include "ghidra.h"
#include "ghidra.h"
struct C_00157290 {
    undefined4 func_00157290(byte param_1);
};

/* globally owned objects the Game destroys */
struct Obj_00156FC0 {
    virtual void destroyObject(int flags);
    virtual void v1();
    virtual void update(float);
    void func_001D0D60();
    void func_00182810();
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
    char pad4[0x100];
    S_002BEAAC *func_0013E080();
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
    virtual void v12(float);
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
    char pad0[0x20];
    void (__fastcall *f20)(void *self);
    char pad24[0x5c];
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
    char pad1C[0x110];
    char f12c[0x104];
    union {
        u8 f230;
        S_Game_Flags f230bits;
    };
    char pad231[3];
    int f234;
    unsigned int f238, f23c;
    char pad240[4];
    float f244, f248;
    char pad24c[0x10];
    float f25c;
    int func_00157420();
    volatile int f260;
    volatile int f264;
    volatile int f268;
    volatile int f26c;
    int f270;
    char pad274[4];
    S_00156F30_Iface *f278;
    Game *func_00157150(void);
    int func_00156880(void);
    int func_001570C0(const char *name, char *out);
    int func_00157130(int a, char *out);
    int func_001568A0(int a, int b, int c, int d);
    int func_00156EA0(int v);
    int func_00156F00(int a, int b);
    int func_00156F30(int a, int b);
    void func_00156FC0(void);
    int func_00157030(void);
    void func_00156920(int *out);
};

struct C_00157660 {
    void *vtbl;
    void func_00157660(void);
    void func_0001DFF0(void);
};

extern int D_002DF948;

extern "C" char *__cdecl strcpy(char *dst, const char *src);
extern "C" char *__cdecl strcat(char *dst, const char *src);

/* the GameObject as its constructor sees it: the vtable is stored by hand
   and the flags at +0x21 are bitfields */
struct S_00157600_Flags {
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b23 : 2;
    unsigned char b47 : 4;
};

struct C_00157600 {
    void *vtbl;
    int pad4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    unsigned char f20;
    S_00157600_Flags f21;
    C_00157600 *func_00157600(unsigned char flags);
};

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
    virtual void v8();
    virtual void v9();
    int pad4;
    GameObject *f8;
    GameObject *fC;
    GameObject *f10;
    GameObject *f14;
    unsigned int f18;
    unsigned int f1C;
    char pad20;
    u8 f21;
    void func_00157680(void);
    void func_001576E0(void);
    void func_00157740(unsigned int flags);
    unsigned int func_00157770(void);
    GameObject *func_001577A0(GameObject *child, unsigned int b);
};

int func_00135C70(int a, int b, int c, int d);
void func_001D47C0(void);
void func_0014FE50(int a);
void func_0014F9A0(void);

struct C_0001D0F0 {
    char pad0[0xb0];
    u8 fb0;
    C_0001D0F0 *func_0001D0F0(int a);
    void func_0001D280(int a, int b, int c);
};

struct C_001D7CE0 {
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
    C_001D7CE0 *func_001D7CE0(void);
};
extern C_001D7CE0 *D_002F0670;

struct C_0015D1B0 {
    GameObject *func_0015D1B0(void);
};

struct VT_Game2 {
    char pad0[0xc];
    int (__fastcall *fc)(void *self);
    int (__fastcall *f10)(void *self);
    char pad14[0x70];
    int (__fastcall *f84)(void *self);
};

struct Game2 {
    VT_Game2 *vtbl;
    C_0001D0F0 *f4;
    char pad8[0xc];
    GameObject *f14;
    char pad18[0x218];
    u8 f230;
    char pad231[3];
    int f234;
    char pad238[0x40];
    GameObject *f278;
    int func_001572B0(int a);
};

int func_001DC974(void);
void func_001E8826(int seed);
void func_001E8833(void);

struct C_00156E80 {
    void func_00156E80(void);
};

struct C_001576D0 {
    void func_001576D0(void);
};

struct C_001576C0 {
    void func_001576C0(void);
};

C_00157600 *C_00157600::func_00157600(unsigned char flags)
{
    int func_0001DFE0(...);
    extern int D_0028715C;

    func_0001DFE0();
    vtbl = (void *)&D_0028715C;
    D_002DF94C++;
    f20 = 0xff;
    f8 = 0;
    fC = 0;
    f10 = 0;
    f14 = 0;
    f21.b0 = flags;
    f21.b1 = flags;
    f21.b23 = 0;
    f18 = 0;
    f1C = 0;
    return this;
}

void C_00157660::func_00157660(void)
{
    extern int D_0028715C;
    int n = D_002DF94C - 1;
    vtbl = (void *)&D_0028715C;
    D_002DF94C = n;
    func_0001DFF0();
}

void GameObject::func_00157680(void)
{
    GameObject *c;

    for (c = f10; c != 0; c = c->fC) {
        if (!(c->f21 & 8)) {
            c->v8();
        }
    }
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
        if ((c->f21 & 8) == 0)
            c->v5();
    }
}

void GameObject::func_00157740(unsigned int flags)
{
    f1C |= flags;
    if (f14 != 0) {
        f14->func_00157740(f18 | f1C);
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

GameObject *GameObject::func_001577A0(GameObject *child, unsigned int b)
{
    GameObject *p;

    if (D_002DF948 != 0) {
        return 0;
    }
    if (child != 0) {
        p = f10;
        if (p == 0) {
            f10 = child;
            child->f8 = 0;
        } else {
            while (p->fC != 0) {
                p = p->fC;
            }
            p->fC = child;
            child->f8 = p;
        }
        p = child;
        do {
            p->f14 = this;
            p = p->fC;
        } while (p != 0);
        child->f18 = b;
        child->func_00157740(child->f1C);
    }
    return child;
}
