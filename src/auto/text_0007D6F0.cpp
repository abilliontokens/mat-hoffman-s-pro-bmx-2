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
    char padA6C[0x4a4];
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
    void func_001B17D0(char *s);
};

struct C_0007E220 {
    char pad0[0xac];
    int fAC;
    char padB0[0x24];
    SetterObj_7E *fD4;
    void func_0007E220(void);
};

extern GObjRoot_7E *D_002A8490;
extern int D_00277038;
void func_001ADCC0(char *buf, int size, char *fmt, int val);
void func_001AC330(char *dest, char *fmt, char *arg);

struct C_0007E1E0 {
    void *func_0007E1E0(unsigned int flags);
    void func_0006E480(void);
};

void func_001E891B(void *ptr);


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

