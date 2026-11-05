/* 23 functions from 0x00132DE0 to 0x00133D90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
void func_001E891B(void *p);
int func_001EA426(const char *a, const char *b);

struct C_0013B210 {
    void func_0013C8A0(int a, void *b, int c, int d);
};
extern C_0013B210 *D_002BEAAC;

/* name table: count followed by 0x20-byte name slots */
struct C_00132E20 {
    int count;
    char names[1][0x20];
    int func_00132E20(char *name);
};

struct C_00132DE0 {
    void func_001329F0(void);
    void func_00157660(void);
    void *func_00132DE0(int flags);
};

struct C_00132DE0_Outer {
    char pad0[0x294];
    C_00132DE0 sub294;
};

struct C_00133020 {
    char pad0[0xa7];
    unsigned char fA7;
    void func_001D3F50(void);
    void func_00133020(unsigned int v);
};

struct C_00133700 {
    void func_00133700(void);
};

struct C_00133730 {
    char pad0[0x60];
    int unk60;
    char pad64[0x4];
    int unk68;
    void func_00133730(int a0, int a1);
};

struct C_00133570 {
    char pad0[0x80];
    int unk80;
    void func_00133570(int a0);
};

struct C_001334E0 {
    char pad0[0x74];
    int unk74;
    void func_001334E0(int a0);
};


void *C_00132DE0::func_00132DE0(int flags)
{
    C_00132DE0_Outer *outer = (C_00132DE0_Outer *)((char *)this - 0x294);
    outer->sub294.func_001329F0();
    outer->sub294.func_00157660();
    if (flags & 1) {
        func_001E891B(outer);
    }
    return outer;
}

int func_00132E90(int a0, int a1)
{
    D_002BEAAC->func_0013C8A0(a0, (void *)a1, 4, 1);
    return 1;
}

void C_001334E0::func_001334E0(int a0) {
    unk74 = a0;
}

void C_00133570::func_00133570(int a0) {
    unk80 = a0;
}

void C_00133700::func_00133700(void)
{
  int func_001E8390(...);
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x90) != 0) {
    func_001E8390(*(int *)(in_ECX + 0x90));
    *(undefined4 *)(in_ECX + 0x90) = 0;
  }
  *(undefined4 *)(in_ECX + 0x94) = 0;
  return;
}

void C_00133730::func_00133730(int a0, int a1) {
    unk60 = a0;
    unk68 = a1;
}

void func_00133D80(int a0) {
    extern int D_002B92EC;
    D_002B92EC = a0;
}

