/* 7 functions from 0x0004D7A0 to 0x0004E680, found by Ghidra. */
#include "common.h"

struct C_0004DC70 {
    int unk0;
    void func_00033220(void);
    void *func_0004DC70(int flags);
};

void *C_0004DC70::func_0004DC70(int flags) {
    extern int D_002774DC;
    void func_001E891B(void *);
    unk0 = (int)&D_002774DC;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
