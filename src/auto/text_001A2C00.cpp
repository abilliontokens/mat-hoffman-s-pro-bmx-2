/* 15 functions from 0x001A2C00 to 0x001A3BF0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

static inline int mse_max(int a, int b) { volatile int r = a < b ? b : a; return r; }
static inline int mse_min(volatile int a, int b) { volatile int r = a > b ? b : a; return r; }

struct S_001A2C00_Vec {
    int x;
    int y;
    int z;
    int w;
};

struct S_001A2C00_Snd {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6(int a);
    virtual int v7();
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
    virtual void v23(int a, int b, S_001A2C00_Vec v, int d);
};

struct S_3B10_Snd {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual int v5(int a); virtual int v6(int a); virtual int v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(int a);
    virtual void v13();
    virtual void v14(int a);
};
struct S_3B10_Elem {
    S_3B10_Snd *snd;
    char pad4[0x20];
    int f24;
    int f28;
};
struct S_3B10_List {
    int count;
    S_3B10_Elem **items;
    S_3B10_Elem *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }
    void Clear()
    {
        memset(items, 0, count * 4);
        count = 0;
    }
};
struct S_001A33A0_Vec3 {
    int x;
    int y;
    int z;
};
struct S_001A33A0_Snd {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual int v5(int a); virtual void v6(); virtual int v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(int a);
    virtual void v13();
    virtual void v14(int a);
};
struct S_001A33A0_Elem {
    S_001A33A0_Snd *snd;
    int f4;
    int f8;
    int fC;
};
struct S_001A33A0_List {
    int count;
    S_001A33A0_Elem **items;
    S_001A33A0_Elem *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }
    void Clear()
    {
        memset(items, 0, count * 4);
        count = 0;
    }
};
struct S_001A33A0_Mgr {
    void func_0001CE80(S_001A33A0_Snd *snd, S_001A33A0_Vec3 *pos, void *name, int a, int b);
};
extern char D_002A9ECC[];
struct V_001A34D0 {
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
 virtual int v43(int a);
   virtual int v44(S_001A2C00_Vec pos, int a5, int a6);
  virtual void v45(int a, int b, int *c, int *d);
 virtual void v46();
 virtual void v47(int a);
};
extern int D_0028B6BC;
void *func_001E8A44(int size);
struct S_30D0_Block {
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
struct MaterialSoundEmitter {
    void *vtbl;
    char pad4[0x1a0];
    S_001A33A0_Mgr *f1a4;
    char pad1a8[0x1c0 - 0x1a8];
    S_001A33A0_List list1c0;
    int f1c8;
    int f1cc;
    u8 f1d0;
    char pad1d1[0x1d4 - 0x1d1];
    S_3B10_List a;
    int f1dc;
    int f1e0;
    u8 f1e4;
    char pad1e5[0x1e8 - 0x1e5];
    S_3B10_List b;
    int f1f0;
    int f1f4;
    u8 f1f8;
    char pad1f9[0x1fc - 0x1f9];
    int f1fc;
    int f200;
    MaterialSoundEmitter(int arg0, int arg1, int arg2, int arg3);
    void initA(void)
    {
        list1c0.items = 0;
        list1c0.count = 0;
        f1c8 = 0;
        f1cc = 0;
        f1d0 &= 0xfe;
    }
    void initB(void)
    {
        a.items = 0;
        a.count = 0;
        f1dc = 0;
        f1e0 = 0;
        f1e4 &= 0xfe;
    }
    void initC(void)
    {
        b.items = 0;
        b.count = 0;
        f1f0 = 0;
        f1f4 = 0;
        f1f8 &= 0xfe;
    }
    int func_001A34D0(int idx, S_001A33A0_Vec3 pos, int a5, int a6, int vol, int flag);
    int func_001A3610(int idx, S_001A2C00_Vec pos, int a5, int a6, int flag);
    int func_001A3B10(void);
    int func_001A3790(int idx);
    void func_001A3210(void);
    int func_001A33A0(int idx, S_001A33A0_Vec3 pos, int a4, int vol);
};

extern int D_0028B624;
void *func_001E8A44(int size);
struct C_001A1680 {
    void func_001A1680(int a, int b, int c, int d);
};

struct C_00157A00 {
    void func_00157A00(int a);
};

struct S_001A2C00_Elem {
    int f0;
    S_001A2C00_Snd *f4;
};

struct S_001A2C00_List {
    int count;
    S_001A2C00_Elem **items;

    S_001A2C00_Elem *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }

    void removeAt(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            items[i] = items[count - 1];
            count--;
        }
    }

    void Clear()
    {
        memset(items, 0, count * 4);
        count = 0;
    }
};

extern int D_0028B624;
extern int D_0028B3C4;

struct C_00157660 {
    void func_00157660(void);
};

struct S_001A2CF0_Mgr {
    void func_0001D420(void *emitter);
};

struct S_001A2CF0_Global {
    char pad0[4];
    S_001A2CF0_Mgr *f4;
};

extern S_001A2CF0_Global *D_002A8490;

void func_001E891B(void *p);

struct ResponseEmitter {
    void *vtbl;
    char pad4[0x19c];
    u8 f1a0;
    char pad1a1[0x1b4 - 0x1a1];
    int f1b4;
    char pad1b8[0x1bc - 0x1b8];
    S_001A2C00_Snd *f1bc;
    int f1c0;
    S_001A2C00_List list1c4;
    int f1cc;
    int f1d0;
    u8 f1d4;
    char pad1d5[0x1d8 - 0x1d5];
    S_001A2C00_List list1d8;
    int f1e0;
    int f1e4;
    u8 f1e8;
    char pad1e9[0x1ec - 0x1e9];
    int f1ec;
    ResponseEmitter(int a, int b, int c, int d);
    void initA(void)
    {
        list1c4.items = 0;
        list1c4.count = 0;
        f1cc = 0;
        f1d0 = 0;
        f1d4 &= 0xfe;
    }
    void initB(void)
    {
        list1d8.items = 0;
        list1d8.count = 0;
        f1e0 = 0;
        f1e4 = 0;
        f1e8 &= 0xfe;
    }
    void func_001A2CF0(void);
    int func_001A2DD0(int id);
    void func_001A2E80(void);
    S_001A2C00_Snd *func_001A2EF0(int id);
    int func_001A2F70(void);
    u32 func_001A2FC0(int a, int b, S_001A2C00_Vec v, int d);
    void func_001A3050(int a);
};

ResponseEmitter::ResponseEmitter(int a, int b, int c, int d)
{
    S_30D0_Block *l0 = (S_30D0_Block *)&list1c4;
    S_30D0_Block *l1 = (S_30D0_Block *)&list1d8;
    ((C_001A1680 *)this)->func_001A1680(a, b, c, d);
    vtbl = (void *)&D_0028B624;
    l0->init();
    l1->init();
    l0->alloc();
    l1->alloc();
    f1ec = 0;
    f1c0 = 0;
}

void ResponseEmitter::func_001A2CF0(void)
{
    int i;

    vtbl = (void *)&D_0028B624;
    for (i = 0; i < list1c4.count; i++) {
        S_001A2C00_Elem *e = list1c4.at(i);
        if (e != 0) {
            func_001E891B(e);
        }
    }
    list1c4.Clear();
    list1d8.Clear();
    if (f1ec != 0) {
        D_002A8490->f4->func_0001D420(this);
    }
    func_001E891B(list1d8.items);
    func_001E891B(list1c4.items);
    vtbl = (void *)&D_0028B3C4;
    ((C_00157660 *)this)->func_00157660();
}

int ResponseEmitter::func_001A2DD0(int id)
{
    int i;
    int r = 0;

    for (i = 0; i < list1d8.count; i++) {
        if (list1d8.at(i)->f0 == id) {
            r = list1d8.at(i)->f4->v6(0);
            list1d8.removeAt(i);
        }
    }
    return r;
}

void ResponseEmitter::func_001A2E80(void)
{
    int i;

    for (i = 0; i < list1d8.count; i++) {
        S_001A2C00_Snd *s = list1d8.at(i)->f4;
        if (s != 0) {
            s->v6(0);
        }
        list1d8.removeAt(i);
    }
}

S_001A2C00_Snd *ResponseEmitter::func_001A2EF0(int id)
{
    int i;

    for (i = 0; i < list1c4.count; i++) {
        if (list1c4.at(i)->f0 == id) {
            return list1c4.at(i)->f4;
        }
    }
    return 0;
}

int ResponseEmitter::func_001A2F70(void)
{
    f1c0 = 0;
    func_001A2E80();
    f1a0 &= 0xef;
    if (f1bc == 0) {
        return 0;
    }
    if (f1b4 != 0) {
        f1b4 = 0;
    }
    return f1bc->v6(0);
}

u32 ResponseEmitter::func_001A2FC0(int a, int b, S_001A2C00_Vec v, int d)
{
    int i;

    for (i = 0; i < list1d8.count; i++) {
        S_001A2C00_Snd *s = list1d8.at(i)->f4;
        if (s != 0) {
            s->v23(a, b, v, d);
        }
    }
    return 1;
}

void ResponseEmitter::func_001A3050(int a)
{
    int i;

    for (i = 0; i < list1d8.count; i++) {
        S_001A2C00_Snd *s = list1d8.at(i)->f4;
        if (s != 0 && s->v7() == 0) {
            list1d8.removeAt(i);
        }
    }
    ((C_00157A00 *)this)->func_00157A00(a);
}

void MaterialSoundEmitter::func_001A3210(void)
{
    int i;

    vtbl = (void *)&D_0028B6BC;
    for (i = 0; i < list1c0.count; i++) {
        S_001A33A0_Elem *e = list1c0.at(i);
        if (e != 0) {
            func_001E891B(e);
        }
    }
    list1c0.Clear();
    for (i = 0; i < a.count; i++) {
        S_3B10_Elem *e = a.at(i);
        if (e != 0) {
            func_001E891B(e);
        }
    }
    a.Clear();
    for (i = 0; i < b.count; i++) {
        S_3B10_Elem *e = b.at(i);
        if (e != 0) {
            func_001E891B(e);
        }
    }
    b.Clear();
    func_001E891B(b.items);
    func_001E891B(a.items);
    func_001E891B(list1c0.items);
    vtbl = (void *)&D_0028B3C4;
    ((C_00157660 *)this)->func_00157660();
}

MaterialSoundEmitter::MaterialSoundEmitter(int arg0, int arg1, int arg2, int arg3)
{
    S_30D0_Block *l0 = (S_30D0_Block *)&list1c0;
    S_30D0_Block *l1 = (S_30D0_Block *)&a;
    S_30D0_Block *l2 = (S_30D0_Block *)&b;
    ((C_001A1680 *)this)->func_001A1680(arg0, arg1, arg2, arg3);
    vtbl = (void *)&D_0028B6BC;
    l0->init();
    l1->init();
    l2->init();
    l0->alloc();
    l1->alloc();
    l2->alloc();
    f200 = 1;
    f1fc = -1;
}

int MaterialSoundEmitter::func_001A33A0(int idx, S_001A33A0_Vec3 pos, int a4, int vol)
{
    if (idx >= 1 && idx <= list1c0.count) {
        int v = AsmMaxI(0, vol);
        v = v;
        vol = AsmMinI(v, 100);
        S_001A33A0_Elem *e = list1c0.at(idx - 1);
        if (e->snd->v7() == 0) {
            e->snd->v12(vol * 100 / 100);
            f1a4->func_0001CE80(e->snd, &pos, D_002A9ECC, e->f8, e->fC);
            return e->snd->v5(4);
        }
    }
    return 0;
}

int MaterialSoundEmitter::func_001A34D0(int idx, S_001A33A0_Vec3 pos, int a5, int a6, int vol, int flag)
{
    S_3B10_Elem *e;
    V_001A34D0 *v = (V_001A34D0 *)this;
    int volume;
    int pitch;

    if (flag != 0) {
        if (idx < 1 || idx > a.count) {
            return 0;
        }
    } else {
        if (idx < 1 || idx > b.count) {
            return 0;
        }
    }
    if ((f1fc < 0 || f200 != flag || f1fc != idx) && v->v43(f1fc) != 0) {
        v->v47(f1fc);
    }
    if (flag != 0) {
        e = a.at(idx - 1);
    } else {
        e = b.at(idx - 1);
    }
    if (e->snd->v7() != 0) {
        return 0;
    }
    f1fc = idx;
    f200 = flag;
    v->v45(idx, a6, &pitch, &volume);
    e->snd->v12(volume * vol / 100);
    e->snd->v14(pitch);
    f1a4->func_0001CE80((S_001A33A0_Snd *)e->snd, &pos, D_002A9ECC, e->f24, e->f28);
    return e->snd->v5(4);
}

int MaterialSoundEmitter::func_001A3610(int idx, S_001A2C00_Vec pos, int a5, int a6, int flag)
{
    S_3B10_Elem *e;
    V_001A34D0 *v = (V_001A34D0 *)this;
    int vol;
    int pitch;

    if (flag != 0) {
        if (idx < 1 || idx > a.count) {
            return 0;
        }
    } else {
        if (idx < 1 || idx > b.count) {
            return 0;
        }
    }
    if ((f1fc < 0 || f200 != flag || f1fc != idx) && v->v43(f1fc) != 0) {
        v->v47(f1fc);
    } else if (f1fc > -1) {
        return v->v44(pos, a5, a6);
    }
    if (flag != 0) {
        e = a.at(idx - 1);
    } else {
        e = b.at(idx - 1);
    }
    if (e->snd->v7() != 0) {
        return 0;
    }
    f1fc = idx;
    f200 = flag;
    v->v45(idx, a5, &pitch, &vol);
    e->snd->v12(vol * a6 / 100);
    e->snd->v14(pitch);
    f1a4->func_0001CE80((S_001A33A0_Snd *)e->snd, (S_001A33A0_Vec3 *)&pos, D_002A9ECC, e->f24, e->f28);
    return e->snd->v5(4);
}

int MaterialSoundEmitter::func_001A3790(int idx)
{
    if (f200 != 0) {
        if (idx < 1 || idx > a.count) {
            return 0;
        }
        return a.at(idx - 1)->snd->v7();
    } else {
        if (idx < 1 || idx > b.count) {
            return 0;
        }
        return b.at(idx - 1)->snd->v7();
    }
}

int MaterialSoundEmitter::func_001A3B10(void)
{
    int i;
    for (i = 1; i <= a.count; i++) {
        S_3B10_Snd *s = a.at(i - 1)->snd;
        if (s->v7()) {
            s->v6(0);
        }
    }
    for (i = 1; i <= b.count; i++) {
        S_3B10_Snd *s = b.at(i - 1)->snd;
        if (s->v7()) {
            s->v6(0);
        }
    }
    f1fc = -1;
    return 1;
}

