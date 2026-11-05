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

void *func_001E8A44(int size);
void func_001E891B(void *ptr);
int func_00135C70(int a, int b, int c, int d);

struct S_00133140_Cam {
    char pad0[0x28];
    S_00133140_Cam *func_00193490(void);
    void func_00193500(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
    void func_00193950(void *a, void *vecA, void *vecB, int d);
};

struct C_00133070 {
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
    virtual void v18();
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
    virtual void v30(void *a, void *b);
    char pad4[0x20];
    int f24;
    char pad28[0x20];
    int f48;
    char pad4c[0x8];
    void *f54;
    char pad58[0x40];
    S_00133140_Cam *f98;
    char pad9c[0x8];
    s16 fA4;
    u8 fA6;
    u8 fA7;
    void func_00157BF0(int a, int b);
    void func_00133070(void);
    void func_00133090(int a, int b);
    void func_00133140(int a, int b);
    void func_00133210(void);
};

struct S_001332A0_Node {
    void func_00193500(void);
    void func_00193870(void *p);
};

struct C_001332A0 {
    char pad0[0x24];
    int f24;
    char pad28[0x50];
    int *f78;
    int f7c;
    char pad80[0x4];
    int *f84;
    int f88;
    char pad8c[0xc];
    S_001332A0_Node *f98;
    void func_001332A0(void);
    void func_001334F0(int item);
    void func_00133580(int item);
    void func_00133620(int item);
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

int C_00132E20::func_00132E20(char *name)
{
    int i;
    char *p;
    char *src;
    char *dst;
    char c;
    int bit;

    p = names[0];
    for (i = 0; i < count; p += 0x20, i++) {
        if (func_001EA426(name, p) == 0) {
            return 1 << i;
        }
    }
    bit = 1 << count;
    src = name;
    dst = names[count];
    do {
        c = *src++;
        *dst++ = c;
    } while (c != 0);
    count = count + 1;
    return bit;
}

int func_00132E90(int a0, int a1)
{
    D_002BEAAC->func_0013C8A0(a0, (void *)a1, 4, 1);
    return 1;
}

void C_00133020::func_00133020(unsigned int v)
{
    extern unsigned char D_002BA040;
    fA7 = (((((unsigned char)(v >> 3) & 1) << 1 | ((unsigned char)(v >> 2) & 1)) << 1 | ((unsigned char)(v >> 1) & 1)) << 1) | (fA7 & 0xf1);
    D_002BA040 = 0;
    func_001D3F50();
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

