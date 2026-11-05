/* 4 functions from 0x00023CB0 to 0x00024380, found by Ghidra. */
#include "common.h"

struct C_000229C0 {
    void func_000229C0(int a0);
};

extern C_000229C0 *D_002B7E18;

void func_00024360(int a0) {
    D_002B7E18->func_000229C0(a0);
}
