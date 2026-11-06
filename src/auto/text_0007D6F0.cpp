/* 10 functions from 0x0007D6F0 to 0x0007E690, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0007E0A0 {
    undefined4 func_0007E0A0(byte param_1);
};

struct C_0007E1C0 {
    undefined4 func_0007E1C0(byte param_1);
};

struct C_0007E200 {
    undefined4 func_0007E200(byte param_1);
};

struct C_0007E050_quat {
    float x, y, z, w;
};

struct C_0007E050_item {
    C_0007E050_quat q0, q1, q2;
    char pad[0x40];
};

struct C_0007E050 {
    char pad0[0x30];
    C_0007E050_item items[0x96];
    C_0007E050 *func_0007E050(void);
};

struct GObj4_7E {
    char pad0[0x930];
    char *p930;
    char pad934[0x134];
    char *fA68;
    char padA6C[0x464];
    char *fED0;
    char padED4[0x3c];
    char *fF10;
};

struct GObj2E8_7E {
    char pad0[4];
    GObj4_7E *p4;
};

struct GObjRoot_7E {
    char pad0[0x270];
    int f270;
    int f274;
    char pad278[0x2e8 - 0x278];
    GObj2E8_7E *p2E8;
    char *p2EC;
};

extern int D_002B9060;
extern int D_002B905C;
extern int D_00278AF0;

struct C_Rect24_7E {
    int x;
    int y;
    int w;
    int h;
    int f10;
    int f14;
};

struct C_Creator_7E {
    int func_00026500(int a, int b);
};

extern C_Creator_7E *D_002A7CB8;

struct C_VCall8_7E {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
    int f4;
};

extern C_VCall8_7E *D_002EFDB8;

struct C_12B2B0_7E {
    char pad0[0x1e0];
    C_Rect24_7E rect;
    void func_0012B2B0(void *a, void *b);
};

struct C_Cache_7E {
    char pad0[0x90];
    int f90;
};

struct C_0007E0C0 {
    void *vtbl;
    char pad4[0xD0];
    C_Cache_7E *fD4;
    undefined4 func_0007E0C0(void);
    void func_0006D100(void);
    void func_0006CEC0(void);
    void func_00157960(void);
};

struct SetterObj_7E {
    void *func_001B12C0(int a);
    void *func_001B13A0(int a, int b, int c, int len);
    void func_001B17D0(char *s);
    void func_001B1980();
    float func_001B15E0();
    void func_001B1A30(float x, float y, int z);
    void func_001B19C0(int x, int y, int z);
    void func_001B19A0(int p);
    void func_001B2270(unsigned int color);
    void func_001B1860(int, float, int, float, float, float, float, int, float, float, float, float, float);
};
struct C_7E_Manager {
    char *func_00094810(int);
    char *func_00094840();
    int func_00094890();
};
struct C_7E_Sub { char pad[0x2fc]; C_7E_Manager *manager; };
struct C_7E_Root { char pad[0x2e0]; C_7E_Sub *sub; };
struct C_7E_Object { void func_001D6600(); };
struct C_0007E2B0 {
    char pad0[0x64];
    int f64, f68, f6c;
    C_7E_Object *f70, *f74;
    char pad78[0xc];
    int f84, f88;
    char pad8c[0x10];
    int f9c, fa0, fa4, fa8;
    char padac[0x10];
    float fbc;
    char padc0[0xc];
    SetterObj_7E *items[4];
    int ys[4];
    void func_0007E2B0();
    void func_0007E220();
    void func_00072450();
    void func_00072330();
};
extern float D_002755E8;
extern float D_00275460;

struct C_0007E220 {
    char pad0[0xac];
    int fAC;
    char padB0[0x24];
    SetterObj_7E *fD4;
    void func_0007E220(void);
};

extern GObjRoot_7E *D_002A8490;
extern int D_00277038;
void func_001ADCC0(char *buf, int size, char *fmt, ...);
void func_001AC330(char *dest, char *fmt, char *arg);

void *func_001E8A44(int size);
extern char D_00278664[];      /* "global\textures\" */
extern char D_002A60B0[];
extern char D_002786A0[];      /* "nosebleedbold16" */
extern char D_00278690[];      /* "nosebleedbold18" */
extern char D_00278658[];      /* "letterbox" */
extern char D_00278600[];      /* "Dimmer" */
extern char D_00278648[];      /* "xsymbol" */
extern char D_00278624[];      /* "xsymbolhighlighted" */
extern char D_00278638[];      /* "symbol" */
extern char D_00278608[];      /* "triangle" */
extern char D_002786B0[];      /* "overlay" */
extern char D_00279008[];      /* "circlesymbol" */
extern char D_00278FF0[];      /* "circlesymbolhighlighted" */
extern char D_00279038[];      /* "ui_updown" */
extern char D_00279044[];      /* "ui_leftright" */
extern char D_00275678[];      /* "%s%s" */
extern char D_002A5870[];      /* "tracks\" */
extern char D_002A5FA8[];      /* "textures\" */
extern float D_00278650;       /* 128.0f */
extern float D_00278654;       /* 127.0f */
extern float D_00275544;       /* 0.0f */
extern float D_0027653C;       /* 15.0f */
extern float D_00279054;       /* 84.0f */

