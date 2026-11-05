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
    virtual void v5();
    virtual void v6();
    virtual void v7(int a);
    virtual void v8();
};

extern C_001BF000_Global *D_002EFDB8;

struct VCall8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};

struct C_001BF6C0 {
    void **vtbl;
    char pad4[0x28];
    u32 unk2C;
    void func_001BF6C0(int enable);
};

struct C_001BF660 {
    void **vtbl;
    char pad4[0x28];
    u32 unk2C;
    char pad30[0x8];
    u32 unk38;
    u32 unk3C;
    void func_001BF660();
};

struct S_001BF600_Stream {
    void func_00168C20(void *key, int def, void *dst);
};

extern char D_0028D8D4[];
extern char D_0028D8C4[];
extern char D_0028D8B0[];
extern char D_0028D89C[];

struct C_001BF600 {
    char pad0[0x30];
    int f30;
    int f34;
    int f38;
    int f3C;
    C_001BF600 *func_001BF600(S_001BF600_Stream *stream);
};

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

void *C_001BF3A0::func_001BF3A0(int a0)
{
    func_00157600(a0);
    vtbl = (void *)&D_0028D78C;
    unk2C = 0;
    return this;
}

void C_001BF3C0::func_001BF3C0(void)
{
    vtbl = (void *)&D_0028D78C;
    int off = 0;
    do {
        S_001BF3C0_List *list = *(S_001BF3C0_List **)((char *)unk2C + off);
        S_001BF3C0_Node *node = list->head;
        while (node != 0) {
            S_001BF3C0_Node *next = node->unk8;
            func_001E891B(node);
            node = next;
        }
        func_001E891B(list);
        off += 4;
    } while (off < 0x20);
    func_001E891B(unk2C);
    unk2C = 0;
    func_00157660();
}

void *C_001BF430::func_001BF430(int a0, int a1)
{
    unk28 = a0;
    unk24 = a1;
    unk2C = (S_001BF3C0_List **)func_001E8A44(0x20);
    int off = 0;
    do {
        *(S_001BF3C0_List **)((char *)unk2C + off) = (S_001BF3C0_List *)func_001E8A44(8);
        (*(S_001BF3C0_List **)((char *)unk2C + off))->tail = 0;
        S_001BF3C0_List *list = *(S_001BF3C0_List **)((char *)unk2C + off);
        off += 4;
        list->head = 0;
    } while (off < 0x20);
    return this;
}

void C_001BF490::func_001BF490(C_001BF490_Item *a0)
{
    int *flag = a0->unk44;
    int off = 0;
    do {
        if (*flag != 0) {
            S_001BF3C0_List *list = *(S_001BF3C0_List **)((char *)unk2C + off);
            if (list->head == 0) {
                S_001BF3C0_Node *node = (S_001BF3C0_Node *)func_001E8A44(0xc);
                list->head = node;
                node->unk0 = a0;
                node->unk8 = 0;
                node->unk4 = 0;
                list->tail = node;
            } else {
                list->tail->unk8 = (S_001BF3C0_Node *)func_001E8A44(0xc);
                S_001BF3C0_Node *node = list->tail->unk8;
                list->tail = node;
                node->unk0 = a0;
                list->tail->unk4 = 0;
                list->tail->unk8 = 0;
            }
        }
        off += 4;
        flag++;
    } while (off < 0x20);
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
