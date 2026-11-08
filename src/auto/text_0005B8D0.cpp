/* 42 functions from 0x0005B8D0 to 0x0005C720, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
struct C_0005C3A0 {
    void func_0005C3A0(int idx);
};
extern int D_002782AC;
extern short D_002782B0;
struct C_0005C040 {
    undefined4 func_0005C040(int param_1, int param_2, int param_3, int param_4);
};

struct C_0005C0B0 {
    void func_0005C0B0(int param_1, int param_2, int param_3);
};

struct C_0005C070 {
    undefined4 func_0005C070(int param_1, int param_2, int param_3);
};

struct C_0005C6B0 {
    undefined4 func_0005C6B0(int param_1);
};

struct C_0005C310 {
    void func_0005C310(int param_1, int param_2);
};

struct C_0005C1B0 {
    void func_0005C1B0(int param_1, int param_2);
};

struct C_0005C170 {
    void func_0005C170(int param_1, int param_2);
};

struct C_0005C2F0 {
    undefined4 func_0005C2F0(int param_1, int param_2);
};

struct C_0005C190 {
    undefined4 func_0005C190(int param_1, int param_2);
};

struct C_0005C150 {
    undefined4 func_0005C150(int param_1, int param_2);
};

struct C_0005C020 {
    int func_0005C020(int param_1);
};

struct C_0005C340 {
    void func_0005C340(int param_1);
};

struct C_0005C1E0 {
    void func_0005C1E0(int param_1);
};

struct C_0005C130 {
    void func_0005C130(int param_1);
};

struct C_0005C330 {
    undefined4 func_0005C330(int param_1);
};

struct C_0005C200 {
    undefined4 func_0005C200(int param_1);
};

struct C_0005C1D0 {
    undefined4 func_0005C1D0(int param_1);
};

struct C_0005C120 {
    undefined4 func_0005C120(int param_1);
};

struct C_0005C710 {
    char pad0[0xCE8];
    int unkCE8;
    void func_0005C710(void);
};

struct C_0005C390 {
    char pad0[0xCE4];
    int unkCE4;
    void func_0005C390(void);
};

struct C_0005C370 {
    char pad0[0xCE0];
    int unkCE0;
    void func_0005C370(void);
};

struct C_0005C110 {
    char pad0[0xB34];
    int unkB34;
    void func_0005C110(void);
};

struct C_0005C100 {
    char pad0[0xB30];
    int unkB30;
    void func_0005C100(void);
};

struct C_0005C090 {
    char pad0[0xCEC];
    int unkCEC;
    void func_0005C090(void);
};

struct C_0005C6A0 {
    undefined * func_0005C6A0(void);
};

struct C_0005C700 {
    char pad0[0xCE8];
    int unkCE8;
    int func_0005C700(void);
};

struct C_0005C380 {
    char pad0[0xCE4];
    int unkCE4;
    int func_0005C380(void);
};

struct C_0005C360 {
    char pad0[0xCE0];
    int unkCE0;
    int func_0005C360(void);
};

struct C_0005C0F0 {
    char pad0[0xB34];
    int unkB34;
    int func_0005C0F0(void);
};

struct C_0005C0E0 {
    char pad0[0xB30];
    int unkB30;
    int func_0005C0E0(void);
};

struct C_0005C0A0 {
    char pad0[0xCEC];
    int unkCEC;
    int func_0005C0A0(void);
};

struct S_0005B8D0_Obj {
    void func_00095110(int i);
    void func_00095160(int i);
    void func_000951B0(int i);
    void func_00095200(int i);
};

struct S_0005B8D0_Mid {
    char pad0[0x10];
    float f10;
    char pad14[0x34];
    int f48;
    char pad4c[0x2b0];
    S_0005B8D0_Obj *p2fc;
};

struct S_0005B8D0_Root {
    char pad0[0x2e0];
    S_0005B8D0_Mid *p2e0;
};

struct S_0005B8D0_Pair {
    int a;
    int b;
};

extern float D_002782A8;

struct S_0005B960_FGroup {
    float val[5];
    char name[5][16];
};

struct S_0005B960_IGroup {
    int val[5];
    char name[5][16];
};

struct C_0005B960 {
    S_0005B960_FGroup g0;
    S_0005B960_FGroup g1;
    S_0005B960_FGroup g2;
    S_0005B960_IGroup g3;
    S_0005B960_IGroup g4;
    S_0005B960_IGroup g5;
    int func_0005B960(int sel, float val);
    int func_0005BED0(int sel, int idx, float *out, char *dst);
    int func_0005BA80(int sel, float val, char *name);
};

struct C_0005B8D0 {
    char pad0[0xCF0];
    S_0005B8D0_Pair pairs[0x12];
    void func_0005B8D0(void);
};

struct C_0005C210 {
    void func_0005C210(int param_1, int param_2);
};

struct C_0005C280 {
    void func_0005C280(int param_1);
};

struct C_0005C6D0 {
    void func_0005C6D0(int param_1);
};

struct S_0005C650_Slot {
    int v[4];
};

struct C_0005C5B0 {
    undefined4 func_0005C5B0(int param_1, int param_2);
};

struct C_0005C600 {
    undefined4 func_0005C600(int param_1, int param_2);
};

struct C_0005C650 {
    char pad0[0x14970];
    S_0005C650_Slot slots[8];
    void func_0005C650(int param_1);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

static __forceinline void CopyName_0005BA80(char *d, const char *s)
{
    while ((*d++ = *s++) != 0) {
    }
}

static __forceinline void InsertF_0005BA80(S_0005B960_FGroup *g, int i, float val, char *name)
{
    int j;

    for (j = 4; j > i; j--) {
        g->val[j] = g->val[j - 1];
        CopyName_0005BA80(g->name[j], g->name[j - 1]);
    }
    g->val[i] = val;
    CopyName_0005BA80(g->name[i], name);
}

static __forceinline void InsertI_0005BA80(S_0005B960_IGroup *g, int i, int val, char *name)
{
    int j;

    for (j = 4; j > i; j--) {
        g->val[j] = g->val[j - 1];
        CopyName_0005BA80(g->name[j], g->name[j - 1]);
    }
    g->val[i] = val;
    CopyName_0005BA80(g->name[i], name);
}


void C_0005B8D0::func_0005B8D0(void)
{
  extern undefined4 D_002A8490;
  int i;

  for (i = 0; i < 0x12; i++) {
    if (pairs[i].a != 0) {
      ((S_0005B8D0_Root *)D_002A8490)->p2e0->p2fc->func_000951B0(i);
    } else {
      ((S_0005B8D0_Root *)D_002A8490)->p2e0->p2fc->func_00095200(i);
    }
    if (pairs[i].b != 0) {
      ((S_0005B8D0_Root *)D_002A8490)->p2e0->p2fc->func_00095110(i);
    } else {
      ((S_0005B8D0_Root *)D_002A8490)->p2e0->p2fc->func_00095160(i);
    }
  }
}

int C_0005B960::func_0005B960(int sel, float val)
{
    extern undefined4 D_002A8490;
    int iv = (int)val;
    int i;

    switch (sel) {
    case 3:
        for (i = 0; i < 5; i++) {
            if (iv > g4.val[i]) {
                goto found;
            }
        }
        return 0;
    case 4:
        if (((S_0005B8D0_Root *)D_002A8490)->p2e0->f10 <= D_002782A8) {
            for (i = 0; i < 5; i++) {
                if (iv > g3.val[i]) {
                    goto found;
                }
            }
        }
        return 0;
    case 0:
        for (i = 0; i < 5; i++) {
            if (val > g0.val[i]) {
                goto found;
            }
        }
        return 0;
    case 1:
        for (i = 0; i < 5; i++) {
            if (val > g1.val[i]) {
                goto found;
            }
        }
        return 0;
    case 2:
        for (i = 0; i < 5; i++) {
            if (val > g2.val[i]) {
                goto found;
            }
        }
        return 0;
    case 5:
        for (i = 0; i < 5; i++) {
            if (iv > g5.val[i]) {
                goto found;
            }
        }
        return 0;
    default:
        return 0;
    }
found:
    return 1;
}

extern "C" char *__cdecl strcpy(char *dst, const char *src);
int C_0005B960::func_0005BA80(int sel, float val, char *name)
{
    int iv = (int)val;
    float f = val;
    float *p;
    int *q;
    int i, j;
    char *s;
    char *d;
    char c;

    switch (sel) {
    case 1:
        for (i = 0, p = g1.val; i < 5; i++, p++) {
            if (val > *p) goto f1;
        }
        return 0;
    f1:
        for (j = 4; j > i; j--) {
            g1.val[j] = g1.val[j - 1];
            s = g1.name[j - 1];
            d = g1.name[j];
            do {
                c = *s++;
                *d++ = c;
            } while (c != 0);
        }
        g1.val[i] = val;
        s = name;
        d = g1.name[i];
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
        return 1;
    case 3:
        for (i = 0, q = g4.val; i < 5; i++, q++) {
            if (iv > *q) goto f3;
        }
        return 0;
    f3:
        for (j = 4; j > i; j--) {
            g4.val[j] = g4.val[j - 1];
            s = g4.name[j - 1];
            d = g4.name[j];
            do {
                c = *s++;
                *d++ = c;
            } while (c != 0);
        }
        g4.val[i] = iv;
        s = name;
        d = g4.name[i];
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
        return 1;
    case 4:
        for (i = 0, q = g3.val; i < 5; i++, q++) {
            if (iv > *q) goto f4;
        }
        return 0;
    f4:
        for (j = 4; j > i; j--) {
            g3.val[j] = g3.val[j - 1];
            s = g3.name[j - 1];
            d = g3.name[j];
            do {
                c = *s++;
                *d++ = c;
            } while (c != 0);
        }
        AsmFloatToInt(f, &g3.val[i]);
        s = name;
        d = g3.name[i];
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
        return 1;
    case 0:
        for (i = 0; i < 5; i++) {
            if (val > g0.val[i]) goto f0;
        }
        return 0;
    f0:
        for (j = 4; j > i; j--) {
            g0.val[j] = g0.val[j - 1];
            s = g0.name[j - 1];
            d = g0.name[j];
            do {
                c = *s++;
                *d++ = c;
            } while (c != 0);
        }
        g0.val[i] = f;
        s = name;
        d = g0.name[i];
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
        return 1;
    case 2:
        for (i = 0, p = g2.val; i < 5; i++, p++) {
            if (val > *p) goto f2;
        }
        return 0;
    f2:
        for (j = 4; j > i; j--) {
            g2.val[j] = g2.val[j - 1];
            s = g2.name[j - 1];
            d = g2.name[j];
            do {
                c = *s++;
                *d++ = c;
            } while (c != 0);
        }
        g2.val[i] = f;
        s = name;
        d = g2.name[i];
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
        return 1;
    case 5:
        for (i = 0, q = g5.val; i < 5; i++, q++) {
            if (iv > *q) goto f5;
        }
        return 0;
    f5:
        for (j = 4; j > i; j--) {
            g5.val[j] = g5.val[j - 1];
            s = g5.name[j - 1];
            d = g5.name[j];
            do {
                c = *s++;
                *d++ = c;
            } while (c != 0);
        }
        g5.val[i] = iv;
        s = name;
        d = g5.name[i];
        do {
            c = *s++;
            *d++ = c;
        } while (c != 0);
        return 1;
    }
    return 0;
}

int C_0005B960::func_0005BED0(int sel, int idx, float *out, char *dst)
{
    char *s;
    int d;
    char c;

    switch (sel) {
    case 3:
        *out = (float)g4.val[idx];
        s = g4.name[idx];
        d = dst - s;
        do {
            c = *s;
            s[d] = c;
            s++;
        } while (c != 0);
        break;
    case 4:
        *out = (float)g3.val[idx];
        s = g3.name[idx];
        d = dst - s;
        do {
            c = *s;
            s[d] = c;
            s++;
        } while (c != 0);
        break;
    case 0:
        *out = g0.val[idx];
        s = g0.name[idx];
        d = dst - s;
        do {
            c = *s;
            s[d] = c;
            s++;
        } while (c != 0);
        break;
    case 1:
        *out = g1.val[idx];
        s = g1.name[idx];
        d = dst - s;
        do {
            c = *s;
            s[d] = c;
            s++;
        } while (c != 0);
        break;
    case 2:
        *out = g2.val[idx];
        s = g2.name[idx];
        d = dst - s;
        do {
            c = *s;
            s[d] = c;
            s++;
        } while (c != 0);
        break;
    case 5:
        *out = (float)g5.val[idx];
        s = g5.name[idx];
        d = dst - s;
        do {
            c = *s;
            s[d] = c;
            s++;
        } while (c != 0);
        break;
    }
    return 0;
}

int C_0005C020::func_0005C020(int param_1)
{
  int in_ECX = (int)this;
  
  return param_1 * 0x1f98 + 0xd80 + in_ECX;
}

undefined4 C_0005C040::func_0005C040(int param_1, int param_2, int param_3, int param_4)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (in_ECX + 0xd8c + (param_1 * 0x7e6 + param_4 + param_3 * 0xf + param_2 * 0x2d) * 4);
}

undefined4 C_0005C070::func_0005C070(int param_1, int param_2, int param_3)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x270 + (param_2 * 0xf + param_1 * 0x2d + param_3) * 4);
}

void C_0005C090::func_0005C090(void) {
    unkCEC = 1;
}

int C_0005C0A0::func_0005C0A0(void) {
    return unkCEC;
}

void C_0005C0B0::func_0005C0B0(int param_1, int param_2, int param_3)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x270 + (param_2 * 0xf + param_1 * 0x2d + param_3) * 4) = 1;
  return;
}

int C_0005C0E0::func_0005C0E0(void) {
    return unkB30;
}

int C_0005C0F0::func_0005C0F0(void) {
    return unkB34;
}

void C_0005C100::func_0005C100(void) {
    unkB30 = 1;
}

void C_0005C110::func_0005C110(void) {
    unkB34 = 1;
}

undefined4 C_0005C120::func_0005C120(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xb38 + param_1 * 4);
}

void C_0005C130::func_0005C130(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xb38 + param_1 * 4) = 1;
  return;
}

undefined4 C_0005C150::func_0005C150(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xa10 + param_2 * 4 + param_1 * 0xc);
}

void C_0005C170::func_0005C170(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xa10 + param_2 * 4 + param_1 * 0xc) = 1;
  return;
}

undefined4 C_0005C190::func_0005C190(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0x810 + (param_2 + param_1 * 8) * 4);
}

void C_0005C1B0::func_0005C1B0(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x810 + (param_2 + param_1 * 8) * 4) = 1;
  return;
}

undefined4 C_0005C1D0::func_0005C1D0(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xad0 + param_1 * 4);
}

void C_0005C1E0::func_0005C1E0(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xad0 + param_1 * 4) = 1;
  return;
}

undefined4 C_0005C200::func_0005C200(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xb10 + param_1 * 4);
}

void C_0005C210::func_0005C210(int param_1, int param_2)
{
  extern undefined4 D_002A8490;
  int in_ECX = (int)this;

  *(undefined4 *)(in_ECX + 0xb10 + param_1 * 4) = 1;
  ((S_0005B8D0_Root *)D_002A8490)->p2e0->p2fc->func_00095160(param_2);
  ((S_0005B8D0_Root *)D_002A8490)->p2e0->p2fc->func_000951B0(param_2);
  *(undefined4 *)(in_ECX + 0xce8 + param_2 * 8) = 1;
  *(undefined4 *)(in_ECX + 0xcec + param_2 * 8) = 0;
  return;
}

void C_0005C280::func_0005C280(int param_1)
{
  extern undefined4 D_002A8490;
  int in_ECX = (int)this;

  *(undefined4 *)(in_ECX + 0xb10 + *(int *)(*(int *)(D_002A8490 + 0x2e0) + 0x48) * 4) = 1;
  ((S_0005B8D0_Root *)D_002A8490)->p2e0->p2fc->func_00095160(param_1);
  ((S_0005B8D0_Root *)D_002A8490)->p2e0->p2fc->func_000951B0(param_1);
  *(undefined4 *)(in_ECX + 0xce8 + param_1 * 8) = 1;
  *(undefined4 *)(in_ECX + 0xcec + param_1 * 8) = 0;
  return;
}

undefined4 C_0005C2F0::func_0005C2F0(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xb58 + param_2 * 4 + param_1 * 0x24);
}

void C_0005C310::func_0005C310(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xb58 + param_2 * 4 + param_1 * 0x24) = 1;
  return;
}

undefined4 C_0005C330::func_0005C330(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(in_ECX + 0xcc0 + param_1 * 4);
}

void C_0005C340::func_0005C340(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xcc0 + param_1 * 4) = 1;
  return;
}

int C_0005C360::func_0005C360(void) {
    return unkCE0;
}

void C_0005C370::func_0005C370(void) {
    unkCE0 = 1;
}

int C_0005C380::func_0005C380(void) {
    return unkCE4;
}

void C_0005C390::func_0005C390(void) {
    unkCE4 = 1;
}

extern "C" void * __cdecl memcpy(void *, const void *, unsigned int);
void C_0005C3A0::func_0005C3A0(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  volatile int local_18;
  volatile int local_a;
  undefined4 *local_14;
  undefined4 * volatile local_10;
  int local_c;
  int local_8;
  int end;
  
  if ((param_1 >= -1) && (param_1 <= 10)) {
    if (param_1 == -1) {
      param_1 = 0;
      end = 10;
    }
    else {
      end = param_1 + 1;
    }
    if (param_1 < end) {
      local_18 = param_1 * 0x7e6 + 0x4eb;
      local_a = param_1 * 0x1f98 + 0x13ac;
      iVar1 = param_1 * 0x1f98;
      puVar6 = (undefined4 *)(iVar1 + 0x1368 + in_ECX);
      local_10 = (undefined4 *)(iVar1 + 0x2078 + in_ECX);
      local_8 = end - param_1;
      do {
        puVar6[-0x17a] = 1;
        *puVar6 = 0;
        puVar5 = puVar6;
        for (iVar1 = 8; puVar5 = puVar5 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = 0;
        }
        puVar6[-0x179] = 0;
        puVar6[-0x178] = 0;
        puVar6[-7] = 0;
        puVar6[-6] = 0;
        puVar6[-5] = 0x74616d;
        memcpy(puVar6 - 3, &D_002782AC, 6);
        puVar6[-1] = 0;
        iVar1 = 0;
        do {
          if (iVar1 == 0) {
            *(undefined4 *)(local_a + -0x20 + in_ECX) = 1;
          }
          else {
            *(undefined4 *)(in_ECX + (local_18 + -8 + iVar1) * 4) = 0;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 8);
        iVar1 = 0;
        do {
          if (iVar1 == 0) {
            *(undefined4 *)(local_a + in_ECX) = 1;
          }
          else {
            *(undefined4 *)(in_ECX + (local_18 + iVar1) * 4) = 0;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 3);
        iVar1 = 0;
        do {
          if (iVar1 == 0) {
            *(undefined4 *)(local_a + 0xc + in_ECX) = 1;
          }
          else {
            *(undefined4 *)(in_ECX + (local_18 + 3 + iVar1) * 4) = 0;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 8);
        local_14 = puVar6 + -0x177;
        local_c = 0xf;
        do {
          iVar1 = 3;
          puVar5 = local_14;
          do {
            iVar4 = 8;
            puVar2 = local_10;
            puVar3 = puVar5;
            do {
              *puVar3 = 0;
              puVar2[-0x328] = 0;
              *puVar2 = 0;
              puVar2[-0x353] = 0;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 0x2d;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            puVar5 = puVar5 + 0xf;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          local_14 = local_14 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        iVar1 = 8;
        puVar5 = puVar6 + 0x34c;
        do {
          puVar2 = puVar5 + -0x328;
          for (iVar4 = 100; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          }
          iVar1 = iVar1 + -1;
          puVar2 = puVar5;
          for (iVar4 = 100; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          }
          puVar5 = puVar5 + 100;
        } while (iVar1 != 0);
        {
          int c = local_18;
          undefined4 *b = local_10;
          int a = local_a;
          a += 0x1f98;
          b += 0x7e6;
          puVar6 += 0x7e6;
          local_10 = b;
          local_a = a;
          local_18 = c + 0x7e6;
          --local_8;
        }
      } while (local_8 != 0);
    }
  }
  return;
}

undefined4 C_0005C5B0::func_0005C5B0(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  if (param_2 >= 0 && param_2 <= 100) {
    *(undefined4 *)
     (in_ECX + 0x2098 +
     (param_1 * 0x7e6 + param_2 + *(int *)(param_1 * 0x1f98 + 0xd88 + in_ECX) * 100) * 4) = 1;
    return 1;
  }
  return 0;
}

undefined4 C_0005C600::func_0005C600(int param_1, int param_2)
{
  int in_ECX = (int)this;
  
  if (param_2 >= 0 && param_2 <= 100) {
    *(undefined4 *)
     (in_ECX + 0x13f8 +
     (param_1 * 0x7e6 + param_2 + *(int *)(param_1 * 0x1f98 + 0xd88 + in_ECX) * 100) * 4) = 1;
    return 1;
  }
  return 0;
}

void C_0005C650::func_0005C650(int param_1)
{
    extern undefined4 D_002A8490;
    int lo;
    int hi;

    if (param_1 != 0) {
        hi = *(int *)(*(int *)(D_002A8490 + 0x2e0) + 0x48);
        lo = hi;
    } else {
        lo = 0;
        hi = 8;
    }
    for (int i = lo; i < hi; i++) {
        int *p = (int *)&slots[i];
        for (int j = 0; j < 4; j++)
            p[j] = 0;
    }
}

undefined * C_0005C6A0::func_0005C6A0(void)
{
  extern undefined D_00014970;
  int in_ECX = (int)this;
  
  return ((undefined *)&D_00014970) + in_ECX;
}

undefined4 C_0005C6B0::func_0005C6B0(int param_1)
{
  extern undefined4 D_002A8490;
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (in_ECX + (param_1 + 0x525c + *(int *)(*(int *)(D_002A8490 + 0x2e0) + 0x48) * 4) * 4);
}

void C_0005C6D0::func_0005C6D0(int param_1)
{
  extern undefined4 D_002A8490;
  int in_ECX = (int)this;

  *(undefined4 *)(in_ECX + (param_1 + 0x525c + *(int *)(*(int *)(D_002A8490 + 0x2e0) + 0x48) * 4) * 4) = 1;
  return;
}

int C_0005C700::func_0005C700(void) {
    return unkCE8;
}

void C_0005C710::func_0005C710(void) {
    unkCE8 = 1;
}

