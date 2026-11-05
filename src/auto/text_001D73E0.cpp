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

int XboxTextureMap::func_001D7BF0(int param_1)
{
    int info[2];
    int idx = func_001D6CB0(param_1);
    if (idx != -1) {
        func_001FCEA0(field_b8, idx, info, 0, 0);
        return info[1];
    }
    return 0;
}

int XboxTextureMap::func_001D7C50()
{
    if (field_b8 == 0)
        return 1;
    unsigned count = func_001FCFE0(field_b8);
    for (unsigned i = 0; i < count; i++) {
        void *p = func_001FCE50(field_b8, i);
        if (p == 0)
            return 0;
        int dims[2];
        S_001D7C50_desc desc;
        func_00201210(p, dims, 0, 0x80);
        func_002011F0(p, &desc);
        ((C_001D6D00 *)this)->func_001D6D00(&desc, dims, 0);
        func_00201100(p);
    }
    return 1;
}

C_001D7CE0 *C_001D7CE0::func_001D7CE0()
{
    ((C_001B23D0 *)this)->func_001B23D0();
    vtbl = &D_0028F6DC;
    return this;
}

int func_001D7D00(void) {
    return 1;
}

void *C_001D7CE0::func_001D7D10(int flags)
{
    vtbl = &D_0028F6DC;
    ((C_001B2400 *)this)->func_001B2400();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

extern int D_002F0BBC;
int func_001D7D40()
{
    return ++D_002F0BBC;
}

struct C_001D8310 {
    void **vtbl;
    char pad4[0x9D0];
    u8 field_9d4;
    char pad9d5[3];
    int field_9d8;
    void func_001D8310();
};

