/* 10 functions from 0x001E9088 to 0x001E91F9, found by Ghidra. */
#include "common.h"

extern int *D_002FB374;
extern int *D_002FB370;
extern char D_002AE5B0[];
void __fastcall func_001E9088(int a) {
    int __fastcall func_001ECDE7(int, void *);
    func_001ECDE7(a, &D_002AE5B0);
}

int func_001E90AA(int value) {
    int func_001ECFEC(...);
    int func_001E83E8(...);
    int n = func_001ECFEC(D_002FB374);
    if (n < (int)((char *)D_002FB370 - (char *)D_002FB374) + 4) {
        int size = n < 0x800 ? n : 0x800;
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

#pragma optimize("t", off)
int func_001E912A(void) {
    int func_001E8AA5(...);
    D_002FB374 = (int *)func_001E8AA5(0x80);
    if (D_002FB374 == 0)
        return 0x18;
    *D_002FB374 = 0;
    D_002FB370 = D_002FB374;
    return 0;
}
#pragma optimize("", on)
void func_001E91F4(void) {
    int func_001E919C(...);
    func_001E919C();
}
