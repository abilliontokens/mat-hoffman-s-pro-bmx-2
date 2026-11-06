/* 19 functions from 0x000ABD80 to 0x000ACD50, found by Ghidra. */
#include "common.h"

struct C_000AC8F0_Cfg {
    int func_00169710(const char *name);
    int func_00168A10(const char *key, int *dst);
    int func_00168550(const char *key, char *dst, int size);
    int func_00168BE0(const char *k1, const char *k2, char *dst, int size);
};
struct C_000AC8F0_Obj {
    char pad0[0x24];
    char f24[0x3c];
    char f60[0x78];
    int fD8;
    int fDC;
    int fE0;
    int fE4;
    char pad[0x118 - 0xe8];
    C_000AC8F0_Obj *func_001BB470(void *param);
    void func_001BB620(void *a, void *b, const char *c, int d);
};
struct C_000AC8F0_Item {
    int unk0;
    void *unk4;
    char pad8[0x10];
    char name[1];
};
struct C_000AC8F0_List {
    char pad0[0x24];
    int count;
    C_000AC8F0_Item **items;
};
struct C_000AC8F0 {
    char pad0[0x28];
    C_000AC8F0_Cfg *unk28;
    char pad2C[0x3b4 - 0x2c];
    C_000AC8F0_List *unk3B4;
    char pad3B8[0x568 - 0x3b8];
    int unk568;
    C_000AC8F0_Obj **unk56C;
    char pad570[0x5bc - 0x570];
    int unk5BC;
    void func_000AC8F0(void);
};
extern char D_0027CAB0[], D_0027CAA0[], D_00277040[], D_00276980[], D_0027A8C4[], D_0027823C[];
extern char D_0027CA94[], D_0027CA88[], D_0027CA80[], D_0027CA78[], D_00276D7C[], D_0027A330[];
extern char D_000A7E30[];
int func_001EA426(const char *a, const char *b);
void *func_001E83E8(void *block, unsigned int size);

struct C_000AC140 {
    void *vtbl;
    C_000AC140 *func_000AC140();
};

struct C_000A9A70 {
    void func_000A9A70(void *a);
};

struct C_000AB790 {
    void func_000AB790(void *a);
};

struct C_000AB030 {
    void func_000AB030(void *a);
};

struct C_002A829C {
    void func_00161680(void);
};

struct C_002AA6C0 {
    void func_001B2640(void);
};

extern C_002A829C *D_002A829C;
extern C_002AA6C0 *D_002AA6C0;

struct C_000AC700 {
    void *vtbl;
    char pad4[0x53C - 4];
    C_000A9A70 *unk53C;
    int func_000AC700();
};

struct C_000AC730 {
    void *vtbl;
    char pad4[0x540 - 4];
    C_000AB790 *unk540;
    int func_000AC730();
};

struct C_000AC760 {
    void *vtbl;
    char pad4[0x54C - 4];
    C_000AB030 *unk54C;
    void func_000AC760();
};

extern int D_0027C824;

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

extern int D_0027C8E4;
struct S_AC2C0_Block {
    int count;
    void **items;
    int cap;
    int grow;
    u8 flag;
    char pad[3];
    void init(void)
    {
        items = 0;
        count = 0;
        cap = 0;
        grow = 0;
        flag &= 0xfe;
    }
    void alloc(void)
    {
        items = (void **)func_001E8A44(4);
        cap = 16;
        grow = 1;
        flag |= 1;
    }
};
struct C_000AC2C0;
extern C_000AC2C0 *D_002B9120;
struct C_000AC2C0 {
    void *vtbl;
    char pad4[0x4e0 - 4];
    int f4e0;
    int f4e4[8];
    int f504[8];
    char pad524[0x5a8 - 0x524];
    int count;
    void **items;
    int cap;
    int grow;
    u8 flag;
    char pad5b9[3];
    int f5bc;
    void initList(void)
    {
        items = 0;
        count = 0;
        cap = 0;
        grow = 0;
        flag &= 0xfe;
    }
    void allocList(void)
    {
        items = (void **)func_001E8A44(4);
        grow = 1;
        cap = 16;
        flag |= 1;
    }
    void func_00188F20(int flags);
    C_000AC2C0 *func_000AC2C0(int flags);
};

