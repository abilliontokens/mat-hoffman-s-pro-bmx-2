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

struct Mgr13C9F0 { void *func_0013C9F0(int a, void *b); };
struct Mgr13B930 { void *func_0013B930(void *a, void *b, int c); };
struct Mgr13C110 { void func_0013C110(void *a); };
extern Mgr13C9F0 *D_002BEAAC_A;
extern char D_00282960[];
void func_001E891B(void *p);

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
