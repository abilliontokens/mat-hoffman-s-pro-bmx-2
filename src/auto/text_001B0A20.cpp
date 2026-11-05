/* 35 functions from 0x001B0A20 to 0x001B19C0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001B0E40 {
    undefined4 func_001B0E40(byte param_1);
};

struct C_001B1840 {
    char pad0[0x64];
    int unk64;
    char pad68[0xC];
    int unk74;
    char pad78[0x48];
    int unkC0;
    void func_001B1840(int a0, int a1, int a2);
};

struct C_001B19A0 {
    void func_001B19A0(undefined4 param_1);
};

struct C_001B1980 {
    char pad0[0x64];
    int unk64;
    char pad68[0x10];
    int unk78;
    int unk7C;
    char pad80[0x40];
    int unkC0;
    void func_001B1980(void);
};

struct C_001B10D0 {
    void func_001B10D0(undefined4 param_1, int param_2);
};

struct C_001B10B0 {
    void func_001B10B0(undefined4 param_1, int param_2);
};

struct C_001B17F0 {
    undefined4 func_001B17F0(void);
};

struct C_001B15E0 {
    char pad0[0x9C];
    float unk9C;
    float func_001B15E0(void);
};

struct C_001B0E90 {
    int unk0;
    void func_001B0E90(void);
};

extern int D_0028C5BC;
extern int D_0028C6E8;
extern int D_0028C70C;

void func_001B0F70(void);
void func_001E891B(void *p);
void *func_001E8A44(int size);

struct C_001B1110 {
    void *func_001B1110(unsigned int flags);
};

struct Obj_001B0FC0 {
    virtual void v0(int a);
    void func_0001E860();
};

struct C_001B0FC0 {
    char pad0[0x4];
    int count;
    char pad8[0x4];
    Obj_001B0FC0 *unkC;
    Obj_001B0FC0 *arr[1];
    void func_001B0FC0(void);
};

struct C_001B1010_Obj {
    char pad0[0x8];
    void *unk8;
    char padC[0x10];
    C_001B1010_Obj *unk1C;
    int unk20;
    C_001B1010_Obj *func_00149280(int a0);
};

struct C_001B1010_Arg {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(void *a);
    char pad4[0x10];
    int unk14;
};

struct C_001B1010 {
    char pad0[0x4];
    int count;
    char pad8[0x8];
    C_001B1010_Obj *arr[1];
    int func_001B1010(C_001B1010_Arg *arg0);
};

struct C_001B1130 {
    void *vtbl;
    char pad4[0x20];
    float unk24;
    float unk28;
    float unk2C;
    float unk30;
    float unk34;
    float unk38;
    float unk3C;
    float unk40;
    float unk44;
    float unk48;
    float unk4C;
    float unk50;
    float unk54;
    float unk58;
    float unk5C;
    float unk60;
    float unk64;
    float unk68;
    float unk6C;
    float unk70;
    void *func_001B1130(int a0);
    void func_00157600(int a0);
};

struct C_001D6290 {
    void func_001D6290(int param_1);
};

struct C_001B1800 {
    char pad0[0x24];
    int f24;
    void func_001B1800(int param_1);
};

struct C_001B0E60 {
    void *vtbl;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    C_001B0E60(int param_1);
    void func_001B0E60(int param_1);
};

struct Elem_001B0DC0 {
    void func_001B0970(void);
};

struct Arr_001B0DC0 {
    int count;
    int unk4;
    Elem_001B0DC0 *elems[1];
};

struct C_001B0DC0 {
    void *vtbl;
    char pad4[8];
    Elem_001B0DC0 *unkC;
    Arr_001B0DC0 *unk10;
    void func_001B0DC0(void);
    void func_0001DFF0(void);
};

struct C_001AFCC0 {
    C_001AFCC0 *func_001AFCC0(void *a0, int a1, int a2, int a3);
};

struct C_001B0D00 {
    char pad0[0xA];
    u8 unkA;
    char padB[1];
    C_001AFCC0 *unkC;
    int func_001B0280(int a0, int a1);
    int func_001B03A0(int a0);
    int func_001B0460(int a0);
    void func_001B0D00(int param_1);
};


void C_001B0D00::func_001B0D00(int param_1)
{
    void *func_001E8A44(int);
    int arr[4];
    int flag = 0;
    int i = 0;
    if (unkA > 0) {
        do {
            arr[i] = func_001B0280(param_1, i);
            if (arr[i] != 0) {
                flag = 1;
            }
            i++;
        } while (i < unkA);
    }
    for (; i < 4; i++) {
        arr[i] = 0;
    }
    int a = func_001B03A0(param_1);
    int b = func_001B0460(param_1);
    if (flag != 0 || a != 0 || b != 0) {
        void *obj = func_001E8A44(0x2c);
        if (obj != 0) {
            unkC = ((C_001AFCC0 *)obj)->func_001AFCC0(arr, a, b, param_1);
            return;
        }
    }
    unkC = 0;
}

void C_001B0DC0::func_001B0DC0(void)
{
    void func_001E891B(void *);
    void func_001E8390(void *);
    Elem_001B0DC0 *e;
    vtbl = &D_0028C5BC;
    if (unk10 != 0) {
        for (int i = 0; i < unk10->count; i++) {
            e = ((Elem_001B0DC0 **)unk10)[i * 2 + 2];
            if (e != 0) {
                e->func_001B0970();
                func_001E891B(e);
            }
        }
        func_001E8390(unk10);
    }
    e = unkC;
    if (e != 0) {
        e->func_001B0970();
        func_001E891B(e);
    }
    func_0001DFF0();
}

undefined4 C_001B0E40::func_001B0E40(byte param_1)
{
  int func_001B0DC0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001B0DC0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001B0E60::C_001B0E60(int param_1)
{
    unk4 = 0;
    unkC = 0;
    unk8 = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    unk1C = 0;
    vtbl = &D_0028C6E8;
    unk20 = 0x7fffffff;
    unk24 = param_1;
}

void C_001B0E90::func_001B0E90(void) {
    extern int D_0028C6E8;
    unk0 = (int)&D_0028C6E8;
}

void C_001B10B0::func_001B10B0(undefined4 param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x10 + param_2 * 4) + 4) = param_1;
  return;
}

void C_001B10D0::func_001B10D0(undefined4 param_1, int param_2)
{
  int in_ECX = (int)this;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x10 + param_2 * 4) + 0xc) = param_1;
  return;
}

int __stdcall func_001B1190(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {
    return 0;
}

float C_001B15E0::func_001B15E0(void) {
    return unk9C;
}

undefined4 C_001B17F0::func_001B17F0(void)
{
  int in_ECX = (int)this;
  
  return **(undefined4 **)(in_ECX + 0x24);
}

void C_001B1800::func_001B1800(int param_1) {
    ((C_001D6290 *)f24)->func_001D6290(param_1);
}

void C_001B1840::func_001B1840(int a0, int a1, int a2) {
    unkC0 = a2;
    unk64 = a0;
    unk74 = a1;
}

void C_001B1980::func_001B1980(void) {
    unk64 = 0;
    unk7C = 0;
    unk78 = -1082130432;
    unkC0 = 0;
}

void C_001B19A0::func_001B19A0(undefined4 param_1)
{
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0xc0) == 0) {
    *(undefined4 *)(in_ECX + 0x68) = param_1;
  }
  return;
}

