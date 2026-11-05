/* 19 functions from 0x001BDFB0 to 0x001BEF90, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_0028D58C;
extern int D_0028D604;
extern f32 D_00278C48;
extern f32 D_00276A90;

struct C_00157600 {
    void func_00157600(int a);
};

struct UIStick {
    char pad00[0x24];
    f32 value;
};

struct UIInputState {
    char pad00[0x2B0];
    UIStick *axisA[8];
    UIStick *axisB[8];
};

struct UIControl;

struct UIPageSlot {
    int index;
    UIControl *item;
};

struct UIPageObj {
    virtual void dummy0();
    virtual void dummy1();
    virtual void virt2();
    void func_001D37C0(void);
    void func_00157810(void);
};

struct UIPageVirt {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void virt5();
};

struct S_001BEB00_Global {
    char pad0[0x30];
    int f30;
};

extern S_001BEB00_Global *D_002EFDB8;

struct UIPage {
    void *vtbl;
    char pad04[0x120];
    UIInputState *f124;
    u32 f128;
    u32 f12C;
    u32 f130;
    int f134;
    UIPageObj **f138;
    int f13C;
    UIControl **f140;
    UIPageSlot **f144;
    u32 f148[8];
    UIPageObj *f168;
    UIPageObj *f16C;
    u8 f170;
    char pad171[0x103];
    u32 f274;
    u32 f278;
    u32 f27C;
    void func_00157660(void);
    void func_001BE3F0(void);
    UIPage *func_001BE360(int param_1);
    int func_001BEA50(int param_1);
    void func_001BEB00(void);
    void func_001BEB90(int idx);
    void func_001BEC10(int idx);
    void func_001BEC90(int idx, int target);
    void func_001BEE30(int idx, int arg);
    void func_001BEF20(int idx);
    void func_001BEF50(int idx, int n);
};

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
    virtual void dummy29();
    virtual void dummy30();
    virtual void dummy31();
    virtual void dummy32();
    virtual void dummy33();
    virtual void virt34();
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
    void func_001BDBD0(void);
    void func_001BDC50(void);
    void func_001BDC90(void);
    void func_001BDD60(int a);
    void func_001BDDE0(int a);
    void func_001BDB50(void);
    void func_001BDAB0(int a);
    void func_001BD9F0(void);
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
            f30 = f28 + i;
        } else {
            f30 = i;
        }
        cur = arr[f30 - 1];
        f34 = cur;
    } while (cur == 0 || cur->f24 == 0);
    for (i = 0; i < cur->f28; i++) {
        ((UIVirt70 *)cur->f2c[i])->virt28();
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
            f30 = i - count;
        } else {
            f30 = i;
        }
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
                    ((UIVirt70 *)c)->virt34();
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
                    ((UIVirt70 *)c)->virt34();
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

UIPage *UIPage::func_001BE360(int param_1)
{
    ((C_00157600 *)this)->func_00157600(param_1);
    vtbl = (void *)&D_0028D604;
    f130 = 0;
    f134 = 0;
    f138 = 0;
    f128 = 0;
    f13C = 0;
    f140 = 0;
    f12C = 0;
    f144 = 0;
    f168 = 0;
    f16C = 0;
    for (int i = 0; i < 8; i++) {
        f148[i] = 1;
    }
    f27C = 1;
    f170 = 0;
    f274 = 0;
    f278 = 0;
    return this;
}

int UIPage::func_001BEA50(int param_1)
{
    f32 y = f124->axisA[param_1]->value;
    f32 x = f124->axisB[param_1]->value;
    if (x * x + y * y > D_00278C48) {
        if (x < D_00276A90) {
            return 4;
        }
        if (x > D_00278C48) {
            return 6;
        }
        if (y < D_00276A90) {
            return 7;
        }
        if (y > D_00278C48) {
            return 5;
        }
    }
    return -1;
}

void UIPage::func_001BEB00(void)
{
    int i;

    ((UIPageVirt *)this)->virt5();
    f278 = 0;
    for (i = 0; i <= f13C; i++) {
        if (f140[i] != 0) {
            f140[i]->func_001BDBD0();
        }
    }
    if (f16C != 0) {
        f16C->func_001D37C0();
        f16C->func_00157810();
        f16C->virt2();
        f16C = 0;
    }
    D_002EFDB8->f30 = 0;
}

void UIPage::func_001BEB90(int idx)
{
    UIPageSlot *slot = f144[idx];
    int cur = slot->index;
    UIControl *item = slot->item;

    if (item != 0) {
        item->func_001BDC90();
        do {
            cur++;
            if (cur > f13C) {
                cur = 1;
            }
            item = f140[cur];
        } while (item->f24 == 0);
        item->func_001BDC50();
        item->func_001BDD60(item->f30);
        f144[idx]->index = cur;
        f144[idx]->item = item;
    }
}

void UIPage::func_001BEC10(int idx)
{
    UIPageSlot *slot = f144[idx];
    int cur = slot->index;
    UIControl *item = slot->item;

    if (item != 0) {
        item->func_001BDC90();
        do {
            cur--;
            if (cur < 1) {
                cur = f13C;
            }
            item = f140[cur];
        } while (item->f24 == 0);
        item->func_001BDC50();
        item->func_001BDD60(item->f30);
        f144[idx]->index = cur;
        f144[idx]->item = item;
    }
}

void UIPage::func_001BEC90(int idx, int target)
{
    if (f144[idx]->item != 0) {
        UIControl *item = f140[target];
        if (item != 0 && item->f24 != 0) {
            f144[idx]->item->func_001BDC90();
            item->func_001BDC50();
            item->func_001BDD60(item->f30);
            f144[idx]->index = target;
            f144[idx]->item = item;
        }
    }
}

void UIPage::func_001BEE30(int idx, int arg)
{
    f140[idx]->func_001BDD60(arg);
}

void UIPage::func_001BEF20(int idx)
{
    f140[idx]->func_001BDDE0(1);
    f140[idx]->func_001BDB50();
}

void UIPage::func_001BEF50(int idx, int n)
{
    f140[idx]->f2c[n - 1]->func_001BDAB0(1);
    f140[idx]->f2c[n - 1]->func_001BD9F0();
}

