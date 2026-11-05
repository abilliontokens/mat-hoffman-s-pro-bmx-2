/* 8 functions from 0x000BDF30 to 0x000BEE30, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_0027DB74[];

struct S_000BDF30_Config {
    char pad0[0x324];
    int f324;
};

struct S_000BDF30_Game {
    char pad0[0x234];
    int f234;
    char pad238[0xa8];
    S_000BDF30_Config *f2E0;
};

struct S_000BDF30_Audio {
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

extern S_000BDF30_Game *D_002A8490;
extern S_000BDF30_Audio *D_002EFDB8;

struct S_000BDF30_Entry {
    char pad0[0x104];
    char f104[0xa4];
};

struct S_000BDF30_Lookup {
    int func_0001B3C0(S_000BDF30_Entry *entry);
};

struct S_000BDF30_Names {
    char pad0[0x484];
    S_000BDF30_Lookup *f484;
};

struct C_000BBE30 {
    int func_000BBE30(int show);
    void func_000BBA80(int idx, char *buf);
};

struct C_000BDF30 {
    char pad0[0x150];
    S_000BDF30_Names *f150;
    char pad154[0x128];
    S_000BDF30_Entry *f27C;
    int f280;
    int f284;
    int f288;
    int f28C;
    int func_000BDF30(int show);
};

struct C_000BEDA0 {
    undefined4 func_000BEDA0(byte param_1);
};

struct C_000BE510 {
    int unk0;
    void func_00157660(void);
    void *func_000BE510(int flags);
};

struct C_000BEDC0 {
    int unk0;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38[6];
    int f50[6];
    int f68[6];
    int f80;
    int f84;
    int f88[2];
    int f90[2];
    void func_00157600(void *param);
    C_000BEDC0 *func_000BEDC0(void *param);
};


void *C_000BE510::func_000BE510(int flags) {
    extern int D_0027DB9C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027DB9C;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_000BEDA0::func_000BEDA0(byte param_1)
{
  int func_000BE540(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000BE540();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_000BEDC0 *C_000BEDC0::func_000BEDC0(void *param)
{
    extern int D_0027DE7C;
    extern C_000BEDC0 *D_002B91AC;
    int i;

    func_00157600(param);
    unk0 = (int)&D_0027DE7C;
    D_002B91AC = this;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f30 = 0;
    f34 = 0;
    for (i = 0; i < 6; i++) {
        f38[i] = 0;
        f50[i] = 0;
        f68[i] = 0;
    }
    f80 = 0;
    f84 = 0;
    for (i = 0; i < 2; i++) {
        f88[i] = 0;
        f90[i] = 0;
    }
    return this;
}

