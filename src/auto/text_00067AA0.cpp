/* 12 functions from 0x00067AA0 to 0x000689E0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_000683C0 {
    void func_000683C0(void);
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_000683F0_Obj {
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
    virtual void v18(int a);
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
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    char pad4[0x1D];
    u8 unk21;
    char pad22[0x1D2];
    int unk1F4;
    void func_00032A40();
};

struct C_000683F0 {
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
    virtual void v18(int a);
    char pad4[0xD4];
    int unkD8[8];
    char padF8[0x10];
    int unk108;
    C_000683F0_Obj *unk10C;
    char pad110[0x28];
    int unk138;
    char pad13C[0x14];
    int unk150;
    char pad154[4];
    int unk158;
    int unk15C;
    int unk160;
    int unk164;
    int unk168;
    void func_000683F0();
    void func_00068440();
    void func_000684B0();
};

struct C_00067D60 {
    void func_00067D60(int param_1, undefined4 param_2);
};

struct C_00067D80 {
    void func_00067D80(int param_1);
};


void C_00067D60::func_00067D60(int param_1, undefined4 param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x118 + param_1 * 4) = param_2;
  return;
}

void C_00067D80::func_00067D80(int param_1)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(in_ECX + 0xd8 + param_1 * 4) = 1;
  return;
}

void C_000683C0::func_000683C0(void)
{
  int* in_ECX = (int*)this;
  int iVar1;
  int *piVar2;
  byte bVar3;
  
  bVar3 = 0;
  in_ECX[0x5a] = 0;
  (**(code **)(*in_ECX + 0x10))();
  piVar2 = in_ECX + 0x36;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + (uint)bVar3 * -2 + 1;
  }
  in_ECX[0x54] = 0;
  return;
}

void C_000683F0::func_000683F0()
{
    unk168 = 1;
    unk138 = 0;
    unk164 = 0;
    v6();
    unk158 = -1;
    unk15C = 1;
    unk160 = 1;
    unk150 = 0;
}

void C_000683F0::func_00068440()
{
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    unk138 = 0;
    unk168 = 0;
    unk10C->v34();
    unk10C->func_00032A40();
    v4();
    unk10C->unk1F4 = 0;
    memset(unkD8, 0, sizeof(unkD8));
    unk150 = 0;
}

