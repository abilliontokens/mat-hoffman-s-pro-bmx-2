/* 15 functions from 0x001A2C00 to 0x001A3BF0, found by Ghidra. */
#include "common.h"

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

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
    virtual void v4(); virtual void v5(); virtual int v6(int a); virtual int v7();
};
struct S_3B10_Elem { S_3B10_Snd *snd; };
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
};
struct S_001A33A0_Mgr {
    void func_0001CE80(S_001A33A0_Snd *snd, S_001A33A0_Vec3 *pos, void *name, int a, int b);
};
extern char D_002A9ECC[];
struct MaterialSoundEmitter {
    char pad0[0x1a4];
    S_001A33A0_Mgr *f1a4;
    char pad1a8[0x1c0 - 0x1a8];
    S_001A33A0_List list1c0;
    char pad1c8[0x1d4 - 0x1c8];
    S_3B10_List a;
    char pad2[0x1e8 - 0x1dc];
    S_3B10_List b;
    char pad3[0x1fc - 0x1f0];
    int f1fc;
    int func_001A3B10(void);
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
    void func_001A2DD0(int id);
    void func_001A2E80(void);
    S_001A2C00_Snd *func_001A2EF0(int id);
    int func_001A2F70(void);
    u32 func_001A2FC0(int a, int b, S_001A2C00_Vec v, int d);
    void func_001A3050(int a);
};

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

void ResponseEmitter::func_001A2DD0(int id)
{
    int i;

    for (i = 0; i < list1d8.count; i++) {
        if (list1d8.at(i)->f0 == id) {
            list1d8.at(i)->f4->v6(0);
            list1d8.removeAt(i);
        }
    }
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

int MaterialSoundEmitter::func_001A33A0(int idx, S_001A33A0_Vec3 pos, int a4, int vol)
{
    if (idx >= 1 && idx <= list1c0.count) {
        int v = 0;
        if (v < vol) {
            v = vol;
        }
        if (v > 100) {
            v = 100;
        }
        vol = v;
        S_001A33A0_Elem *e = list1c0.at(idx - 1);
        if (e->snd->v7() == 0) {
            e->snd->v12(vol * 100 / 100);
            f1a4->func_0001CE80(e->snd, &pos, D_002A9ECC, e->f8, e->fC);
            return e->snd->v5(4);
        }
    }
    return 0;
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

