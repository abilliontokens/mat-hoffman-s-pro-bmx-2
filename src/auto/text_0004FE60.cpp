/* 7 functions from 0x0004FE60 to 0x00050D70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0027784C;
extern void *D_002EFDB8;

void func_001E891B(void *p);

struct S_002A8490 {
    char pad0[0x270];
    int unk270;
    int unk274;
};
extern S_002A8490 *D_002A8490;

/* BmxEventPush */
struct BmxEventPush {
    void *vtbl;
    char pad4[0x1f0];
    int unk1f4;
    char pad1f8[0x8c];
    int unk284;
    int unk288;
    int unk28c;
    int unk290;
    int unk294;
    int unk298;
    BmxEventPush *func_00050A10(int a0);
    void func_00050C60();
    void func_00050D00();
    void *func_00050D40(int flags);
    void func_00033220();
    void func_00030F90(int a0);
    int func_00032560(int a0);
    void func_00031400();
    void func_00034090();
    void func_001578D0();
};

void *BmxEventPush::func_00050D40(int flags) {
    vtbl = &D_0027784C;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
