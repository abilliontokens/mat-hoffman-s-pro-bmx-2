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
    char pad0[0x18];
    unsigned int f18_lo : 16;
    unsigned int type : 8;
    unsigned int f18_hi : 8;
    char pad1c[4];
    C_00191400_Vec f20;
    C_00191400_Vec f30;
    void *func_00191400(void);
    void func_00191420(int a0, unsigned int a1, C_00191400_Vec *a2);
};

void *C_00191400::func_00191400(void) {
    void *r = 0;

    switch (type) {
    case 0:
        r = &f20;
        break;
    case 1:
        r = &f30;
        break;
    }
    return r;
}

void C_00191400::func_00191420(int a0, unsigned int a1, C_00191400_Vec *a2) {
    switch ((a1 >> 16) & 0xff) {
    case 0:
        f20 = *a2;
        break;
    case 1:
        ((C_000264C0 *)&f30)->func_000264C0(a2);
        break;
    }
}

