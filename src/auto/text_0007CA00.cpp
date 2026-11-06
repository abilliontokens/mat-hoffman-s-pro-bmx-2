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
    char padd0[0x1c];
    BmxSprite* sec[5];
    BmxSprite* s100[14];
    BmxSprite* s138;
    char pad13c[0x10];
    int* s14c;
    char pad150[0x28];
    int s178;
    BmxMenu* func_0007CA00(int a);
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
struct G7CF_G {
    char pad0[0x274];
    int f274;
    char pad278[0x2E8 - 0x278];
    G7CF_A *f2E8;
};
extern G7CF_G *D_002A8490;

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
