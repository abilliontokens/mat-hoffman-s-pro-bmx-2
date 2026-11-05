/* 7 functions from 0x001E2F20 to 0x001E3A20, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_002F47D8;
extern unsigned int D_002F47DC;
extern int *D_002AE4F4;
extern int *D_002AE4F0;
extern int D_002AE4F8;
int __stdcall func_0025BBC0(int size);
void __stdcall func_0025BC30(void *p);
void __stdcall func_001E2F20(int a, unsigned int b);

int func_001E3000(void) {
    return D_002F47D8;
}

void __stdcall func_001E3010(int size) {
    int aligned = (size + 0x1f) & ~0x1f;
    int base = func_0025BBC0(D_002F47D8 + aligned);
    D_002F47D8 = 0;
    if (base != 0) {
        unsigned int count = D_002F47DC;
        if (count > 0) {
            int addr = base + aligned;
            int *sizes = D_002AE4F4;
            int diff = (char *)D_002AE4F0 - (char *)sizes;
            do {
                int *dst = *(int **)((char *)sizes + diff);
                *dst = addr;
                addr += *sizes;
                sizes++;
                count--;
            } while (count != 0);
        }
    }
    D_002F47DC = 0;
}

