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
    char pad278[0x68];
    struct S_2e0 *unk2e0;
};
struct S_2e0 {
    int count;
    int pad4;
    int unk8;
};
extern S_002A8490 *D_002A8490;
void *func_001E8A44(int size);
struct O_Ev {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    O_Ev *func_00088530(int a);
    O_Ev *func_00088570(int a);
};
struct O_Ev2 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    O_Ev2 *func_00087760(int a, void *b, O_Ev *c);
    O_Ev2 *func_000876B0(int a);
};
struct O_A {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
    O_A *func_0005ECA0(int a);
    O_A *func_0005EDC0(void *a);
};
struct O_B {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
    O_B *func_000715B0(int a);
    O_B *func_00071880(void *a);
};
struct O_C {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
    O_C *func_0006C380(int a);
    O_C *func_0006C570(void *a);
};
struct O_D {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
    O_D *func_00066C90(int a);
    O_D *func_00066FA0(void *a);
};
struct O_E {
    virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
    virtual void vf5(); virtual void vf6();
    O_E *func_00082450(int a);
    O_E *func_0008DB70(void *a, void *b, int c, int d, int e, int f, int g);
};

/* BmxEventPush */
struct BmxEventPush {
    void *vtbl;
    char pad4[0x60];
    struct S_000508C0_Owner *unk64;
    char pad68[0x7c];
    O_Ev *unke4;
    char pade8[0x74];
    O_A *unk15c;
    char pad160[0x10];
    O_E *unk170[8];
    O_D *unk190;
    char pad194[4];
    O_Ev2 *unk198;
    O_C *unk19c;
    O_B *unk1a0;
    char pad1a4[0x50];
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
    void func_00050A50();
    void func_00031630();
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
    char pad960[0x848];
    int unk11a8;
    void func_00108680(int a);
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
    void func_000342C0();
    BmxEventMountVert *func_0004FE60();
};
extern char D_00277830;
int func_001EA426(const char *a, const char *b);

BmxEventMountVert *BmxEventMountVert::func_0004FE60()
{
    unk284 = D_002A8490->unk2e0->pad4;
    func_000342C0();
    func_001EA426((char *)unk64 + 0x134, &D_00277830);
    int i;
    for (i = 0; i < unk64->list->count; i++) {
        if (unk284 == 9) {
            unk64->list->items[i]->func_00108680(0);
            unk64->list->items[i]->vf5();
        }
        unk64->list->items[i]->unk11a8 = 1;
    }
    if (unk284 == 9) {
        unk120 = unk64->list->count - 1;
        func_0004FAC0();
        unk2a8->func_00086C10(0);
        unk2a8->func_00086C20(0);
        unk2a8->func_000867F0(1);
        unk64->list->items[unk120]->unk95c = 1;
        unk110 = 0;
        unk2dc = 0;
        for (i = 0; i < unk64->list->count; i++) {
            unk64->list->items[i]->unk95c = 1;
        }
        unk110 = 0;
    }
    return this;
}

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

void BmxEventPush::func_00050A50() {
    int i;
    func_00031630();
    void *p = func_001E8A44(0xf4);
    unke4 = p ? ((O_Ev *)p)->func_00088530(1) : 0;
    unke4 = unke4->func_00088570(D_002A8490->unk2e0->unk8);
    p = func_001E8A44(0x134);
    unk15c = p ? ((O_A *)p)->func_0005ECA0(1) : 0;
    unk15c->func_0005EDC0(this);
    unk15c->vf4();
    p = func_001E8A44(0x140);
    unk1a0 = p ? ((O_B *)p)->func_000715B0(1) : 0;
    unk1a0->func_00071880(this);
    unk1a0->vf4();
    p = func_001E8A44(0xf0);
    unk19c = p ? ((O_C *)p)->func_0006C380(1) : 0;
    unk19c->func_0006C570(this);
    unk19c->vf4();
    p = func_001E8A44(0x16c);
    unk190 = p ? ((O_D *)p)->func_00066C90(1) : 0;
    unk190->func_00066FA0(this);
    unk190->vf4();
    for (i = 0; i < D_002A8490->unk2e0->count; i++) {
        p = func_001E8A44(0xda4);
        unk170[i] = p ? ((O_E *)p)->func_00082450(1) : 0;
        unk170[i]->func_0008DB70(unk64, unk64->list->items[i], D_002A8490->unk2e0->unk8, i, 1, 1, 0);
        unk170[i]->vf6();
    }
    p = func_001E8A44(0xc8);
    O_Ev2 *q = p ? ((O_Ev2 *)p)->func_000876B0(1) : 0;
    unk198 = q->func_00087760(D_002A8490->unk2e0->unk8, this, unke4);
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
