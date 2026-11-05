/* 31 functions from 0x001BEF90 to 0x001BFF40, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001BF070 {
    undefined4 func_001BF070(byte param_1);
};

struct C_001BF030 {
    undefined4 func_001BF030(void);
};

struct C_001BF050 {
    undefined4 func_001BF050(int param_1);
};

struct C_001BF6A0 {
    char pad0[0x40];
    int unk40;
    void func_001BF6A0(void);
};

struct C_001BF6B0 {
    void func_001BF6B0(void);
};

struct C_001BF520 {
    undefined4 func_001BF520(byte param_1);
};

struct C_001BEF90_Sub {
    void func_001BDAB0(int);
    void func_001BDA20(void);
};

struct C_001BEF90_Obj {
    char pad0[0x2c];
    C_001BEF90_Sub **unk2C;
    void func_001BDDE0(int);
    void func_001BDBD0(void);
};

struct C_001BEF90 {
    char pad0[0x140];
    C_001BEF90_Obj **unk140;
    void func_001BEF90(int param_1);
};

struct C_001BEFC0 {
    char pad0[0x140];
    C_001BEF90_Obj **unk140;
    void func_001BEFC0(int param_1, int param_2);
};

struct C_001BF000_Global {
    virtual void vv0();
    virtual void vv1();
    virtual void vv2();
    virtual void vv3();
    virtual void v4(int a, void *b, int c, int d);
};

extern C_001BF000_Global *D_002EFDB8;

struct C_001BF000 {
    char pad0[0x168];
    void *unk168;
    void func_00157920();
    void func_001BF000();
};


extern int D_0028D78C;

struct S_001BF3C0_Node {
    void *unk0;
    S_001BF3C0_Node *unk4;
    S_001BF3C0_Node *unk8;
};

struct S_001BF3C0_List {
    S_001BF3C0_Node *head;
    S_001BF3C0_Node *tail;
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_001BF3A0 {
    void *vtbl;
    char pad4[0x28];
    S_001BF3C0_List **unk2C;
    void *func_001BF3A0(int a0);
    void func_00157600(int a0);
};

struct C_001BF3C0 {
    void *vtbl;
    char pad4[0x28];
    S_001BF3C0_List **unk2C;
    void func_001BF3C0(void);
    void func_00157660(void);
};

struct C_001BF430 {
    char pad0[0x24];
    int unk24;
    int unk28;
    S_001BF3C0_List **unk2C;
    void *func_001BF430(int a0, int a1);
};

struct C_001BF490_Item {
    char pad0[0x44];
    int unk44[8];
};

struct C_001BF490 {
    char pad0[0x2C];
    S_001BF3C0_List **unk2C;
    void func_001BF490(C_001BF490_Item *a0);
};

void C_001BEF90::func_001BEF90(int param_1)
{
  unk140[param_1]->func_001BDDE0(0);
  unk140[param_1]->func_001BDBD0();
}

void C_001BEFC0::func_001BEFC0(int param_1, int param_2)
{
  unk140[param_1]->unk2C[param_2 - 1]->func_001BDAB0(0);
  unk140[param_1]->unk2C[param_2 - 1]->func_001BDA20();
}

void C_001BF000::func_001BF000(void)
{
  if (unk168 != 0) {
    D_002EFDB8->v4(0, unk168, 0, 0);
  }
  func_00157920();
}

undefined4 C_001BF030::func_001BF030(void)
{
  int __stdcall func_001577A0(int, int);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x16c) != 0) {
    func_001577A0((int)(*(int *)(in_ECX + 0x16c)), (int)(0xffffffff));
    return 1;
  }
  return 0;
}

undefined4 C_001BF050::func_001BF050(int param_1)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x140) + param_1 * 4) + 0x30);
}

undefined4 C_001BF070::func_001BF070(byte param_1)
{
  int func_001BE3F0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001BE3F0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

undefined4 C_001BF520::func_001BF520(byte param_1)
{
  int func_001BF3C0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;

  func_001BF3C0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_001BF6A0::func_001BF6A0(void) {
    unk40 = 1;
}

void C_001BF6B0::func_001BF6B0(void)
{
  int* in_ECX = (int*)this;
  
                    
                    
  (**(code **)(*in_ECX + 0x1c))();
  return;
}
