/* 28 functions from 0x001358A0 to 0x00136860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_00135A60 {
    undefined4 func_00135A60(byte param_1);
};

struct C_00135D70 {
    char pad0[0xC];
    int unkC;
    int unk10;
    void func_00135D70(int a0, int a1);
};


/* binding table: 9 rows of 0x4a entries; rows 1..8 are the per-player ones */
struct C_00135CB0 {
    int tbl[10][0x4a];
    void func_00135CB0();
    void func_00135D00(int a0, int a1);
    void func_00135D30(int idx, int *out, int row);
};
extern int D_002BA700;
struct C_00135E00;
struct S_Game_001358A0 {
    char pad0[8];
    C_00135E00 *f8;
};
extern S_Game_001358A0 *D_002A8490;
extern int D_00284834;
void func_001E891B(void *p);

struct S_00136110_Dev {
    virtual int v0(int a, int b, int c);
    virtual int v1(int a, int b, int c);
    virtual int v2(int a, int b, int c);
    virtual int v3(int a, int b, int c);
    virtual int v4(int a, int b, int c);
    virtual int v5(int a, int b, int c);
};

struct S_001358A0_Handler : S_00136110_Dev {
    int func_0015AC20(int a);
};

struct S_00136300_Target {
    virtual void v0(int a);
};

struct C_00136300 {
    S_00136300_Target *f0;
    int f4;
    void func_00136300(void);
};

struct C_00135D90 {
    char pad0[0x24];
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    void func_00135D90(float a, float b);
};

/* 5-int record of the pending command list that overlays the ControlInterface from +0x0 */
struct S_ControlEntry {
    int type;
    int a;
    int b;
    int c;
    int d;
};

/* ControlInterface */
struct C_00135E00 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    S_00136110_Dev *f14[8];
    S_00136110_Dev *f34;
    S_001358A0_Handler *f38;
    int f3C;
    char pad40[0xc80];
    C_00135CB0 *fCC0;
    int fCC4[8];
    int fCE4[8];
    C_00135E00 *func_00135E00(void);
    void func_00135E50(void);
    void func_00135E90(int a0, int a1, int a2, int a3);
    int func_00135FF0(int a0, int kind, int a2, int idx);
    int func_001360B0(int a0, int a1);
    C_00135E00 *func_00136320(unsigned int flags);
    int func_00136110(int a, int idx);
    int func_00136170(int idx, int type, int row);
};