struct C_000AC410_Obj {
    virtual void v0(int flags);
    virtual void v1();
    virtual void v2();
};
struct C_000AC410_Pair {
    void *a;
    void *b;
};
extern void *D_002B7E18;
extern "C" void *__cdecl memset(void *, int, unsigned int);
/* BmxScene destructor */
struct C_000AC410 {
    void *vtbl;
    char pad4[0x4dc - 4];
    void *f4dc;
    char pad4e0[0x524 - 0x4e0];
    C_000AC410_Obj **f524;
    char pad528[4];
    void *f52c;
    char pad530[4];
    C_000AC410_Obj *f534;
    char pad538[0x560 - 0x538];
    int f560;
    char pad564[4];
    int f568;
    C_000AC410_Obj **f56c;
    char pad570[8];
    int f578;
    void *f57c;
    int f580;
    char pad584[4];
    C_000AC410_Pair **f588;
    int f58c;
    void **f590;
    void *f594;
    char pad598[0x5a4 - 0x598];
    void *f5a4;
    int f5a8;
    void **f5ac;
    void *getItem(int i)
    {
        if (f5a8 > 0 && f5ac != 0 && i < f5a8) {
            return f5ac[i];
        }
        return 0;
    }
    void clearItems(void)
    {
        memset(f5ac, 0, f5a8 * sizeof(void *));
        f5a8 = 0;
    }
    void func_0018B5C0(void);
    void func_000AC410(void);
};

struct C_000AC6E0 {
    char pad0[0x538];
    void *field_538;
    C_000AC6E0 *func_000AC6E0(void);
};

C_000AC6E0 *__stdcall func_000A95D0(void *p);

extern int D_0027CABC;
extern int D_0027C41C;

struct C_000ACC40_Item {
    void func_000A8450(void *a);
};

struct C_000ACC40_List {
    char pad0[0x24];
    int count;
    C_000ACC40_Item **items;
};

struct C_000ACC40 {
    char pad0[0x534];
    C_000ACC40_List *field_534;
    void func_000ACC40(void);
};

struct C_000ACC70_Dyn {
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
    virtual int v27(void *a, int b, void *c, int d);
    virtual void v28();
    virtual void v29();
    C_000ACC70_Dyn *func_001B6E70(int v);
    char pad0[0x24 - 4];
    int field_24;
};

struct C_000ACC70 {
    char pad0[0x28];
    int field_28;
    char pad2[0x3b4 - 0x2c];
    C_000ACC70_Dyn *field_3B4;
    char pad3[0x550 - 0x3b8];
    int field_550;
    void func_000ACC70(void);
};

struct C_000ACCF0_Obj {
    void *vtbl;
    char pad4[0x24 - 4];
    int field_24;
    int field_28;
    void func_00157600(int v);
    void func_000A91C0(int v);
};

struct C_000ACCF0 {
    char pad0[0x28];
    int field_28;
    char pad2[0x538 - 0x2c];
    C_000ACCF0_Obj *field_538;
    void func_000ACCF0(void);
};

extern int D_0027C874;
extern int D_0027AE04;

struct C_000AC780_Quad {
    int a, b, c, d;
};

/* PipZmask */
struct C_000AC780_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    void func_00157600(int v);
    char pad0[0x24 - 4];
    int field_24;
    int field_28;
    int field_2C;
    int field_30;
};

struct C_000AC780 {
    char pad0[0x558];
    C_000AC780_Obj *field_558;
    void func_000AC780(int a, int b, int c, int d);
};

/* BmxDynamicModels */
struct C_000AC7F0_Dyn {
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
    virtual int v27(int arg);
    virtual void v28();
    virtual void v29();
    C_000AC7F0_Dyn *func_001B5830(int v);
    char pad0[0x24 - 4];
    int field_24;
};

struct C_0005C1D0 {
    int func_0005C1D0(int v);
};

