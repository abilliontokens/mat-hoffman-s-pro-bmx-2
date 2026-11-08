/* 25 functions from 0x0018C000 to 0x0018CF40, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"

void *func_001E8A44(int size);
void func_001E891B(void *p);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
extern char D_0028A76C[];
extern char D_002A5240[];
extern char D_00276F28[];
struct C_0018C820 {
    char pad0[0x24];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    void func_0018C820(int a0, int a1, int a2, int a3);
};

struct C_0018C800;

struct S_002EFE08_Entry {
    char pad0[0x48];
    void *f48;
    int f4C;
    char pad50[0x10];
};

struct C_002EFE08 {
    char pad0[0x158];
    S_002EFE08_Entry *f158;
    void func_001904E0(C_0018C800 *owner, int a, int b, int c, int d);
    int func_0018DDD0(C_0018C800 *owner, void *list, const char *name);
};
extern C_002EFE08 *D_002EFE08;
extern float D_00275544;
void func_001E8390(void *p);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_0018C800 {
    int unk0;
    char pad4[0x20];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    void func_0018C6B0(int a, int b);
    C_0018C800 *func_0018C7B0(int a0);
    void func_0018C780(int count, int *arr, int c);
    void func_0018C800(void);
    void func_0018C850(void);
    int func_0018C890(const char *name);
    void func_0018C900(float dt);
    void func_00157A00(float dt);
};

struct S_0018C9B0_Item {
    char pad0[0x20];
    void *f20;
    char pad24[8];
    S_0018C9B0_Item *f2C;
};

struct S_0018C9B0_Node {
    char pad0[0x104];
    S_0018C9B0_Item *f104;
    char pad108[4];
    S_0018C9B0_Node *f10C;
};

extern int D_0028A984;
struct ScriptFreeNode { char pad0[0x10]; ScriptFreeNode *next; };
struct ScriptFreeChild { char pad0[0x10]; void *f10; char pad14[8]; };
struct ScriptFreeGroup { char pad0[0x20]; ScriptFreeChild *f20; int f24; int f28; void *f2C; char pad30[8]; };
struct ScriptFreeEntry { char pad0[0x54]; void *f54; char pad58[8]; };
struct ScriptFreePair { void *p; int unk4; };
struct C_0018C960 {
    void *vtbl;
    char pad4[0x148];
    int f14C;
    int f150;
    int f154;
    int f158;
    int f15C;
    int f160;
    char *f164;
    int f168;
    int f16C;
    int f170;
    char pad174[8];
    int f17C;
    int f180;
    void func_0018CA20();
    void func_00157660();
    C_0018C960 *func_0018C960(int a);
    void func_0018C9B0(int keep);
    void func_00157600(int a);
};

struct C_0018C7F0 {
    int unk0;
    void func_0018C7F0(void);
};

struct C_0018C8D0 {
    int unk0;
    void func_00157660(void);
    void *func_0018C8D0(int flags);
};

struct C_0018C000_Item {
    char pad0[0xC];
    float unkC;
    float unk10;
    short unk14;
    short unk16;
    short unk18;
    short unk1A;
    int unk1C;
    C_0018C000_Item *func_0018BFC0(int a, int b, int c, int d, int e);
    void SetBounds(short a, short b, short c, short d)
    {
        unk14 = a;
        unk16 = b;
        unk18 = c;
        unk1A = d;
        unk1C = 1;
    }
};

struct S_0018C2D0_File {
    int func_0013C9F0(char *name, const char *mode);
    int func_0013C8A0(int h, void *buf, int size, int count);
    int func_0013AFB0(int h);
    void func_0013C110(int h);
};
extern S_0018C2D0_File *D_002BEAAC;
extern char D_002A60B0[];
extern char D_00275678[];
extern char D_00275FB4[];

struct C_002AA6C0_Obj {
    char pad0[0xC];
    int unkC;
};

struct C_002AA6C0_Entry {
    int unk0;
    C_002AA6C0_Obj *unk4;
    int unk8;
    int unkC;
};

struct C_002AA6C0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int a, int b);
    virtual int v7(int a, int b);
    char pad4[0x10];
    C_002AA6C0_Entry *unk14;
    void func_001B26C0(int a0);
    void func_001B2640(void);
};

struct V_002EFDB8 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int a);
    virtual void vf8();
};
extern V_002EFDB8 *D_002EFDB8;

struct C_0018C000 {
    int vtbl;
    char *unk4;
    char pad8[0x50];
    C_0018C000_Item *unk58[0x100];
    int unk458;
    void *func_0018C000(char *param);
    void *func_0018C650(int flags);
    int func_0018C2D0(char *a, char *b, int c);
    C_002AA6C0_Obj *func_0018C070(void);
    void func_0018C1C0(void);
    float func_0018C210(void);
};

struct C_0018C090_Node {
    int value;
    C_0018C090_Node *next;
};

struct C_0018C090 {
    C_0018C090_Node *head;
    int count;
    void func_0018C090(int value);
};

struct C_0018C120_Node {
    int value;
    C_0018C120_Node *next;
};

struct V_0018C120 {
    virtual void vf0(int a);
};

extern "C" int strcmp(const char *s1, const char *s2);
extern "C" unsigned int strlen(const char *s);
extern "C" char *strcpy(char *dst, const char *src);
void *func_001E83E8(void *block, unsigned int size);
char *func_001E8920(char *dst, const char *src, int n);

struct S_0018CE00_Entry {
    int id;
    char name[0x50];
    int f54;
    int f58;
    char pad5c[4];
};

struct C_0018CE00 {
    char pad0[0x158];
    S_0018CE00_Entry *entries;
    int count;
    int capacity;
    int func_0018CE00(int id, char *name);
};

static __inline int Min_0018CE00(int a, int b) { return a > b ? b : a; }

void *func_001E8AA5(unsigned int size);

struct S_0018CC00_Entry {
    char name[0x20];
    void *f20;
    int f24;
    int f28;
    void *f2C;
    int f30;
    int f34;
};

struct C_0018CC00 {
    char pad0[0x164];
    S_0018CC00_Entry *entries;
    int count;
    int capacity;
    int func_0018CC00(const char *name);
};

struct C_0018C120 {
    C_0018C120_Node *head;
    int count;
    void func_0018C120(void);
    C_0018C120_Node *func_0018C160(const char *name);
    void func_0018C640(void);
};


void *C_0018C000::func_0018C000(char *param) {
    extern int D_0028A768;
    int i;

    vtbl = (int)&D_0028A768;
    unk4 = 0;
    for (i = 0; i < 0x100; i++)
        unk58[i] = 0;
    unk458 = -1;
    unk4 = (char *)func_001E8A44(strlen(param) + 1);
    strcpy(unk4, param);
    return this;
}

extern C_002AA6C0 *D_002AA6C0;

C_002AA6C0_Obj *C_0018C000::func_0018C070(void)
{
    if (unk458 == -1) {
        return 0;
    }
    return D_002AA6C0->unk14[unk458].unk4;
}

void C_0018C090::func_0018C090(int value) {
    C_0018C090_Node *tail = 0;
    C_0018C090_Node *n;
    C_0018C090_Node *p = head;

    while (p != 0) {
        tail = p;
        p = p->next;
    }
    if (tail == 0) {
        n = (C_0018C090_Node *)func_001E8A44(8);
        if (n != 0) {
            n->value = value;
            n->next = 0;
        } else {
            n = 0;
        }
        head = n;
        count++;
    } else {
        n = (C_0018C090_Node *)func_001E8A44(8);
        if (n != 0) {
            n->value = value;
            n->next = 0;
        } else {
            n = 0;
        }
        tail->next = n;
        count++;
    }
}

void C_0018C120::func_0018C120(void) {
    C_0018C120_Node *n;
    while (head != 0) {
        n = head;
        head = n->next;
        if (n->value != 0) {
            ((V_0018C120 *)n->value)->vf0(1);
        }
        func_001E891B(n);
        count = count - 1;
    }
}

C_0018C120_Node *C_0018C120::func_0018C160(const char *name)
{
    C_0018C120_Node *n;
    const char *key = name;

    n = this->head;
    while (n != 0) {
        if (strcmp(key, ((C_0018C000 *)n->value)->unk4) == 0) {
            break;
        }
        n = n->next;
    }
    return n;
}

void C_0018C000::func_0018C1C0(void)
{
    int i;
    for (i = 0; i < 0x100; i++) {
        if (unk58[i] != 0) {
            func_001E891B(unk58[i]);
            unk58[i] = 0;
        }
    }
    if (unk458 != -1) {
        D_002AA6C0->func_001B26C0(unk458);
        unk458 = -1;
    }
}

float C_0018C000::func_0018C210(void)
{
    extern float D_00275F58;
    int i;
    C_002AA6C0_Obj *obj;
    C_0018C000_Item *item;

    for (i = 0; i < 0x100; i += 8) {
        if (unk58[i] != 0) break;
        if (unk58[i + 1] != 0) { i += 1; break; }
        if (unk58[i + 2] != 0) { i += 2; break; }
        if (unk58[i + 3] != 0) { i += 3; break; }
        if (unk58[i + 4] != 0) { i += 4; break; }
        if (unk58[i + 5] != 0) { i += 5; break; }
        if (unk58[i + 6] != 0) { i += 6; break; }
        if (unk58[i + 7] != 0) { i += 7; break; }
    }
    obj = func_0018C070();
    if (i < 0x100) {
        item = unk58[i];
        if (item->unk1C != 0) {
            return item->unk1A;
        }
        return (item->unk10 - item->unkC) * obj->unkC;
    }
    return D_00275F58;
}

int C_0018C000::func_0018C2D0(char *a, char *b, int c)
{
    char saved[0x104];
    char name[0x104];
    int h;
    unsigned int count = 0;
    unsigned int i;
    int A;
    float B, C, D, E;
    int G, H, I, J, K, L;
    int j;

    if (c != 0) {
        func_0018C1C0();
    }
    h = D_002BEAAC->func_0013C9F0(a, D_00275FB4);
    if (h == -1) {
        return 0;
    }
    D_002BEAAC->func_0013C8A0(h, &count, 4, 1);
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    for (i = 0; i < count; i++) {
        void *mem;
        C_0018C000_Item *it;
        D_002BEAAC->func_0013C8A0(h, &A, 4, 1);
        if (!D_002BEAAC->func_0013C8A0(h, &B, 4, 1)) break;
        if (!D_002BEAAC->func_0013C8A0(h, &C, 4, 1)) break;
        if (!D_002BEAAC->func_0013C8A0(h, &D, 4, 1)) break;
        if (!D_002BEAAC->func_0013C8A0(h, &E, 4, 1)) break;
        mem = func_001E8A44(0x20);
        it = mem != 0 ? ((C_0018C000_Item *)mem)->func_0018BFC0(A, *(int *)&B, *(int *)&C, *(int *)&D, *(int *)&E) : 0;
        unk58[A] = it;
    }
    G = 0;
    H = 0;
    I = 0;
    J = 0;
    K = 0;
    L = 0;
    if (!D_002BEAAC->func_0013AFB0(h)) {
        D_002BEAAC->func_0013C8A0(h, &G, 4, 1);
        if (G > 0) {
            for (j = 0; j < G; j++) {
                C_0018C000_Item *it;
                if (!D_002BEAAC->func_0013C8A0(h, &H, 4, 1)) break;
                if (!D_002BEAAC->func_0013C8A0(h, &I, 2, 1)) break;
                if (!D_002BEAAC->func_0013C8A0(h, &J, 2, 1)) break;
                if (!D_002BEAAC->func_0013C8A0(h, &K, 2, 1)) break;
                if (!D_002BEAAC->func_0013C8A0(h, &L, 2, 1)) break;
                it = unk58[H];
                if (it != 0) {
                    it->SetBounds(I, J, K, L);
                }
            }
        }
    }
    i = 0;
    do { saved[i] = D_002A60B0[i]; } while (D_002A60B0[i++]);
    i = 0;
    do { D_002A60B0[i] = D_002A5240[i]; } while (D_002A5240[i++]);
    func_001ADCC0(name, 0x104, D_00275678, D_002A60B0, b);
    {
        char *src = name;
        char *dst = (char *)this + 8;
        while ((*dst++ = *src++) != 0) {
        }
    }
    unk458 = D_002AA6C0->v7((int)name, 0);
    D_002AA6C0->v6(unk458, 0);
    D_002AA6C0->func_001B2640();
    i = 0;
    do { D_002A60B0[i] = saved[i]; } while (saved[i++]);
    D_002BEAAC->func_0013C110(h);
    return 1;
}

void C_0018C120::func_0018C640(void)
{
    func_0018C120();
    func_0018C120();
}

void *C_0018C000::func_0018C650(int flags)
{
    extern int D_0028A768;
    vtbl = (int)&D_0028A768;
    D_002EFDB8->vf7(1);
    D_002EFDB8->vf8();
    func_0018C1C0();
    func_001E891B(unk4);
    unk4 = 0;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0018C800::func_0018C6B0(int a, int b)
{
    char buf1[0x104];
    char buf2[0x104];
    char *name = (char *)a;
    C_0018C120_Node *node;
    void *mem;
    C_0018C000 *obj;

    func_001ADCC0(buf1, 0x104, D_0028A76C, D_002A5240, name);
    func_001ADCC0(buf2, 0x104, D_00276F28, name);
    node = ((C_0018C120 *)this)->func_0018C160(name);
    if (node == 0)
        goto create;
    if (node->value == 0)
        goto create;
    goto found;
create:
    mem = func_001E8A44(0x45c);
    obj = mem != 0 ? (C_0018C000 *)((C_0018C000 *)mem)->func_0018C000(name) : 0;
    obj->func_0018C2D0(buf1, buf2, 0);
    ((C_0018C090 *)this)->func_0018C090((int)obj);
    return;
found:
    if (b != 0) {
        ((C_0018C000 *)node->value)->func_0018C2D0(buf1, buf2, 1);
    }
}

void C_0018C800::func_0018C780(int count, int *arr, int c)
{
    int i;
    for (i = 0; i < count; i++) {
        func_0018C6B0(arr[i], c);
    }
}

C_0018C800 *C_0018C800::func_0018C7B0(int a0)
{
    extern int D_0028A784;
    ((C_00157600 *)this)->func_00157600(a0);
    unk38 = -1;
    unk0 = (int)&D_0028A784;
    unk24 = -1082130432;
    unk28 = 0;
    unk2C = -1;
    unk30 = -1;
    unk34 = 0;
    return this;
}

void C_0018C7F0::func_0018C7F0(void) {
    extern int D_0028A784;
    int func_00157660(...);
    unk0 = (int)&D_0028A784;
    func_00157660();
}

void C_0018C800::func_0018C800(void) {
    unk24 = -1082130432;
    unk28 = 0;
    unk2C = -1;
    unk30 = -1;
    unk34 = 0;
}

void C_0018C820::func_0018C820(int a0, int a1, int a2, int a3) {
    unk24 = a0;
    unk2C = a1;
    unk28 = 1;
    unk30 = a2;
    unk34 = a3;
}

void C_0018C800::func_0018C850(void)
{
    int a = unk2C;
    int b;
    if (a != -1 && (b = unk30) != -1) {
        int c = unk34;
        unk2C = -1;
        unk30 = -1;
        unk34 = 0;
        D_002EFE08->func_001904E0(this, unk38, c, a, b);
    }
}

int C_0018C800::func_0018C890(const char *name)
{
    S_002EFE08_Entry *e = &D_002EFE08->f158[unk38];
    if (e->f4C != 0 && e->f48 != 0) {
        return D_002EFE08->func_0018DDD0(this, e->f48, name);
    }
    return 0;
}

void *C_0018C8D0::func_0018C8D0(int flags) {
    extern int D_0028A784;
    void func_001E891B(void *);
    unk0 = (int)&D_0028A784;
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_0018C800::func_0018C900(float dt)
{
    if (unk24 != -1082130432 && unk2C != -1 && unk30 != -1) {
        float t = *(float *)&unk24 - dt;
        *(float *)&unk24 = t;
        if (t <= D_00275544) {
            unk28 = 0;
            if (unk34 != 0) {
                func_0018C850();
            }
        }
    }
    func_00157A00(dt);
}

C_0018C960 *C_0018C960::func_0018C960(int a)
{
    extern int D_0028A984;
    func_00157600(a);
    f150 = 0;
    f154 = 0;
    f164 = 0;
    f158 = 0;
    f170 = 0;
    f17C = 0;
    f14C = 0;
    vtbl = (void *)&D_0028A984;
    return this;
}

void C_0018C960::func_0018C9B0(int keep)
{
    S_0018C9B0_Node *node;
    S_0018C9B0_Node *next;
    S_0018C9B0_Item *item;
    S_0018C9B0_Item *itemNext;

    node = (S_0018C9B0_Node *)f150;
    while (node != 0) {
        next = node->f10C;
        item = node->f104;
        while (item != 0) {
            itemNext = item->f2C;
            if (item->f20 != 0) {
                func_001E8390(item->f20);
                item->f20 = 0;
            }
            func_001E891B(item);
            item = itemNext;
        }
        if (keep == 0) {
            func_001E891B(node);
        }
        node = next;
    }
}

void C_0018C960::func_0018CA20()
{
    int i, j, k;
    int off;
    ScriptFreeNode *p, *next;
    vtbl = &D_0028A984;
    func_0018C9B0(0);
    for (p = (ScriptFreeNode *)f14C; p; p = next) {
        next = p->next;
        func_001E891B(p);
    }
    if (f164) {
        k = 0;
        if (k < f168) {
            off = 0;
            for (; k < f168; k++, off += 0x38) {
                if (*(ScriptFreeChild **)((char *)f164 + off + 0x20)) {
                    for (j = 0; j < *(int *)((char *)f164 + off + 0x24); j++)
                        func_001E8390((*(ScriptFreeChild **)((char *)f164 + off + 0x20))[j].f10);
                    func_001E8390(*(ScriptFreeChild **)((char *)f164 + off + 0x20));
                    *(ScriptFreeChild **)((char *)f164 + off + 0x20) = 0;
                }
                if (*(void **)((char *)f164 + off + 0x2C)) {
                    func_001E8390(*(void **)((char *)f164 + off + 0x2C));
                    *(void **)((char *)f164 + off + 0x2C) = 0;
                }
            }
        }
        func_001E8390((void *)f164);
        f164 = 0;
    }
    if (f158) {
        for (i = 0; i < f15C; i++) {
            if (((ScriptFreeEntry *)f158)[i].f54) {
                func_001E8390(((ScriptFreeEntry *)f158)[i].f54);
                ((ScriptFreeEntry *)f158)[i].f54 = 0;
            }
        }
        func_001E8390((void *)f158);
        f158 = 0;
    }
    if (f170) {
        func_001E8390((void *)f170);
        f170 = 0;
    }
    if (f17C) {
        for (i = 0; i < f180; i++) {
            if (((ScriptFreePair *)f17C)[i].p) {
                func_001E8390(((ScriptFreePair *)f17C)[i].p);
                ((ScriptFreePair *)f17C)[i].p = 0;
            }
        }
        func_001E8390((void *)f17C);
        f17C = 0;
    }
    func_00157660();
}

extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
int C_0018CC00::func_0018CC00(const char * volatile name)
{
    int len, limit, n;
    int slot;

    if (capacity < count + 1) {
        capacity = count + 10;
        entries = (S_0018CC00_Entry *)func_001E83E8(entries, capacity * 0x38);
        if (entries == 0) {
            return -1;
        }
    }
    slot = count;
    len = strlen(name);
    limit = 0x1f;
    n = AsmMinI(limit, len);
    func_001E8920((char *)&entries[count], name, n);
    ((char *)&entries[count])[n] = 0;
    entries[count].f20 = 0;
    entries[count].f24 = 0;
    entries[count].f28 = entries[count].f24 + 0x14;
    entries[count].f20 = (void *)func_001E8AA5(entries[count].f28 * 0x1c);
    entries[count].f2C = 0;
    entries[count].f30 = 0;
    entries[count].f34 = entries[count].f30 + 0xa;
    entries[count].f2C = (void *)func_001E8AA5(entries[count].f34 << 4);
    count++;
    return slot;
}
int C_0018CE00::func_0018CE00(int id, char *name)
{
    int slot;
    int i;
    int n;

    slot = -1;
    for (i = 0; i < count; i++) {
        if (entries[i].id == 0) {
            slot = i;
            break;
        }
    }
    if (slot == -1) {
        slot = count;
        if (capacity < count + 1) {
            capacity = count + 50;
            entries = (S_0018CE00_Entry *)func_001E83E8(entries, capacity * 0x60);
            if (entries == 0) {
                return slot;
            }
        }
    }
    entries[slot].id = id;
    n = strlen(name);
    if (n > 0x3f) n = 0x3f;
    func_001E8920(entries[slot].name, name, n);
    entries[slot].name[n] = 0;
    entries[slot].f54 = 0;
    entries[slot].f58 = 0;
    count++;
    return slot;
}

