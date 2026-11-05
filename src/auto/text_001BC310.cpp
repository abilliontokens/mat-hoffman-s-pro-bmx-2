/* 18 functions from 0x001BC310 to 0x001BD080, found by Ghidra. */
#include "common.h"

extern int D_0028D334;
extern "C" void *memset(void *dst, int c, unsigned int n);

void func_001BC310();

struct C_00157600 {
    void func_00157600(void *param);
};

struct C_001BBAA0 {
    void func_001BBAA0(void *a, void *b);
};

struct C_001BC640 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    C_001BC640 *func_001BC640(void *param);
};

struct C_001BC670 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void func_001D3F50();
    void func_001BC670(void *a1, void *a2);
};

struct C_001BC6B0 {
    void *vtbl;
    void func_00157660();
    void *func_001BC6B0(unsigned int flags);
};

struct C_001BC6E0 {
    int count;
    char *data;
    char func_001BC6E0(void *param);
};

C_001BC640 *C_001BC640::func_001BC640(void *param)
{
    ((C_00157600 *)this)->func_00157600(param);
    f24 = 0;
    f28 = 0;
    vtbl = (void *)&D_0028D334;
    return this;
}
