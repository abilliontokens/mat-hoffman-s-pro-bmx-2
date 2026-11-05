/* 4 functions from 0x001904E0 to 0x00191470, found by Ghidra. */
#include "common.h"

struct C_000264C0 {
    void func_000264C0(void *param);
};

struct C_00191400_Vec {
    int x;
    int y;
    int z;
    int w;
};

struct C_00191400 {
    char pad0[0x1a];
    u8 f1a;
    char pad1b[5];
    C_00191400_Vec f20;
    C_00191400_Vec f30;
    void *func_00191400(void);
    void func_00191420(int a0, unsigned int a1, C_00191400_Vec *a2);
};
