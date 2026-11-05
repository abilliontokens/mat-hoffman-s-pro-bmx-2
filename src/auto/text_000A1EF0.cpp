/* 5 functions from 0x000A1EF0 to 0x000A2ED0, found by Ghidra. */
#include "common.h"

struct C_000229C0 {
    virtual void vfunc0();
    virtual void vfunc4();
    virtual void vfunc8();
    int func_00025240();
    int func_00022550();
};

extern C_000229C0 *D_002B7E18;

void func_000A25E0(void)
{
    if (D_002B7E18) {
        if ((D_002B7E18->func_00022550() | D_002B7E18->func_00025240()) == 0) {
            if (D_002B7E18) {
                D_002B7E18->vfunc8();
                D_002B7E18 = 0;
            }
        }
    }
}
