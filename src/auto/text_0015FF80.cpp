/* 19 functions from 0x0015FF80 to 0x00160D30, found by Ghidra. */
#include "common.h"
struct C_00160A60 {
    int unk0;
    int unk4;
    int unk8;
    C_00160A60* func_00160A60(void);
};

struct C_00160BF0 {
    int unk0;
    void func_00160BF0(void);
};

struct C_00160C00 {
    int f0;
    int f4;
    char pad8[0x8];
    short f10;
    char pad12[0x12];
    int f24;
    int f28;
    int f2c;
    C_00160C00 *func_00160C00(void);
};

struct C_00160BD0 {
    int unk0;
    int unk4;
    int unk8;
    char unkC;
    char padD[3];
    int unk10;
    int unk14;
    int unk18;
    C_00160BD0 *func_00160BD0(void);
};

struct S_00160B30_Node {
    int f0;
    S_00160B30_Node *prev;
    S_00160B30_Node *next;
};

struct C_00160B30 {
    int count;
    S_00160B30_Node *head;
    S_00160B30_Node *tail;
    void func_00160B30(S_00160B30_Node *node);
    void func_00160B90(void);
};

struct C_00160C40 {
    int *data;
    int count;
    int f8;
    int fC;
    C_00160C40 *func_00160C40(int n, int a, int b);
};

void *func_001E8A44(int size);
void func_001E891B(void *p);
extern int D_002A80C0;
extern int D_002A80CC;
extern int D_002879C4;

struct S_001607B0_Dev {
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
    virtual void v28(int a, int b, void *c);
};

void func_001E891B(void *p);

