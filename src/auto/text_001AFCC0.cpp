/* 31 functions from 0x001AFCC0 to 0x001B0A20, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "ghidra.h"
struct C_001B0560 {
    void func_001B0560(undefined4 param_1, undefined4 param_2);
};


extern int D_0028C5F8;
extern int D_0028C638;
extern int D_0028C608;
extern int D_002764F0;

void func_001E891B(void *p);
int func_001EA426(void *a, void *b);

struct C_00168BE0 {
    void func_00168BE0(void *a, void *b, void *c, int d);
};

struct C_00149120 {
    int unk0;
    int unk4;
    void *func_00149120(void *a0, void *a1);
};

struct S_001B0230_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual int v7(void *arg);
};

struct S_001B0230_Owned {
    virtual void d0(int flags);
};

struct S_001B03A0_Global {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(void *buf, void *self);
};
extern S_001B03A0_Global *D_002AA474;

/* SurfaceMaterial */
struct C_001B0230 {
    void *vtbl;
    char pad4[0x44];
    int unk48;
    S_001B0230_Owned *unk4C;
    int unk50;
    S_001B0230_Obj *arr54[0x20];
    int arrD4[0x20];
    S_001B0230_Owned *unk154;
    u8 unk158;
    C_001B0230 *func_001B01D0(void);
    void func_001B0230(void);
    void func_001B0520(unsigned int key);
    void func_001B05A0(int a, int b, unsigned int key);
    int func_001B07D0(int idx, void *arg);
    void *func_001B0A00(unsigned int flags);
};

struct C_001B03A0 {
    void *func_001B03A0(void *arg);
};

extern int D_0028C648;

struct C_00148820 {
    int unk0;
    int unk4;
    void *func_00148820(void *a0, void *a1);
};

struct C_001B0460 {
    void *func_001B0460(void *arg);
};

struct C_001B0620 {
    void func_001B0620(void);
};


extern int D_0028C5BC;

struct S_002A8490 {
    char pad0[0x124];
    int unk124;
    char pad128[0x110];
    int unk238;
};
extern S_002A8490 *D_002A8490;

struct C_001AF530 {
    void func_001AF530(int i);
};

struct V_001AFEC0 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
};

struct C_001AFEC0 {
    int (*cb)(int user, C_001AFEC0 *self);
    int user;
    int unk8;
    C_001AF530 *items[4];
    V_001AFEC0 *unk1C;
    V_001AFEC0 *unk20;
    int unk24;
    int func_001AFEC0();
};

struct C_0001DFE0 {
    void func_0001DFE0();
    void func_0001DFF0();
};

/* ShaderDescriptor */
struct C_001AFF50 {
    void *vtbl;
    int unk4;
    short unk8;
    char unkA;
    char padB;
    int unkC;
    int unk10;
    int unk14;
    C_001AFF50 *func_001AFF50();
};

struct S_001AFF80_val {
    char pad0[0xc];
    float value;
};

struct S_001AFF80_set {
    char pad0[0xc];
    S_001AFF80_val *vals[1];
};

struct S_001AFF80_entry {
    S_001AFF80_set *set;
    int pad4;
};

struct S_001AFF80_list {
    int count;
    int pad4;
    S_001AFF80_entry entries[1];
};

static inline void FloatToInt(int *out, float f) { *out = (int)f; }

struct C_001AFF80 {
    char pad0[0xc];
    S_001AFF80_set *unkC;
    S_001AFF80_list *unk10;
    int func_001AFF80(int idx);
};

struct C_001B01B0 {
    int unk0;
    C_001B01B0 *func_001B01B0(void);
};
struct C_001B01C0 {
    int unk0;
    void func_001B01C0(void);
};

struct C_001B01A0 {
    int unk0;
    void func_001B01A0(void);
};

extern int D_0028C5E0;

/* RenderPrologue */
struct C_001B0180 {
    void *vtbl;
    int unk4;
    int unk8;
    C_001B0180 *func_001B0180(void);
};

