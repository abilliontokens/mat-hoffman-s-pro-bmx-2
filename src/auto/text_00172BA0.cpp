/* 5 functions from 0x00172BA0 to 0x00173B00, found by Ghidra. */
#include "common.h"

struct C_00173550 {
    int unk0;
    void *func_00173550(int flags);
};

void *C_00173550::func_00173550(int flags) {
    extern int D_00288D34;
    void func_001E891B(void *);
    int func_00157660(...);
    unk0 = (int)&D_00288D34;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
