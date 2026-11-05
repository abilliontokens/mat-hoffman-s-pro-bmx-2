/* 8 functions from 0x001C6DA0 to 0x001C76B0, found by Ghidra. */
#include "common.h"

int func_001EA426(const char *a, const char *b);
void *func_001E83E8(void *block, unsigned int size);
void *func_001E8A44(int size);

struct S_001C6DA0_V4 {
    int x;
    int y;
    int z;
    int w;
};
extern S_001C6DA0_V4 D_002AB798;

struct C_001C6DA0_Mgr {
    char pad0[0x10];
    int unk10;
    void func_00166C80(int a, int b);
    void func_00164820(int a);
};

struct C_001C6DA0_Entry {
    char name[0x40];
    int unk40;
    char pad44[0x14];
};

struct C_001C6DA0 {
    char pad0[0x3c];
    C_001C6DA0_Mgr *unk3C;
    char pad40[0x7c];
    int unkBC;
    C_001C6DA0_Entry *unkC0;
    int unkC4;
    int unkC8;
    int unkCC;
    char padD0[4];
    S_001C6DA0_V4 unkD4;
    int func_001C6E30(const char *name);
    void func_001C6DA0(int idx, int arg);
};

struct C_001C65E0 {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fC;
    u32 f10;
    void func_001C65E0(int key);
};

struct S_001C7250_Entry {
    C_001C65E0 *obj;
    int key;
};
extern S_001C7250_Entry *D_002F0890;
extern int D_002F0894;

static C_001C65E0 *init_001C7250(C_001C65E0 *p)
{
    u32 *q = (u32 *)p;
    q[2] = 0;
    q[1] = 0;
    q[0] = 0;
    q[3] = 0x3f800000;
    q[4] = 0;
    return p;
}

int C_001C6DA0::func_001C6E30(const char *name)
{
    for (int i = 0; i < unkBC; i++) {
        if (func_001EA426(name, unkC0[i].name) == 0) {
            return i;
        }
    }
    return 0;
}

void func_001C6E90(void) {
    int func_00157960(...);
    func_00157960();
}
