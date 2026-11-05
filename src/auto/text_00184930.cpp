/* 15 functions from 0x00184930 to 0x001858A0, found by Ghidra. */
#include "common.h"

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
void *func_001E8A44(int size);
extern char D_002895F4[];
extern char D_002895EC[];

struct S_00184BB0_Elem {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(void *scene);
    int f4;
};

struct S_00184BB0_List {
    char pad0[0x24];
    int f24;
    S_00184BB0_Elem **f28;
};

struct S_00184C00_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29(void *scene);
};

struct S_00184C00_Mgr {
    S_00184C00_Mgr *func_0001B380(int a);
    void func_0001B3B0(S_00184C00_Obj *o);
};

/* BasicScene */
struct C_00184930 {
    void *vtbl;
    char pad4[0x348 - 4];
    int f348;
    char pad34c[0x3a8 - 0x34c];
    S_00184BB0_List **f3a8;
    S_00184C00_Obj *f3ac;
    char pad3b0[0x484 - 0x3b0];
    S_00184C00_Mgr *f484;
    void func_00184BB0(void);
    int func_00184C00(void);
};

void C_00184930::func_00184BB0(void)
{
    int i;

    for (i = 0; i < f3a8[f348]->f24; i++) {
        S_00184BB0_Elem *e = f3a8[f348]->f28[i];
        if (e->f4 == 2) {
            e->v3(this);
        }
    }
}

int C_00184930::func_00184C00(void)
{
    if (f3ac != 0) {
        void *mem = func_001E8A44(0x30);
        f484 = mem != 0 ? ((S_00184C00_Mgr *)mem)->func_0001B380(1) : 0;
        f3ac->v29(this);
        f484->func_0001B3B0(f3ac);
    }
    return 1;
}

int __stdcall func_00185860(char *name)
{
    if (memcmp(name, D_002895F4, 9) == 0) {
        return 2;
    }
    return memcmp(name, D_002895EC, 5) == 0;
}
