/* 1 function from 0x00148750 to 0x00148758, found by Ghidra. */
#include "common.h"

struct C_00148780 {
    char pad0[0x1C];
    void func_00148780(unsigned int flags);
};

struct C_00148750 {
    char pad0[4];
    void func_00148750(unsigned int flags);
};

struct C_Derived_00148750 : C_00148780, C_00148750 {
};

void C_00148750::func_00148750(unsigned int flags)
{
    (((C_00148780 *)this) - 1)->func_00148780(flags);
}
