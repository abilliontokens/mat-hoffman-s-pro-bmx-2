/* 8 functions from 0x0015D340 to 0x0015E300, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
void func_001E891B(void *p);

void *func_001E8A44(int size);

struct V4_15D850 { float x, y, z, w; };
static inline V4_15D850 v4_15D850(float x, float y, float z)
{
    V4_15D850 r;
    r.x = x;
    r.y = y;
    r.z = z;
    r.w = 1.0f;
    return r;
}

struct C_00192A50 {
    char pad0[0x3c];
    int unk3C;
    C_00192A50 *func_00192900(int a);
    void func_00192A50(C_00192A50 *other, int c);
    void func_00192A90(void *p);
    void func_00192AC0(void *p);
};

struct C_001923F0 {
    C_001923F0 *func_001923F0(int a);
};

struct C_0017D5A0 {
    C_0017D5A0 *func_0017D5A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

struct C_00193500 {
    void func_00193500();
    void func_00193870(int *p);
};

struct C_0015DCC0_Item {
    char pad0[0x24];
    int unk24;
    int unk28;
    char pad2C[0x98];
    C_00193500 *unkC4;
};

struct C_0015DA60 {
    char pad0[0x6c];
    C_00192A50 **unk6C;
    char pad70[0xC];
    int unk7C;
    char pad80[4];
    C_0015DCC0_Item **unk84;
    int unk88;
    void func_0015DA60(int a, int b, int c);
    void func_0015DCC0(C_0015DCC0_Item *item);
};

extern float D_00275460;
struct V4_15E130 { float x, y, z, w; };
struct N2_15E130 { char pad[0x24]; struct N_15E130* list; char pad2[0x14]; int idx; };
struct A_15E130 { int pad; N2_15E130* p; };
struct C_0017A1D0 { int func_0017A1D0(float a, float b, float* out); };
struct N_15E130 { N_15E130* next; N2_15E130* p; C_0017A1D0* obj; };
struct C_0015E130 {
    char pad[0x38]; int* flags; V4_15E130* b; char pad2[0x10]; V4_15E130* a;
    void func_0015E130(A_15E130* arg0, float arg1, float arg2, V4_15E130* out, V4_15E130* out2);
};

struct C_0015E0F0 {
    int func_0015E0F0(int param_1);
};


void C_0015DA60::func_0015DA60(int a, int b, int c)
{
    unk6C[a]->func_00192A50(unk6C[b], c);
    unk6C[b]->func_00192A50(unk6C[a], c);
}

void C_0015DA60::func_0015DCC0(C_0015DCC0_Item *item)
{
    int found = 0;
    int i = 0;
    if (0 < unk7C) {
        do {
            C_0015DCC0_Item *cur = unk84[i];
            if (cur == item) {
                found = 1;
            } else if (found) {
                unk84[i - 1] = cur;
            }
            i++;
        } while (i < unk7C);
    }
    unk7C--;
    if (item->unk28 == 1 && item->unkC4 != 0) {
        item->unkC4->func_00193870(&item->unk24);
        C_00193500 *sub = item->unkC4;
        if (sub != 0) {
            sub->func_00193500();
            func_001E891B(sub);
        }
        item->unkC4 = 0;
    }
    unk88 = 0;
    for (i = 0; i < unk7C; i++) {
        if (unk84[i]->unk28 == 2) {
            unk88 = 1;
            return;
        }
    }
}

int C_0015E0F0::func_0015E0F0(int param_1)
{
  int in_ECX = (int)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    piVar2 = *(int **)(in_ECX + 0x84);
    do {
      if (*(int *)(*piVar2 + 0x28) == param_1) {
        return (*(int **)(in_ECX + 0x84))[iVar1];
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x7c));
  }
  return 0;
}
