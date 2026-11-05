/* 11 functions from 0x0004BAF0 to 0x0004C7A0, found by Ghidra. */
#include "common.h"

extern int D_002773EC;
void func_001E891B(void *);

struct C_0004C6F0 {
    int unk0;
    void func_00033220(void);
    void *func_0004C6F0(int flags);
};

void *C_0004C6F0::func_0004C6F0(int flags) {
    unk0 = (int)&D_002773EC;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
