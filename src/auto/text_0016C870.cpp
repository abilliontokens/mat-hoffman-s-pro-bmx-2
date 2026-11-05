/* 5 functions from 0x0016C870 to 0x0016D6A0, found by Ghidra. */
#include "common.h"

extern int D_0028877C;
extern int D_002886E4;

struct C_00169C50 {
    void func_00169C50(void *param);
};

struct C_Quad {
    float a;
    float b;
    float c;
    float d;
};

struct C_0016CE80 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x24];
    int f1BC;
    char pad1C0[0x30];
    int f1F0, f1F4, f1F8, f1FC, f200, f204, f208, f20C;
    char pad210[4];
    int f214;
    C_0016CE80 *func_0016CE80(void *param);
};

struct C_0016D620 {
    void *vtbl;
    char pad4[0x20];
    C_Quad f24;
    C_Quad f34;
    char pad44[0x150];
    int f194;
    char pad198[0x78];
    int f210, f214, f218, f21C, f220, f224, f228, f22C;
    C_0016D620 *func_0016D620(void *param);
};

C_0016CE80 *C_0016CE80::func_0016CE80(void *param)
{
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_002886E4;
    f1F8 = 0;
    f1F4 = 0;
    f1F0 = 0;
    f1FC = 0x3f800000;
    f20C = 0x3f800000;
    f208 = 0;
    f204 = 0;
    f200 = 0;
    f34 = f24;
    f194 = 0;
    f1BC = 0;
    f214 = 1;
    return this;
}

C_0016D620 *C_0016D620::func_0016D620(void *param)
{
    u32 *p;
    ((C_00169C50 *)this)->func_00169C50(param);
    vtbl = (void *)&D_0028877C;
    p = (u32 *)&f210;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&f220;
    p[3] = 0x3f800000;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    f34 = f24;
    f194 = 0;
    return this;
}
