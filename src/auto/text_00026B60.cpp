/* 3 functions from 0x00026B60 to 0x00027860, found by Ghidra. */
#include "common.h"
struct C_00027850 {
    char pad0[0x5CC];
    int unk5CC;
    void func_00027850(int a0);
};


void C_00027850::func_00027850(int a0) {
    unk5CC = a0;
}
