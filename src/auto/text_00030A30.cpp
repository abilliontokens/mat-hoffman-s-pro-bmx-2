/* 24 functions from 0x00030A30 to 0x000318A0, found by Ghidra. */
#include "common.h"
struct C_00030CD0 {
    char pad0[0x78];
    int unk78;
    void func_00030CD0(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_00030F00 {
    void *vtbl;
    void *func_00030F00(unsigned int flags);
};

struct C_00030B20 {
    char pad0[0x170];
    float f170;
    float f174;
    float f178;
    char pad17c[0xBC];
    float f238;
    float f23c;
    float f240;
    void func_00030B20(float x, float y, float z);
};


void C_00030CD0::func_00030CD0(int a0) {
    unk78 = a0;
}

void *C_00030F00::func_00030F00(unsigned int flags)
{
    extern int D_00276A24;
    void func_001E891B(void *);

    vtbl = (void *)&D_00276A24;
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void func_00031400(void) {
    int func_001578D0(...);
    func_001578D0();
}

int func_00031410(void) {
    int func_00157960(...);
    func_00157960();
    return 1;
}

void func_00031420(void) {
    int func_001576D0(...);
    func_001576D0();
}

void func_00031630(void) {
    int func_000314F0(...);
    func_000314F0();
}

