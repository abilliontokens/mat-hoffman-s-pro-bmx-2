/* 25 functions from 0x0018C000 to 0x0018CF40, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void *func_001E8A44(int size);
void func_001E891B(void *p);
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

struct C_0018C960 {
    void *vtbl;
    char pad4[0x148];
    int f14C;
    int f150;
    int f154;
    int f158;
    char pad15C[8];
    int f164;
    char pad168[8];
    int f170;
    char pad174[8];
    int f17C;
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
    char pad14[6];
    short unk1A;
    int unk1C;
};

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
    char pad0[0x14];
    C_002AA6C0_Entry *unk14;
    void func_001B26C0(int a0);
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
    char *p;
    char *base;
    char *dest;
    char c;
    vtbl = (int)&D_0028A768;
    unk4 = 0;
    for (i = 0; i < 0x100; i++)
        unk58[i] = 0;
    p = param;
    unk458 = -1;
    base = (char *)((unsigned int)p + 1);
    do {
        c = *p;
        p++;
    } while (c != 0);
    dest = (char *)func_001E8A44((int)(p + (1 - (int)base)));
    unk4 = dest;
    {
        char *s = param;
        char *d = dest;
        char ch;
        do {
            ch = *s;
            s++;
            *d = ch;
            d++;
        } while (ch != 0);
    }
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
    if (p != 0) {
        do {
            tail = p;
            p = p->next;
        } while (p != 0);
    }
    if (tail == 0) {
        n = (C_0018C090_Node *)func_001E8A44(8);
        if (n != 0) {
            n->value = value;
            n->next = 0;
        }
        head = n;
        count++;
    } else {
        n = (C_0018C090_Node *)func_001E8A44(8);
        if (n != 0) {
            n->value = value;
            n->next = 0;
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
    for (n = head; n != 0; n = n->next) {
        if (strcmp(name, ((C_0018C000 *)n->value)->unk4) == 0) {
            break;
        }
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

