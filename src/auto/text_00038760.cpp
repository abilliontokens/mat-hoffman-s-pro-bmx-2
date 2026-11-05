/* 7 functions from 0x00038760 to 0x000395A0, found by Ghidra. */
#include "common.h"

int func_001EA426(void *a, void *b);

struct C_00038760 {
    char pad0[0x64];
    C_00038760 *f64;         /* 0x64 */
    char pad68[0x538];       /* 0x68 */
    int count;               /* 0x5A0 */
    void **items;            /* 0x5A4 */
    int count2;              /* 0x5A8 */
    void **items2;           /* 0x5AC */
    void *at(int i) {
        if (count < 1) return 0;
        if (items == 0) return 0;
        if (i >= count) return 0;
        return items[i];
    }
    void *at2(int i) {
        if (count2 < 1) return 0;
        if (items2 == 0) return 0;
        if (i >= count2) return 0;
        return items2[i];
    }
    int *func_000389C0(int param_1);
    int *func_00038A10(int param_1, int *param_2);
    int func_00038A70(void *param_1, void **param_2);
};
