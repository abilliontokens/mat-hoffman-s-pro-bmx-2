/* 4 functions from 0x0016F110 to 0x0016FEE0, found by Ghidra. */
#include "common.h"

struct C_00142560 {
    void func_00142560(void);
};

struct C_0016F7B0 {
    char pad0[0x11c];
    int count;
    char pad120[0xc];
    int *items;
    char pad130[0x40];
    C_00142560 *obj170;
    void func_0016F7B0(void);
};

void C_0016F7B0::func_0016F7B0(void)
{
    int count = this->count;
    int w = 0;
    int i = 0;
    if (count > 0) {
        for (; i < this->count; i++) {
            int e = this->items[i];
            if (*(char *)(e + 0x44) & 0x80) {
                this->items[w] = e;
                w++;
            }
        }
    }
    this->count = w;
    if (this->obj170) {
        this->obj170->func_00142560();
    }
}
