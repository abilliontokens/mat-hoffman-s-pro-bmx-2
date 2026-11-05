/* 10 functions from 0x00182CC0 to 0x00183AF0, found by Ghidra. */
#include "common.h"

extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void func_00030F30(char *s, void *p);
void func_001E891B(void *p);
void *func_001E8A44(int size);
extern char D_00275678[];
extern int D_002893EC;

struct C_00168280 {
    C_00168280 *func_00168280(void);
    void func_001691E0(void);
    int func_00169490(char *buf, int flag);
};

struct C_001B82A0 {
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
    virtual int v27(C_00168280 *a);
    char pad4[0x20];
    int f24;
    C_001B82A0 *func_001B82A0(int a);
};

/* BmxScene */
struct C_00182CC0 {
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
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46(int a);
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    char pad4[0x24];
    C_00168280 *f28;
    char pad2C[4];
    char f30[0x104];
    char pad134[0x3C0 - 0x134];
    C_001B82A0 *f3C0;
    char pad3C4[4];
    int f3C8;
    void func_001832C0();
    int func_001832F0(char *name);
    int func_001833A0();
    void func_001839F0();
};

void C_00182CC0::func_001832C0()
{
    C_00168280 *p = f28;
    if (p != 0) {
        p->func_001691E0();
        func_001E891B(p);
        f28 = 0;
    }
}

int C_00182CC0::func_001832F0(char *name)
{
    char buf[0x104];

    func_001ADCC0(buf, 0x104, D_00275678, f30, name);
    func_00030F30(buf, &D_002893EC);
    v56();
    void *mem = func_001E8A44(0x4cc);
    C_00168280 *obj = mem != 0 ? ((C_00168280 *)mem)->func_00168280() : 0;
    f28 = obj;
    if (obj->func_00169490(buf, 0) == 0) {
        C_00168280 *p = f28;
        if (p != 0) {
            p->func_001691E0();
            func_001E891B(p);
        }
        f28 = 0;
        return 0;
    }
    return 1;
}

int C_00182CC0::func_001833A0()
{
    if (f28 == 0) {
        return 0;
    }
    if (f3C0 == 0) {
        f3C8 = 0;
    } else {
        f3C8 = f3C0->f24;
    }
    v34();
    v35();
    v40();
    v41();
    v44();
    v46(0);
    v47();
    v48();
    v49();
    v50();
    v42();
    return 1;
}

void C_00182CC0::func_001839F0()
{
    if (f3C0 == 0) {
        void *mem = func_001E8A44(0x2c);
        f3C0 = mem != 0 ? ((C_001B82A0 *)mem)->func_001B82A0(1) : 0;
    }
    if (f3C0->v27(f28) != 0) {
        return;
    }
    if (f3C0->f24 != 0) {
        return;
    }
    f3C0->v2();
    f3C0 = 0;
}

