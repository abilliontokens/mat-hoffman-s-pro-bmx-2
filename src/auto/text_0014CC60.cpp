/* 3 functions from 0x0014CC60 to 0x0014D720, found by Ghidra. */
#include "common.h"

void *__cdecl func_001E83E8(void *p, int size);
int __cdecl func_0013F650(void);

/* two lists that grow 20 entries at a time: f48 holds one entry per item,
   f21D8 twenty per item */
struct C_0014CC60 {
    char pad0[0x48];
    int *f48;
    char pad4C[0x524];
    int f570;
    char pad574[0x10];
    int f584;
    char pad588[0x1C4C];
    int f21D4;
    int *f21D8;
    void func_0014D670(int v);
};
