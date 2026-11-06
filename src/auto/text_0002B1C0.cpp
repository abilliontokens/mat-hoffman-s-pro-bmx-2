/* 2 functions from 0x0002B1C0 to 0x0002C120, found by Ghidra. */
#include "common.h"

struct C_0002C100 {
    void *func_0002C100(unsigned int flags);
    void *func_0002B1C0(int param);
    void func_00026A90();
    void func_00157600(int param);
};

extern int D_0027661C;
extern unsigned int D_002A10F0;
extern unsigned int D_002A10F4;
extern unsigned int D_002A10F8;
extern unsigned int D_002A10FC;
extern unsigned int D_002A1030;
extern unsigned int D_002A1120;
extern unsigned int D_002A1124;
extern unsigned int D_002A1128;
extern unsigned int D_002A112C;
extern unsigned int D_002A1110;
extern unsigned int D_002A1114;
extern unsigned int D_002A1118;
extern unsigned int D_002A111C;
extern unsigned short D_002BA160;

void func_001E891B(void *ptr);

void *C_0002C100::func_0002C100(unsigned int flags)
{
    func_00026A90();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
