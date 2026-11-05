/* 19 functions from 0x001BDFB0 to 0x001BEF90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028D58C;

struct UIVirt70 {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void dummy13();
    virtual void dummy14();
    virtual void dummy15();
    virtual void dummy16();
    virtual void dummy17();
    virtual void dummy18();
    virtual void dummy19();
    virtual void dummy20();
    virtual void dummy21();
    virtual void dummy22();
    virtual void dummy23();
    virtual void dummy24();
    virtual void dummy25();
    virtual void dummy26();
    virtual void dummy27();
    virtual void virt28();
};

struct UIControl;

struct UIList {
    int count;
    UIControl **data;
    UIControl *get(int i) { return data[i]; }
};

struct UIControl {
    void *vtbl;
    char pad04[0x20];
    int f24;
    int f28;
    UIControl **f2c;
    int f30;
    UIControl *f34;
    int f38;
    UIControl **f3c;
    void func_001BDA80(void);
    void func_00157660(void);
    UIControl *func_001BE320(byte flags);
    void func_001BE1B0(int n);
    void func_001BE220(int n);
    void func_001BE290(void);
};

void UIControl::func_001BE1B0(int n)
{
    int func_001BDA80(...);
    UIControl **arr;
    UIControl *cur;
    int i;

    if (f34 != 0) {
        f34->func_001BDA80();
    }
    arr = f2c;
    do {
        i = f30 - n;
        if (i < 1) {
            i += f28;
        }
        f30 = i;
        cur = arr[f30 - 1];
        f34 = cur;
    } while (cur == 0 || cur->f24 == 0);
    for (i = 0; i < cur->f28; i++) {
        UIControl *e = cur->f2c[i];
        (**(code **)(*(int *)e + 0x70))();
    }
}

void UIControl::func_001BE220(int n)
{
    int func_001BDA80(...);
    int count;
    UIControl **arr;
    UIControl *cur;
    int i;

    if (f34 != 0) {
        f34->func_001BDA80();
    }
    count = f28;
    arr = f2c;
    do {
        i = f30 + n;
        if (i > count) {
            i -= count;
        }
        f30 = i;
        cur = arr[f30 - 1];
        f34 = cur;
    } while (cur == 0 || cur->f24 == 0);
    for (i = 0; i < cur->f28; i++) {
        ((UIVirt70 *)cur->f2c[i])->virt28();
    }
}

void UIControl::func_001BE290(void)
{
    int i, j;
    UIControl *e;

    for (i = 0; i < f28; i++) {
        e = f2c[i];
        if (e != 0) {
            for (j = 0; j < e->f28; j++) {
                UIControl *c = e->f2c[j];
                if (c != 0) {
                    (**(code **)(*(int *)c + 0x88))();
                }
            }
        }
    }
    for (i = 0; i < f38; i++) {
        e = f3c[i];
        if (e != 0) {
            for (j = 0; j < e->f28; j++) {
                UIControl *c = e->f2c[j];
                if (c != 0) {
                    (**(code **)(*(int *)c + 0x88))();
                }
            }
        }
    }
}

UIControl *UIControl::func_001BE320(byte flags)
{
    int func_001E8390(...);
    int func_001E891B(...);
    vtbl = (void *)&D_0028D58C;
    if (f2c != 0) {
        func_001E8390(f2c);
    }
    func_00157660();
    if ((flags & 1) != 0) {
        func_001E891B(this);
    }
    return this;
}
