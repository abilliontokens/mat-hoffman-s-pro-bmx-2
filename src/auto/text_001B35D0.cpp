/* 8 functions from 0x001B35D0 to 0x001B3E70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern "C" char *__cdecl strcpy(char *dst, const char *src);
#pragma intrinsic(strcpy)

extern int D_0028C9A4;
extern int D_002AA8C0, D_002AA8C4, D_002AA8C8, D_002AA8CC;
struct C_001B3C10 {
    C_001B3C10 *func_001B3C10(int a0);
};
struct C_00157600 {
    void func_00157600(int a0);
};
void *func_001E8A44(int size);
void func_001E891B(void *p);

/* the message descriptor the four wrappers below fill in and hand to func_001B35D0 */
struct S_001B35D0_Desc {
    u8 f0;
    u8 f1;
    u8 f2;
    u8 f3;
    u16 f4;
    u16 f6;
    u8 f8;
    u8 f9;
    u16 fa;
    u16 fc;
    short fe;
    short f10;
    u8 f12;
    u8 f13;
    int f14;
    int f18;
    char f1c[0x10c];
};

int func_001B35D0(S_001B35D0_Desc *desc, int a1, int a2, int a3);
#define PW (*(short *)&desc->f2)
#define PH (*(short *)&desc->f10)

struct V_001B3DC0_Obj {
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
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual int v27(int a1, int a2, int a3, void *a4, int a5);
};

struct S_001B3DC0_New {
    V_001B3DC0_Obj *func_00140390(int a);
};

struct C_001B3DC0 {
    char pad0[0x24];
    V_001B3DC0_Obj *f24;
    int f28;
    char pad2c[0x78];
    int fa4;
    char fa8;
    char fa9;
    char faa;
    void func_001577A0(V_001B3DC0_Obj *a, int b);
    C_001B3DC0 *func_001B3DC0(int a1, int a2, int a3, int a4);
};

void func_001B3970(int param_1)
{
  int func_001E8390(...);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      func_001E8390(*(int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x120) != 0) {
      func_001E8390(*(int *)(param_1 + 0x120));
    }
    func_001E8390(param_1);
  }
  return;
}

void func_001B39B0(int a1, u16 a2, u16 a3, int a4, const char *name, int a6)
{
    S_001B35D0_Desc desc;

    desc.f0 = 0;
    desc.f1 = 0;
    desc.f2 = 2;
    desc.f4 = 0;
    desc.f6 = 0;
    desc.f8 = 0;
    desc.fa = 0;
    desc.fc = 0;
    desc.fe = a2;
    desc.f10 = a3;
    desc.f12 = 0x18;
    desc.f13 = 0;
    desc.f14 = a1;
    strcpy(desc.f1c, name);
    func_001B35D0(&desc, a4, 0, a6);
}

void func_001B3A50(int a1, u16 a2, u16 a3, int a4, const char *name, int a6)
{
    S_001B35D0_Desc desc;

    desc.f0 = 0;
    desc.f1 = 0;
    desc.f2 = 2;
    desc.f4 = 0;
    desc.f6 = 0;
    desc.f8 = 0;
    desc.fa = 0;
    desc.fc = 0;
    desc.fe = a2;
    desc.f10 = a3;
    desc.f12 = 0x20;
    desc.f13 = 0;
    desc.f14 = a1;
    strcpy(desc.f1c, name);
    func_001B35D0(&desc, a4, 0, a6);
}

void func_001B3AF0(int a1, u16 a2, u16 a3, int a4, int a5, const char *name, int a7)
{
    S_001B35D0_Desc desc;

    desc.f0 = 0;
    desc.f1 = 0;
    desc.f2 = 2;
    desc.f4 = 0;
    desc.f6 = 0;
    desc.f8 = 0;
    desc.fa = 0;
    desc.fc = 0;
    desc.fe = a2;
    desc.f10 = a3;
    desc.f12 = 0x10;
    desc.f13 = 0;
    desc.f14 = a1;
    strcpy(desc.f1c, name);
    func_001B35D0(&desc, a4, a5, a7);
}

C_001B3C10 *C_001B3C10::func_001B3C10(int a0)
{
    int *u;
    int *p;
    ((C_00157600 *)this)->func_00157600(a0);
    u = (int *)this;
    u[0] = (int)&D_0028C9A4;
    p = &u[0x40 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x50 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x60 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x70 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x80 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x90 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    u[0x24 / 4] = 0; u[0x28 / 4] = 0; u[0x2C / 4] = 0; u[0x30 / 4] = 0;
    u[0x34 / 4] = 1; u[0x38 / 4] = 1;
    u[0x40 / 4] = D_002AA8C0; u[0x44 / 4] = D_002AA8C4; u[0x48 / 4] = D_002AA8C8; u[0x4C / 4] = D_002AA8CC;
    u[0x60 / 4] = D_002AA8C0; u[0x64 / 4] = D_002AA8C4; u[0x68 / 4] = D_002AA8C8; u[0x6C / 4] = D_002AA8CC;
    u[0x70 / 4] = D_002AA8C0; u[0x74 / 4] = D_002AA8C4; u[0x78 / 4] = D_002AA8C8; u[0x7C / 4] = D_002AA8CC;
    u[0x50 / 4] = D_002AA8C0; u[0x54 / 4] = D_002AA8C4; u[0x58 / 4] = D_002AA8C8; u[0x5C / 4] = D_002AA8CC;
    u[0x80 / 4] = D_002AA8C0; u[0x84 / 4] = D_002AA8C4; u[0x88 / 4] = D_002AA8C8; u[0x8C / 4] = D_002AA8CC;
    u[0x90 / 4] = D_002AA8C0; u[0x94 / 4] = D_002AA8C4; u[0x98 / 4] = D_002AA8C8; u[0x9C / 4] = D_002AA8CC;
    u[0xA0 / 4] = 0; u[0xA4 / 4] = 0;
    ((char *)u)[0xA8] = (char)0x80; ((char *)u)[0xA9] = (char)0x80; ((char *)u)[0xAA] = (char)0x80;
    u[0x3C / 4] = 1;
    return this;
}

C_001B3DC0 *C_001B3DC0::func_001B3DC0(int a1, int a2, int a3, int a4)
{
    S_001B3DC0_New *p;
    int *buf;
    int i;

    fa4 = a3;
    fa8 = (char)(a4 >> 16);
    fa9 = (char)(a4 >> 8);
    faa = (char)a4;
    buf = (int *)func_001E8A44(a2 * 4);
    for (i = 0; i < a2; i++) {
        buf[i] = 0x10;
    }
    f28 = a2;
    p = (S_001B3DC0_New *)func_001E8A44(0x60);
    f24 = p != 0 ? p->func_00140390(1) : 0;
    f24->v27(a1, 0xf, a2, buf, 0);
    func_001577A0(f24, 8);
    func_001E891B(buf);
    return this;
}