struct S17_7D { char b[17]; };

struct C_0018C780Obj {
    void func_0018C780(int a, void **arr, int b);
};

/* XboxScreenIcon */
struct Icon_7D {
    void *vtbl;
    char pad4[0x20];
    float f24;
    float f28;
    float f2c;
    int f30;
    int f34;
    u32 f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    void *f54;
    u8 f58;
    char pad59[0xb];
    Icon_7D *func_001D5760();
    void func_001D5810(int tex, float b, float c, float d);
    void setW(float v) { if (f28 != v) { f58 |= 1; f28 = v; } }
    void setH(float v) { if (f2c != v) { f58 |= 1; f2c = v; } }
    void updateUV() {
        f3c = f4c * D_00278654;
        f40 = f4c * D_00275544;
        f44 = f50 * D_0027653C;
        f48 = f50 * D_00275544;
        f58 |= 4;
    }
};

struct C_Arg_7D {
    char pad0[0x1d0];
    int f1d0;
};

struct C_0007D6F0 {
    char pad0[0x64];
    SetterObj_7E *texts[8];
    char pad84[0x14];
    Icon_7D *f98, *f9c, *fa0, *fa4, *fa8, *fac, *fb0, *fb4, *fb8, *fbc;
    int ys[8];
    char padE0[4];
    Icon_7D *fE4[5];
    Icon_7D *fF8[5];
    Icon_7D *f10c[16];
    Icon_7D *f14c;
    char pad150[8];
    C_Arg_7D *f15c;
    char pad160[0x40];
    int f1a0;
    C_0007D6F0 *func_0007D6F0(C_Arg_7D *arg);
    void func_0006A360();
    void func_001577A0(void *p, int n);
};

struct C_0007E1E0 {
    void *func_0007E1E0(unsigned int flags);
    void func_0006E480(void);
};

void func_001E891B(void *ptr);

struct C_Panel_7D {
    void func_00093120(void);
    void func_00093970(float a, float b, int c, int d, int e, int f);
    void func_00093890(float a, float b, int c, int d, int e, int f);
    void func_00093C80(float a, float b, int c, int d, int e, int f);
    void func_00093CF0(float a, float b, int c, int d, int e, int f);
    void func_00094690(float a, float b, int c, int d, int e, int f);
    void func_000941A0(int g, float a, float b, int c, int d, int e, int f);
    void func_000940D0(float a, float b, int c, int d, int e, int f);
    void func_00093A00(float a, float b, int c, int d, int e, int f);
    void func_000942F0(float a, float b, int c, int d, int e, int f);
    void func_00094410(float a, float b, int c, int d, int e, int f);
};
extern int D_002B9058;
extern int D_002B9054;
extern int D_0028F5E0;
struct C_Save_7D {
    char pad0[0x164];
    int f164;
    int f168;
    char pad16C[0x34];
    C_Panel_7D *f1a0;
    int f1a4;
    char pad1A8[0x30];
    int f1d8;
    char pad1DC[0x20];
    int f1fc;
    undefined4 func_0007DDD0(void);
    void func_0006B4B0(void);
    void func_0006AA90(void);
    undefined4 func_00157960(void);
};


