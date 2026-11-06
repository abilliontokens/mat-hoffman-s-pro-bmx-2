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

struct UIPageTitle {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void slot25();
    virtual void slot26();
    virtual void slot27();
    virtual void slot28();
    virtual void slot29();
    virtual void slot30();
    virtual void slot31();
    virtual void slot32();
    virtual void setTitle(char *, int);
};
struct UIPageParser {
    char data[0x4cc];
    void func_00168280();
    int func_00169490(char *, int);
    void func_001691E0();
    int func_00169710(char *);
    void func_00168BE0(char *, char *, char *, int);
    void func_00168C20(char *, int, void *);
};
struct UIPageLoaderObject {
    void *func_001BF3A0(int);
    void *func_001BF430(void *, void *);
    void func_001BF490(void *);
    void *func_001BD9C0(int);
    void *func_001BD980(int);
};
extern "C" void *func_001E8A44(unsigned int);
extern "C" void *func_001E8AA5(unsigned int);
extern "C" int func_001ADCC0(char *, int, char *, ...);
extern char D_0028D768[], D_0028D75C[], D_0028D750[], D_0028D73C[], D_0028D734[];
extern char D_0028D71C[], D_0028D708[], D_0028D6F8[], D_0028D6EC[], D_0027D8FC[], D_0028D6E0[];
extern char D_0028D6D4[], D_0028D6C8[], D_0028D6B0[], D_0028D6A0[], D_0028D694[];

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
    UIPage *func_001BE4F0(char *name, char *file, UIInputState *input);
    void func_001577A0(void *object, int index);
    void func_00157660(void);
    void func_001BE3F0(void);
    UIPage *func_001BE360(int param_1);
    int func_001BEA50(int param_1);
    void func_001BEB00(void);
    void func_001BEB90(int idx);
    void func_001BEC10(int idx);
    void func_001BEC90(int idx, int target);
    void func_001BEE50(int target, int arg, int idx);
    void func_001BEE30(int idx, int arg);
    void func_001BEF20(int idx);
    void func_001BEF50(int idx, int n);
    int func_001BED00(float dt);
    int func_00157A00(float dt);
};

struct UIPadObj {
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
    virtual int virt17();
};

struct UIInputMgr {
    char pad00[0x14];
    UIPadObj *pads[8];
    int func_00136170(int a, int b, int c);
};

struct UIGlobal {
    char pad00[0x8];
    UIInputMgr *f8;
};

extern UIGlobal *D_002A8490;