void *func_001E8A44(unsigned int size);
void *func_001E8AA5(unsigned int size);
void *func_001E83E8(void *p, unsigned int size);

struct S_001B0040_owner {
    char pad0[0x28];
    int unk28;
};

struct S_001B0040_item {
    unsigned int key;
    void *val;
};

struct S_001B0040_list {
    int count;
    S_001B0040_item items[1];
};

struct C_001AFD90 {
    void *func_001AFD90(S_001B0040_owner *owner);
};

struct C_001B0040 {
    char pad0[0xc];
    S_001B0040_owner *unkC;
    S_001B0040_list *unk10;
    int func_001B0040(unsigned int key);
    void func_001B0070(unsigned int key);
    void *func_001B0130(unsigned int key);
};


int C_001AFEC0::func_001AFEC0()
{
    if (D_002A8490->unk238 != unk8) {
        if (D_002A8490->unk124 == 0 || unk24 != 0) {
            if (cb == 0 || cb(user, this) != 0) {
                int i;
                for (i = 0; i < 4; i++) {
                    if (items[i]) {
                        items[i]->func_001AF530(i);
                    }
                }
                if (unk1C) {
                    unk1C->vf2();
                }
                if (unk20) {
                    unk20->vf2();
                }
            }
            unk8 = D_002A8490->unk238;
        }
    }
    return 1;
}

C_001AFF50 *C_001AFF50::func_001AFF50()
{
    ((C_0001DFE0 *)this)->func_0001DFE0();
    unk14 = 0;
    unkC = 0;
    unk10 = 0;
    unk8 = 0;
    unkA = 0;
    vtbl = (void *)&D_0028C5BC;
    return this;
}

int C_001AFF80::func_001AFF80(int idx)
{
    int r;
    int i;
    if (unk10) {
        for (i = 0; i < unk10->count; i++) {
            if (unk10->entries[i].set && unk10->entries[i].set->vals[idx]) {
                FloatToInt(&r, unk10->entries[i].set->vals[idx]->value);
                return r;
            }
        }
    } else if (unkC && unkC->vals[idx]) {
        FloatToInt(&r, unkC->vals[idx]->value);
        return r;
    }
    return 0;
}

int C_001B0040::func_001B0040(unsigned int key)
{
    S_001B0040_list *l = unk10;
    int n = l->count;
    int i;
    for (i = 0; i < n; i++) {
        if (l->items[i].key >= key && l->items[i].val != 0) {
            break;
        }
    }
    return i;
}

void C_001B0040::func_001B0070(unsigned int key)
{
    if (unkC->unk28) {
        S_001B0040_list *l = unk10;
        int idx;
        if (l == 0) {
            l = (S_001B0040_list *)func_001E8AA5(12);
            unk10 = l;
            l->count = 0;
            idx = 0;
        } else {
            idx = func_001B0040(key);
            if (idx < l->count && l->items[idx].key == key) {
                return;
            }
            unk10 = (S_001B0040_list *)func_001E83E8(l, l->count * 8 + 12);
            for (int j = unk10->count; j > idx; j--) {
                unk10->items[j] = unk10->items[j - 1];
            }
        }
        unk10->items[idx].key = key;
        void *m = func_001E8A44(0x2c);
        unk10->items[idx].val = m ? ((C_001AFD90 *)m)->func_001AFD90(unkC) : 0;
        unk10->count++;
    }
}

void *C_001B0040::func_001B0130(unsigned int key)
{
    if (key && unkC && unkC->unk28) {
        S_001B0040_list *l = unk10;
        if (l == 0) {
            return unkC;
        }
        int i = func_001B0040(key);
        if (i < l->count && l->items[i].key == key) {
            return l->items[i].val;
        }
        return 0;
    }
    return unkC;
}

