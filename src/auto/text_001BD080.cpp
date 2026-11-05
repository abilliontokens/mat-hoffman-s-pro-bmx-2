/* 23 functions from 0x001BD080 to 0x001BDFB0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028D58C;

struct C_00157600 {
    void func_00157600(int a);
    void func_00157660(void);
};

struct C_001BD9C0 {
    void *vtbl;
    char pad4[0x24 - 4];
    int f24;
    int f28;
    int f2c;
    int f30;
    C_001BD9C0 *func_001BD9C0(int a);
};

struct C_001BD790 {
    void func_001577A0(void *a, int b);
    undefined4 func_001BD790(void);
};

struct C_001BD7E0_Global {
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

extern C_001BD7E0_Global *D_002EFDB8;

struct C_001BD7E0 {
    char pad0[0x120];
    void **f120;
    int f124;
    undefined4 func_001BD7E0(void);
};

struct C_002A829C {
    void func_00161680();
    void func_001616F0();
};

struct C_002AA6C0 {
    void func_001B2640();
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct C_001BD840 {
    void func_001BD840(void);
};
struct C_001BDA50 {
    void func_001BDA50(void);
};

extern int D_0028D51C;

struct S_001BDAB0_Child {
    void func_001BF6C0(int a);
};

struct C_001BDAB0 {
    char pad0[0x24];
    int f24;
    int f28;
    S_001BDAB0_Child **f2c;
    void func_001BDAB0(int a);
};

struct C_001BDAF0 {
    void *vtbl;
    char pad4[0x28];
    void *f2c;
    char pad30[0xc];
    void *f3c;
    void func_00157660(void);
    C_001BDAF0 *func_001BDAF0(byte flags);
};

struct S_001BDB50_Item {
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
    virtual void v27();
    virtual void v28();
    virtual void v29();
    void func_001BF6C0(int a);
};

struct S_001BDB50_Group {
    char pad0[0x24];
    int f24;
    int f28;
    S_001BDB50_Item **f2c;
    int f30;
    void func_001BDA80(void);
};

struct C_001BDB50 {
    char pad0[0x24];
    int f24;
    int f28;
    S_001BDB50_Group **f2c;
    int f30;
    S_001BDB50_Group *f34;
    int f38;
    S_001BDB50_Group **f3c;
    void func_001BDB50(void);
    void func_001BDBD0(void);
    void func_001BDC50(void);
    void func_001BDD60(int idx);
    void func_001BDDE0(int a);
    void func_001BDE90(S_001BDB50_Group **out);
};

struct C_001BDA20 {
    void func_001BDA20(void);
};

struct C_001BD9F0 {
    void func_001BD9F0(void);
};

struct C_001BDA80 {
    void func_001BDA80(void);
};

extern int D_0028D44C;
extern int D_0028D51C;

void func_001E8390(void *p);
void func_001E891B(void *p);

struct S_001BD870_Global {
    char pad0[8];
    int f8;
};

extern S_001BD870_Global *D_002F07B8;

struct Quat_001BD870 {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
};

struct S_001BD870_Elem {
    Quat_001BD870 q0;
    char pad10[8];
    Quat_001BD870 q1;
    Quat_001BD870 q2;
};

/* UIManager */
struct C_001BD870 {
    void *vtbl;
    char pad4[0x24];
    int f28;
    S_001BD870_Elem elems[4];
    int f10c;
    void *f110;
    int f114;
    int f118;
    char pad11c[4];
    void *f120;
    char pad124[4];
    int f128;
    int f12c;
    char pad130[8];
    int f138;
    int f13c;
    char pad140[4];
    int f144;
    char pad148[4];
    int f14c;
    C_001BD870 *func_001BD870(int a);
    void *func_001BD920(unsigned int flags);
};

/* UIGroup */
struct C_001BD980 {
    void *vtbl;
    char pad4[0x24];
    int f28;
    int f2c;
    char pad30[4];
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    C_001BD980 *func_001BD980(int a);
};


undefined4 C_001BD790::func_001BD790(void)
{
  int in_ECX = (int)this;
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x124)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x120) + iVar1 * 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x14) == 0)) {
        func_001577A0((void *)iVar2, -1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x124));
  }
  return 1;
}

undefined4 C_001BD7E0::func_001BD7E0(void)
{
  int iVar1;
  int in_ECX = (int)this;

  D_002EFDB8->v7(1);
  D_002EFDB8->v8();
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x124)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x120) + iVar1 * 4) + 0x94))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x124));
  }
  return 1;
}

void C_001BD840::func_001BD840(void)
{
  D_002A829C->func_00161680();
  D_002AA6C0->func_001B2640();
  D_002A829C->func_001616F0();
}

C_001BD870 *C_001BD870::func_001BD870(int a)
{
    S_001BD870_Elem *e;
    u32 *p;
    int n;

    ((C_00157600 *)this)->func_00157600(a);
    vtbl = (void *)&D_0028D44C;
    e = elems;
    n = 4;
    do {
        p = &e->q0.x;
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p = &e->q1.x;
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p = &e->q2.x;
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        e++;
    } while (--n);
    f14c = 1;
    f28 = 0;
    f10c = 0;
    f114 = 0;
    f118 = 0;
    f144 = 0;
    f128 = 0;
    f12c = 0;
    f138 = 0;
    f13c = 0;
    D_002F07B8->f8 = 1;
    return this;
}

