/* 10 functions from 0x001E9088 to 0x001E91F9, found by Ghidra. */
#include "common.h"

extern int *D_002FB374;
extern int *D_002FB370;
extern char D_002AE5B0[];
void __fastcall func_001E9088(int a) {
    int __fastcall func_001ECDE7(int, void *);
    func_001ECDE7(a, &D_002AE5B0);
}

void __fastcall func_001E9092(int a) {
    int __fastcall func_001ECD6C(int, void *);
    func_001ECD6C(a, &D_002AE5B0);
}

#pragma optimize("t", off)
int func_001E90AA(int value) {
    int func_001ECFEC(...);
    int func_001E83E8(...);
    unsigned n = func_001ECFEC(D_002FB374);
    if (n < (unsigned)((char *)D_002FB370 - (char *)D_002FB374) + 4) {
        unsigned size = n < 0x800 ? n : 0x800;
        int *p = (int *)func_001E83E8(D_002FB374, size + n);
        if (p == 0) {
            p = (int *)func_001E83E8(D_002FB374, n + 0x10);
            if (p == 0)
                return 0;
        }
        D_002FB370 = p + (D_002FB370 - D_002FB374);
        D_002FB374 = p;
    }
    *D_002FB370 = value;
    D_002FB370++;
    return value;
}
int func_001E912A(void) {
    int func_001E8AA5(...);
    D_002FB374 = (int *)func_001E8AA5(0x80);
    if (D_002FB374 == 0)
        return 0x18;
    *D_002FB374 = 0;
    D_002FB370 = D_002FB374;
    return 0;
}

void func_001E9184(void) {
    int func_001EAECC(...);
    func_001EAECC();
}

int func_001E918A(int func) {
    int func_001E9152(int);
    return (func_001E9152(func) != 0) - 1;
}

#pragma optimize("", on)
void func_001E91F4(void) {
    int func_001E919C(...);
    func_001E919C();
}
