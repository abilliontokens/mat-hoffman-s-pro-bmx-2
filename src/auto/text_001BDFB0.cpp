/* 19 functions from 0x001BDFB0 to 0x001BEF90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028D58C;

struct UIControl {
    void *vtbl;
    char pad04[0x20];
    int f24;
    int f28;
    UIControl **f2c;
    int f30;
    UIControl *f34;
    int f38;
    UIControl **f3c;
    void func_001BDA80(void);
    void func_00157660(void);
    UIControl *func_001BE320(byte flags);
    void func_001BE1B0(int n);
    void func_001BE220(int n);
    void func_001BE290(void);
};
