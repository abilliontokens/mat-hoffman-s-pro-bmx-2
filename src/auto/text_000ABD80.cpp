/* 19 functions from 0x000ABD80 to 0x000ACD50, found by Ghidra. */
#include "common.h"

extern int D_0027C824;

struct FooTest {
    int x;
    void bar();
};
extern int D_0027C818;
extern int D_0027C80C;
extern int D_0027C800;

struct C_001B59E0 {
    void func_001B59E0();
};

/* UnlockChadTriggerAction */
struct C_000ABE10 {
    void *vtbl;
    C_000ABE10 *func_000ABE10();
};

struct C_000ABD80_P1 {
    void func_00168C20(void *key, int v, void *dst);
    void func_00168C50(void *key, int v, void *dst);
};

/* MusicTriggerAction */
struct C_000ABD80 {
    char pad0[0x10c];
    int field_10C;
    int field_110;
    void func_001B5A00(void *a, void *b);
    void func_000ABD80(C_000ABD80_P1 *a, void *b);
};

void *func_001E8A44(int size);
void func_001E891B(void *p);

struct C_000AC680_Alloc {
    virtual int vfunc0(int arg);
    C_000AC680_Alloc *func_000A3DE0();
};

/* BmxScene */
struct C_000AC680 {
    char pad0[0x28];
    u32 field_28;
    char pad2[0x4dc - 0x2c];
    C_000AC680_Alloc *field_4DC;
    int func_000AC680(void);
};

struct C_000AC6E0 {
    char pad0[0x538];
    void *field_538;
    C_000AC6E0 *func_000AC6E0(void);
};

C_000AC6E0 *__stdcall func_000A95D0(void *p);

void C_000ABD80::func_000ABD80(C_000ABD80_P1 *a, void *b)
{
    a->func_00168C20(&D_0027C80C, 0, &field_10C);
    a->func_00168C50(&D_0027C800, 0, &field_110);
    func_001B5A00(a, b);
}

C_000ABE10 *C_000ABE10::func_000ABE10()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C818;
    return this;
}

int C_000AC680::func_000AC680(void)
{
    C_000AC680_Alloc *p = (C_000AC680_Alloc *)func_001E8A44(0x128);
    p = p ? p->func_000A3DE0() : 0;
    field_4DC = p;
    if (p->vfunc0(field_28) == 0) {
        func_001E891B(field_4DC);
        field_4DC = 0;
    }
    return 1;
}

C_000AC6E0 *C_000AC6E0::func_000AC6E0(void)
{
    if (field_538 != 0) {
        return func_000A95D0(this);
    }
    return this;
}

