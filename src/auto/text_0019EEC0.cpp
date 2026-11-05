/* 9 functions from 0x0019EEC0 to 0x0019FD20, found by Ghidra. */
#include "common.h"

extern int D_0028B25C;

void func_001E891B(void *p);

struct SoultreeHierarchyCollisionObject {
    void *vtbl;
    void func_0019DC80();
    void func_00133E60();
    void *func_0019FBA0(int flags);
};

void *SoultreeHierarchyCollisionObject::func_0019FBA0(int flags)
{
    vtbl = (void *)&D_0028B25C;
    func_0019DC80();
    func_00133E60();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
