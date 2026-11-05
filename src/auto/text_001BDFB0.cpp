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

UIControl *UIControl::func_001BE320(byte flags)
{
    int func_001E8390(...);
    int func_001E891B(...);
    vtbl = (void *)&D_0028D58C;
    if (f2c != 0) {
        func_001E8390(f2c);
    }
    func_00157660();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}
