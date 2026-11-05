/* 2 functions from 0x00151130 to 0x00151F80, found by Ghidra. */
#include "common.h"
extern void *D_002A8490;
struct C_00151F40 {
    int func_00151F40(void);
};
struct C_00198390 {
    void func_00198390(void);
};
struct C_001983A0 {
    void func_001983A0(void);
};

int C_00151F40::func_00151F40(void)
{
    if (*(int *)((char *)D_002A8490 + 0x10) != *(int *)((char *)this + 0x24)) {
        char *obj = *(char **)(*(char **)((char *)this + 0x2c) + 0x1a4);
        ((C_00198390 *)*(char **)(obj + 4))->func_00198390();
        return 1;
    }
    {
        char *obj = *(char **)(*(char **)((char *)this + 0x2c) + 0x1a4);
        ((C_001983A0 *)*(char **)(obj + 4))->func_001983A0();
    }
    return 1;
}
