/* 12 functions from 0x0017C590 to 0x0017D580, found by Ghidra. */
#include "common.h"

extern int D_002890E8;

struct S_QuadTreeListNode {
    S_QuadTreeListNode *next;
    void *slot[4];
};

struct S_QuadTreePool {
    S_QuadTreeListNode *func_0001E8A0(void);
    void func_0001E790(S_QuadTreeListNode *node);
};

struct S_QuadTreeGlobal {
    char pad0[0x90];
    S_QuadTreePool *f90;
    char pad94[4];
    u8 f98;
    char pad99[0x880 - 0x99];
    int f880;
};

extern S_QuadTreeGlobal *D_002EFD80;

struct S_QuadTreeItem {
    virtual void v0(int flag);
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

void C_0017D190::func_0017D190(void)
{
    fa0 = f9c;
    fc++;
    fa4 = 0;
    fac = 0;
}