undefined4 C_00135A60::func_00135A60(byte param_1)
{
  int func_00135740(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00135740();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int func_00135C70(int param_1, int param_2, int *param_3, int param_4)
{
    int __stdcall func_0015AC20(int);
    if ((*param_3 == param_1) && (param_3[1] == param_2)) {
        if (param_2 != 0) {
            return 1;
        }
        if (*(int *)(*(int *)((char *)D_002A8490 + 8) + 0x38) != 0) {
            if (func_0015AC20(param_4) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

void C_00135CB0::func_00135CB0()
{
    int *in_ECX = (int *)this;
    int *puVar1;
    int *puVar2;
    int iVar3;
    int iVar4;
    puVar2 = (int *)((char *)in_ECX + 0xa68);
    iVar4 = 0x4a;
    do {
        puVar2[-0x29a] = -1;
        puVar1 = puVar2 - 0x250;
        iVar3 = 8;
        do {
            *puVar1 = -1;
            puVar1 = puVar1 + 0x4a;
            iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
        *puVar2 = -1;
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
}

void C_00135CB0::func_00135D00(int param_1, int param_2)
{
    int *puVar1;
    int iVar2;
    if (param_1 >= 0 && param_1 < 0x4a) {
        puVar1 = (int *)((char *)this + 0x128 + param_1 * 4);
        iVar2 = 8;
        do {
            *puVar1 = param_2;
            puVar1 = puVar1 + 0x4a;
            iVar2 = iVar2 - 1;
        } while (iVar2 != 0);
    }
}

void C_00135CB0::func_00135D30(int idx, int *out, int row)
{
    if (idx >= 0 && idx < 0x4a && row < 8) {
        *out = tbl[row + 1][idx];
    } else {
        *out = -1;
    }
}

void C_00135D70::func_00135D70(int a0, int a1) {
    unkC = a0;
    unk10 = a1;
}

void C_00135D90::func_00135D90(float a, float b)
{
    float v = (a / b) * (f30 - f2C) + f2C;

    if (v >= f34) {
        f24 = (v - f34) * ((f30 - f28) / (f30 - f34)) + f28;
    } else if (v <= f38) {
        f24 = (v - f38) * ((f28 - f2C) / (f38 - f2C)) + f28;
    } else {
        f24 = f28;
    }
}

C_00135E00 *C_00135E00::func_00135E00(void)
{
    int i;
    int *p;

    vtbl = (void *)&D_00284834;
    f4 = 0;
    f8 = 0;
    f10 = 0;
    i = 0;
    p = fCC4;
    do {
        p[0] = i;
        p[8] = i;
        p[-0x32c] = 0;
        i++;
        p++;
    } while (i < 8);
    f34 = 0;
    f38 = 0;
    fCC0 = 0;
    f3C = 0;
    fC = 0;
    return this;
}

void C_00135E00::func_00135E50(void)
{
    vtbl = (void *)&D_00284834;
    if (fC != 0 && fCC0 != 0) {
        func_001E891B(fCC0);
        fCC0 = 0;
    }
}

int func_00135E80()
{
    return ++D_002BA700;
}

void C_00135E00::func_00135E90(int a0, int a1, int a2, int a3)
{
    S_ControlEntry *list = (S_ControlEntry *)pad40;
    list[f3C].type = a0;
    list[f3C].b = a3;
    list[f3C].a = a1;
    list[f3C].c = a2;
    ((int *)this)[(f3C + 4) * 5] = 0x3f;
    f3C++;
}

int C_00135E00::func_00135FF0(int a0, int kind, int a2, int idx)
{
    S_00136110_Dev *dev;
    switch (kind) {
    case 2:
        dev = f14[idx];
        if (dev != 0 && dev->v3(a0, a2, 0) != 0) {
            return 1;
        }
        break;
    case 1:
        dev = f34;
        if (dev != 0 && dev->v5(a0, a2, 0) != 0) {
            return 1;
        }
        break;
    case 0:
        dev = f38;
        if (dev != 0 && dev->v5(a0, a2, 0) != 0) {
            return 1;
        }
        break;
    }
    return 0;
}

int C_00135E00::func_001360B0(int a0, int a1)
{
    S_00136110_Dev *dev;
    dev = f14[0];
    if (dev != 0 && dev->v2(a0, a1, 0) != 0) {
        return 1;
    }
    dev = f38;
    if (dev != 0 && dev->v4(a0, a1, 0) != 0) {
        return 1;
    }
    dev = f34;
    if (dev != 0 && dev->v4(a0, a1, 0) != 0) {
        return 1;
    }
    return 0;
}

int C_00135E00::func_00136110(int a, int idx)
{
    S_00136110_Dev *dev = f14[idx];

    if (dev != 0) {
        if (dev->v3(a, 0x3f, 0) != 0) {
            return 1;
        }
    }
    return 0;
}

int C_00135E00::func_00136170(int idx, int type, int row)
{
    C_00135CB0 *t = fCC0;

    if (t != 0) {
        switch (type) {
        case 0:
            if (idx >= 0 && idx < 0x4a) {
                return t->tbl[0][idx];
            }
            break;
        case 1:
            if (idx >= 0 && idx < 0x4a) {
                return t->tbl[9][idx];
            }
            break;
        case 2:
            t->func_00135D30(idx, &idx, row);
            return idx;
        }
    }
    return -1;
}

int func_001361E0(int idx, int type, int *binding, int a3)
{
    int v;
    C_00135CB0 *t = D_002A8490->f8->fCC0;

    if (t == 0) {
        return 0;
    }
    switch (type) {
    case 0:
        if (D_002A8490->f8->f38 != 0) {
            if (D_002A8490->f8->f38->func_0015AC20(a3) == 0) {
                return 0;
            }
        }
        if (idx >= 0 && idx < 0x4a) {
            v = D_002A8490->f8->fCC0->tbl[0][idx];
        } else {
            v = -1;
        }
        break;
    case 1:
        if (idx >= 0 && idx < 0x4a) {
            v = t->tbl[9][idx];
        } else {
            v = -1;
        }
        break;
    case 2:
        t->func_00135D30(idx, &v, binding[2]);
        break;
    default:
        v = -1;
        break;
    }
    if (binding[0] == v && binding[1] == type && v != -1) {
        return 1;
    }
    return 0;
}

void C_00136300::func_00136300(void)
{
    if (*(int *)((char *)D_002A8490 + 8) != 0 && f0 != 0) {
        f0->v0(f4);
    }
}

C_00135E00 *C_00135E00::func_00136320(unsigned int flags)
{
    vtbl = (void *)&D_00284834;
    if (fC != 0 && fCC0 != 0) {
        func_001E891B(fCC0);
        fCC0 = 0;
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

