/* 4 functions from 0x000D3DA0 to 0x000D4D20, found by Ghidra. */
#include "common.h"
struct C_001B1860 {
    void func_001B1980();
    void func_001B1860(int, float, int, float, int, int, float, int, float, int, int, int, int);
};

struct C_000D4280 {
    char pad0[0x2A8];
    C_001B1860* f2A8;
    C_001B1860* f2AC;
    C_001B1860* f2B0;
    C_001B1860* f2B4;
    char pad2B8[0x202C - 0x2B8];
    C_001B1860* f202C;
    C_001B1860* f2030;
    C_001B1860* f2034;
    C_001B1860* f2038;
    void func_000D2300();
    void func_000D23D0();
    void func_000D24B0();
    void func_000D25A0();
    void func_000D4280();
};

void C_000D4280::func_000D4280()
{
    f2A8->func_001B1980();
    f202C->func_001B1980();
    func_000D2300();
    f2A8->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f202C->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2AC->func_001B1980();
    f2038->func_001B1980();
    func_000D25A0();
    f2AC->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2038->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2B0->func_001B1980();
    f2030->func_001B1980();
    func_000D23D0();
    f2B0->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2030->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2B4->func_001B1980();
    f2034->func_001B1980();
    func_000D24B0();
    f2B4->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
    f2034->func_001B1860(0, -1.0f, 0xff, 1.15f, 0, 0, -1.0f, 0xff, 1.0f, 0, 0, 0, 0);
}
