/* 19 functions from 0x001002A0 to 0x00101280, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_001E891B(void *p);

struct C_001B1B20 {
 int func_001B1B20();
 void func_001B1980();
 void func_001B17D0(char *s);
 void func_001B1860(int, float, int, float, int, int, int, int, float, int, float, int, int);
};
extern char *D_002A8490;
extern char D_00277038;
void func_001ADCC0(char *, int, char *, int);
void func_001AC330(char *, char *, char *);
struct C_001009D0 {
 char pad0[0x298];
 C_001B1B20 *unk298;
 char pad29c[0xc];
 int unk2a8, unk2ac, unk2b0, unk2b4;
 float unk2b8;
 int unk2bc, unk2c0, unk2c4, unk2c8;
 float unk2cc, unk2d0;
 void func_001009D0();
 void func_000E1EA0();
 void func_000E1F00();
 void func_001008E0();
 void func_000E1F60();
 void func_00157960();
};

struct W_101010 {
    void func_00103260(int a);
    void func_00103350(void);
};
struct Q_101010 {
    int func_000301D0(void);
};
struct R_101010 {
    char pad0[0x74];
    Q_101010 *p74;
};
struct O_101010 {
    char pad0[0x25c];
    R_101010 *p25C;
    char pad260[0x2a4 - 0x260];
    int f2A4;
    W_101010 *func_000BA9B0(int id);
};
struct M_101010 {
    char pad0[0x3b];
    u8 b3B;
};
struct VP_101010 {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
    virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
    virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15();
    virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
    virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23();
    virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27();
    virtual void v70(int a, int b);
};
extern float D_00278C48;
extern float D_0027DE74;
int func_001E8858(float f);
struct C_00101010 {
    void **vtbl;
    char pad4[0x120];
    O_101010 *p124;
    char pad128[0x280 - 0x128];
    M_101010 *p280;
    char pad284[0xc];
    int f290;
    char pad294[4];
    float f298;
    int f29C, f2A0, f2A4, f2A8, f2AC, f2B0, f2B4, f2B8, f2BC;
    float f2C0;
    int f2C4, f2C8, f2CC, f2D0;
    float f2D4, f2D8;
    void func_00101010(float dt);
    void func_001BED00(float dt);
    void func_001BEE50(int a, int b, int c);
    void v70(int a, int b);
};

struct C_00100CF0 {
 void **vtbl;
 char pad0[0x120];
 O_101010 *owner;
 char pad128[0x20];
 int clear148[8];
 char pad168[0x11c];
 int f284, f288;
 float f28c;
 int f290, f294, f298, f29c, f2a0, f2a4, f2a8, f2ac, f2b0;
 float f2b4;
 int f2b8, f2bc, f2c0, f2c4;
 float f2c8, f2cc;
   M_101010 *f2d0;
    void func_00100CF0(float dt);
  void func_001BEE50(int, int, int);
  void func_001BED00(float);
};
struct C_00094E40 { void func_00094E40(int, int, int); };

struct C_001D6600 {
    void func_001D6600(void);
};

struct G_2E0 {
    int f0, f4, f8, fc, f10, f14;
};
struct C_00100400 {
    void **vtbl;
    char pad4[0x120];
    O_101010 *p124;
    char pad128[0x280 - 0x128];
    int f280, f284;
    float f288;
    int f28C, f290, f294;
    char pad298[8];
    int f2A0, f2A4, f2A8;
    float f2AC;
    int f2B0;
    char pad2B4[4];
    int f2B8, f2BC, f2C0;
    float f2C4, f2C8, f2CC;
    M_101010 *p2D0;
    void func_00100400(float dt);
    void func_001BED00(float dt);
    void func_001BEE50(int a, int b, int c);
    void func_001BEF50(int a, int b);
    void func_001BEFC0(int a, int b);
    void v70(int a, int b);
};
extern float D_00275460;

struct C_002B91AC_s {
    char pad0[0x34];
    C_001D6600 *f34;
    union {
        C_001D6600 *arr38[2];
        struct {
            C_001D6600 *f38;
            C_001D6600 *f3C;
        };
    };
    C_001D6600 *f40;
    C_001D6600 *f44;
};

extern C_002B91AC_s *D_002B91AC;

struct C_001002A0 {
 char pad0[0x280];
 int unk280;
 char pad284[0x34];
 int unk2b8, unk2bc, unk2c0, unk2c4, unk2c8, unk2cc;
 int unk2d0, unk2d4, unk2d8, unk2dc;
 float unk2e0;
 int unk2e4, unk2e8;
 float unk2ec;
 int unk2f0[1];
 char pad2f4[0x5a0];
 C_001B1B20 *unk894;
 void func_001002A0();
 void func_000DFC00();
 void func_000DFC90();
 void func_000DF8C0();
 void func_000DFA80();
 void func_000DFE50();
 void func_00157960();
};

struct C_001006E0 {
    void func_001006E0(void);
    void func_000F1B60(void);
    void func_000E1650(void);
    void func_00157960(void);
};

struct C_00100700 {
    void *func_00100700(unsigned int flags);
    void func_000E1810(void);
};

struct C_00100AB0 {
    void *func_00100AB0(unsigned int flags);
    void func_000E2140(void);
};

struct C_00100AD0 {
    char pad0[0x2B8];
    int unk2B8;
    void func_00100AD0(void);
    void func_000E3AC0(void);
};
struct C_001003E0 {
    undefined4 func_001003E0(byte param_1);
};

struct C_00100C00 {
    void func_000E4AB0();
    void *func_00100C00(unsigned int flags);
};

struct C_00100CD0 {
    void func_000EA9B0();
    void *func_00100CD0(unsigned int flags);
};

struct C_00100B30 {
    char pad0[0x288];
    int unk288;
    char pad28c[0x24];
    int unk2b0;
    int unk2b4;
    char pad2b8[0xc];
    int unk2c4;
    int unk2c8;
    int unk2cc;
    int unk2d0;
    float unk2d4;
    int unk2d8;
    int unk2dc;
    void func_000E3640();
    void func_000E3BA0();
    void func_000E3C90();
    void func_000E3790();
    void func_000E3D30();
    void func_00157960();
    void func_00100B30();
};

struct C_001B1980 {
    void func_001B1980();
    void func_001B1860(int a1, float a2, int a3, float a4, int a5, int a6,
                        int a7, int a8, float a9, int a10, float a11, int a12, int a13);
};

struct C_001D5AD0 {
    void func_001D5AD0();
};

struct C_00100C20 {
    char pad0[0x2ac];
    int unk2ac;
    char pad2b0[0x228];
    int unk4d8;
    char pad4dc[0x34];
    C_001D5AD0 *unk510;
    char pad514[0x64];
    C_001B1980 *f578[5];
    void func_000E7AD0();
    void func_000EA410();
    void func_000E6E20();
    void func_000E8740();
    void func_00157960();
    void func_00100C20();
};

struct C_00100FF0 {
    undefined4 func_00100FF0(byte param_1);
};

struct C_00101240 {
    undefined4 func_00101240(byte param_1);
};

struct C_00100720_Lookup { int *func_0018C160(int a); };
struct C_00100720_Str { char pad0[0x9c0]; char *s9c0; };
struct C_00100720_Mid { char pad0[4]; C_00100720_Str *f4; };
struct C_00100720_Game { char pad0[0x2e8]; C_00100720_Mid *p2E8; C_00100720_Lookup *p2EC; };
struct C_00100720_Text {
    C_00100720_Text *func_001B12C0(int a);
    void func_001B13A0(void *a, void *b, int c, int d);
    void func_001B1A30(float x, float y, int z);
    void func_001B2270(int c);
    void func_001B19A0(int a);
};
struct C_00100720_Spr {
    char pad0[0x28];
    int f28;
    char pad2c[0x10];
    int f3C, f40, f44, f48;
    char pad4c[0xc];
    unsigned char f58;
    C_00100720_Spr *func_001D5760();
    void func_001D5810(void *a, float x, float y, int z);
};
extern char D_00278690, D_002786A0, D_00278678, D_002786B0;
extern int D_0028F5E0;
void *func_001E8A44(unsigned int n);
struct C_00100720 {
    char pad0[0x298];
    C_00100720_Text *unk298;
    char pad29c[0x38];
    C_00100720_Spr *unk2d4[2];
    void func_001BE4F0(int a, int b, int c);
    void func_000E1C20();
    void func_001577A0(void *p, int n);
    C_00100720 *func_00100720(int a, int b, int c);
};

struct C_00101260 {
    undefined4 func_00101260(byte param_1);
};


void C_001002A0::func_001002A0() {
 if (unk2b8) { func_000DFC00(); func_000DFC90(); unk2b8=0; }
 if (unk2c0 == 0 && unk2e4 == 0 && unk894->func_001B1B20() == 0xff) unk2e4=1;
 if (unk2c0) {
 unk2f0[0]=1; unk2ec=0;
 func_000DF8C0();
 unk2d0=0xff; unk2d4=0; unk2d8=0; unk2dc=0; unk2e0=0.25f; unk2c0=0;
 if(unk2c8) unk2c8=0;
 }
 if(unk2c4) {
 func_000DFA80();
 unk2d0=0; unk2d4=0xff; unk2d8=0xff; unk2dc=0; unk2e0=0.25f; unk2c4=0;
 }
 D_002B91AC->f3C->func_001D6600();
 if(unk2f0[unk280]==0) {
 D_002B91AC->f44->func_001D6600();
 D_002B91AC->f40->func_001D6600();
 }
 D_002B91AC->f34->func_001D6600();
 func_000DFE50(); func_00157960();
}

undefined4 C_001003E0::func_001003E0(byte param_1)
{
  int func_000E0DF0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000E0DF0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00100400::func_00100400(float dt)
{
    O_101010 *owner = p124;
    if (f28C != 0 || f290 != 0) {
        f288 += dt;
        if (f288 >= D_0027DE74) {
            f294 = 1;
            ((VP_101010 *)this)->v70(f284, f280);
            f288 = 0;
        }
    }
    if (f2B0 != 0 && f2A8 == 0) {
        f2AC += dt;
        if (f2AC >= D_00278C48) {
            f2A8 = 1;
            f2B0 = 0;
        }
    }
    if (f2B8 != p2D0->b3B) {
        if (f2C4 >= f2C8) {
            f2C0 = f2B8;
        } else {
            int base = f2BC;
            f2C0 = (int)((float)(f2B8 - base) * (f2C4 / f2C8)) + base;
            f2C4 += dt;
        }
    }
    f2CC += dt;
    if (f2A0 != 0 && owner->p25C->p74->func_000301D0() == 0 && f2CC >= D_00275460) {
        int a;
        int x;
        int ff = 0xff;
        f2AC = 0;
        f2B0 = 1;
        func_001BEF50(1, 4);
        owner->func_000BA9B0(0x1b)->func_00103260(0);
        owner->func_000BA9B0(0x1c)->func_00103260(0);
        owner->func_000BA9B0(0x1d)->func_00103260(0);
        x = ((G_2E0 *)*(int *)(D_002A8490 + 0x2e0))->f4;
        if (x != 7 && x != 3) {
            func_001BEFC0(1, 4);
        } else {
            owner->func_000BA9B0(0x1e)->func_00103260(0);
        }
        f2B8 = ff;
        f2BC = 0;
        f2C0 = 0;
        f2C4 = 0;
        f2C8 = 0.25f;
        G_2E0 *g = (G_2E0 *)*(int *)(D_002A8490 + 0x2e0);
        a = g->f14;
        if (a == 4) {
            if (g->f4 == 7 || g->f4 == 3)
                func_001BEE50(1, 4, 0);
            else
                func_001BEE50(1, 1, 0);
        } else {
            func_001BEE50(1, a, 0);
        }
        f2A0 = 0;
    }
    if (f2A4 != 0) {
        int x;
        owner->func_000BA9B0(0x1b)->func_00103350();
        owner->func_000BA9B0(0x1c)->func_00103350();
        owner->func_000BA9B0(0x1d)->func_00103350();
        x = ((G_2E0 *)*(int *)(D_002A8490 + 0x2e0))->f4;
        if (x == 7 || x == 3)
            owner->func_000BA9B0(0x1e)->func_00103350();
        f2B8 = 0;
        f2BC = 0xff;
        f2C0 = 0xff;
        f2C4 = 0;
        f2C8 = 0.25f;
        f2A4 = 0;
    }
    func_001BED00(dt);
}

void C_001006E0::func_001006E0(void) {
    func_000F1B60();
    func_000E1650();
    func_00157960();
}

void *C_00100700::func_00100700(unsigned int flags) {
    func_000E1810();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

extern "C" unsigned int strlen(const char *);
C_00100720 *C_00100720::func_00100720(int a, int b, int c)
{
    int i;
    C_00100720_Text *t;
    C_00100720_Spr *p;

    func_001BE4F0(a, b, c);
    ((C_00100720_Game *)D_002A8490)->p2EC->func_0018C160((int)&D_00278690);
    ((C_00100720_Game *)D_002A8490)->p2EC->func_0018C160((int)&D_002786A0);
    ((C_00100720_Game *)D_002A8490)->p2EC->func_0018C160((int)&D_00278678);
    t = (C_00100720_Text *)func_001E8A44(0x184);
    t = t != 0 ? t->func_001B12C0(1) : 0;
    unk298 = t;
    t->func_001B13A0(&D_002786A0, &D_002786A0, 0,
        strlen(((C_00100720_Game *)D_002A8490)->p2E8->f4->s9c0) + 4);
    unk298->func_001B1A30(320.0f, 157.0f, 0);
    unk298->func_001B2270(0xffbfa35a);
    unk298->func_001B19A0(D_0028F5E0);
    func_000E1C20();
    func_001577A0(unk298, -1);
    for (i = 0; i < 2; i++) {
        p = (C_00100720_Spr *)func_001E8A44(0x64);
        p = p != 0 ? p->func_001D5760() : 0;
        unk2d4[i] = p;
        if (i % 2 == 0) {
            p->func_001D5810(&D_002786B0, 100.0f, 150.0f, 0);
        } else {
            p->func_001D5810(&D_002786B0, 321.0f, 150.0f, 0);
            p = unk2d4[i];
            p->f3C = 0x3f800000;
            p->f40 = 0;
            p->f44 = 0;
            p->f48 = 0x3f800000;
            p->f58 |= 4;
        }
        p = unk2d4[i];
        if (p->f28 != 0x435d0000) {
            p->f28 = 0x435d0000;
            p->f58 |= 1;
        }
    }
    return this;
}

void C_001009D0::func_001008E0() {
 char buf[4];
 char dest[64];
 int i;
 for (i = 0; i < 2; i++)
  D_002B91AC->arr38[i]->func_001D6600();
 D_002B91AC->f34->func_001D6600();
 if (unk2ac) {
  unk298->func_001B1980();
  func_001ADCC0(buf,3,&D_00277038,*(int *)((char *)this+0x29c));
  func_001AC330(dest,*(char **)(*(char **)(*(char **)(D_002A8490+0x2e8)+4)+0xa28),buf);
  unk298->func_001B17D0(dest);
  unk298->func_001B1860(0,-1.0f,255,1.15f,0,0,-1082130432,255,1.0f,0,0.0f,0,0);
  unk2ac=0;
 }
}

void C_001009D0::func_001009D0() {
 if (unk2a8 == 0 && unk2b0 == 0 && unk298->func_001B1B20() == 0xff) unk2a8=1;
 if(unk2b0 != 0) {
 unk2bc=1; unk2b8=0;
 func_000E1EA0();
 unk2c0=0xff; unk2c4=0; unk2c8=0; unk2cc=0; unk2d0=0.25f; unk2b0=0;
 }
 if(unk2b4 != 0) {
 func_000E1F00();
 unk2c0=0; unk2c4=0xff; unk2c8=0xff; unk2cc=0; unk2d0=0.25f; unk2b4=0;
 }
 func_001008E0(); func_000E1F60(); func_00157960();
}

void *C_00100AB0::func_00100AB0(unsigned int flags) {
    func_000E2140();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_00100AD0::func_00100AD0(void) {
    int i;

    for (i = 0; i < 2; i++)
        D_002B91AC->arr38[i]->func_001D6600();
    D_002B91AC->f34->func_001D6600();
    if (unk2B8) {
        func_000E3AC0();
        unk2B8 = 0;
    }
}

void C_00100B30::func_00100B30() {
    if (unk288 != 0) {
        func_000E3640();
        unk288 = 0;
    }
    if (unk2b0 != 0) {
        unk2dc = 1;
        unk2d8 = 0;
        unk2c4 = 0xff;
        unk2c8 = 0;
        unk2cc = 0;
        unk2d0 = 0;
        unk2d4 = 0.25f;
        func_000E3BA0();
        unk2b0 = 0;
    }
    if (unk2b4 != 0) {
        unk2c4 = 0;
        unk2c8 = 0xff;
        unk2cc = 0xff;
        unk2d0 = 0;
        unk2d4 = 0.25f;
        func_000E3C90();
        unk2b4 = 0;
    }
    func_000E3790();
    ((C_00100AD0 *)this)->func_00100AD0();
    func_000E3D30();
    func_00157960();
}

void *C_00100C00::func_00100C00(unsigned int flags) {
    func_000E4AB0();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

void C_00100C20::func_00100C20() {
    int i;

    func_000E7AD0();
    func_000EA410();
    if (unk2ac != 0) {
        for (i = 0; i < 5; i++)
            f578[i]->func_001B1980();
        if (unk510 != 0)
            unk510->func_001D5AD0();
    }
    if (unk4d8 != 0) {
        for (i = 0; i < 5; i++)
            f578[i]->func_001B1860(0, -1.0f, 0, 1.15f, 0, 0, 0, 0xff, 1.0f, 0, 0.25f, 0, 0);
        func_000E6E20();
        unk4d8 = 0;
    }
    func_000E8740();
    func_00157960();
}

void *C_00100CD0::func_00100CD0(unsigned int flags) {
    func_000EA9B0();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

extern "C" void *memset(void *, int, unsigned int);
void C_00100CF0::func_00100CF0(float dt) {
 O_101010 *p = owner;
 VP_101010 *q = (VP_101010 *)this;
 if (f29c || f2a0) { for(int i=0;i<8;i++) clear148[i]=0; }
 if (f2bc != f2d0->b3B) {
  if (f2c8 >= f2cc) f2c4 = f2bc;
  else { float delta = (float)(f2bc-f2c0); f2c4 = (int)(delta*(f2c8/f2cc))+f2c0; f2c8 += dt; }
 }
 if (f290 || f2a0 || f29c) {
  f28c += dt;
  if (f28c >= D_0027DE74) {
   if (f290 && p->f2A4) { f290=0; f2a8=0; }
   else { f298=1; q->v70(f288, f284); f28c=0; }
  }
 }
 if (f2b8 && !f2b0) {
  f2b4 += dt;
  if (f2b4 >= D_00278C48) {
   f2b0=1; f2b8=0;
  }
 }
 if(f2a4) (*(C_00094E40 **)(*(char **)(D_002A8490+0x2e0)+0x2fc))->func_00094E40(2,1,500);
 if (f2a4 && !p->p25C->p74->func_000301D0()) {
  f2b8=1; f2b4=0;
  p->func_000BA9B0(35)->func_00103260(0);
p->func_000BA9B0(36)->func_00103260(0);
p->func_000BA9B0(37)->func_00103260(0);
p->func_000BA9B0(38)->func_00103260(0);
p->func_000BA9B0(39)->func_00103260(0);
p->func_000BA9B0(40)->func_00103260(0);
  func_001BEE50(1,f2ac,0);
  f2bc=255; f2c0=0; f2c4=0; f2c8=0; f2cc=.25f; f2a4=0;
 }
 if(f2a8) {
  p->func_000BA9B0(35)->func_00103350();
p->func_000BA9B0(36)->func_00103350();
p->func_000BA9B0(37)->func_00103350();
p->func_000BA9B0(38)->func_00103350();
p->func_000BA9B0(39)->func_00103350();
p->func_000BA9B0(40)->func_00103350();
  f2bc=0; f2c0=255; f2c4=255; f2c8=0; f2cc=.25f; f2a8=0;
 }
 func_001BED00(dt);
}

undefined4 C_00100FF0::func_00100FF0(byte param_1)
{
  int func_000EB420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000EB420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_00101010::func_00101010(float dt)
{
    O_101010 *owner = p124;
    if (f2C4 != 0 && f2BC == 0) {
        f2C0 += dt;
        if (f2C0 >= D_00278C48) {
            f2BC = 1;
            f2C4 = 0;
        }
    }
    if (f2C8 != p280->b3B) {
        if (f2D4 >= f2D8) {
            f2D0 = f2C8;
        } else {
            f2D0 = (int)((float)(f2C8 - f2CC) * (f2D4 / f2D8)) + f2CC;
            f2D4 += dt;
        }
    }
    if (f2B4 != 0) {
        if (owner->p25C->p74->func_000301D0() == 0) {
            f2C4 = 1;
            f2C0 = 0.0f;
            owner->func_000BA9B0(0x2a)->func_00103260(0);
            owner->func_000BA9B0(0x29)->func_00103260(0);
            f2C8 = 0xff;
            f2CC = 0;
            f2D0 = 0;
            f2D4 = 0.0f;
            f2D8 = 0.25f;
            func_001BEE50(1, f290, 0);
            f2B4 = 0;
        }
    }
    if (f2B8 != 0) {
        owner->func_000BA9B0(0x2a)->func_00103350();
        owner->func_000BA9B0(0x29)->func_00103350();
        f2C8 = 0;
        f2CC = 0xff;
        f2D0 = 0xff;
        f2D4 = 0.0f;
        f2D8 = 0.25f;
        f2B8 = 0;
    }
    if (f29C != 0 || f2B0 != 0 || f2AC != 0) {
        f298 += dt;
        if (f298 >= D_0027DE74) {
            if (f29C != 0 && owner->f2A4 != 0) {
                f29C = 0;
                f2A0 = 0;
            } else {
                f2A0 = 1;
                ((VP_101010 *)this)->v70(f2A4, f2A8);
                f298 = 0.0f;
            }
        }
    }
    func_001BED00(dt);
}

undefined4 C_00101240::func_00101240(byte param_1)
{
  int func_000EBE30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000EBE30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_00101260::func_00101260(byte param_1)
{
  int func_000ED0E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_000ED0E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

