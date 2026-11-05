/* 9 functions from 0x000AEF10 to 0x000AF900, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"

void func_001E891B(void *p);
void *func_001E8A44(int size);

extern int D_0027C604;
extern int D_0027C1EC;
extern int D_0027C51C;
extern int D_0027CABC;

struct C_00157600 {
    void func_00157600(int param_1);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_000A0A10_Elem {
    char pad0[0x28];
    void func_000A0A10(void);
};

struct C_000AEF10 {
    void *vtbl;
    char pad4[0x24];
    C_000A0A10_Elem *unk28;
    void func_000AEF10(void);
    void func_00157660(void);
};

struct C_000ACE60_Obj {
    C_000ACE60_Obj *func_000ACE60(int param);
    void func_000ACF30(void *scene, int a, int b, int c);
};

struct C_000AF080 {
    char pad0[0x4e0];
    C_000ACE60_Obj *f4e0;
    int func_000AF080(int a, int b, int c);
};

struct C_000AF7D0_Obj {
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
    virtual void v27(int a, void **b, int c, void *d);
    void func_00157600(int param_1);
    char pad4[0x20];
    int unk24;
    int unk28;
};

struct C_000AF7D0 {
    char pad0[0x28];
    int f28;
    char pad2c[0x530 - 0x2c];
    int f530;
    C_000AF7D0_Obj *f534;
    void func_000AF7D0(void);
};

struct C_000AF840_Obj {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
    void func_00157600(int param_1);
    void func_000AE780(int a);
};

struct C_000AF840 {
    char pad0[0x28];
    int f28;
    char pad2c[0x53c - 0x2c];
    C_000AF840_Obj *f53c;
    void func_000AF840(void);
};

struct C_000AEF60 {
    undefined4 func_000AEF60(byte param_1);
};

struct C_000AEF80 {
    undefined4 func_000AEF80(byte param_1);
};

extern int D_0027C594;

struct C_0027C594 {
    void *vtbl;
    char pad4[0x20];
    int unk24;
    int unk28;
};

struct C_000AEC90 {
    void func_000AEC90(void *param_1);
};

struct C_000AF8A0 {
    char pad0[0x28];
    void *unk28;
    char pad2C[0x548 - 0x2c];
    C_0027C594 *unk548;
    void func_000AF8A0(void);
};

extern int D_0027CA70;

/* one 0x160-byte record of the table at BmxScene+0x344 */
struct S_000AEFA0_Elem {
    char pad0[0x160];
};

/* CollisionObjects: made by func_00188A80, loaded through vtable slot 27 */
struct C_000AEFA0_Obj {
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
    virtual int v27(int a, S_000AEFA0_Elem *b, void **c);
    C_000AEFA0_Obj *func_00188A80(int a);
};

/* BmxScene */
struct C_000AEFA0 {
    char pad0[0x28];
    int f28;
    char pad2C[0x340 - 0x2C];
    int f340;
    S_000AEFA0_Elem *f344;
    char pad348[0x3B0 - 0x348];
    C_000AEFA0_Obj **f3B0;
    void func_000AEFA0(void);
};


void C_000AEF10::func_000AEF10(void) {
    C_000A0A10_Elem *p = unk28;
    vtbl = &D_0027C604;
    if (p != 0) {
        int *base = (int *)p - 1;
        int i = *base;
        C_000A0A10_Elem *e = p + i;
        while (--i >= 0) {
            e--;
            e->func_000A0A10();
        }
        func_001E891B(base);
    }
    func_00157660();
}

undefined4 C_000AEF60::func_000AEF60(byte param_1)
{
  int func_000AB490(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AB490();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_000AEF80::func_000AEF80(byte param_1)
{
  int func_000AC410(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_000AC410();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_000AEFA0::func_000AEFA0(void)
{
    void *local = &D_0027CA70;
    int ok = 0;
    int i;
    C_000AEFA0_Obj *p;

    f3B0 = (C_000AEFA0_Obj **)func_001E8A44(f340 * 4);
    for (i = 0; i < f340; i++) {
        p = (C_000AEFA0_Obj *)func_001E8A44(0x2c);
        if (p != 0) {
            p = p->func_00188A80(1);
        } else {
            p = 0;
        }
        f3B0[i] = p;
        if (f3B0[i]->v27(f28, &f344[i], &local) == 0) {
            f3B0[i]->v2();
            f3B0[i] = 0;
        } else {
            ok++;
        }
    }
    if (ok == 0) {
        func_001E891B(f3B0);
        f3B0 = 0;
    }
}

int C_000AF080::func_000AF080(int a, int b, int c) {
    C_000ACE60_Obj *p = (C_000ACE60_Obj *)func_001E8A44(0x1e8);
    if (p != 0) {
        p = p->func_000ACE60(0);
    } else {
        p = 0;
    }
    f4e0 = p;
    p->func_000ACF30(this, a, b, c);
    return 1;
}

void C_000AF7D0::func_000AF7D0(void) {
    void *local;
    C_000AF7D0_Obj *p;

    if (f534 == 0) {
        p = (C_000AF7D0_Obj *)func_001E8A44(0x2c);
        if (p != 0) {
            p->func_00157600(1);
            *(void **)p = &D_0027C1EC;
            p->unk24 = 0;
            p->unk28 = 0;
        } else {
            p = 0;
        }
        f534 = p;
    }
    local = (void *)&D_0027CABC;
    f534->v27(f28, &local, f530, this);
}

void C_000AF840::func_000AF840(void) {
    C_000AF840_Obj *p;

    if (f53c == 0) {
        p = (C_000AF840_Obj *)func_001E8A44(0x2c);
        if (p != 0) {
            p->func_00157600(1);
            p->vtbl = &D_0027C51C;
            p->unk24 = 0;
            p->unk28 = 0;
        } else {
            p = 0;
        }
        f53c = p;
    }
    f53c->func_000AE780(f28);
}

void C_000AF8A0::func_000AF8A0(void) {
    C_0027C594 *p;
    if (unk548 == 0) {
        p = (C_0027C594 *)func_001E8A44(0x2c);
        if (p != 0) {
            ((C_00157600 *)p)->func_00157600(1);
            p->vtbl = &D_0027C594;
            p->unk24 = 0;
            p->unk28 = 0;
        } else {
            p = 0;
        }
        unk548 = p;
    }
    ((C_000AEC90 *)unk548)->func_000AEC90(unk28);
}