struct C_002A8490_B {
    int field_0;
    char pad4[0x48 - 4];
    int field_48;
    char pad4C[0x2c0 - 0x4c];
    C_0005C1D0 *field_2C0;
};

struct C_002A8490_C {
    char pad0[0x1dc];
    int field_1DC;
};

struct C_002A8490 {
    char pad0[0x2e0];
    C_002A8490_B *field_2E0;
    char pad2E4[0x2f0 - 0x2e4];
    C_002A8490_C *field_2F0;
};
extern C_002A8490 *D_002A8490;

struct C_000AC7F0 {
    char pad0[0x28];
    int field_28;
    char pad2[0x3ac - 0x2c];
    C_000AC7F0_Dyn *field_3AC;
    void func_000AC7F0(void);
};

/* scene helper object */
struct C_000AC890_Obj {
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
    C_000AC890_Obj *func_000B11C0(int v);
    void func_000B4850(int v);
};
extern C_000AC890_Obj *D_002B9134;

struct C_000AC890 {
    char pad0[0x28];
    int field_28;
    void func_000A26B0();
    void func_000AC890(void);
};

extern int D_0027C868;
extern int D_0027C858;
extern int D_0027C848;
extern int D_0027C83C;
extern int D_0027C82C;
extern char D_00275630;
extern "C" int func_001ADCC0(char *buf, int size, void *fmt, ...);

struct C_000AC160_P1 {
    void func_00168C20(void *key, int v, void *dst);
    void func_00168C50(void *key, int v, void *dst);
    void func_00168BE0(void *key, void *def, char *dst, int size);
};

/* LayeredMusicTriggerAction */
struct C_000AC160 {
    char pad0[0x10c];
    int field_10C;
    int field_110;
    int field_114;
    char field_118[0x78];
    int field_190;
    int field_194;
    char field_198[1][0x78];
    void func_001B5A00(void *a, void *b);
    void func_000AC160(C_000AC160_P1 *a, void *b);
};

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

C_000AC140 *C_000AC140::func_000AC140()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C824;
    return this;
}

C_000AC2C0 *C_000AC2C0::func_000AC2C0(int flags)
{
    int i;
    S_AC2C0_Block *l0 = (S_AC2C0_Block *)&count;
    func_00188F20(flags);
    vtbl = (void *)&D_0027C8E4;
    l0->init();
    f4e0 = 0;
    for (i = 0; i < 8; i++) {
        f4e4[i] = 0;
        f504[i] = 0;
    }
    *(int *)((char *)this + 0x528) = 0;
    *(int *)((char *)this + 0x530) = 0;
    *(int *)((char *)this + 0x534) = 0;
    *(int *)((char *)this + 0x564) = 0;
    *(int *)((char *)this + 0x524) = 0;
    *(int *)((char *)this + 0x560) = 0;
    *(int *)((char *)this + 0x52c) = 0;
    *(int *)((char *)this + 0x568) = 0;
    *(int *)((char *)this + 0x56c) = 0;
    *(int *)((char *)this + 0x598) = 0;
    *(int *)((char *)this + 0x59c) = 0;
    *(int *)((char *)this + 0x570) = 0;
    *(int *)((char *)this + 0x578) = 0;
    *(int *)((char *)this + 0x580) = 0;
    *(int *)((char *)this + 0x544) = 0;
    *(int *)((char *)this + 0x55c) = 0;
    *(int *)((char *)this + 0x588) = 0;
    *(int *)((char *)this + 0x57c) = 0;
    *(int *)((char *)this + 0x584) = 0;
    *(int *)((char *)this + 0x58c) = 0;
    *(int *)((char *)this + 0x590) = 0;
    *(int *)((char *)this + 0x5a0) = -1;
    *(int *)((char *)this + 0x5a4) = 0;
    l0->alloc();
    D_002B9120 = this;
    f5bc = 0;
    *(int *)((char *)this + 0x548) = 0;
    *(int *)((char *)this + 0x594) = 0;
    *(int *)((char *)this + 0x558) = 0;
    *(int *)((char *)this + 0x554) = 1;
    return this;
}

