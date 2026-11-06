/* 1 function from 0x0009A290 to 0x0009C770, found by Ghidra. */
#include "common.h"

struct C_0009A290_Obj {
    int func_0013B1A0(char *a);
};

struct C_0009A290 {
    union {
        int w[0x400 / 4];
        struct {
            int f0, f4, f8, fC, f10, f14;
            char pad18[0x194 - 0x18];
            int f194;
            void *f198;
        };
    };
    int func_0009A290(int a1, char *a2, int *a3);
};

extern char D_002A5870[];
extern char D_0027A9D0[];
extern C_0009A290_Obj *D_002BEAAC;
extern "C" char *__cdecl strcpy(char *, const char *);
extern "C" char *__cdecl strcat(char *, const char *);
#pragma intrinsic(strcpy)
#pragma intrinsic(strcat)
int C_0009A290::func_0009A290(int a1, char *a2, int *a3)
{
    int func_001E8A44(...);
    char buf[0x178];
    char *p;
    void *iniObj;

    w[0x198 / 4] = a1;
    w[0] = 0;
    w[1] = 0;
    w[2] = 0;
    w[3] = 0;
    w[4] = 0;
    w[5] = 0;
    p = buf;
    {
        char *src = D_002A5870;
        char c;
        do {
            c = *src;
            *p++ = c;
            src++;
        } while (c != 0);
        p--;
    }
    {
        char *src = a2;
        char c;
        do {
            c = *src;
            *p++ = c;
            src++;
        } while (c != 0);
        p--;
    }
    {
        char *src = D_0027A9D0;
        char c;
        do {
            c = *src;
            *p++ = c;
            src++;
        } while (c != 0);
    }
    if (D_002BEAAC->func_0013B1A0(buf) == 0) {
        a3[0x194 / 4] = 1;
        return 0;
    }
    iniObj = (void *)func_001E8A44(0x4cc);
    return 1;
}
