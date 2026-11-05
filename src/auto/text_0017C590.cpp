/* 12 functions from 0x0017C590 to 0x0017D580, found by Ghidra. */
#include "common.h"

extern int D_002890E8;

struct S_QuadTreeListNode {
    S_QuadTreeListNode *next;
    void *slot[4];
    void init(void)
    {
        next = 0;
        slot[0] = 0;
        slot[1] = 0;
        slot[2] = 0;
        slot[3] = 0;
    }
};

struct S_QuadTreePool {
    S_QuadTreeListNode *func_0001E8A0(void);
    void func_0001E790(S_QuadTreeListNode *node);
};

struct S_QuadTreeGlobal {
    char pad0[0x90];
    S_QuadTreePool *f90;
    S_QuadTreePool *f94;
    u8 f98;
    char pad99[0x880 - 0x99];
    int f880;
};

extern S_QuadTreeGlobal *D_002EFD80;

struct S_QuadTreeItem {
    virtual void v0(int flag);
};

struct C_0017D500_Mgr {
    char pad0[0xC];
    s16 fC;
    char padE[0x890 - 0xE];
    s16 **f890;
    char pad894[4];
    int f898;
    int f89C;
    void func_0017D500(S_QuadTreeListNode *node, int flag);
};

struct QuadTreeNode {
    void *vtbl;
    S_QuadTreeItem **f4;
    S_QuadTreeListNode *f8;
    u32 fc;
    u32 f10;
    QuadTreeNode *func_0017CE10(void);
    void func_0017CE40(void);
    void func_0017CEB0(void *item);
    int func_0017CF30(void *item);
    void *func_0017CFF0(void *item);
};

struct S_QuadTreeFx {
    void func_0001E860();
};

/* QuadTree */
struct QuadTree {
    void *vtbl;
    char pad4[8];
    u16 stampC;
    u8 flagsE;
    char padF[0x94 - 0xF];
    S_QuadTreeFx *f94;
    u32 f9C;
    u32 fA0;
    u32 fA4;
    char padA8[4];
    u32 fAC;
    char padB0[0x890 - 0xB0];
    void **array890;
    u32 count898;
    u32 cap89C;
    u32 f8A0;
    u32 f8A4;
    u32 f8A8;
    u32 f8AC;
    void func_0017D120(S_QuadTreeListNode *node);
    void func_0017D1B0(void);
};

struct C_0017D190 {
    char pad0[0xc];
    u16 fc;
    char pad0e[0x9c - 0xe];
    int f9c;
    int fa0;
    int fa4;
    char pada8[4];
    int fac;
    void func_0017D190(void);
};

QuadTreeNode *QuadTreeNode::func_0017CE10(void)
{
    vtbl = (void *)&D_002890E8;
    f8 = 0;
    f4 = 0;
    D_002EFD80->f880++;
    fc = 0;
    f10 = 0xff7fffff;
    return this;
}

void QuadTreeNode::func_0017CE40(void)
{
    S_QuadTreeListNode *node = f8;
    int i;

    vtbl = (void *)&D_002890E8;
    if (f4 != 0) {
        for (i = 0; i < 4; i++) {
            if (f4[i] != 0) {
                f4[i]->v0(1);
            }
        }
    }
    if (!(D_002EFD80->f98 & 1)) {
        while (node != 0) {
            S_QuadTreeListNode *next = node->next;
            D_002EFD80->f90->func_0001E790(node);
            node = next;
        }
    }
    D_002EFD80->f880--;
}

void QuadTreeNode::func_0017CEB0(void *item)
{
    S_QuadTreeListNode *node;
    S_QuadTreeListNode *last;
    S_QuadTreeListNode *n;
    u32 *z;
    int i;

    for (node = f8; node != 0; node = node->next) {
        for (i = 0; i < 4; i++) {
            if (node->slot[i] == 0) {
                node->slot[i] = item;
                return;
            }
        }
        last = node;
    }
    n = D_002EFD80->f90->func_0001E8A0();
    z = (u32 *)n;
    z[0] = z[1] = z[2] = z[3] = z[4] = 0;
    n->slot[0] = item;
    if (f8 == 0) {
        f8 = n;
    } else {
        last->next = n;
    }
}

void C_0017D190::func_0017D190(void)
{
    fa0 = f9c;
    fa4 = 0;
    fc++;
    fac = 0;
}

void C_0017D500_Mgr::func_0017D500(S_QuadTreeListNode *node, int flag)
{
    int i;
    void **p;
    s16 *slot;

    while (node != 0) {
        p = node->slot;
        for (i = 0; i < 4; i++) {
            if (f898 >= f89C) {
                return;
            }
            slot = (s16 *)*p++;
            if (slot != 0 && *slot != fC) {
                *slot = fC;
                if (flag != 0) {
                    slot = (s16 *)((char *)slot + 1);
                }
                f890[f898] = slot;
                f898 = f898 + 1;
            }
        }
        node = node->next;
    }
}

