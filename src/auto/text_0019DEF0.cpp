/* 4 functions from 0x0019DEF0 to 0x0019EEC0, found by Ghidra. */
#include "common.h"

struct S_0019EB10_Node {
    char pad0[0x170];
    S_0019EB10_Node *f170;
    int func_00198270(void);
    void func_001982A0(int *count, S_0019EB10_Node **list);
};

struct S_0019EB10_Loader {
    void func_0013C8A0(int h, void *buf, int size, int count);
};

struct S_0019EB10_Obj {
    char pad0[0x1c0];
    S_0019EB10_Node *f1c0;
    char pad1c4[0x10];
    int f1d4;
    S_0019EB10_Obj *func_0019B700(int a);
    void func_0019CCE0(int h);
};

struct S_0019EB10_Sub {
    char pad0[0x24];
    int *f24;
};

struct C_0019EB10 {
    char pad0[0x190];
    int f190;
    int *f194;
    int *f198;
    S_0019EB10_Node *f19c;
    S_0019EB10_Obj **f1a0;
    S_0019EB10_Sub *f1a4;
    void func_0019EB10(int h);
};

extern S_0019EB10_Loader *D_002BEAAC;
void *func_001E8A44(int size);
void *func_001E8AA5(int size);
void func_001E891B(void *p);
