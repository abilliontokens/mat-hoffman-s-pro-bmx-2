/* 10 functions from 0x00138800 to 0x001396D0, found by Ghidra. */
#include "common.h"
extern int D_00284A2C;
struct CutScene {
 void *vtbl; char pad4[0x20];
int f24;
int f28;
int f2c;
int f30;
int f34;
int f38;
int f3c;
int f40;
int f44;
int f48;
int f4c;
int f50;
int f54;
int f58;
int f5c;
int f60;
int f64;
int f68;
int f6c;
int f70;
int f74;
int f78;
int f7c;
int f80;
int f84;
int f88;
int f8c;
 void func_00157600(int);
 void func_00157660();
 CutScene *func_00138800(int);
   void func_00138890();
  void func_001394F0(int);
};
struct CutScene_Item {
    char pad0[0x18];
    void *f18;
    struct CutScene_Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(int); } *f1c;
    void *f20;
    void *f24;
};
extern "C" void func_001E8390(void *);
extern "C" void func_001E891B(void *);
struct C_00139080 {
    char pad0[0x88];
    int unk88;
    int unk8C;
    void func_00139080(int a0, int a1);
};

struct C_00139060 {
    char pad0[0x84];
    int unk84;
    char pad88[0x4];
    int unk8C;
    void func_00139060(int a0, int a1);
};


CutScene *CutScene::func_00138800(int arg) {
func_00157600(arg);
vtbl = &D_00284A2C;
f24 = -1;
f3c = 0;
f54 = 0;
f70 = 0;
f6c = 0;
f28 = 0;
f34 = 0;
f38 = 0;
f40 = 0;
f44 = 0;
f48 = 0;
f4c = 0;
f50 = 0;
f58 = 0;
f5c = 0;
f60 = 0;
f78 = 0;
f7c = 0;
f80 = 0;
f84 = 0;
f88 = 0;
f8c = 0;
f2c = 0xbf800000;
f30 = 0x40000000;
f64 = -1;
f68 = 100;
f74 = 1;
return this;
}

void C_00139060::func_00139060(int a0, int a1) {
    unk84 = a0;
    unk8C = a1;
}

void C_00139080::func_00139080(int a0, int a1) {
    unk88 = a0;
    unk8C = a1;
}

