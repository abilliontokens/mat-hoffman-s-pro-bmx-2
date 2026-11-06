/* 1 function from 0x000FCB00 to 0x000FF3C0, found by Ghidra. */
#include "common.h"

extern char D_00278678[], D_002786A0[], D_00278690[];

struct S_000FCB00_Mgr2 {
    char pad0[0x2e0];
    void *f2e0;
    char pad2e4[4];
    void *f2e8;
    S_000FCB00_Mgr2 *f2ec;
    int func_0018C780(int, void *, int);
    void *func_0018C160(int);
};

struct C_000FCB00 {
    char pad0[0x2a8];
    int f2a8;
    int f2ac;
    int f2b0;
    int f2b4;
    char pad2b8[0x150];
    void *f408;
    char pad40c[0x1c20];
    int f202c, f2030, f2034, f2038;
    char pad203c[8];
    void *f2044;
    int func_001BE4F0(int, int, int);
    C_000FCB00 *func_000FCB00(int a, int b, int c);
};

extern S_000FCB00_Mgr2 *D_002A8490;
