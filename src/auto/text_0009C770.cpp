/* 1 function from 0x0009C770 to 0x0009CAD0, found by Ghidra. */
#include "common.h"

void func_001E891B(void *p);

struct S_0009C770_Child {
    void func_00097A20(void);
    void func_00012140(void);
};

/* element with a child pointer array at +0x1c8 (count at +0x1b8) */
struct S_0009C770_E1 {
    char pad0[0x1b8];
    int f1b8;
    char pad1bc[0xc];
    S_0009C770_Child **f1c8;
    void func_00096700(void);
};

/* element that also owns 12 child pointers at +0x4880 */
struct S_0009C770_E2 {
    char pad0[0x1b8];
    int f1b8;
    char pad1bc[0xc];
    S_0009C770_Child **f1c8;
    char pad1cc[0x4880 - 0x1cc];
    S_0009C770_Child *f4880[12];
};

/* owner of three element arrays */
struct C_0009C770 {
    S_0009C770_E1 **arr0;
    S_0009C770_E2 **arr4;
    S_0009C770_E2 **arr8;
    int cnt0;
    int cnt4;
    int cnt8;
    void func_0009C770(void);
};
