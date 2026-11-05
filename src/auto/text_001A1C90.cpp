/* 23 functions from 0x001A1C90 to 0x001A2C00, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_0028B45C;

struct S16_1A {
    int a;
    int b;
    int c;
    int d;
};

struct ObjV23 {
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
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual int v23(int a0, int a1, S16_1A s, int a2);
};

struct ObjV2 {
    virtual void v0();
    virtual void v1();
    virtual int v2();
};

struct C_001A1F70 {
    void *vtbl;
    char pad4[0x1BC];
    u32 unk1C0;
    u32 unk1C4;
    C_001A1F70 *func_001A1F70(int a0, int a1, int a2, int a3);
    void func_001A1680(int a0, int a1, int a2, int a3);
};

struct C_001A1C90 {
    char pad0[0x1BC];
    ObjV23 *unk1BC;
    int func_001A1C90(int a0, int a1, S16_1A s, int a2);
};

struct C_001A1E60 {
    char pad0[0x1BC];
    ObjV2 *unk1BC;
    void func_001A1E60();
};

struct C_001A2500 {
    bool func_001A2500(void);
};

struct C_001A22E0 {
    char pad0[0x1C0];
    int unk1C0;
    void func_001A22E0(int a0);
};


C_001A1F70 *C_001A1F70::func_001A1F70(int a0, int a1, int a2, int a3) {
    func_001A1680(a0, a1, a2, a3);
    unk1C0 = 0;
    unk1C4 = 0;
    vtbl = &D_0028B45C;
    return this;
}

void C_001A22E0::func_001A22E0(int a0) {
    unk1C0 = a0;
}

bool C_001A2500::func_001A2500(void)
{
  int in_ECX = (int)this;
  
  return 0 < *(int *)(in_ECX + 0x1d8);
}