struct UIPageVirt70 {
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
    virtual void virt28(int idx, int v);
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
    void func_001BE0B0(int n);
    void func_001BDFB0(int n);
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

void UIControl::func_001BDFB0(int n)
{
    UIControl **arr;
    UIControl *cur;
    int start, a, b, c, r, i, count;

    if (f34 != 0) {
        f34->func_001BDA80();
    }
    arr = f2c;
    start = *(volatile int *)&f30;
    do {
        a = f30 + 1;
        f30 = a;
        if (a % n == 1) {
            f30 = a - n;
        }
        cur = arr[f30 - 1];
        f34 = cur;
    } while (cur == 0 || cur->f24 == 0);
    a = f30;
    if (a == start) {
        r = a % n;
        do {
            a = a + 1;
            f30 = a;
            if (a % n == 1) {
                f30 = a - n;
            }
            if (a % n == r) {
                goto restore;
            }
            a = f30;
            count = f28;
            b = a;
            do {
                c = a + n;
                if (c > count) {
                    f30 = c - count;
                } else {
                    f30 = c;
                }
                a = f30;
                cur = f2c[a - 1];
                f34 = cur;
            } while (b != a && (cur == 0 || cur->f24 == 0));
            a = f30;
        } while (b == a);
        if (c == r) {
restore:
            f30 = start;
            f34 = f2c[start - 1];
        }
    }
    cur = f34;
    if (cur != 0) {
        for (i = 0; i < cur->f28; i++) {
            ((UIVirt70 *)cur->f2c[i])->virt28();
        }
    }
}

void UIControl::func_001BE0B0(int n)
{
    UIControl **arr;
    UIControl *cur;
    int start, a, b, c, r, i, count;

    if (f34 != 0) {
        f34->func_001BDA80();
    }
    arr = f2c;
    start = *(volatile int *)&f30;
    do {
        a = f30 - 1;
        f30 = a;
        if (a % n == 0) {
            f30 = a + n;
        }
        cur = arr[f30 - 1];
        f34 = cur;
    } while (cur == 0 || cur->f24 == 0);
    a = f30;
    if (a == start) {
        r = a % n;
        do {
            a = a - 1;
            f30 = a;
            if (a % n == 0) {
                f30 = a + n;
            }
            if (a % n == r) {
                goto restore;
            }
            a = f30;
            count = f28;
            b = a;
            do {
                c = a + n;
                if (c > count) {
                    f30 = c - count;
                } else {
                    f30 = c;
                }
                a = f30;
                cur = f2c[a - 1];
                f34 = cur;
            } while (b != a && (cur == 0 || cur->f24 == 0));
            a = f30;
        } while (b == a);
        if (c == r) {
restore:
            f30 = start;
            f34 = f2c[start - 1];
        }
    }
    cur = f34;
    if (cur != 0) {
        for (i = 0; i < cur->f28; i++) {
            ((UIVirt70 *)cur->f2c[i])->virt28();
        }
    }
}

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

void UIPage::func_001BE3F0(void)
{
    int func_001E8390(...);
    int func_001E891B(...);
    int i;

    vtbl = (void *)&D_0028D604;
    if (f168 != 0) {
        f168->virt2();
    }
    if (f138 != 0) {
        for (i = 0; i <= f134; i++) {
            if (f138[i] != 0) {
                f138[i]->virt2();
            }
            f138[i] = 0;
        }
        func_001E8390(f138);
    }
    if (f140 != 0) {
        for (i = 0; i <= f13C; i++) {
            if (f140[i] != 0) {
                ((UIPageObj *)f140[i])->virt2();
            }
        }
        func_001E8390(f140);
    }
    if (f144 != 0) {
        for (i = 0; i < 8; i++) {
            if (f144[i] != 0) {
                func_001E891B(f144[i]);
            }
        }
        func_001E891B(f144);
    }
    func_00157660();
}

extern "C" char *strcpy(char *, const char *);
UIPage *UIPage::func_001BE4F0(char *name, char *file, UIInputState *input) {
    char title[0x104];
    UIPageParser parser;
    char key[0x80];
    int count, selected, index, n, unused;
    f124 = input; D_002EFDB8->f30 = 0; f274 = 0;
    strcpy((char *)this+0x24,name);
    parser.func_00168280();
    if (!parser.func_00169490(file, 0)) { parser.func_001691E0(); return 0; }
    parser.func_00169710(D_0028D768);
    parser.func_00168BE0(D_0028D750, D_0028D75C, title, 0x104);
    unused=0;
    parser.func_00168C20(D_0028D73C,0,&unused);
    ((UIPageTitle *)this)->setTitle(title,0);
    parser.func_00168C20(D_0028D734,0,&f12C);
    UIPageLoaderObject *obj = (UIPageLoaderObject *)func_001E8A44(0x30);
    obj = obj ? (UIPageLoaderObject *)obj->func_001BF3A0(1) : 0;
    f128 = (u32)obj->func_001BF430(this,f124);
    func_001577A0((void *)f128,-1);
    parser.func_00168C20(D_0028D71C,0,&f130);
    parser.func_00168C20(D_0028D708,0,&f134);
    f138 = (UIPageObj **)func_001E8AA5(f134*4+4);
    parser.func_00168C20(D_0028D6F8,0,&f13C);
    f140 = (UIControl **)func_001E8AA5(f13C*4+4);
    f144 = (UIPageSlot **)func_001E8A44(0x20);
    for (int i=0;i<8;i++) { f144[i]=(UIPageSlot *)func_001E8A44(8); f144[i]->item=0; f144[i]->index=-1; }
    for (int i=0;i<=f134;i++) {
        obj=(UIPageLoaderObject *)func_001E8A44(0x34);
        obj = obj ? (UIPageLoaderObject *)obj->func_001BD9C0(1) : 0;
        f138[i]=(UIPageObj *)obj;
        UIControl *control=(UIControl *)f138[i];
        func_001ADCC0(key,0x80,D_0028D6EC,i);
        control->f24=parser.func_00169710(key);
        if(control->f24) {
            parser.func_00168C20(D_0027D8FC,0,&count);
            control->f28=count;
            if(count>0) {
                control->f2c=(UIControl **)func_001E8AA5(count*4);
                for(int j=0;j<count;j++) {
                    func_001ADCC0(key,0x80,D_0028D6E0,j+1);
                    parser.func_00168C20(key,0,&index);
                    control->f2c[j]=(*(UIControl ***)((char *)f124+0x120))[index-1];
                    UIControl *item=control->f2c[j];
                    if(item) ((UIPageLoaderObject *)f128)->func_001BF490(item);
                }
            }
        }
    }
    for(int i=0;i<=f13C;i++) {
        obj=(UIPageLoaderObject *)func_001E8A44(0x48);
        obj = obj ? (UIPageLoaderObject *)obj->func_001BD980(1) : 0;
        f140[i]=(UIControl *)obj;
        UIControl *control=f140[i];
        control->f24=1;
        func_001ADCC0(key,0x80,D_0028D6D4,i);
        parser.func_00169710(key);
        parser.func_00168C20(D_0028D708,0,&n);
        control->f28=n;
        if(n>0) {
            control->f2c=(UIControl **)func_001E8AA5(n*4);
            for(int j=0;j<n;j++) {
                func_001ADCC0(key,0x80,D_0028D6C8,j+1);
                parser.func_00168C20(key,-1,&index);
                if (index != -1) control->f2c[j]=(UIControl *)f138[index];
                else control->f2c[j]=0;
            }
            control->f30=1; control->f34=control->f2c[0];
        } else { control->f2c=0; control->f30=0; control->f34=0; }
        parser.func_00168C20(D_0028D6B0,0,&selected);
        control->f38=selected;
        if(selected>0) {
            control->f3c=(UIControl **)func_001E8AA5(selected*4);
            for(int j=0;j<selected;j++) {
                func_001ADCC0(key,0x80,D_0028D6A0,j+1);
                parser.func_00168C20(key,0,&index);
                control->f3c[j]=(UIControl *)f138[index];
            }
        } else control->f3c=0;
        parser.func_00168C20(D_0028D694,1,(char *)control+0x40);
    }
    parser.func_001691E0();
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

int UIPage::func_001BED00(float dt)
{
    int i;
    UIPadObj *pad;

    for (i = 0; i < 8; i++) {
        if (f148[i] != 0 && (pad = D_002A8490->f8->pads[i]) != 0 && pad->virt17() != 0) {
            switch (func_001BEA50(i)) {
            case 4:
                *(int *)((char *)f124 + 0x140) = 0;
                ((UIPageVirt70 *)this)->virt28(i, D_002A8490->f8->func_00136170(1, 2, 0));
                f148[i] = 0;
                break;
            case 5:
                *(int *)((char *)f124 + 0x140) = 0;
                ((UIPageVirt70 *)this)->virt28(i, D_002A8490->f8->func_00136170(0, 2, 0));
                f148[i] = 0;
                break;
            case 6:
                *(int *)((char *)f124 + 0x140) = 0;
                ((UIPageVirt70 *)this)->virt28(i, D_002A8490->f8->func_00136170(2, 2, 0));
                f148[i] = 0;
                break;
            case 7:
                *(int *)((char *)f124 + 0x140) = 0;
                ((UIPageVirt70 *)this)->virt28(i, D_002A8490->f8->func_00136170(3, 2, 0));
                f148[i] = 0;
                break;
            }
        } else if (func_001BEA50(i) == -1) {
            f148[i] = 1;
        }
    }
    return func_00157A00(dt);
}

void UIPage::func_001BEE30(int idx, int arg)
{
    f140[idx]->func_001BDD60(arg);
}

void UIPage::func_001BEE50(int target, int arg, int idx)
{
    UIControl *item;
    int i, j;
    int free_;

    for (i = 1; i <= f13C; i++) {
        free_ = 1;
        for (j = 0; j < 8; j++) {
            if (i == f144[j]->index) {
                free_ = 0;
            }
        }
        if (free_ != 0) {
            f140[i]->func_001BDC90();
        }
    }
    item = f140[target];
    item->func_001BDC50();
    item->func_001BDD60(arg);
    f144[idx]->item = f140[target];
    f144[idx]->index = target;
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

