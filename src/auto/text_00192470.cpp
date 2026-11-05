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


extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
extern int D_0028AB84;
extern int D_0028ABD4;
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
    char pad4[0x1D];
    unsigned char f21;
    char pad22[0x15F];
    unsigned char f181;
};

/* the growable list embedded at +0x10 of C_00192470 */
struct S_00192840_List {
    int count;
    SearchEntry **items;
    int func_001CDE90(SearchEntry *entry);
};

struct C_00157600 {
    void func_00157600(int a);
};

struct C_00192800 : C_0001DFE0 {
    char pad8[0xC];
    void *f14;
    C_00192800 *func_00192800(unsigned int flags);
};

struct S_00192A90_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int f4;
    int f8;
};

struct C_00192A90 {
    char pad0[0x28];
    S_00192A90_Obj *f28;
    int func_00192A90(S_00192A90_Obj *obj);
};

struct C_00192900 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    C_00192900 *func_00192900(int a);
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
    int *func_001926F0(int a, int b);
    int *func_00192700(int a, int b, int c, int d);
    int *func_00192710(int a, int b, int c);
    int *func_00192470(int *param_1);
    void func_001924E0(int a1, int *a2, int a3, int a4);
    int func_00192570();
    void func_00192610();
    void func_00192630();
    void func_00192680();
    void func_00192840(int *row, int *limit);
    __declspec(noinline) void func_001927C0(void *row, int limit);
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

int *C_00192470::func_001926F0(int a, int b)
{
    return func_00192470((int *)b);
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

void C_00192470::func_001927C0(void *row, int limit)
{
    int i;
    for (i = 0; i < f10; i++) {
        at(i)->v16();
    }
}

C_00192800 *C_00192800::func_00192800(unsigned int flags)
{
    void func_001E891B(void *);
    vtbl = &D_0028AB84;
    func_001E891B(f14);
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_00192470::func_00192840(int *row, int *limit)
{
    S_00192840_List *list = (S_00192840_List *)&f10;
    int i;

    memset(list->items, 0, list->count * 4);
    list->count = 0;
    for (i = 0; i < *limit; i++) {
        unsigned int e = row[i];
        if ((e & 2) == 0) {
            char *p = (char *)(e & ~1);
            if ((p[3] & 1) != 0 && (p[3] & 4) == 0) {
                if (p[2] == f24) {
                    if ((p[-3] & 1) != 0) {
                        SearchEntry *obj = (SearchEntry *)(p - 0x24);
                        obj->v14();
                        if ((obj->f181 & 1) != 0) {
                            list->func_001CDE90(obj);
                        }
                    }
                } else if (p[2] == f25) {
                    if ((p[-3] & 1) != 0) {
                        SearchEntry *obj = (SearchEntry *)(p - 0x24);
                        obj->v14();
                        if ((p[3] & 2) != 0) {
                            list->func_001CDE90(obj);
                        }
                    }
                }
            }
        }
    }
}

C_00192900 *C_00192900::func_00192900(int a)
{
    ((C_00157600 *)this)->func_00157600(a);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f3c = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    vtbl = &D_0028ABD4;
    return this;
}

void SearchNode::func_00192930(void)
{
    extern int D_0028ABD4;
    S_00192930_Node *n;
    S_00192930_Node *next;

    vtbl = (void *)&D_0028ABD4;
    for (n = f24; n != 0; n = next) {
        next = n->next;
        func_001E8390(n);
    }
    if (f30 != 0) {
        func_001E891B(f30);
    }
    if (f28 != 0) {
        f28->v2();
    }
    if (f2C != 0) {
        f2C->v2();
    }
    ((C_00157660 *)this)->func_00157660();
}

int SearchNode::func_00192990(int a, int b)
{
    if (func_00135C70(0x19, 0, a, 0x80) != 0) {
        D_002EFE58 = 1 - D_002EFE58;
        return 1;
    }
    if (func_00135C70(0x10, 0, a, 0x80) != 0) {
        D_002A986C = 1 - D_002A986C;
        return 1;
    }
    if (func_00135C70(0x2c, 0, a, 0x80) != 0) {
        D_002EFE5C = D_002EFE5C + 1;
        if (D_002EFE5C > 6) {
            D_002EFE5C = 0;
        }
        return 1;
    }
    return ((C_00157BF0 *)this)->func_00157BF0(a, b);
}

void SearchNode::func_00192A50(int a, int b)
{
    S_00192930_Node *p = (S_00192930_Node *)func_001E8AA5(0x14);

    p->next = f24;
    p->a = a;
    p->b = b;
    p->c = 0;
    p->d = 0x7f7fffff;
    f24 = p;
}

int C_00192A90::func_00192A90(S_00192A90_Obj *obj)
{
    if (f28 != 0) {
        f28->v2();
    }
    obj->f8 = 1;
    f28 = obj;
    obj->v1();
    return 0;
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

