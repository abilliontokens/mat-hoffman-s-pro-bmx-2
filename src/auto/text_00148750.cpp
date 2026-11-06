/* 1 function from 0x00148750 to 0x00148758, found by Ghidra. */
#include "common.h"

struct C_00148780 {
    char pad0[0x1C];
    void func_00148780(unsigned int flags);
};

struct C_00148750 {
    void func_00148750(unsigned int flags);
};

void C_00148750::func_00148750(unsigned int flags)
{
    unsigned int self = (unsigned int)this;
    self -= 0x1C;
    ((C_00148780 *)self)->func_00148780(flags);
}
