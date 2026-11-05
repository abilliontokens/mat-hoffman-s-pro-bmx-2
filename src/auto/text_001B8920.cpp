/* 2 functions from 0x001B8920 to 0x001B9560, found by Ghidra. */
#include "common.h"

extern int D_0028D0BC;
extern char D_00275630[];

extern "C" int strlen(const char *s);
char *func_001E8920(char *dst, const char *src, int n);

struct S_001B9460_Quat {
    u32 x;
    u32 y;
    u32 z;
    u32 w;
};

extern S_001B9460_Quat D_002AA9F4;

/* SegmentedCordTempData */
struct C_001B9460 {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    char f10[0x104];
    char f114[0x104];
    char f218[0x104];
    int f31C;
    S_001B9460_Quat f320;
    C_001B9460 *func_001B9460(void);
};
