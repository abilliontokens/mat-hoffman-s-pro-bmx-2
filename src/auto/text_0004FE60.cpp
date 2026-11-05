/* 7 functions from 0x0004FE60 to 0x00050D70, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0027784C;

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

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

struct S_000508C0_Item {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    char pad4[0x958];
    int unk95c;
};

struct S_000508C0_List {
    char pad0[0x24];
    int count;
    char pad28[0x180];
    S_000508C0_Item *items[1];
};

struct S_000508C0_Owner {
    char pad0[0x4e0];
    S_000508C0_List *list;
};

struct S_000508C0_Overlay {
    void func_00086C10(int a0);
    void func_00086C20(int a0);
    void func_000867F0(int a0);
};

/* BmxEventMountVert */
struct BmxEventMountVert {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    virtual void vf25();
    virtual void vf26();
    virtual void vf27();
    virtual void vf28();
    virtual void vf29();
    virtual void vf30();
    virtual void vf31();
    virtual void vf32();
    virtual void vf33();
    virtual void vf34();
    virtual void vf35();
    virtual void vf36();
    virtual void vf37();
    virtual void vf38();
    virtual void vf39();
    virtual void vf40();
    char pad4[0x60];
    S_000508C0_Owner *unk64;
    char pad68[0xa8];
    int unk110;
    char pad114[0xc];
    int unk120;
    char pad124[0x160];
    int unk284;
    int unk288[8];
    S_000508C0_Overlay *unk2a8;
    int unk2ac;
    int unk2b0;
    int unk2b4;
    int unk2b8[8];
    char pad2d8[4];
    int unk2dc;
    int func_000508C0();
    void func_00034090();
    void func_0004FAC0();
};

int BmxEventMountVert::func_000508C0() {
    int i;
    func_00034090();
    if (unk284 == 9) {
        for (i = 0; i < unk64->list->count; i++) {
            unk64->list->items[i]->vf5();
            unk64->list->items[i]->unk95c = 1;
            unk2b8[i] = 1;
        }
        unk120 = unk64->list->count - 1;
        func_0004FAC0();
        unk2a8->func_00086C10(0);
        unk2a8->func_00086C20(0);
        unk2a8->func_000867F0(1);
        unk64->list->items[unk120]->unk95c = 1;
        unk110 = 0;
        unk2dc = 0;
        vf40();
    }
    for (i = 0; i < unk64->list->count; i++) {
        unk288[i] = 0;
    }
    unk2ac = 0;
    unk2b0 = 1;
    return 1;
}

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
        D_002EFDB8->vf7(1);
        D_002EFDB8->vf8();
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