void C_000AC410::func_000AC410(void)
{
    int i;
    S_AC2C0_Block *l0 = (S_AC2C0_Block *)&f5a8;

    vtbl = (void *)&D_0027C8E4;
    D_002B9120 = 0;
    if (f534 != 0) {
        f534->v2();
        f534 = 0;
    }
    if (f56c != 0) {
        for (i = 0; i < f568; i++) {
            if (f56c[i] != 0) {
                f56c[i]->v2();
            }
        }
        func_001E891B(f56c);
    }
    if (f52c != 0) {
        func_001E891B(f52c);
        f52c = 0;
    }
    if (f578 > 0) {
        func_001E891B(f57c);
    }
    for (i = 0; i < f560; i++) {
        if (f524[i] != 0) {
            f524[i]->v0(1);
        }
        f524[i] = 0;
    }
    if (f524 != 0) {
        func_001E891B(f524);
        f524 = 0;
    }
    if (f580 > 0) {
        for (i = 0; i < f580; i++) {
            func_001E891B(f588[i]->b);
            func_001E891B(f588[i]);
        }
        func_001E891B(f588);
    }
    if (f590 != 0) {
        for (i = 0; i < f58c; i++) {
            func_001E891B(f590[i]);
        }
        func_001E891B(f590);
        f590 = 0;
        f58c = 0;
    }
    if (f4dc != 0) {
        func_001E891B(f4dc);
    }
    for (i = 0; i < l0->count; i++) {
        void *p = getItem(i);
        if (p != 0) {
            func_001E891B(p);
        }
    }
    memset(l0->items, 0, l0->count * 4);
    l0->count = 0;
    if (f5a4 != 0) {
        func_001E891B(f5a4);
        f5a4 = 0;
    }
    if (D_002B9134 != 0) {
        D_002B9134 = 0;
    }
    if (D_002B7E18 != 0) {
        D_002B7E18 = 0;
    }
    if (f594 != 0) {
        func_001E891B(f594);
        f594 = 0;
    }
    func_001E891B(f5ac);
    func_0018B5C0();
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

int C_000AC700::func_000AC700()
{
    if (unk53C != 0) {
        unk53C->func_000A9A70(this);
        D_002A829C->func_00161680();
        D_002AA6C0->func_001B2640();
    }
    return 0;
}

int C_000AC730::func_000AC730()
{
    if (unk540 != 0) {
        unk540->func_000AB790(this);
        D_002A829C->func_00161680();
        D_002AA6C0->func_001B2640();
    }
    return 0;
}

void C_000AC760::func_000AC760()
{
    if (unk54C != 0) {
        unk54C->func_000AB030(this);
    }
}

void C_000AC7F0::func_000AC7F0(void)
{
    if (D_002A8490->field_2F0->field_1DC == 0 && D_002A8490->field_2E0->field_48 == 0xd) {
        if (D_002A8490->field_2E0->field_0 != 1) {
            return;
        }
        if (D_002A8490->field_2E0->field_2C0->func_0005C1D0(0xf) != 0) {
            return;
        }
    }
    if (field_3AC == 0) {
        C_000AC7F0_Dyn *p = (C_000AC7F0_Dyn *)func_001E8A44(0x2c);
        if (p != 0) {
            p->func_001B5830(1);
            *(void **)p = &D_0027AE04;
        } else {
            p = 0;
        }
        field_3AC = p;
    }
    if (field_3AC->v27(field_28) != 0) {
        return;
    }
    if (field_3AC->field_24 != 0) {
        return;
    }
    field_3AC->v2();
    field_3AC = 0;
}

void C_000AC890::func_000AC890(void)
{
    if (D_002B9134 == 0) {
        C_000AC890_Obj *p = (C_000AC890_Obj *)func_001E8A44(0x54);
        if (p != 0) {
            p = p->func_000B11C0(1);
        } else {
            p = 0;
        }
        D_002B9134 = p;
        p->v10();
    }
    D_002B9134->func_000B4850(field_28);
    if (D_002A8490->field_2E0->field_0 == 1) {
        func_000A26B0();
    }
}

void C_000AC8F0::func_000AC8F0(void)
{
    if (unk28->func_00169710(D_0027CAB0)) {
        int count;
        unk28->func_00168A10(D_0027CAA0, &count);
        if (count > 0) {
            int start, end;
            if (!unk56C) {
                start = 0;
                end = unk568 = count;
                unk56C = (C_000AC8F0_Obj **)func_001E8A44(count * 4);
            } else {
                start = unk568;
                end = unk568 = count + start;
                unk56C = (C_000AC8F0_Obj **)func_001E83E8(unk56C, end * 4);
            }
            for (int i = start; i < end; i++) {
                char section[120];
                char first[120], second[120];
                char mode[40];
                int searching = 1;
                func_001ADCC0(section, 120, D_00277040, i - start + searching);
                C_000AC8F0_Obj *obj = (C_000AC8F0_Obj *)func_001E8A44(0x118);
                if (obj) obj = obj->func_001BB470((void *)1);
                else obj = 0;
                unk56C[i] = obj;
                if (unk28->func_00169710(section)) {
                    unk28->func_00168550(D_00276980, unk56C[i]->f24, 0x3b);
                    unk28->func_00168550(D_0027A8C4, unk56C[i]->f60, 0x77);
                    unk28->func_00168A10(D_0027823C, &unk56C[i]->fDC);
                    unk28->func_00168550(D_0027CA94, first, 120);
                    unk28->func_00168550(D_0027CA88, second, 120);
                    unk56C[i]->fD8 = i;
                    unk28->func_00168BE0(D_0027CA80, &D_00275630, mode, -1);
                    if (!func_001EA426(mode, D_0027CA78)) unk56C[i]->fE4 = 1;
                    else if (!func_001EA426(mode, D_00276D7C)) unk56C[i]->fE4 = 2;
                    else if (!func_001EA426(mode, D_0027A330)) unk56C[i]->fE4 = 3;
                    else unk56C[i]->fE4 = 0;
                    searching = 1;
                    int n = unk3B4->count;
                    void *a = 0, *b = 0;
                    for (int j = 0; j < n && searching; j++) {
                        char *name = unk3B4->items[j]->name;
                        if (func_001EA426(name, &D_00275630)) {
                            if (!func_001EA426(name, first)) a = unk3B4->items[j]->unk4;
                            else if (!func_001EA426(name, second)) b = unk3B4->items[j]->unk4;
                            if (a && b) searching = 0;
                        }
                    }
                    if (a && b) unk56C[i]->func_001BB620(a, b, D_000A7E30, 0);
                }
            }
            unk5BC = unk568;
        }
    }
}

void C_000ACC40::func_000ACC40(void)
{
    C_000ACC40_List *list = field_534;
    if (list != 0) {
        for (int i = 0; i < list->count; i++) {
            list->items[i]->func_000A8450(this);
        }
    }
}

void C_000ACC70::func_000ACC70(void)
{
    if (field_3B4 == 0) {
        C_000ACC70_Dyn *p = (C_000ACC70_Dyn *)func_001E8A44(0x2c);
        if (p != 0) {
            p = p->func_001B6E70(1);
        } else {
            p = 0;
        }
        field_3B4 = p;
    }
    void *local = (void *)&D_0027CABC;
    if (field_3B4->v27(this, field_28, &local, field_550 + 0x124) != 0) {
        return;
    }
    if (field_3B4->field_24 != 0) {
        return;
    }
    field_3B4->v2();
    field_3B4 = 0;
}

void C_000ACCF0::func_000ACCF0(void)
{
    if (field_538 == 0) {
        C_000ACCF0_Obj *p = (C_000ACCF0_Obj *)func_001E8A44(0x2c);
        if (p != 0) {
            p->func_00157600(1);
            p->vtbl = (void *)&D_0027C41C;
            p->field_24 = 0;
            p->field_28 = 0;
        } else {
            p = 0;
        }
        field_538 = p;
    }
    field_538->func_000A91C0(field_28);
}