C_001B0180 *C_001B0180::func_001B0180(void)
{
    vtbl = (void *)&D_0028C5E0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

void C_001B01A0::func_001B01A0(void) {
    extern int D_0028C5E0;
    unk0 = (int)&D_0028C5E0;
}

C_001B01B0 *C_001B01B0::func_001B01B0(void)
{
    extern int D_0028C5EC;
    unk0 = (int)&D_0028C5EC;
    return this;
}

void C_001B01C0::func_001B01C0(void) {
    extern int D_0028C5EC;
    unk0 = (int)&D_0028C5EC;
}

C_001B0230 *C_001B0230::func_001B01D0(void)
{
    int i;

    ((C_0001DFE0 *)this)->func_0001DFE0();
    vtbl = (void *)&D_0028C5F8;
    unk48 = -1;
    unk50 = 0;
    for (i = 0; i < 0x20; i++) {
        arr54[i] = 0;
        arrD4[i] = -1;
    }
    unk158 = (unk158 & 0xfd) | 1;
    unk4C = 0;
    unk154 = 0;
    return this;
}

void C_001B0230::func_001B0230(void)
{
    int i;

    vtbl = (void *)&D_0028C5F8;
    for (i = 0; i < 0x20; i++) {
        if (arr54[i]) {
            arr54[i]->v2();
        }
    }
    if (unk4C) {
        unk4C->d0(1);
    }
    if (unk154) {
        unk154->d0(1);
    }
    ((C_0001DFE0 *)this)->func_0001DFF0();
}

void *C_001B03A0::func_001B03A0(void *arg)
{
    char buf[0x80];
    void *obj = 0;

    ((C_00168BE0 *)arg)->func_00168BE0(&D_0028C638, &D_002764F0, buf, -1);
    if (func_001EA426(buf, &D_002764F0) != 0) {
        void *p = func_001E8A44(0x24);
        obj = p != 0 ? ((C_00149120 *)p)->func_00149120(arg, this) : 0;
        if (func_001EA426(buf, &D_0028C608) == 0) {
            ((C_00149120 *)obj)->unk4 = 1;
        } else {
            D_002AA474->v7(buf, this);
        }
    }
    return obj;
}

void *C_001B0460::func_001B0460(void *arg)
{
    char buf[0x80];
    void *obj = 0;

    ((C_00168BE0 *)arg)->func_00168BE0(&D_0028C648, &D_002764F0, buf, -1);
    if (func_001EA426(buf, &D_002764F0) != 0) {
        void *p = func_001E8A44(0x18);
        obj = p != 0 ? ((C_00148820 *)p)->func_00148820(arg, this) : 0;
        if (func_001EA426(buf, &D_0028C608) == 0) {
            ((C_00148820 *)obj)->unk4 = 1;
        } else {
            D_002AA474->v7(buf, this);
        }
    }
    return obj;
}

void C_001B0230::func_001B0520(unsigned int key)
{
    int i;

    for (i = 0; i < unk50; i++) {
        C_001B0040 *p = (C_001B0040 *)arr54[i];
        if (p->unkC) {
            p->func_001B0070(key);
        }
    }
}

void C_001B0560::func_001B0560(undefined4 param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x50)) {
    piVar2 = (int *)(in_ECX + 0x54);
    do {
      puVar1 = *(undefined4 **)(*piVar2 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = param_1;
        puVar1[1] = param_2;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x50));
  }
  return;
}

void C_001B0230::func_001B05A0(int a, int b, unsigned int key)
{
    int i;

    for (i = 0; i < unk50; i++) {
        C_001B0040 *p = (C_001B0040 *)arr54[i];
        if (p->unk10) {
            int *v = (int *)p->func_001B0130(key);
            if (v) {
                v[0] = a;
                v[1] = b;
            }
        }
    }
}

void C_001B0620::func_001B0620(void)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x50)) {
    puVar2 = (undefined4 *)(in_ECX + 0xd4);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x50));
  }
  return;
}

int C_001B0230::func_001B07D0(int idx, void *arg)
{
    if (arr54[idx] != 0) {
        return arr54[idx]->v7(arg);
    }
    return -1;
}

void *C_001B0230::func_001B0A00(unsigned int flags)
{
    func_001B0230();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

