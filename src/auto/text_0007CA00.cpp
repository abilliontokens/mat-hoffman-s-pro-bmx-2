/* 3 functions from 0x0007CA00 to 0x0007D6F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Sprite {
    char pad0[0x28];
    float w;
    float h;
    char pad30[0x8];
    unsigned int color;
    float u0, v0, u1, v1;
    float sx, sy;
    char pad54[4];
    unsigned char flags;
    void Init(const char* name, float a, float b, int c);
};
struct Menu {
    char pad0[0x80];
    Sprite* s80;
    Sprite* s84;
    char pad88[0x30];
    Sprite* sb8;
    Sprite* sbc;
    char padc0[8];
    Sprite* sc8;
    Sprite* scc;
    char padd0[0x1c];
    Sprite* sec[5];
    Sprite* s100[14];
    Sprite* s138;
    char pad13c[0x10];
    int* s14c;
    char pad150[0x28];
    int s178;
    Menu* func_0007CA00(int a);
};
struct BmxSprite {
    char pad0[0x28];
    int w;
    int h;
    char pad30[0x8];
    unsigned int color;
    float u0, v0, u1, v1;
    float sx, sy;
    char pad54[4];
    unsigned char flags;
    BmxSprite* func_001D5760();
    void func_001D5810(char* name, float x, float y, int z);
};
struct BmxMenu {
    char pad0[0x80];
    BmxSprite* s80;
    BmxSprite* s84;
    char pad88[0x30];
    BmxSprite* sb8;
    BmxSprite* sbc;
    char padc0[8];
    BmxSprite* sc8;
    BmxSprite* scc;
    char padd0[8];
    BmxSprite* sec[5][2];
    BmxSprite* s100[14];
    BmxSprite* s138;
    char pad13c[0x10];
    int* s14c;
    char pad150[0x28];
    int s178;
    BmxMenu* func_0007CA00(void* a0);
    void func_000689E0();
};
struct C_0007D6D0 {
    undefined4 func_0007D6D0(byte param_1);
};

extern int D_002B9050;
extern int D_002B904C;
extern char D_00278AF0[];
extern char D_002786BC[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_00026500 {
    int func_00026500(char *s, int a);
};
extern C_00026500 *D_002A7CB8;

struct G7CF_B {
    char pad0[0xE98];
    char *fE98;
    char padE9C[0x1028 - 0xE9C];
    int f1028;
    char pad102C[0x1100 - 0x102C];
    int f1100;
};
struct G7CF_A {
    char pad0[4];
    G7CF_B *f4;
};
struct G7CF_C {
    void func_0018C780(int count, int* names, int flags);
};
struct G7CF_G {
    char pad0[0x274];
    int f274;
    char pad278[0x2E8 - 0x278];
    G7CF_A *f2E8;
    G7CF_C *f2EC;
};
extern G7CF_G *D_002A8490;

extern char D_002786A0[], D_00278690[], D_00278678[], D_00278658[], D_00278648[];
extern char D_00278638[], D_00278624[], D_00278608[], D_00278600[], D_002786B0[];
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
extern float D_00278654, D_00275544, D_0027653C, D_00278650, D_00275800, D_00279034;
extern char D_00275678[], D_002A5870[], D_002A5FA8[];
extern "C" void *func_001E8A44(unsigned int size);

static __forceinline void uv7CA(BmxSprite *p) { float a = p->sx * D_00278654; p->flags |= 4; p->u0 = a; p->v0 = p->sx * D_00275544; p->u1 = p->sy * D_0027653C; p->v1 = p->sy * D_00275544; }
static __forceinline void width7CA(BmxSprite *p, int v) { if (p->w != v) { p->w = v; p->flags |= 1; } }
static __forceinline void height7CA(BmxSprite *p, int v) { if (p->h != v) { p->h = v; p->flags |= 1; } }

struct Dev7CF {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};
extern Dev7CF *D_002EFDB8;

struct Obj13C {
    void func_0005E840(char *s);
};
struct Obj178 {
    void func_00093120();
};

struct BmxEditorMenu {
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
    virtual int func_0007CF00();
    char pad4[0x13C - 0x4];
    Obj13C *f13C;
    char pad140[0x170 - 0x140];
    int f170;
    int f174;
    Obj178 *f178;
    void func_00069AB0();
    void func_00069340();
    int func_00157960();
};


int BmxEditorMenu::func_0007CF00()
{
    char buf[0x32];

    if ((D_002B9050 & 1) == 0) {
        D_002B9050 |= 1;
        D_002B904C = D_002A7CB8->func_00026500(D_00278AF0, 0);
    }
    if (D_002A8490->f274 > 0)
        return 1;
    D_002EFDB8->v8();
    D_002EFDB8->v7(1);
    if (f174 != 0) {
        func_001ADCC0(buf, 0x32, D_002786BC, D_002A8490->f2E8->f4->f1028, f170 + 1, D_002A8490->f2E8->f4->f1100);
        f13C->func_0005E840(buf);
    } else {
        f13C->func_0005E840(D_002A8490->f2E8->f4->fE98);
    }
    f178->func_00093120();
    func_00069AB0();
    func_00069340();
    return func_00157960();
}

undefined4 C_0007D6D0::func_0007D6D0(byte param_1)
{
  int func_0006A1A0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0006A1A0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
