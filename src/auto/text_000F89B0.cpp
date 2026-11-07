/* 1 function from 0x000F89B0 to 0x000FA620, found by Ghidra. */
#include "common.h"

struct RiderInputObject {
    int data[0x5B8 / 4];
    int _func_000F89B0(int a, int b);
    int _func_000301D0();
    int _func_00136170(int, int, int);
    void _func_000B9A80(int, int);
    void _func_000CEFC0();
};
extern float _D_00278C58;
extern int *_D_002A8490;

int _func_000F89B0(int a, int b)
{
    if (a == 4 || a == 3)
        return 0;
    if (b == 0)
        return 0;
    return 0;
}
