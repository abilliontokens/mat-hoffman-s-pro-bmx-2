/* 6 functions from 0x0016B900 to 0x0016C870, found by Ghidra. */
#include "common.h"

extern int D_0028856C;
extern int D_0028862C;

struct C_00169C50 {
    void func_00169C50(void *param);
};

struct C_Quad {
    float a;
    float b;
    float c;
    float d;
};

struct C_0016BE40 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x58];
    int f1F0;
    int f1F4, f1F8, f1FC, f200, f204, f208, f20C, f210;
    C_0016BE40 *func_0016BE40(void *param);
};

struct C_0016C5B0 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x58];
    int f1F0, f1F4, f1F8, f1FC, f200, f204, f208, f20C;
    char pad210[4];
    int f214;
    int f218;
    C_0016C5B0 *func_0016C5B0(void *param);
};

C_0016BE40 *C_0016BE40::func_0016BE40(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_0028856C;
    p = (u32 *)&f1F4;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f204;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f34 = f24;
    f194 = 0;
    f1F0 = 0;
    return this;
}

C_0016C5B0 *C_0016C5B0::func_0016C5B0(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_0028862C;
    p = (u32 *)&f1F0;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f200;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f34 = f24;
    f194 = 0;
    f214 = 0;
    f218 = 1;
    return this;
}

