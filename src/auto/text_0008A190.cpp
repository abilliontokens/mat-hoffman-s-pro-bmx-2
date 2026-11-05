/* 27 functions from 0x0008A190 to 0x0008AED0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern int D_00279C3C;
extern int D_00279B64;
void func_001E891B(void *p);

extern int D_002B9090;
extern int D_002B908C;
extern int D_00279CA8;
extern float D_00275AEC;
extern int D_00278690;
extern int D_0027958C;
extern int D_00275630;
extern int D_0028F5E0;

void *func_001E8A44(int a);

struct ClampObj {
    char pad0[0x10];
    float f10;
    float f14;
};

struct LookupObj {
    int *func_0018C160(int a);
};

struct GlobalObj {
    char pad0[0x2ec];
    LookupObj *lookup;
};

extern GlobalObj *D_002A8490;

struct MidObj {
    ClampObj *func_0018C070();
};

struct CreatorObj {
    int func_00026500(int a, int b);
};

extern CreatorObj *D_002A7CB8;

struct NodeObj {
    char pad0[0x4];
    int f4;
    int f8;
    char pad0c[0x38];
    int f44;
    unsigned int u48;
    char pad4c[0x2];
    unsigned char b4e;
    void func_001D6600();
    void func_001D5FA0(int a, int b, int c, int d);
};

struct AllocObj8 {
    NodeObj *func_001D5E90();
};

struct C_0008ABA0 {
    void *vtbl;
    char pad4[0x20];
    NodeObj *unk24;
    void func_0008ABA0();
    void func_00157960();
    C_0008ABA0 *func_0008AAD0();
};

struct PtrObj_0008 {
    void func_001D6410();
    void func_001D6600();
};

struct SubElem_0008 {
    char pad0[0x64];
    void func_001D5760();
    void func_001D57E0();
    ClampObj *func_001D5AA0();
    void func_001D5AD0();
};

struct C_0008AAB0 {
    void *vtbl;
    char pad4[0x20];
    void *unk24;
    C_0008AAB0 *func_0008AAB0(int a0);
    void func_00157600(int a0);
};

struct C_0008A2E0 {
    void *vtbl;
    char pad4[0x20];
    PtrObj_0008 *ptrs[5];
    SubElem_0008 elems[9];
    char pad3BC[0x100];
    int vals[5];
    char pad4D0[0x8];
    int unk4D8;
    int unk4DC;
    C_0008A2E0 *func_0008A2E0(int a0);
    void func_00157600(int a0);
    void func_00157660();
    void func_0008A350();
    void func_0008A8C0();
    void func_0008A9B0();
    int func_0008AA70();
    void func_001578D0();
};

struct C_0008A8F0 {
    undefined4 func_0008A8F0(int param_1);
};

struct C_0008AB90 {
    char pad0[0x28];
    int unk28;
    int func_0008AB90(int a0);
};

struct C_0008A9A0 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A9A0(void);
};

struct C_0008A990 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A990(void);
};

struct C_0008A980 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A980(void);
};

struct C_0008A970 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A970(void);
};

struct C_0008A960 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A960(void);
};

struct C_0008A950 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A950(void);
};

struct C_0008A940 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A940(void);
};

struct C_0008A930 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A930(void);
};

struct C_0008A920 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A920(void);
};

struct C_0008A910 {
    char pad0[0x4D8];
    int unk4D8;
    void func_0008A910(void);
};


C_0008A2E0 *C_0008A2E0::func_0008A2E0(int a0) {
    func_00157600(1);
    vtbl = &D_00279B64;
    int i;
    for (i = 0; i < 9; i++) {
        elems[i].func_001D5760();
    }
    for (i = 0; i < 5; i++) {
        ptrs[i] = 0;
        vals[i] = -1;
    }
    unk4D8 = 1;
    unk4DC = 10;
    return this;
}

void C_0008A2E0::func_0008A350() {
    vtbl = &D_00279B64;
    int i;
    for (i = 0; i < 5; i++) {
        PtrObj_0008 *p = ptrs[i];
        if (p != 0) {
            p->func_001D6410();
            func_001E891B(p);
        }
    }
    SubElem_0008 *e = elems + 9;
    i = 9;
    do {
        e--;
        e->func_001D57E0();
        i--;
    } while (i != 0);
    func_00157660();
}

void C_0008A2E0::func_0008A8C0() {
    int i;
    for (i = 0; i < 5; i++) {
        if (vals[i] >= 0) {
            ptrs[i]->func_001D6600();
        }
    }
}

undefined4 C_0008A8F0::func_0008A8F0(int param_1)
{
  int in_ECX = (int)this;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(in_ECX + 0x4d0) = param_1;
  return 1;
}

void C_0008A910::func_0008A910(void) {
    unk4D8 = 1;
}

void C_0008A920::func_0008A920(void) {
    unk4D8 = 2;
}

void C_0008A930::func_0008A930(void) {
    unk4D8 = 3;
}

void C_0008A940::func_0008A940(void) {
    unk4D8 = 4;
}

void C_0008A950::func_0008A950(void) {
    unk4D8 = 6;
}

void C_0008A960::func_0008A960(void) {
    unk4D8 = 5;
}

void C_0008A970::func_0008A970(void) {
    unk4D8 = 7;
}

void C_0008A980::func_0008A980(void) {
    unk4D8 = 8;
}

void C_0008A990::func_0008A990(void) {
    unk4D8 = 9;
}

void C_0008A9A0::func_0008A9A0(void) {
    unk4D8 = 10;
}

void C_0008A2E0::func_0008A9B0() {
    int *r = D_002A8490->lookup->func_0018C160((int)&D_00278690);
    MidObj *mid = (MidObj *)(r ? *r : 0);
    ClampObj *o = mid->func_0018C070();
    if (D_00275AEC > o->f10) *(int *)&o->f10 = 0x41200000;
    if (D_00275AEC < o->f14 || o->f14 > o->f10) *(int *)&o->f14 = 0x41200000;
    SubElem_0008 *e = elems;
    int n = 9;
    do {
        ClampObj *o2 = e->func_001D5AA0();
        if (D_00275AEC > o2->f10) *(int *)&o2->f10 = 0x41200000;
        if (D_00275AEC < o2->f14 || o2->f14 > o2->f10) *(int *)&o2->f14 = 0x41200000;
        e++;
        n--;
    } while (n != 0);
    func_001578D0();
}

int C_0008A2E0::func_0008AA70() {
    int *v = vals;
    int n = 5;
    do {
        if (*v >= 0) elems[*v].func_001D5AD0();
        v++;
        n--;
    } while (n != 0);
    return 1;
}

C_0008AAB0 *C_0008AAB0::func_0008AAB0(int a0) {
    func_00157600(1);
    vtbl = &D_00279C3C;
    unk24 = 0;
    return this;
}

C_0008ABA0 *C_0008ABA0::func_0008AAD0() {
    int *r = D_002A8490->lookup->func_0018C160((int)&D_0027958C);
    int name = r ? *r : 0;
    void *mem = func_001E8A44(0x60);
    NodeObj *o;
    if (mem) o = ((AllocObj8 *)mem)->func_001D5E90();
    else o = 0;
    unk24 = o;
    o->func_001D5FA0(name, (int)&D_0027958C, 0x4b, (int)&D_00275630);
    if (o->f4 != 0x43a00000 || o->f8 != 0x43a50000) {
        o->f4 = 0x43a00000;
        o->f8 = 0x43a50000;
        o->b4e |= 6;
    }
    if (o->u48 != 0xffff8000) {
        o->b4e |= 8;
        o->u48 = (o->u48 & 0xffff8000) | 0xff8000;
    }
    if (o->f44 != D_0028F5E0) {
        o->f44 = D_0028F5E0;
        o->b4e |= 6;
    }
    return this;
}

int C_0008AB90::func_0008AB90(int a0) {
    unk28 = a0;
    return 1;
}

void C_0008ABA0::func_0008ABA0() {
    if ((D_002B9090 & 1) == 0) {
        D_002B9090 |= 1;
        D_002B908C = D_002A7CB8->func_00026500((int)&D_00279CA8, 0);
    }
    unk24->func_001D6600();
    func_00157960();
}