struct S_00160810_Cam {
    S_00160810_Cam *func_00193490(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
    void func_00193870(void *p);
    void func_00193500(void);
};

/* doubly linked list node and list header */
struct S_ListNode_00160A70 {
    int data;
    S_ListNode_00160A70 *prev;
    S_ListNode_00160A70 *next;
    S_ListNode_00160A70 *init(void)
    {
        data = 0;
        prev = 0;
        next = 0;
        return this;
    }
};

struct C_00160A70 {
    int count;
    S_ListNode_00160A70 *head;
    S_ListNode_00160A70 *tail;
    int func_00160A70(int data);
    int func_00160AD0(int data);
};

/* chained hash table: an array of f4 bucket lists, f8 hashes a key */
struct S_00160C90_Node {
    int value;
    int hash;
    int key;
    S_00160C90_Node *next;
};

struct C_00160C90 {
    S_00160C90_Node **f0;
    int f4;
    int (*f8)(int key);
    void func_00160C90(void);
    void func_00160CE0(int key, int value);
};

/* LightFlare */
struct C_00160860 {
    void *vtbl;
    char pad4[0x23];
    unsigned char f27;
    unsigned int vec[5][4];
    S_001607B0_Dev *f78;
    S_00160810_Cam *f7c;
    char pad80[4];
    int f84;
    void func_00192370(int a0);
    void func_00157960(void);
    void func_00157660(void);
    void *func_00160A00(unsigned int flags);
    int func_001607B0(void);
    void func_00160810(int a1, int a2);
    C_00160860 *func_00160860(int a0);
};


int C_00160860::func_001607B0(void)
{
    if (D_002A80C0 != 0) {
        f78->v28(0, 0, &vec[2][0]);
        f78->v28(0, 1, &vec[1][0]);
        f78->v28(0, 2, &vec[4][0]);
        f78->v28(0, 3, &vec[3][0]);
        func_00157960();
    }
    return 1;
}

void C_00160860::func_00160810(int a1, int a2)
{
    S_00160810_Cam *p = (S_00160810_Cam *)func_001E8A44(0x28);

    f7c = p ? p->func_00193490() : 0;
    f7c->func_001938C0(&vec[-1][3], a1, a2, &vec[0][0], &D_002A80CC, 0);
}

C_00160860 *C_00160860::func_00160860(int a0)
{
    unsigned int *p;

    func_00192370(a0);
    vtbl = (void *)&D_002879C4;
    p = &vec[0][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[1][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[2][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[3][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &vec[4][0];
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f27 |= 3;
    f78 = 0;
    f7c = 0;
    f84 = 1;
    return this;
}

void *C_00160860::func_00160A00(unsigned int flags)
{
    vtbl = (void *)&D_002879C4;
    if (f7c != 0) {
        S_00160810_Cam *cam;

        f7c->func_00193870((char *)this + 0x24);
        cam = f7c;
        if (cam != 0) {
            cam->func_00193500();
            func_001E891B(cam);
        }
        f7c = 0;
    }
    func_00157660();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_00160A60* C_00160A60::func_00160A60(void) {
    unk0 = 0;
    unk4 = 0;
    unk8 = 0;
    return this;
}

int C_00160A70::func_00160A70(int data)
{
    void *mem = func_001E8A44(0xc);
    S_ListNode_00160A70 *n = mem != 0 ? ((S_ListNode_00160A70 *)mem)->init() : 0;

    if (n == 0) {
        return 0;
    }
    n->data = data;
    n->prev = tail;
    n->next = 0;
    if (tail != 0) {
        tail->next = n;
        tail = n;
        count++;
        return 1;
    }
    head = n;
    tail = n;
    count++;
    return 1;
}

int C_00160A70::func_00160AD0(int data)
{
    S_ListNode_00160A70 *n = (S_ListNode_00160A70 *)func_001E8A44(0xc);

    if (n == 0) {
        return 0;
    }
    n->data = 0;
    n->prev = 0;
    n->next = 0;
    n->data = data;
    n->prev = 0;
    n->next = head;
    if (head != 0) {
        head->prev = n;
        head = n;
        count++;
        return 1;
    }
    tail = n;
    head = n;
    count++;
    return 1;
}

void C_00160B30::func_00160B30(S_00160B30_Node *node)
{
    if (node == head) {
        head = node->next;
    }
    if (node == tail) {
        tail = node->prev;
    }
    if (node->prev != 0) {
        node->prev->next = node->next;
    }
    if (node->next != 0) {
        node->next->prev = node->prev;
    }
    node->f0 = 0;
    node->prev = 0;
    node->next = 0;
    func_001E891B(node);
    count--;
}

void C_00160B30::func_00160B90(void)
{
    S_00160B30_Node *p;
    S_00160B30_Node *node;
    S_00160B30_Node **pnext;

    count = 0;
    p = head;
    while (p != 0) {
        node = p;
        pnext = &p->next;
        p = *pnext;
        node->f0 = 0;
        node->prev = 0;
        node->next = 0;
        func_001E891B(node);
    }
    head = 0;
    tail = 0;
}

C_00160BD0 *C_00160BD0::func_00160BD0(void)
{
    extern int D_00287A44;
    unk0 = (int)&D_00287A44;
    unk4 = 0;
    unk8 = 0;
    unkC = 1;
    unk14 = 0;
    unk10 = 0;
    unk18 = 0;
    return this;
}

void C_00160BF0::func_00160BF0(void) {
    extern int D_00287A44;
    unk0 = (int)&D_00287A44;
}

C_00160C00 *C_00160C00::func_00160C00(void)
{
    f0 = 0;
    f4 = 0;
    f24 = 0;
    f28 = 0;
    f2c = 0;
    f10 = 0;
    return this;
}

C_00160C40 *C_00160C40::func_00160C40(int n, int a, int b)
{
    int i;

    count = n;
    data = (int *)func_001E8A44(n << 2);
    for (i = 0; i < count; i++) {
        data[i] = 0;
    }
    f8 = a;
    fC = b;
    return this;
}

void C_00160C90::func_00160C90(void)
{
    int i;

    for (i = 0; i < f4; i++) {
        S_00160C90_Node *n = f0[i];

        while (n != 0) {
            S_00160C90_Node *cur = n;

            n = n->next;
            func_001E891B(cur);
        }
    }
    func_001E891B(f0);
}

void C_00160C90::func_00160CE0(int key, int value)
{
    int h = f8(key);
    int i = h;
    S_00160C90_Node *n;

    if (i < 0) {
        i = -i;
    }
    i = i % f4;
    n = (S_00160C90_Node *)func_001E8A44(0x10);
    n->next = f0[i];
    f0[i] = n;
    n->hash = h;
    n->key = key;
    n->value = value;
}

