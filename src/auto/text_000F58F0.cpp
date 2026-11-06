/* 1 function from 0x000F58F0 to 0x000F63D0, found by Ghidra. */
#include "common.h"

struct F58_Obj {
    void func_001B1980();
    void func_001B2270(int a);
    void func_001B1A30(int a, int b, int c);
    void func_001B1860(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
};

struct C_000F58F0 {
    char pad0[0x2A4];
    int f2A4;
    char pad2A8[0x2C4 - 0x2A8];
    int f2C4;
    char pad2C8[0x2D8 - 0x2C8];
    F58_Obj *a2D8[24];
    void func_000CA9B0();
    void func_000C9860();
    void func_000CAA10();
    void func_000CA940();
    void func_000CA8D0();
    void func_000C98D0();
    void func_000F58F0();
};
