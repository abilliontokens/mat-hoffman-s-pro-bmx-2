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

extern int D_0027AA3C;
extern int D_0027AAEC;

struct C_0009F4F0 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F4F0(int flags);
};

struct C_0009F520 {
    int unk0;
    void func_00169DE0(void);
    void *func_0009F520(int flags);
};

struct Vec4i {
    int x, y, z, w;
};

struct C_0009EDB0 {
    char pad0[0x24];
    Vec4i v24;
    Vec4i v34;
    char pad44[0x188];
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 6;
    char pad1cd[0xf];
    int unk1dc;
    void func_0009EDB0(char param_1);
    void func_0009F4C0(char param_1);
};

void C_0009EDB0::func_0009EDB0(char param_1) {
    if (!(b1)) {
        v34 = v24;
    }
    b1 = param_1;
}

void C_0009EDB0::func_0009F4C0(char param_1) {
    b1 = param_1;
    unk1dc = 0;
}

void *C_0009F4F0::func_0009F4F0(int flags) {
    unk0 = (int)&D_0027AA3C;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0009F520::func_0009F520(int flags) {
    unk0 = (int)&D_0027AAEC;
    func_00169DE0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

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

