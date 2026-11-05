/* 4 functions from 0x0016AE10 to 0x0016B900, found by Ghidra. */
#include "common.h"

extern int D_002884D4;

struct C_00169C50 {
    void func_00169C50(void *param);
};

struct C_0016B770 {
    void *vtbl;
    char pad4[0x1EC];
    int f1F0;
    int f1F4;
    C_0016B770 *func_0016B770(void *param);
};

struct C_Quad {
    float a;
    float b;
    float c;
    float d;
};

struct C_0016B8B0 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x1AC];
    int f1F0;
    void func_0016B8B0(int a, int b, int c, int d, int e);
};

C_0016B770 *C_0016B770::func_0016B770(void *param)
{
    ((C_00169C50 *)this)->func_00169C50(param);
    f1F0 = 0;
    f1F4 = 0;
    vtbl = (void *)&D_002884D4;
    return this;
}

void C_0016B8B0::func_0016B8B0(int a, int b, int c, int d, int e)
{
    f34 = f24;
    C_Quad *p = &f24;
    p->a = *(float *)&a;
    p->b = *(float *)&b;
    p->c = *(float *)&c;
    p->d = *(float *)&d;
    f1F0 = e;
}

