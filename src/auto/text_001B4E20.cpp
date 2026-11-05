/* 20 functions from 0x001B4E20 to 0x001B5D90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028CB94;
extern int D_0028CA9C;
extern int D_0028CA88;
extern int D_002764F0;
extern int D_0027D880;
extern int D_0027CEF0;
extern int D_002AA9F4;
extern int D_002AA9F8;
extern int D_002AA9FC;
extern int D_002AAA00;
void func_001E891B(void *);
int func_001E9040(void *, void *);
void func_001E8920(void *, void *, int);
void __stdcall func_00168C20(void *, int, void *);

struct VObj_001B4F90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001B57600 {
    void func_00157600(void *a);
};

struct C_001B5830 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_001B5830 *func_001B5830(void *a);
};

struct C_001B4E20 {
    void *vtbl;
    void func_001B4B80(void *a);
    void func_00168BE0(void *a, void *b, void *c, int d);
    int func_001B4E20(void *param);
};

struct C_001B4ED0 {
    void *vtbl;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int f44;
    int f48;
    int f4C;
    int f50;
    int f54;
    void func_001B4ED0();
    void func_001B4F90();
};
struct C_001B5720 {
    undefined4 func_001B5720(void);
};

struct C_001B56F0 {
    undefined4 func_001B56F0(void);
};

struct C_001B59E0 {
    int unk0;
    int unk4;
    char unk8;
    C_001B59E0* func_001B59E0(void);
};


undefined4 C_001B56F0::func_001B56F0(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(int *)(in_ECX + 0x1ac) + -4 +
          *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + *(int *)(in_ECX + 0x84) * 4) +
                  *(int *)(in_ECX + 0x8c) * 4) * 4);
}

undefined4 C_001B5720::func_001B5720(void)
{
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(int *)(in_ECX + 0x1ac) + -4 +
          *(int *)(*(int *)(*(int *)(in_ECX + 0x68) + *(int *)(in_ECX + 0x88) * 4) +
                  *(int *)(in_ECX + 0x90) * 4) * 4);
}

C_001B5830 *C_001B5830::func_001B5830(void *a) {
    ((C_001B57600 *)this)->func_00157600(a);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028CB94;
    return this;
}

C_001B59E0* C_001B59E0::func_001B59E0(void) {
    extern int D_0028CC28;
    unk0 = (int)&D_0028CC28;
    unk4 = 0;
    unk8 = 0;
    return this;
}
