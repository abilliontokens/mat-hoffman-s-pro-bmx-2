/* 41 functions from 0x00094620 to 0x00095620, found by Ghidra. */
#include "common.h"
#include <string.h>
/* one node of the path at +0x50: 0x44 bytes, the part at +0x20 is what
   func_00094810 hands out */
struct S_00094620_NodeHead {
    char pad0[0x20];
};

/* the part of a node func_00094810 hands out, at +0x20 */
struct S_00094620_NodeTail {
    int unk0;
    char pad4[0x20];
};

struct S_00094620_Node : S_00094620_NodeHead, S_00094620_NodeTail {
    int *Item(void) { return &unk0; }
};

/* the path the camera walks: a node array and its length */
struct S_00094620_Path {
    char pad0[0x34];
    S_00094620_Node *unk34;
    char pad38[0x70];
    int unkA8;
    S_00094620_Node *Node(int node) { return &unk34[node]; }
    S_00094620_Node &NodeAt(int node) { return unk34[node]; }
    void func_001CEFD0(int node);
};

/* the game globals: unk2E0 is the record func_00094760 writes the node into */
struct S_00094620_Record {
    char pad0[0x468];
    int unk468;
};

struct C_00094760 {
    char pad0[0x34];
    int unk34;
    char pad38[0x18];
    S_00094620_Path *unk50;
    int func_00094760(void);
    int func_000947B0(void);
    void func_000947F0(int node);
    int *func_00094810(int node);
};

/* an item of the list at +0x58; the accessors below reach its two flags */
struct S_00095160_Item {
    char pad0[0x64];
    int f64;
    int f68;
};

/* f54 is how many items the list has, f58 the array of pointers; Item() is the
   bounds-checked accessor the four accessors inline */
struct C_00095160 {
    char pad0[0x34];
    int f34;
    char pad38[0x1c];
    int f54;
    S_00095160_Item **f58;
    S_00095160_Item *Item(int i)
    {
        int n = *(volatile int *)&f54;

        if (n > 0 && f58 != 0 && i < n) {
            return f58[i];
        }
        return 0;
    }
    int func_00095160(int index);
    int func_00095200(int index);
    int func_00095250(int index);
    int func_000952A0(int index);
};

struct C_00094F00 {
    char pad0[0x7C];
    int unk7C;
    int func_00094F00(void);
};

struct C_00094890 {
    char pad0[0x38];
    int unk38;
    int func_00094890(void);
};

struct C_001B17D0 {
    void func_001B17D0(int v);
};

/* Per-slot settings table (offsets are the game's). */
struct S_00094620_Cfg {
    char pad0[0xcd8];
    int fCD8;
    char padCDC[4];
    int fCE0;
    char padCE4[0x57c];
    int f1260;
    char pad1264[4];
    int f1268;
    char pad126C[4];
    int f1270;
};

struct S_00094620_Mid {
    int f0;
    S_00094620_Cfg *f4;
};

struct S_00094620_Root {
    char pad0[0x2e0];
    S_00094620_Record *f2e0;
    char pad2e4[4];
    S_00094620_Mid *f2e8;
};

extern S_00094620_Root *D_002A8490;

