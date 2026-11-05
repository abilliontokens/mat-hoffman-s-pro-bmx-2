/* 10 functions from 0x001D6600 to 0x001D73E0, found by Ghidra. */
#include "common.h"

extern int D_0028F644;
extern int D_002A83E0;

void __cdecl func_001B2910(int a0);
unsigned int __stdcall func_00201100(void *p);
int __stdcall func_00200390(void *a0, void *a1);
unsigned char __stdcall func_001FCFE0(int a0);

struct XboxTextureMap {
    void *vtbl;
    char pad4[4];
    int f8;
    char padC[0xa4 - 0xc];
    int fA4;
    char padA8[0xb8 - 0xa8];
    void *fB8;
    void *fBC;
    void func_001B1200(void *param);
    void func_001B11D0(void);
    XboxTextureMap *func_001D6AD0(void *param);
    void func_001D6B00(void);
    void func_001D6C50(void *param);
    int func_001D6CB0(int param);
};

XboxTextureMap *XboxTextureMap::func_001D6AD0(void *param)
{
    func_001B1200(param);
    fB8 = 0;
    fBC = 0;
    vtbl = (void *)&D_0028F644;
    return this;
}

int __stdcall func_001D6C40(int a0, int a1) {
    return 1;
}
