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

int RiderInputObject::_func_000F89B0(int a, int b)
{
    int *page = (int *)data[0x124/4];
    if (page[0x138/4] == 4 || page[0x138/4] == 3) return 0;
    if (data[0x4B8/4] || data[0x4BC/4]) return 0;
    if (((RiderInputObject *)((int *)page[0x25C/4])[0x74/4])->_func_000301D0()) return 0;
    if (*(float *)&data[0x5B0/4] <= _D_00278C58) return 0;
    if ((data[0x498/4] || data[0x49C/4] || data[0x4A0/4] || data[0x4A4/4]) && !data[0x4A8/4]) return 0;
    if (data[0x288/4] || data[0x510/4]) return 0;
    int *game = (int *)_D_002A8490[0x2E0/4];
    if (game[1] == 4 || game[1] == 9) {
        if (game[0x300/4 + data[0x490/4]] != a) return 0;
    } else if (page[0x264/4] >= 0 && page[0x264/4] <= 1) {
        if (game[0x300/4] == -1) game[0x300/4] = a;
        if (((int *)_D_002A8490[0x2E0/4])[0x300/4] != a) return 0;
    } else if (page[0x264/4] == 2) {
        if (game[0x300/4] == a) return 0;
        if (game[0x304/4] == -1) game[0x304/4] = a;
        else if (game[0x304/4] != a) return 0;
    }
    RiderInputObject *input = (RiderInputObject *)_D_002A8490[2];
    if (b == input->_func_00136170(4,2,0) || b == ((RiderInputObject *)_D_002A8490[2])->_func_00136170(0x17,2,0)) return 0;
    if (b == ((RiderInputObject *)_D_002A8490[2])->_func_00136170(6,2,0)) {
        if (data[0x590/4] || data[0x43C/4 + data[0x48C/4]]) return 0;
        int rider = data[0x48C/4];
        if (rider == 2 || rider == 4 || rider == 7 || rider == 9 || rider == 13 || rider == 16) return 0;
        if (data[0x4F4/4] || data[0x558/4] || data[0x538/4] || data[0x57C/4] || data[0x580/4]) return 0;
        if (data[0x4F0/4] && !data[0x4E4/4]) return 0;
        if (!data[0x49C/4]) ((RiderInputObject *)page[0x24/4])->_func_000B9A80(4,1);
        data[0x49C/4]=1; data[0x4B4/4]=0; data[0x4AC/4]=b; data[0x4B0/4]=a;
        if (!data[0x4A8/4]) return 0;
        if (data[0x4E4/4]) {
            data[0x510/4]=1; data[0x50C/4]=0; data[0x49C/4]=0;
            data[0x4E4/4]=0; data[0x51C/4]=1; data[0x514/4]=0; data[0x56C/4]=0;
            return 1;
        }
        _func_000CEFC0();
        switch (data[0x48C/4]) {
        case 1: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=0; break;
        case 3: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=1; break;
        case 5: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=2; break;
        case 6: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=3; break;
        case 8: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=4; break;
        case 10: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=5; break;
        case 11: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=6; break;
        case 12: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=7; break;
        case 14: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=8; break;
        case 15: ((int *)_D_002A8490[0x2E0/4])[0x2D8/4]=9; break;
        }
        ((int *)data[0x124/4])[0x138/4]=7;
        ((int *)data[0x124/4])[0x134/4]=0x16;
        data[0x56C/4]=0;
        return 1;
    }
    if (b == ((RiderInputObject *)_D_002A8490[2])->_func_00136170(7,2,0)) {
        if (data[0x4EC/4] || data[0x5B4/4] || data[0x57C/4] || data[0x580/4] || data[0x558/4]) return 0;
        if (!data[0x560/4] || data[0x4F0/4] || data[0x4F4/4]) return 1;
        if (!data[0x4A4/4]) {
            data[0x4BC/4]=1;
            ((RiderInputObject *)page[0x24/4])->_func_000B9A80(4,1);
        }
        data[0x56C/4]=0;
        data[0x558/4]=1;
        return 1;
    }
    return 0;
}
