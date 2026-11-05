/* 5 functions from 0x000725B0 to 0x000733F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
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
    int fB8;
    int fBC;
    int fC0;
    int fC4;
    int fC8;
    C_00072C90 *func_00072C90(int flags);
};


void C_00072E50::func_00072E50(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x1b] = 0;
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x23] = 1;
  return;
}
