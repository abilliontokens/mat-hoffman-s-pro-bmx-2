/* 6 functions from 0x00078970 to 0x00079800, found by Ghidra. */
#include "common.h"

extern int D_00278EDC;

struct S_00079790_Obj {
    virtual void destroying(int flag);
};

struct C_0005ECA0 {
    void func_0005ECA0(void *param);
};

struct C_00079790 {
    void *vtbl;
    char pad4[0x158];
    S_00079790_Obj *f15C[10];
    int f184;
    C_00079790 *func_00079790(void *param);
    void func_000797C0(void);
    void func_00078E60(void);
};

C_00079790 *C_00079790::func_00079790(void *param)
{
    int i;
    ((C_0005ECA0 *)this)->func_0005ECA0(param);
    vtbl = (void *)&D_00278EDC;
    for (i = 0; i < 10; i++) {
        f15C[i] = 0;
    }
    f184 = 0;
    return this;
}
