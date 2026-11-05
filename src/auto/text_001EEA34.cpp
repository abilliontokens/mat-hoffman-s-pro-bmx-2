/* 42 functions from 0x001EEA34 to 0x001EF9D9, found by Ghidra. */
#include "common.h"

extern int D_002F6A38;
extern int D_002955B8[];

struct AllocObj {
    int (*fn0)(int);
    int field_4;
    int field_8;
    int *field_c;
    int field_10;
    int func_001EEE62(int size, int flag);
};

extern AllocObj D_002F6A04;

struct BitObj {
    int f0;
    unsigned int f4;
    void func_001EEEE6(BitObj *o);
    int func_001EF1E7(int a);
    void func_001EF333(int a);
    void func_001EF613(int a);
    BitObj *func_001EF8F6(int a0, int a1);
};
