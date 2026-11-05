/* 8 functions from 0x00096450 to 0x00097050, found by Ghidra. */
#include "common.h"

void func_001E891B(void *p);
int func_001EA426(const char *a, const char *b);
extern float D_00275544;

struct C_00012140 {
    void func_00012140(void);
};

struct C_00096700 {
    char pad0[0x4880];
    C_00012140 *arr4880[12];
    void func_00096700(void);
};

struct C_00096870_Entry {
    char name[0x78];
};

struct C_00096870_Elem {
    int f0;
    char pad4[0x2550];
    int f2554;
    char pad2558[0xa0];
    C_00096870_Entry entries[131];
    char pad6360[0x28];
    void *ptrs[1];
};

struct C_00096870 {
    char pad0[0x1b8];
    int f1b8;
    char pad1bc[0x1c8 - 0x1bc];
    C_00096870_Elem **f1c8;
    void func_00096870(const char *name);
};

struct C_00096FE0_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
};

struct C_00096FE0 {
    char pad0[0x1cc];
    int f1cc;
    char pad1d0[0x3ad0 - 0x1d0];
    float arr3ad0[0x378];
    C_00096FE0_Obj *arr48b0[1];
    void func_00096FE0(float dt);
};

struct C_00096740 {
    char pad0[0x48E0];
    int unk48E0;
    int func_00096740(void);
};


void C_00096700::func_00096700(void) {
    int i;

    for (i = 0; i < 12; i++) {
        C_00012140 *p = arr4880[i];
        if (p != 0) {
            p->func_00012140();
            func_001E891B(p);
            arr4880[i] = 0;
        }
    }
}

int C_00096740::func_00096740(void) {
    return unk48E0;
}

void C_00096870::func_00096870(const char *name) {
    int i;
    int j;

    for (i = 0; i < f1b8; i++) {
        C_00096870_Elem *e = f1c8[i];
        if (e->f0 == 1) {
            for (j = 0; j < e->f2554; j++) {
                if (func_001EA426(f1c8[i]->entries[j].name, name) == 0) {
                    f1c8[i]->ptrs[j] = 0;
                }
                e = f1c8[i];
            }
        }
    }
}

void C_00096FE0::func_00096FE0(float dt) {
    int i;

    for (i = 0; i < f1cc; i++) {
        if (arr3ad0[i] > D_00275544) {
            arr3ad0[i] -= dt;
            if (arr3ad0[i] <= D_00275544) {
                arr3ad0[i] = 0;
                arr48b0[i]->v5(4);
            }
        }
    }
}

