/* 5 functions from 0x00162B70 to 0x00163A50, found by Ghidra. */
#include "common.h"

extern int D_0015B970;
extern int D_0015BA70;
void *func_001E8A44(int size);
void __stdcall func_00011FF0(void *p, int step, int count, int *ctor);

struct Item162B70 {
    int unk0, unk4, unk8, count, unk10;
    void *data;
};

struct Pack162B70 {
    char pad0[0x14];
    Item162B70 **listA;
    Item162B70 **listB;
    int countA, countB;
    int pad24, kindB, kindA;
    int pad30, id0, id1;
};

struct Mgr162B70 {
    char pad0[0x14];
    int ready;
    void *func_0013C9F0(int a, void *b);
    void *func_0013B930(void *a, void *b, int c, int d);
    void func_0013C110(void *a);
    void func_00162B70(Pack162B70 *p, int arg);
};
extern Mgr162B70 *D_002BEAAC;
extern char D_00282960[];
void func_001E891B(void *p);
extern "C" void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)

struct IVt163780 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int k, int *a, int *b);
    virtual void v5();
    virtual void v6(int n);
    virtual void v7(int n);
};
struct It163780 {
    IVt163780 *vt;
    int unk4, unk8, count, unk10;
    void *data;
};
struct Mgr163780 {
    int func_0013C9F0(int a, void *b);
    void func_0013C960(int h, void *p, int n);
    void func_0013C8A0(int h, void *p, int n, int z);
    void func_0013C110(int h);
};
extern Mgr163780 *D_002BEAAC_b;
extern char D_00275FB4[];
struct P163780 {
    void func_00162DF0(int n);
    void func_001628C0(int n);
    char pad0[0x14];
    It163780 **listA;
    It163780 **listB;
    int countA, countB;
    int pad24, kindB, kindA;
    int pad30, id0, id1;
};

extern char D_00276274[], D_002789B8[], D_0027626C[], D_00287D04[], D_00287D00[];
struct Mgr162FB0 {
    int func_0013C9F0(void *a, char *b);
    int func_0013C6E0(int h, char *buf, int n);
    void func_0013AFF0(int h, int a, int b);
    void func_0013C110(int h);
};
extern Mgr162FB0 *D_002BEAAC_162;
struct Entry162FB0 {
    char pad0[0x34];
    void *f34;
    void *f38;
    void *f3C;
};
struct Src162FB0 {
    char pad0[4];
    int f4;
    char pad8[0x1E0];
    int count1E8;
    Entry162FB0 *entries1EC;
    int func_00164650(char *s);
};
struct Obj162FB0 {
    IVt163780 *vt;
    int unk4;
    int f8;
};
struct Pack162FB0 {
    char pad0[0x14];
    Obj162FB0 **listA;
    Obj162FB0 **listB;
    int countA, countB;
    unsigned char kind24;
    char pad25[7];
    int f2C;
    int f30;
    int f34;
    float f38;
    void func_00162DF0(int n);
    void func_001628C0(int n);
};
int func_001EA1EE(char *s);
char *func_001E95A4(char *a, char *b);
int func_001EA426(char *a, char *b);

struct S_00162DF0_A {
    char pad0[0x18];
};

struct S_00162DF0_B {
    char pad0[0x18];
};

struct C_00162DF0 {
    char pad0[0xC];
    S_00162DF0_A *unkC;
    S_00162DF0_B *unk10;
    char pad14[4];
    void **unk18;
    char pad1C[0xC];
    int unk28;
    void func_00162DF0(int count);
};

void C_00162DF0::func_00162DF0(int count) {
    int i;
    int *mem;
    S_00162DF0_A *a;
    S_00162DF0_B *b;

    if (count == 0) {
        unk18 = 0;
        return;
    }
    unk18 = (void **)func_001E8A44(count * 4);
    if (unk28 == 0) {
        mem = (int *)func_001E8A44(count * 0x18 + 4);
        if (mem != 0) {
            a = (S_00162DF0_A *)(mem + 1);
            *mem = count;
            func_00011FF0(a, 0x18, count, &D_0015B970);
        } else {
            a = 0;
        }
        unkC = a;
        for (i = 0; i < count; i++) {
            unk18[i] = &unkC[i];
        }
    } else if (unk28 == 1) {
        mem = (int *)func_001E8A44(count * 0x18 + 4);
        if (mem != 0) {
            b = (S_00162DF0_B *)(mem + 1);
            *mem = count;
            func_00011FF0(b, 0x18, count, &D_0015BA70);
        } else {
            b = 0;
        }
        unk10 = b;
        for (i = 0; i < count; i++) {
            unk18[i] = &unk10[i];
        }
    }
}