void *C_001BD870::func_001BD920(unsigned int flags)
{
    vtbl = (void *)&D_0028D44C;
    if (f110 != 0) {
        func_001E8390(f110);
    }
    if (f120 != 0) {
        func_001E8390(f120);
    }
    D_002F07B8->f8 = 0;
    ((C_00157600 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_001BD980 *C_001BD980::func_001BD980(int a)
{
    ((C_00157600 *)this)->func_00157600(a);
    f34 = 0;
    f3c = 0;
    f2c = 0;
    f28 = 0;
    f38 = 0;
    f44 = 0;
    vtbl = (void *)&D_0028D51C;
    f40 = 1;
    return this;
}

C_001BD9C0 *C_001BD9C0::func_001BD9C0(int a)
{
  ((C_00157600 *)this)->func_00157600(a);
  f24 = 0;
  f28 = 0;
  f2c = 0;
  f30 = 0;
  vtbl = (void *)&D_0028D58C;
  return this;
}

void C_001BD9F0::func_001BD9F0(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x1c))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

void C_001BDA20::func_001BDA20(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x14))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

void C_001BDA50::func_001BDA50(void)
{
  int in_ECX = (int)this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x70))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

void C_001BDA80::func_001BDA80(void)
{
  int in_ECX = (int)this;
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x28)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x2c) + iVar1 * 4);
      if (iVar2 != 0) {
        (**(code **)(*(int *)iVar2 + 0x74))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x28));
  }
  return;
}

void C_001BDAB0::func_001BDAB0(int a)
{
    int i;

    f24 = a;
    for (i = 0; i < f28; i++) {
        S_001BDAB0_Child *c = f2c[i];
        if (c != 0) {
            c->func_001BF6C0(a);
        }
    }
}

C_001BDAF0 *C_001BDAF0::func_001BDAF0(byte flags)
{
    int func_001E8390(...);
    int func_001E891B(...);

    vtbl = (void *)&D_0028D51C;
    if (f2c != 0) {
        func_001E8390(f2c);
        f2c = 0;
    }
    if (f3c != 0) {
        func_001E8390(f3c);
        f3c = 0;
    }
    func_00157660();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}

void C_001BDB50::func_001BDB50(void)
{
    int i, j;
    S_001BDB50_Group *g;

    for (i = 0; i < f28; i++) {
        g = f2c[i];
        if (g != 0) {
            for (j = 0; j < g->f28; j++) {
                g->f2c[j]->v7();
            }
        }
    }
    for (i = 0; i < f38; i++) {
        g = f3c[i];
        for (j = 0; j < g->f28; j++) {
            g->f2c[j]->v7();
        }
    }
}

void C_001BDB50::func_001BDBD0(void)
{
    int i, j;
    S_001BDB50_Group *g;

    for (i = 0; i < f28; i++) {
        g = f2c[i];
        if (g != 0) {
            for (j = 0; j < g->f28; j++) {
                g->f2c[j]->v5();
            }
        }
    }
    for (i = 0; i < f38; i++) {
        g = f3c[i];
        for (j = 0; j < g->f28; j++) {
            g->f2c[j]->v5();
        }
    }
}

void C_001BDB50::func_001BDC50(void)
{
    int i, j;
    S_001BDB50_Group *g;

    for (i = 0; i < f38; i++) {
        g = f3c[i];
        for (j = 0; j < g->f28; j++) {
            g->f2c[j]->v28();
        }
    }
}

void C_001BDB50::func_001BDD60(int idx)
{
    int i, j;
    S_001BDB50_Group *g;
    S_001BDB50_Item *it;

    if (f28 != 0) {
        f30 = idx;
        f34 = f2c[idx - 1];
        for (i = 0; i < f28; i++) {
            g = f2c[i];
            if (g != 0) {
                for (j = 0; j < g->f28; j++) {
                    it = g->f2c[j];
                    if (it != 0) {
                        it->v29();
                    }
                }
            }
        }
        g = f34;
        if (g != 0) {
            for (j = 0; j < g->f28; j++) {
                g->f2c[j]->v28();
            }
        }
    }
}

void C_001BDB50::func_001BDDE0(int a)
{
    int i, j;
    S_001BDB50_Group *g;
    S_001BDB50_Item *it;

    f24 = a;
    for (i = 0; i < f28; i++) {
        g = f2c[i];
        if (g != 0) {
            g->f24 = a;
            for (j = 0; j < g->f28; j++) {
                it = g->f2c[j];
                if (it != 0) {
                    it->func_001BF6C0(a);
                }
            }
        }
    }
    for (i = 0; i < f38; i++) {
        g = f3c[i];
        if (g != 0) {
            g->f24 = a;
            for (j = 0; j < g->f28; j++) {
                it = g->f2c[j];
                if (it != 0) {
                    it->func_001BF6C0(a);
                }
            }
        }
    }
}

void C_001BDB50::func_001BDE90(S_001BDB50_Group **out)
{
    S_001BDB50_Group *cur;

    if (f28 != 0) {
        f34->func_001BDA80();
        do {
            f30++;
            if (f30 > f28) {
                f30 = 1;
            }
            cur = f2c[f30 - 1];
            f34 = cur;
        } while (cur == 0 || cur->f24 == 0 || cur->f30 != 0);
        if (out != 0) {
            *out = cur;
        } else {
            ((C_001BDA50 *)cur)->func_001BDA50();
        }
    }
}