undefined4 C_Save_7D::func_0007DDD0(void)
{
    if (!(D_002B9058 & 1)) {
        D_002B9058 |= 1;
        D_002B9054 = D_002A7CB8->func_00026500((int)&D_00278AF0, 0);
    }
    if (D_002A8490->f274 > 0) {
        return 1;
    }
    D_002EFDB8->v8();
    D_002EFDB8->v7(1);
    f1a0->func_00093120();
    if (f164 == 0 && f168 == 0) {
        switch (f1d8) {
        case 0: f1a0->func_00093970(320.0f, 100.0f, D_0028F5E0, 0, 0, 0); break;
        case 1: f1a0->func_00093890(320.0f, 100.0f, D_0028F5E0, 0, 0, 0); break;
        case 2: f1a0->func_00093C80(320.0f, 100.0f, D_0028F5E0, 0, 0, 0); break;
        case 3: f1a0->func_00093CF0(320.0f, 100.0f, D_0028F5E0, 0, 0, 0); break;
        case 4:
            if (f1fc) f1a0->func_00094690(320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            else f1a0->func_000941A0(f1a4, 320.0f, 100.0f, D_0028F5E0, 0, 0, 0);
            break;
        case 5: case 14: case 15:
            f1a0->func_000940D0(321.0f, 100.0f, D_0028F5E0, 0, 0, 0); break;
        case 11: f1a0->func_00093A00(320.0f, 80.0f, D_0028F5E0, 0, 0, 0); break;
        case 12: f1a0->func_000942F0(320.0f, 100.0f, D_0028F5E0, 0, 0, 0); break;
        case 13: f1a0->func_00094410(320.0f, 100.0f, D_0028F5E0, 0, 0, 0); break;
        }
    }
    func_0006B4B0();
    func_0006AA90();
    return func_00157960();
}

C_0007E050 *C_0007E050::func_0007E050(void)
{
  int i;

  for (i = 0; i < 0x96; i++) {
    items[i].q0.x = items[i].q0.y = items[i].q0.z = 0;
    items[i].q0.w = 1.0f;
    items[i].q1.x = items[i].q1.y = items[i].q1.z = 0;
    items[i].q1.w = 1.0f;
    items[i].q2.x = items[i].q2.y = items[i].q2.z = 0;
    items[i].q2.w = 1.0f;
  }
  return this;
}

undefined4 C_0007E0A0::func_0007E0A0(byte param_1)
{
  int func_0006C470(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0006C470();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_0007E0C0::func_0007E0C0(void)
{
    if (!(D_002B9060 & 1)) {
        D_002B9060 |= 1;
        D_002B905C = D_002A7CB8->func_00026500((int)&D_00278AF0, 0);
    }
    if (D_002A8490->f274 >= D_002A8490->f270 - 1) {
        C_Rect24_7E r;
        C_Rect24_7E out;
        C_12B2B0_7E *vb;

        D_002EFDB8->v8();
        D_002EFDB8->v7(1);
        vb = (C_12B2B0_7E *)D_002EFDB8->f4;
        if (fD4->f90 > 1) {
            r = vb->rect;
            r.x = 0;
            r.y = 0;
            r.w = 0x280;
            r.h = 0x1c0;
            vb->func_0012B2B0(&r, &out);
        }
        func_0006D100();
        func_0006CEC0();
        func_00157960();
        if (fD4->f90 > 1) {
            vb->func_0012B2B0(&out, 0);
        }
        return 1;
    }
    return 1;
}

undefined4 C_0007E1C0::func_0007E1C0(byte param_1)
{
  int func_0006D640(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0006D640();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void *C_0007E1E0::func_0007E1E0(unsigned int flags)
{
    func_0006E480();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_0007E200::func_0007E200(byte param_1)
{
  int func_000716F0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000716F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_0007E220::func_0007E220(void)
{
  char dest[0x40];
  char buf[4];

  func_001ADCC0(buf, 0x104, (char *)&D_00277038, fAC);
  if (fAC > 0) {
    func_001AC330(dest, D_002A8490->p2E8->p4->fA68, buf);
  } else {
    GObj4_7E *p = D_002A8490->p2E8->p4;
    func_001AC330(dest, p->fF10, p->p930);
  }
  fD4->func_001B17D0(dest);
}

extern "C" unsigned int __cdecl strlen(const char *);
void C_0007E2B0::func_0007E2B0()
{
    float scale;
    int i;
    f74->func_001D6600();
    f70->func_001D6600();
    if (!f9c) {
        if (fbc >= D_002755E8) {
            items[0]->func_001B1980();
            char *s = ((C_7E_Root*)D_002A8490)->sub->manager->func_00094810(f84);
            unsigned int len = strlen(s);
            if (len > 39) s[39] = 0;
            items[0]->func_001B17D0(s);
            if(f64 == 0) items[0]->func_001B1A30(320.0f, ys[0]+D_00275460,0);
            else items[0]->func_001B19C0(320,ys[0],0);
            scale=items[0]->func_001B15E0();
            items[0]->func_001B1860(0,-1,255,scale,0,0,-1,255,1,0,0,0,0);
        }
        if (!f9c && fbc >= D_002755E8) {
            scale=items[1]->func_001B15E0();
            items[1]->func_001B1980();
            if (!fa8) f88=((C_7E_Root*)D_002A8490)->sub->manager->func_00094890();
            func_00072330();
            if(f64 == 1) items[1]->func_001B1A30(320.0f,ys[1]+D_00275460,0);
            else items[1]->func_001B19C0(320,ys[1],0);
            items[1]->func_001B1860(0,-1,255,scale,0,0,-1,255,1,0,0,0,0);
        }
    }
    if (f9c) {
        fbc=0;
        for(i=0;i<4;i++) {
            items[i]->func_001B1980();
            func_0007E220(); func_00072450(); func_00072330();
            items[0]->func_001B17D0(((C_7E_Root*)D_002A8490)->sub->manager->func_00094840());
            if (i==f64) {
                items[i]->func_001B1A30(320.0f,ys[i]+D_00275460,0);
                items[i]->func_001B2270(0xffbfa35a);
                items[i]->func_001B1860(0,-1,255,1,0,0,0,255,1.3f,0,0,0.2f,0);
            } else if(i==f68) {
                items[i]->func_001B19C0(320,ys[i],0);
                items[i]->func_001B2270(0xffcccccc);
                items[i]->func_001B1860(0,-1,255,1.3f,0,0,0,255,1,0,0,0.2f,0);
            } else {
                items[i]->func_001B19C0(320,ys[i],0);
                items[i]->func_001B2270(0xffcccccc);
                items[i]->func_001B1860(0,-1,255,1,0,0,-1,255,1,0,0,0,0);
            }
        }
        f9c=0;
    }
    if(fa0) {
        for(i=0;i<4;i++) {
            items[i]->func_001B1980();
            func_0007E220(); func_00072450(); func_00072330();
            items[0]->func_001B17D0(((C_7E_Root*)D_002A8490)->sub->manager->func_00094840());
            if (i==f64) items[i]->func_001B1860(0,-1,255,1.3f,0,0,-1,255,1,0,0,0,0);
            else items[i]->func_001B1860(0,-1,255,1,0,0,-1,255,1,0,0,0,0);
        }
        f9c=0;
    }
}

