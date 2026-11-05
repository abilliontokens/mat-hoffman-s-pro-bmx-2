/* 10 functions from 0x0009E680 to 0x0009F620, found by Ghidra. */
#include "common.h"

struct C_0009F580 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F580(int flags);
};

void func_001E891B(void *ptr);

struct C_0009F550 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F550(int flags);
};

void *C_0009F550::func_0009F550(int flags) {
    extern int D_0027AB9C;
    void func_001E891B(void *);
    unk0 = (int)&D_0027AB9C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0009F580::func_0009F580(int flags) {
    extern int D_0027AC8C;
    unk0 = (int)&D_0027AC8C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

