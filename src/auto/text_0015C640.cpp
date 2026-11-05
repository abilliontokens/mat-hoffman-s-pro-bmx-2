/* 24 functions from 0x0015C640 to 0x0015D340, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_0015CD50 {
    void func_0015CD50(uint param_1);
};


struct C_0015C6C0 {
    char pad_0[8];
    int unk8;
    int unkC;
    char pad_10[4];
    int unk14;
    void func_0015C6C0(int param_1, int param_2);
};
extern float D_00287848;
extern float D_00287844;
extern float D_00287840;
extern float D_00275460;
extern float D_00275544;

int func_0015C640(float *param_1, int param_2, float param_3)
{
    int iVar1;
    int iVar2;
    if (param_2 != 0) {
        if (param_3 >= param_1[param_2 * 2 - 2]) {
            return param_2;
        }
        if (param_3 >= *param_1) {
            iVar2 = 0;
            do {
                while (iVar1 = (param_2 + iVar2) >> 1, param_3 >= param_1[iVar1 * 2]) {
                    iVar2 = iVar1;
                    if (param_3 < param_1[iVar1 * 2 + 2]) {
                        return iVar1 + 1;
                    }
                }
                param_2 = iVar1;
            } while (param_3 < param_1[iVar1 * 2 - 2]);
            return iVar1;
        }
    }
    return 0;
}

void C_0015C6C0::func_0015C6C0(int param_1, int param_2)
{
    int func_0015C6F0(...);
    func_0015C6F0(unk14, param_1, unkC, unk8, param_2);
}

float func_0015C900(float param_1)
{
    float lVar1;
    lVar1 = param_1 * param_1;
    return (((D_00287844 - D_00287848 * lVar1) * lVar1 - D_00287840) * lVar1 + D_00275460) * param_1;
}

void C_0015CD50::func_0015CD50(uint param_1)
{
  int in_ECX = (int)this;
  
  *(uint *)(in_ECX + 0xcc) = param_1 & 0xffffff;
  return;
}
