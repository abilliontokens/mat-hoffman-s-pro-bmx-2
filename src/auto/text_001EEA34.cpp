/* 42 functions from 0x001EEA34 to 0x001EF9D9, found by Ghidra. */
#include "common.h"

extern int D_002F6A38;
extern int D_002955B8[];

struct AllocObj {
    int (*fn0)(int);
    int field_4;
    int field_8;
    int *field_c;
    int field_10;
    int func_001EEE62(int size, int flag);
};

extern AllocObj D_002F6A04;

struct BitObj {
    int f0;
    int s4 : 4;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int b6 : 1;
    unsigned int b7 : 1;
    unsigned int b8 : 1;
    unsigned int rest : 23;
    void func_001EEEE6(BitObj *o);
    int func_001EF1E7(int a);
    int func_001EF1E7();
    void func_001EF333(int a);
    void func_001EF613(int a);
    BitObj *func_001EF8F6(int a0, int a1);
};

int func_001EEE49(int i) {
    int r = D_002955B8[i];
    if (D_002F6A38 & 1) r += 2;
    return r;
}

int AllocObj::func_001EEE62(int size, int flag) {
    unsigned int sz = (size + 7) & 0xfffffff8;
    if (flag) return fn0(sz);
    if (sz == 0) sz = 8;
    if ((unsigned int)field_10 < sz) {
        int space = 0x1fc;
        if (sz > (unsigned int)space) return 0;
        int *blk = (int *)D_002F6A04.func_001EEE62(0x200, 1);
        if (blk) *blk = 0;
        if (!blk) return 0;
        if (field_c == 0) field_8 = (int)blk;
        else *field_c = (int)blk;
        field_c = blk;
        field_10 = space - (int)sz;
        return (int)(field_c + 1) + field_10;
    }
    field_10 -= sz;
    return (int)(field_c + 1) + field_10;
}

void __fastcall func_001EEEE6(BitObj *dst, int dummy, BitObj *src) {
    dst->f0 = src->f0;
}

BitObj *BitObj::func_001EF8F6(int a0, int a1) {
    BitObj local;
    local.func_001EEEE6(this);
    int r = local.func_001EF1E7();
    if (r != 0) local.func_001EF333(a1);
    else local.func_001EF613(a1);
    ((BitObj *)a0)->func_001EEEE6(&local);
    return (BitObj *)a0;
}
