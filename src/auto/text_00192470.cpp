/* 28 functions from 0x00192470 to 0x00193240, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00192BD0 {
    undefined4 func_00192BD0(int param_1);
};

struct C_00192B50 {
    undefined4 func_00192B50(byte param_1);
};

struct C_001926D0 {
    undefined4 func_001926D0(byte param_1);
};


extern int D_0028AB84;
extern char D_0028AB70[];
extern char D_0028AA90[];

struct C_0001DFE0 {
    void *vtbl;
    int unk4;
    void func_0001DFE0(void);
    void func_0001DFF0(void);
};

struct C_001BC6E0 {
    char func_001BC6E0(void *param);
};
extern C_001BC6E0 *D_002AAEC8;

struct SearchEntry {
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
};

struct C_00192470 : C_0001DFE0 {
    int f8;
    char padC[2];
    unsigned char fE;
    char padF;
    int f10;
    SearchEntry **f14;
    int f18;
    int f1C;
    unsigned char f20;
    char pad21[3];
    char f24;
    char f25;
    char pad26[2];
    int f28;
    int f2c;
    int f30;
    int **f34;
    int *f38;
    int f3C;
    int f40;
    SearchEntry *at(int i)
    {
        if (f10 > 0 && f14 != 0 && i < f10) {
            return f14[i];
        }
        return 0;
    }
    C_00192470 *func_00192720(void);
    void func_001927A0(void);
    void func_001926F0(int a, int b);
    void func_00192700(int a, int b, int c, int d);
    void func_00192710(int a, int b, int c);
    int *func_00192470(int *param_1);
    void func_001924E0(int a1, int *a2, int a3, int a4);
    int func_00192570();
    void func_00192610();
    void func_00192630();
    void func_00192680();
    void func_00192840(void *row, void *limit);
    void func_001927C0(void *row, int limit);
};

struct C_00192CA0 {
    int unk0;
    C_00192CA0 *func_00192CA0(unsigned int flags);
};

/* SearchNode */
struct S_00192930_Node {
    S_00192930_Node *next;
    int a;
    int b;
    int c;
    int d;
};

struct S_00192930_Iface {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int pad4;
    int f8;
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00157BF0 {
    int func_00157BF0(int a, int b);
};

extern int D_002EFE58;
extern int D_002A986C;
extern int D_002EFE5C;

int func_00135C70(int a, int b, int c, int d);
void func_001E8390(void *p);
void *func_001E8AA5(int size);
void func_001E891B(void *p);

struct SearchNode {
    void *vtbl;
    char pad4[0x20];
    S_00192930_Node *f24;
    S_00192930_Iface *f28;
    S_00192930_Iface *f2C;
    void *f30;
    void func_00192930(void);
    int func_00192990(int a, int b);
    void func_00192A50(int a, int b);
    int func_00192AC0(S_00192930_Iface *obj);
};

int *C_00192470::func_00192470(int *param_1)
{
    void *func_001E83E8(void *, int);
    void *func_001E8AA5(int);
    int *p = param_1;
    if (p == 0) {
        p = f38;
        if (p == 0) {
            if (f30 == f28) {
                f34 = (int **)func_001E83E8(f34, f2c * 4 + 4);
                f34[f2c] = (int *)func_001E8AA5(f28 * 4);
                f2c++;
                f30 = 0;
            }
            p = f34[f2c - 1] + f30;
        }
    }
    return p;
}

void C_00192470::func_001924E0(int a1, int *a2, int a3, int a4)
{
    if (f38 != 0 && a2 == f38) {
        f38 = (int *)(*(int *)f38 & 0xfffffffc);
        *a2 = a1;
    } else {
        f30++;
        *a2 = a1;
    }
}

int C_00192470::func_00192570()
{
    int *row;
    if (f34 != 0) {
        int count = f2c;
        row = f34[f3C];
        while (f3C < f2c - 1) {
            while (f40 < f28 && (row[f40] & 2) != 0) {
                f40++;
            }
            if (f40 < f28) {
                goto found;
            }
            f3C++;
            row = f34[f3C];
            f40 = 0;
        }
        if (f3C < count) {
            while (f40 < f30 && (row[f40] & 2) != 0) {
                f40++;
            }
            if (f40 < f30) {
                goto found;
            }
            f3C++;
        }
    }
    return 0;
found:
    return row[f40++];
}

void C_00192470::func_00192610()
{
    fE |= 1;
    f3C = 0;
    f40 = 0;
}

void C_00192470::func_00192630()
{
    int i;
    if (f34 == 0) {
        return;
    }
    for (i = 0; i < f2c - 1; i++) {
        func_00192840(f34[i], &f28);
    }
    func_00192840(f34[i], &f30);
}

void C_00192470::func_00192680()
{
    int i;
    if (f34 == 0) {
        return;
    }
    for (i = 0; i < f2c - 1; i++) {
        func_001927C0(f34[i], f28);
    }
    func_001927C0(f34[i], f30);
}

undefined4 C_001926D0::func_001926D0(byte param_1)
{
  int func_00192420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00192420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_00192470 *C_00192470::func_00192720(void)
{
    void *func_001E8A44(int);
    func_0001DFE0();
    vtbl = (void *)&D_0028AB84;
    f14 = 0;
    f10 = 0;
    f18 = 0;
    f1C = 0;
    f20 &= 0xfe;
    f8 = 0;
    f14 = (SearchEntry **)func_001E8A44(0x78);
    f18 = 0x1e;
    f1C = 0x1e;
    f20 |= 1;
    f24 = D_002AAEC8->func_001BC6E0(D_0028AB70);
    f25 = D_002AAEC8->func_001BC6E0(D_0028AA90);
    return this;
}

void C_00192470::func_001927A0(void)
{
    void func_001E891B(void *);
    vtbl = (void *)&D_0028AB84;
    func_001E891B(f14);
    func_0001DFF0();
}

int SearchNode::func_00192AC0(S_00192930_Iface *obj)
{
    if (f2C != 0) {
        f2C->v2();
    }
    obj->f8 = 2;
    f2C = obj;
    obj->v1();
    return 0;
}

undefined4 C_00192B50::func_00192B50(byte param_1)
{
  int in_ECX = (int)this;
  
  if ((param_1 & 1) != 0) {
    return *(undefined4 *)(in_ECX + 0x28);
  }
  if ((param_1 & 2) != 0) {
    return *(undefined4 *)(in_ECX + 0x2c);
  }
  return 0;
}

undefined4 C_00192BD0::func_00192BD0(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x34)) {
    piVar2 = *(int **)(in_ECX + 0x30);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x34));
  }
  return 0;
}

C_00192CA0 *C_00192CA0::func_00192CA0(unsigned int flags)
{
    void func_001E891B(void *);
    void func_00192930();
    func_00192930();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

