/* 8 functions from 0x0012B7D0 to 0x0012C540, found by Ghidra. */
#include "common.h"

extern int D_00284194;
extern int D_002A3F00;
extern int D_002A3F04;
extern int D_002A3F08;
extern int D_002A3F0C;
extern float D_00275460;
extern float D_002755E8;
extern float D_002755EC;

void func_001E891B(void *p);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_0012B8F0 {
    void *vtbl;
    char pad4[0x20];
    char *f24;
    char *f28;
    char *f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int *f44;
    C_0012B8F0 *func_0012B8F0(void);
    void func_0012BF10(int idx, u32 *a, u32 *b, u32 *c, int *d);
    void func_0012C4E0(void);
};

void C_0012B8F0::func_0012C4E0(void) {
    vtbl = (void *)&D_00284194;
    if (f24 != 0) {
        func_001E891B(f24);
    }
    if (f28 != 0) {
        func_001E891B(f28);
    }
    if (f2C != 0) {
        func_001E891B(f2C);
    }
    if (f44 != 0) {
        func_001E891B(f44);
    }
    ((C_00157660 *)this)->func_00157660();
}
