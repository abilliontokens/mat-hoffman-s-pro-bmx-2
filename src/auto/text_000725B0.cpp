/* 5 functions from 0x000725B0 to 0x000733F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct C_00072E50 {
    void func_00072E50(void);
};

/* GameObject: the base every menu constructs first */
struct C_00157600 {
    void *func_00157600(int flags);
};

extern int D_0027850C;
extern int D_00278CD4;

/* BmxMenu-derived menu (RunResultsMenu) */
struct C_00072C90 {
    void *vtbl;
    char pad4[0x20];
    int a24[8];
    int a44[8];
    int f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    int f7C;
    int f80;
    int f84;
    int f88;
    char pad8C[4];
    int a90[5];
    int aA4[5];
    float fB8;
    float fBC;
    float fC0;
    float fC4;
    float fC8;
    C_00072C90 *func_00072C90(int flags);
};


C_00072C90 *C_00072C90::func_00072C90(int flags)
{
    int i;

    ((C_00157600 *)this)->func_00157600(0);
    vtbl = (void *)&D_0027850C;
    for (i = 0; i < 8; i++) {
        a24[i] = 0;
        a44[i] = 0;
    }
    vtbl = (void *)&D_00278CD4;
    f68 = 0;
    f64 = 0;
    f78 = 0;
    f7C = 0;
    for (i = 0; i < 5; i++) {
        a90[i] = 0;
        aA4[i] = 0;
    }
    f6C = 0;
    f84 = 0;
    f70 = 0;
    f74 = 0;
    f80 = 0;
    fB8 = 0.0f;
    fBC = 0.0f;
    fC0 = 0.0f;
    fC4 = 0.0f;
    fC8 = 0.0f;
    f88 = 0;
    return this;
}

void C_00072E50::func_00072E50(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x1b] = 0;
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x23] = 1;
  return;
}
