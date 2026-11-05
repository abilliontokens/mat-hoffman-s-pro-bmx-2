/* 17 functions from 0x001D73E0 to 0x001D8340, found by Ghidra. */
#include "common.h"

extern int D_0028F6DC;

struct C_001B23D0 {
    void func_001B23D0();
};

struct C_001B2400 {
    void func_001B2400();
};

void func_001E891B(void *p);

int __stdcall func_001D6CB0(int id);
void __stdcall func_001FCEA0(void *map, int index, void *out, int a, int b);
unsigned __stdcall func_001FCFE0(void *map);
void *__stdcall func_001FCE50(void *map, unsigned index);
void __stdcall func_00201210(void *p, void *out, int a, int b);
void __stdcall func_002011F0(void *p, void *out);
void __stdcall func_00201100(void *p);

struct C_001D6D00 {
    void func_001D6D00(void *desc, int *dims, char *name);
};

struct S_001D7C50_desc {
    u32 id;
    char pad4[0x10];
    u32 w;
    u32 h;
};

struct XboxTextureMap {
    char pad0[0xB8];
    void *field_b8;
    int func_001D7BF0(int param_1);
    int func_001D7C50();
};

struct C_001D7CE0 {
    void *vtbl;
    C_001D7CE0 *func_001D7CE0();
    void *func_001D7D10(int flags);
};

int func_001D7D00(void) {
    return 1;
}

void func_001D7D10(void)
{
}

extern int D_002F0BBC;
int func_001D7D40()
{
    return ++D_002F0BBC;
}

