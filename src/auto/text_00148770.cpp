/* 1 function from 0x00148770 to 0x00148778, found by Ghidra. */
#include "common.h"

struct C_00149040 {
    void func_00149040(void *param);
};

struct C_00148770 {
    void func_00148770(void *param);
};

void __fastcall func_00148770(int self, int unused, void *param);

void C_00148770::func_00148770(void *param)
{
    ((C_00149040 *)((unsigned int)this - 0xC))->func_00149040(param);
}
