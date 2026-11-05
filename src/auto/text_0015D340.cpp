/* 8 functions from 0x0015D340 to 0x0015E300, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
void func_001E891B(void *p);

struct C_00192A50 {
    void func_00192A50(C_00192A50 *other, int c);
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

struct C_0015E0F0 {
    int func_0015E0F0(int param_1);
};


void C_0015DA60::func_0015DA60(int a, int b, int c)
{
    unk6C[a]->func_00192A50(unk6C[b], c);
    unk6C[b]->func_00192A50(unk6C[a], c);
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
