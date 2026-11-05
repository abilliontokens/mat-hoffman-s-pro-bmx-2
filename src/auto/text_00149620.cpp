/* 10 functions from 0x00149620 to 0x0014A610, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
extern int D_0028684C;
extern int D_00275FB4;

int __stdcall func_00201100(int param_1);
int __stdcall func_001FCE50(int param_1, int param_2);
void *func_001E8AA5(unsigned int size);

struct C_0013B210 {
    int func_0013C9F0(int param_1, int *param_2);
    void func_0013AF40(int param_1, int param_2, int *param_3);
    void func_0013C8A0(int param_1, void *param_2, int param_3, int param_4);
    void func_0013C110(int param_1);
};
extern C_0013B210 *D_002BEAAC;

struct C_00149E70 {
    char pad0[0x48];
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int func_00149E70(int param_1, int param_2, int param_3);
};

struct C_0001DFE0 {
    void *vtbl;
    int unk4;
    void func_0001DFE0();
    void func_0001DFF0();
};

struct C_0014A540;
struct C_00012140 {
    void func_00012140();
};

struct C_0014A3A0 : C_0001DFE0 {
    int unk8[8];
    int unk28[8];
    int unk48;
    int unk4C;
    int unk50;
    int unk54;
    int unk58;
    float unk5C[16];
    char pad9C[0x40];
    int unkDC;
    int unkE0;
    int unkE4;
    C_0014A540 *unkE8;
    C_00012140 *unkEC;
    C_0014A3A0 *func_0014A3A0();
    void func_0014A420();
};

struct C_0014A560 {
    char pad0[8];
    void *unk8;
    int func_0014A560(int param_1, int param_2);
};

struct C_0014A360 {
    undefined4 func_0014A360(int param_1);
};

struct C_0014A540 {
    void func_0014A540(void);
};

struct C_0014A500 {
    undefined4 func_0014A500(byte param_1);
};

struct C_0014A520 {
    int unk0;
    int unk4;
    int unk8;
    C_0014A520* func_0014A520(int a0);
};


int C_00149E70::func_00149E70(int param_1, int param_2, int param_3)
{
    int hr;
    if (unk4C != 0) {
        func_00201100(unk4C);
    }
    unk48 = param_1;
    unk50 = param_2;
    unk54 = param_3;
    unk4C = 0;
    unk4C = func_001FCE50(param_1, 0);
    hr = unk4C != 0 ? 0 : 0x8007000e;
    return hr >= 0;
}

undefined4 C_0014A360::func_0014A360(int param_1)
{
  int __stdcall func_00149ED0(int, int);
  int __stdcall func_001FFF40(int, int, int, int, int);
  int in_ECX = (int)this;
  
  func_00149ED0((int)(param_1), (int)(0));
  if (*(int *)(in_ECX + 0x4c) != 0) {
    func_001FFF40((int)(*(undefined4 *)(in_ECX + 0x24 + param_1 * 4)), (int)(0), (int)(0), (int)(*(int *)(in_ECX + 0x4c)), (int)(0));
    return 1;
  }
  return 0;
}

C_0014A3A0 *C_0014A3A0::func_0014A3A0()
{
    unsigned int *p;
    int i;
    func_0001DFE0();
    vtbl = &D_0028684C;
    p = (unsigned int *)unk5C;
    i = 4;
    do {
        p[2] = 0;
        p[1] = 0;
        p[0] = 0;
        p[3] = 0x3f800000;
        p += 4;
        i--;
    } while (i != 0);
    i = 0;
    unkEC = 0;
    unkE8 = 0;
    unk48 = 0;
    unk4C = 0;
    unk54 = 0;
    unk50 = 0;
    unkDC = 0;
    if (0 < unk58) {
        int *q = unk8;
        do {
            if (*q != 0) {
                *q = 0;
                q[8] = 0;
            }
            i++;
            q++;
        } while (i < unk58);
    }
    return this;
}

undefined4 C_0014A500::func_0014A500(byte param_1)
{
  int func_0014A420(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0014A420();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0014A520* C_0014A520::func_0014A520(int a0) {
    unk0 = 0;
    unk4 = a0;
    unk8 = 0;
    return this;
}

void C_0014A540::func_0014A540(void)
{
  int func_001E8390(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 8) != 0) {
    func_001E8390(*(int *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}

int C_0014A560::func_0014A560(int param_1, int param_2)
{
    int id;
    int words;
    id = D_002BEAAC->func_0013C9F0(param_1, &D_00275FB4);
    if (id == -1) {
        return 0;
    }
    D_002BEAAC->func_0013AF40(id, 0, &param_1);
    words = (param_1 + 3) / 4;
    unk8 = func_001E8AA5(words * 4);
    if (unk8 == 0) {
        D_002BEAAC->func_0013C110(id);
        return 0;
    }
    ((int *)unk8)[words - 1] = 0;
    D_002BEAAC->func_0013C8A0(id, unk8, param_1, 1);
    D_002BEAAC->func_0013C110(id);
    return 1;
}

