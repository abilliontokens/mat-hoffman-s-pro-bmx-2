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
    void func_0007E050(void);
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
    char pad0[0x2e8];
    GObj2E8_7E *p2E8;
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


void C_0007E050::func_0007E050(void)
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

