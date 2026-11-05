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

BmxEventPush *BmxEventPush::func_00050A10(int a0) {
    func_00030F90(a0);
    unk290 = 0;
    unk288 = 0;
    unk28c = 0;
    unk294 = 0;
    unk298 = 0;
    unk284 = 0;
    vtbl = &D_0027784C;
    return this;
}

void BmxEventPush::func_00050C60() {
    if (unk1f4 != 0) {
        func_001578D0();
        return;
    }
    if (unk290 != 0) {
        (**(code **)(*(int *)D_002EFDB8 + 0x1c))(1);
        (**(code **)(*(int *)D_002EFDB8 + 0x20))();
        if (D_002A8490->unk274 == D_002A8490->unk270 - 1) {
            int s;
            if (unk290 > 0)
                s = unk284 ? 8 : 1;
            else
                s = unk284 ? -8 : -1;
            if (func_00032560(s) == 0) {
                unk294 = 1;
                unk284 = 0;
            }
            unk290 -= s;
        }
    }
    func_00031400();
}

void BmxEventPush::func_00050D00() {
    (**(code **)(*(int *)this + 0x6c))();
    unk298 = 0;
    unk290 = 0;
    unk288 = 0;
    unk28c = 0;
    unk294 = 0;
    unk284 = 0;
    func_00034090();
}

void *BmxEventPush::func_00050D40(int flags) {
    vtbl = &D_0027784C;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
