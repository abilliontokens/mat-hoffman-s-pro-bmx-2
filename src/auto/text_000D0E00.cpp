/* 4 functions from 0x000D0E00 to 0x000D1AE0, found by Ghidra. */
#include "common.h"

extern int D_0027EB8C;
void func_001E891B(void *p);

struct C_001D6410 {
    void func_001D6410(void);
};

struct DelObjC_000D0 {
    virtual void Destroy(int a0);
};

/* BmxUIPageLevelSelection */
struct C_000D0FD0 {
    void *vtbl;
    char pad4[0x280];
    DelObjC_000D0 *arr284[2];
    char pad28C[0x17C];
    C_001D6410 *unk408;
    char pad40C[0x1C38];
    DelObjC_000D0 *unk2044;
    void func_001BE3F0();
    void func_000D0FD0();
};

void C_000D0FD0::func_000D0FD0()
{
    C_001D6410 *p = unk408;
    vtbl = &D_0027EB8C;
    if (p != 0) {
        p->func_001D6410();
        func_001E891B(p);
        unk408 = 0;
    }
    for (int i = 0; i < 2; i++) {
        if (arr284[i] != 0) {
            arr284[i]->Destroy(1);
            arr284[i] = 0;
        }
    }
    if (unk2044 != 0) {
        unk2044->Destroy(1);
        unk2044 = 0;
    }
    func_001BE3F0();
}