struct C_00093140 {
    char pad0[0x24];
    C_001B17D0 *f24;
    C_001B17D0 *f28;
    C_001B17D0 *f2c;
    void func_00093140(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    void func_00094620(int a1, int a2, int a3, int a4, int a5, int a6);
    void func_00094690(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct C_001D35E0 {
    void func_001D35E0(void);
};

struct C_00157660 {
    void func_00157660(void);
};

void func_001E891B(void *p);

/* BmxMemoryCard */
struct C_00094710 {
    void *vtbl;
    char pad4[0x40];
    C_001D35E0 *f44;
    void *func_00094710(unsigned int flags);
};

/* object held at C_00094A00::f50, called through vtable slot 37 */
struct S_00094A00_Obj {
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
    virtual void v18(int a);
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
    virtual int v30(int a, int b);
    virtual void v31();
    virtual int v32(int a, int b);
    virtual int v33(int a);
    virtual int v34();
    virtual void v35();
    virtual int v36(int a, int b, int c);
    virtual int v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual int v41(int a);
    char pad4[0x30];
    S_00094620_Node *unk34;
    char pad38[0x70];
    int unkA8;
    int func_001CD3B0(int v);
};

struct C_001CD7D0 {
    void func_001CD7D0(void *p);
};

extern float D_00275544;

/* element of C_00094A00::f84, called through vtable slots 5, 6, 7, 9, 12, 16 */
struct S_00094A00_Child {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5(int a);
    virtual int v6(int a);
    virtual int v7(void);
    virtual void v8();
    virtual void v9(int a);
    virtual void v10();
    virtual void v11();
    virtual int v12(int a);
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual int v16(int a, int b, int c);
    char pad4[0x1a8];
    int f1AC;
};

struct C_00094A00 {
    char pad0[0x24];
    int f24;
    C_001CD7D0 *f28;
    void *f2C;
    int f30;
    char pad34[0x10];
    int f44;
    char pad48[8];
    S_00094A00_Obj *f50;
    char pad54[0x28];
    int f7C;
    char pad80[4];
    S_00094A00_Child *f84[1];
    int func_00094C60(void);
    int func_00094D00(void);
    int func_00094D90(int a);
    int func_00094EE0(void);
    void func_00094A00(void);
    int func_00094960(int a);
    void func_00094990(float a);
    void func_000949B0(float a, int b, int c);
    void func_00094C00(void);
    int func_00094E10(int idx, int a);
    int func_00094E40(int idx, int a, int b);
    int func_00094E70(int *ids, int count, int a, int b);
};

/* one entry of BmxMusicManager's list at +0x54: the flags at +0x64/+0x68 are what
   func_00095110 / func_000951B0 set */
struct S_00095060_Track {
    char pad0[0x64];
    int f64;
    int f68;
};

/* growable array of pointers: count at +0, items at +4 */
struct C_00094F10 {
    int count;
    S_00095060_Track **items;
    S_00095060_Track *at(int i)
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
    /* the out-of-line copy of at() */
    S_00095060_Track *func_00037820(int i);
    void func_00094F10(void);
};

extern int D_0027A23C;

/* growable array of pointers, count at +0, items at +4 */
struct S_00095060_PtrList {
    int count;
    void **items;
    void *at(int i)
    {
        if (count > 0 && items != 0 && i < count) {
            return items[i];
        }
        return 0;
    }
};

extern char D_00275630[];
extern char D_0027A2A8[];

/* a node of the path at C_00095060::f50: 0x44 bytes, a table of 0x18-byte
   entries and its length */
struct S_00095390_Entry {
    int f0;
    char *f4;
    char pad8[0x10];
};

struct S_00095390_Node {
    S_00095390_Entry *entries;
    int count;
    char pad8[0x3c];
};

/* BmxMusicManager */
struct C_00095060 {
    void *vtbl;
    char pad4[0x2c];
    int f30;
    int f34;
    int f38;
    char pad3C[0x14];
    S_00094A00_Obj *f50;
    C_00094F10 tracks;
    char pad5C[0xc];
    S_00095060_PtrList ids;
    char pad70[0xc];
    int f7C;
    int f80;
    S_00094A00_Child *f84[1];
    int func_000952F0(void);
    char *func_00095390(int index);
    char *func_00095430(int index);
    int func_00095490(int index);
    void func_00095060(void);
    int func_00095110(int n);
    int func_000951B0(int n);
    int func_00095520(int n);
    int func_000955C0(void *id);
};

/* object at C_00094840::unk28, called through vtable slot 31 */
struct S_00094840_Sub {
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
    virtual void v31(int a, int b);
};

/* BmxMusicManager */
struct C_00094840 {
    char pad0[0x28];
    S_00094840_Sub *unk28;
    char pad2C[8];
    int unk34;
    char pad38[8];
    int unk40;
    int unk44;
    char pad48[4];
    float unk4C;
    S_00094A00_Obj *unk50;
    int unk54;
    int func_00094840(void);
    int func_00094870(void);
    void func_000948A0(int a);
    int func_00094900(float a, int b, int c);
};


void C_00093140::func_00094620(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->fCD8);
    f28->func_001B17D0(D_002A8490->f2e8->f4->fCE0);
    func_00093140(a1, a2, a3, 2, a4, a5, a6);
}

void C_00093140::func_00094690(int a1, int a2, int a3, int a4, int a5, int a6)
{
    f24->func_001B17D0(D_002A8490->f2e8->f4->f1260);
    f28->func_001B17D0(D_002A8490->f2e8->f4->f1268);
    f2c->func_001B17D0(D_002A8490->f2e8->f4->f1270);
    func_00093140(a1, a2, a3, 3, 0, 0, 0);
}

void *C_00094710::func_00094710(unsigned int flags)
{
    extern int D_0027A0C4;
    C_001D35E0 *p = f44;

    vtbl = (void *)&D_0027A0C4;
    if (p != 0) {
        p->func_001D35E0();
        func_001E891B(p);
        f44 = 0;
    }
    ((C_00157660 *)this)->func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_00094760::func_00094760(void)
{
    if (++unk34 >= unk50->unkA8) {
        unk34 = 0;
    }
    D_002A8490->f2e0->unk468 = unk34;
    unk50->func_001CEFD0(unk34);
    return unk34;
}

int C_00094760::func_000947B0(void)
{
    if (--unk34 < 0) {
        unk34 = unk50->unkA8 - 1;
    }
    D_002A8490->f2e0->unk468 = unk34;
    unk50->func_001CEFD0(unk34);
    return unk34;
}

void C_00094760::func_000947F0(int node)
{
    unk34 = node;
    unk50->func_001CEFD0(node);
}

int *C_00094760::func_00094810(int node)
{
    S_00094620_Path *path = unk50;

    if (node < path->unkA8 && node >= 0) {
        S_00094620_NodeTail &tail = *path->Node(node);
        return &tail.unk0;
    }
    return 0;
}

int C_00094840::func_00094840(void)
{
    int node = unk34;
    S_00094A00_Obj *path = unk50;

    if (node >= path->unkA8 || node < 0) {
        return 0;
    }
    return node * 0x44 + (int)path->unk34 + 0x20;
}

int C_00094840::func_00094870(void)
{
    if (unk34 == 0) {
        return unk54;
    }
    return unk50->v41(unk34);
}

int C_00094890::func_00094890(void) {
    return unk38;
}

void C_00094840::func_000948A0(int a)
{
    if (a == 0 && unk40 != 0) {
        unk40 = 0;
        unk4C = 0;
    }
    unk28->v31(a, 1);
    if (unk44 == 0) {
        unk50->v18(a);
    } else if (a != 0) {
        unk50->v18(a);
    } else {
        unk50->v18(0);
    }
}

int C_00094840::func_00094900(float a, int b, int c)
{
    int r;

    if (a == D_00275544) {
        return 0;
    }
    r = unk50->v36((int)a, b, c);
    unk40 = 1;
    unk4C = *(float *)&b;
    return r;
}

int C_00094A00::func_00094960(int a)
{
    if (f50->v33(a)) {
        f30 = 5;
        return 1;
    }
    return 0;
}

void C_00094A00::func_00094990(float a)
{
    f50->func_001CD3B0((int)a);
}

void C_00094A00::func_000949B0(float a, int b, int c)
{
    if (a > D_00275544 && f44 != 0) {
        f44 = 0;
    }
    f50->v36((int)a, b, c);
}

void C_00094A00::func_00094A00(void)
{
    f50->v37();
}

void C_00094A00::func_00094C00(void)
{
    int i;

    for (i = 0; i < f7C; i++) {
        if (f2C != 0) {
            f28->func_001CD7D0(f84[i]);
        } else {
            f28->func_001CD7D0(f84[i]);
        }
        f84[i] = 0;
    }
    f7C = 0;
    if (f2C != 0) {
        f2C = 0;
    }
}

int C_00094A00::func_00094C60(void)
{
    int i;

    if (f24 != 0) {
        f24 = 0;
    }
    if (f7C == 0) {
        return 0;
    }
    if (f84[0]->v7()) {
        for (i = 0; i < f7C; i++) {
            f84[i]->v6(0);
        }
    }
    for (i = 0; i < f7C; i++) {
        if (i == 0) {
            f84[0]->v12(100);
            if (!f84[0]->v5(0)) {
                return 0;
            }
        } else {
            f84[i]->v12(1);
            if (!f84[i]->v5(0)) {
                return 0;
            }
        }
    }
    return 1;
}

int C_00094A00::func_00094D00(void)
{
    int i;

    if (f7C == 0) {
        return 0;
    }
    if (f84[0]->v7()) {
        for (i = 0; i < f7C; i++) {
            f84[i]->v9(f84[i]->f1AC);
        }
    } else {
        for (i = 0; i < f7C; i++) {
            if (!f84[i]->v5(0)) {
                return 0;
            }
        }
    }
    return 1;
}

int C_00094A00::func_00094D90(int a)
{
    int i;

    if (a == 0) {
        for (i = 0; i < f7C; i++) {
            if (!f84[i]->v6(0)) {
                return 0;
            }
        }
    } else {
        for (i = 0; i < f7C; i++) {
            if (!f84[i]->v16(0, a, 0)) {
                return 0;
            }
        }
    }
    return 1;
}

int C_00094A00::func_00094E10(int idx, int a)
{
    if (idx > f7C) {
        return 0;
    }
    return f84[idx - 1]->v12(a);
}

int C_00094A00::func_00094E40(int idx, int a, int b)
{
    if (idx > f7C) {
        return 0;
    }
    return f84[idx - 1]->v16(a, b, 0);
}

int C_00094A00::func_00094E70(int *ids, int count, int a, int b)
{
    int i;

    if (a <= 1) {
        f24 = 1;
    }
    for (i = 0; i < count; i++) {
        if (ids[i] - 1 > f7C) {
            return 0;
        }
        if (!f84[ids[i] - 1]->v16(a, b, 0)) {
            return 0;
        }
    }
    return 1;
}

int C_00094A00::func_00094EE0(void)
{
    if (f84[0] != 0 && f84[0]->v7()) {
        return 1;
    }
    return 0;
}

int C_00094F00::func_00094F00(void) {
    return unk7C;
}

void C_00094F10::func_00094F10(void)
{
    Clear();
}

void C_00095060::func_00095060(void)
{
    int i;

    vtbl = (void *)&D_0027A23C;
    if (f50->v37()) {
        f50->v33(0);
    }
    if (f50 != 0) {
        f50->v2();
        f50 = 0;
    }
    for (i = 0; i < tracks.count; i++) {
        func_001E891B(tracks.at(i));
    }
    tracks.Clear();
    f7C = 0;
    f80 = 0;
    func_001E891B(ids.items);
    func_001E891B(tracks.items);
    ((C_00157660 *)this)->func_00157660();
}

int C_00095060::func_00095110(int n)
{
    if (n >= 1 && n <= tracks.count) {
        tracks.at(n - 1)->f64 = 1;
        return 1;
    }
    return 0;
}

int C_00095160::func_00095160(int index)
{
    if (index < 1 || index > f54) {
        return 0;
    }
    Item(index - 1)->f64 = 0;
    return 1;
}

int C_00095060::func_000951B0(int n)
{
    if (n >= 1 && n <= tracks.count) {
        tracks.at(n - 1)->f68 = 1;
        return 1;
    }
    return 0;
}

int C_00095160::func_00095200(int index)
{
    if (index < 1 || index > f54) {
        return 0;
    }
    Item(index - 1)->f68 = 0;
    return 1;
}

int C_00095160::func_00095250(int index)
{
    if (f34 != 0) {
        return 0;
    }
    if (index < 1 || index > f54) {
        return 1;
    }
    return Item(index - 1)->f64;
}

int C_00095160::func_000952A0(int index)
{
    if (f34 != 0) {
        return 1;
    }
    if (index < 1 || index > f54) {
        return 0;
    }
    return Item(index - 1)->f68;
}

int C_00095060::func_00095520(int n)
{
    if (f34 == 0) {
        if (n < 1 || n > tracks.count) {
            return 0;
        }
        if (!func_000952F0()) {
            return 0;
        }
        if (tracks.func_00037820(n - 1)->f64 != 0) {
            return 0;
        }
        if (tracks.func_00037820(n - 1)->f68 == 0) {
            return 0;
        }
    } else {
        if (n < 1 || n > f50->v41(f34)) {
            return 0;
        }
    }
    if (!f50->v32(n - 1, 1)) {
        return 0;
    }
    f38 = n;
    f30 = 4;
    return 1;
}

int C_00095060::func_000955C0(void *id)
{
    int i;

    if (ids.count == 0) {
        return 0;
    }
    for (i = 0; i < ids.count; i++) {
        if (ids.at(i) == id) {
            return 1;
        }
    }
    return 0;
}

