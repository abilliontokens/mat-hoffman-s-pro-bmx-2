/* 7 functions from 0x000149A0 to 0x00015980, found by Ghidra. */
#include "common.h"

struct AIPedestrian {
    void *func_00015960(unsigned int flags);
    void func_00014020();
    void func_001C6DA0(int arg1, int arg2);
};

struct Obj13F50 {
    void func_00013F50(void *arg1, int arg2, void *arg3, int arg4);
};

struct AIPedFleeState {
    char pad_0[8];
    AIPedestrian *owner;
    void func_00014EA0();
    void func_00012B00(int arg1);
};

struct AIPedCurseState {
    char pad_0[8];
    AIPedestrian *owner;
    void func_00015170();
};

extern void *D_002A8490;
extern Obj13F50 *D_002AF44C;

void func_001E891B(void *ptr);
int func_00011260(int arg1, int arg2);

void AIPedFleeState::func_00014EA0()
{
    owner->func_001C6DA0(*(int *)((char *)owner + 0x41c), 1);
    if (*(int *)(*(char **)((char *)D_002A8490 + 0x2a4) + 0x1c8) == 0) {
        *(unsigned char *)((char *)owner + 0x3df) = 1;
        *(unsigned char *)((char *)owner + 0x3e0) = 1;
        func_00012B00(1);
    }
}

void AIPedCurseState::func_00015170()
{
    *(int *)(*(char **)((char *)owner + 0x3c) + 0x10) = 1;
    owner->func_001C6DA0(*(int *)((char *)owner + 0x420), 1);
    if (*(int *)(*(char **)((char *)D_002A8490 + 0x2a4) + 0x1c8) == 0 && *(char *)((char *)owner + 0x3e1) == 0) {
        if (func_00011260(0, 100) > 0x32) {
            D_002AF44C->func_00013F50(owner, *(unsigned char *)((char *)owner + 0x3e2), (char *)owner + 0x3e4, *(int *)((char *)owner + 0x3cc));
        }
    }
}

void *AIPedestrian::func_00015960(unsigned int flags)
{
    func_00014020();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
