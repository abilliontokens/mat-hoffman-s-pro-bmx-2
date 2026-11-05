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
    void *at(int i);
    void *at2(int i);
    int *func_000389C0(int param_1);
    int *func_00038A10(int param_1, int *param_2);
    int func_00038A70(void *param_1, void **param_2);
};

int *C_00038760::func_000389C0(int param_1)
{
    int i;
    int n = count;
    for (i = 0; i < n; i++) {
        int *e = (int *)at(i);
        if ((e[0] == 0 || e[0] >= 3) && e[2] == param_1)
            return e;
    }
    return 0;
}

int *C_00038760::func_00038A10(int param_1, int *param_2)
{
    int i;
    int n = count;
    for (i = 0; i < n; i++) {
        int *e = (int *)at(i);
        if (e[0] == 1 && e[4] == param_1) {
            if (param_2)
                *param_2 = i;
            return e;
        }
    }
    return 0;
}

int C_00038760::func_00038A70(void *param_1, void **param_2)
{
    int i;
    for (i = 0; i < f64->count2; i++) {
        if (func_001EA426(param_1, f64->at2(i)) == 0) {
            *param_2 = f64->at2(i);
            return i;
        }
    }
    return -1;
}

