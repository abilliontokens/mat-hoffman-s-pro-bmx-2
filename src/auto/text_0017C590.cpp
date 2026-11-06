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
    virtual void v1(void);
    virtual S_QuadTreeListNode **v2(int x, int y, S_QuadTreeListNode **r, int cx, int cy, int size);
    void *func_0017CFF0(void *item);
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
    S_QuadTreeListNode **func_0017D210(int x, int y, S_QuadTreeListNode **r, int cx, int cy, int size);
};

struct S_QuadTreeFx {
    void func_0001E860();
};

struct S_QuadTreeDispatch {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int x, int y, int z, int flag);
};

/* QuadTree */
struct QuadTree {
    void *vtbl;
    char pad4[8];
    u16 stampC;
    u8 flagsE;
    char padF[0x94 - 0xF];
    S_QuadTreeFx *f94;
    char pad98[4];
    u32 f9C;
    S_QuadTreeListNode *fA0;
    int fA4;
    S_QuadTreeListNode *fA8;
    u32 fAC;
    char padB0[0x890 - 0xB0];
    void **array890;
    char pad894[4];
    int count898;
    int cap89C;
    u32 f8A0;
    u32 f8A4;
    u32 f8A8;
    u32 f8AC;
    u16 *func_0017D050(void);
    void func_0017D120(S_QuadTreeListNode *node);
    __forceinline void ResetIter() {
        f9C = 0;
        fA0 = 0;
        fA4 = 0;
        fAC = 0;
    }
    void func_0017D1B0(void);
    void func_0017C590(int *position, int unused);
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

void QuadTree::func_0017C590(int *position, int unused)
{
    ((S_QuadTreeDispatch *)this)->v4(position[0], position[1], position[2], 0);
}

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
    for (i = 0; i < 5; i++) {
        z[i] = 0;
    }
    n->slot[0] = item;
    if (f8 == 0) {
        f8 = n;
    } else {
        last->next = n;
    }
}

int QuadTreeNode::func_0017CF30(void *item)
{
    S_QuadTreeListNode *node = f8;
    S_QuadTreeListNode *prev;
    int i;

    if (node != 0) {
        do {
            int allEmpty = 1;
            int found = 0;
            for (i = 0; i < 4; i++) {
                if (node->slot[i] == item) {
                    node->slot[i] = 0;
                    found = 1;
                } else if (node->slot[i] != 0) {
                    allEmpty = 0;
                }
            }
            if (allEmpty) {
                if (node == f8) {
                    f8 = node->next;
                } else {
                    prev->next = node->next;
                }
                D_002EFD80->f90->func_0001E790(node);
            }
            if (found)
                break;
            prev = node;
            node = node->next;
        } while (node != 0);
    }
    if (f8 != 0)
        return 1;
    if (f4 == 0)
        return 0;
    if (f4[0] != 0 || f4[1] != 0 || f4[2] != 0 || f4[3] != 0)
        return 1;
    return 0;
}

void *QuadTreeNode::func_0017CFF0(void *item)
{
    int i;

    for (i = 0; i < 4; i++) {
        if (f4 != 0 && f4[i] != 0) {
            item = f4[i]->func_0017CFF0(item);
        }
    }
    if (f8 != 0) {
        S_QuadTreeListNode *n = D_002EFD80->f94->func_0001E8A0();
        n->slot[0] = this;
        n->next = (S_QuadTreeListNode *)item;
        return n;
    }
    return item;
}

u16 *QuadTree::func_0017D050(void)
{
    u16 *item;

    if (!(flagsE & 1)) {
        return 0;
    }
    if (array890 == 0) {
        D_002EFD80 = (S_QuadTreeGlobal *)this;
        while (fA0 != 0) {
            if (fA8 == 0) {
                fA8 = ((QuadTreeNode *)fA0->slot[0])->f8;
            }
            while (fA8 != 0) {
                while (fA4 < 4) {
                    item = (u16 *)fA8->slot[fA4];
                    fA4++;
                    if (item != 0 && *item != stampC) {
                        *item = stampC;
                        return item;
                    }
                }
                fA4 = 0;
                fA8 = fA8->next;
            }
            fA0 = fA0->next;
        }
    }
    return 0;
}

void QuadTree::func_0017D120(S_QuadTreeListNode *node)
{
    while (node != 0) {
        int i;
        for (i = 0; i < 4; i++) {
            u16 *item = (u16 *)node->slot[i];
            if (item != 0 && *item != stampC) {
                *item = stampC;
                array890[count898] = item;
                count898++;
                if (count898 >= cap89C)
                    return;
            }
        }
        node = node->next;
    }
}

void C_0017D190::func_0017D190(void)
{
    fa0 = f9c;
    fa4 = 0;
    fc++;
    fac = 0;
}

void QuadTree::func_0017D1B0(void)
{
    if (flagsE & 1) {
        f94->func_0001E860();
        flagsE = flagsE & 0xfe;
        f9C = 0;
        fA0 = 0;
        fA4 = 0;
        fAC = 0;
        f8A0 = 0x80000000;
        f8A4 = 0x80000000;
        f8A8 = 0x80000000;
        f8AC = 0x80000000;
    }
}

S_QuadTreeListNode **QuadTreeNode::func_0017D210(int x, int y, S_QuadTreeListNode **r, int cx, int cy, int size)
{
    int half;
    int mx = cx + size;
    int my = cy + size;
    S_QuadTreeListNode *n;

    half = size >> 1;
    if (f4 != 0) {
        if (x >= mx) {
            if (y >= my) {
                if (f4[0] != 0) r = f4[0]->v2(x, y, r, cx, cy, half);
                if (f4[1] != 0) r = f4[1]->v2(x, y, r, cx, my, half);
                if (f4[2] != 0) r = f4[2]->v2(x, y, r, mx, cy, half);
                if (f4[3] != 0) r = f4[3]->v2(x, y, r, mx, my, half);
            } else {
                if (f4[1] != 0) r = f4[1]->v2(x, y, r, cx, my, half);
                if (f4[0] != 0) r = f4[0]->v2(x, y, r, cx, cy, half);
                if (f4[3] != 0) r = f4[3]->v2(x, y, r, mx, my, half);
                if (f4[2] != 0) r = f4[2]->v2(x, y, r, mx, cy, half);
            }
        } else {
            if (y >= my) {
                if (f4[2] != 0) r = f4[2]->v2(x, y, r, mx, cy, half);
                if (f4[3] != 0) r = f4[3]->v2(x, y, r, mx, my, half);
                if (f4[0] != 0) r = f4[0]->v2(x, y, r, cx, cy, half);
                if (f4[1] != 0) r = f4[1]->v2(x, y, r, cx, my, half);
            } else {
                if (f4[3] != 0) r = f4[3]->v2(x, y, r, mx, my, half);
                if (f4[2] != 0) r = f4[2]->v2(x, y, r, mx, cy, half);
                if (f4[1] != 0) r = f4[1]->v2(x, y, r, cx, my, half);
                if (f4[0] != 0) r = f4[0]->v2(x, y, r, cx, cy, half);
            }
        }
    }
    if (f8 != 0) {
        n = D_002EFD80->f94->func_0001E8A0();
        if (r != 0)
            *r = n;
        n->next = 0;
        n->slot[0] = (void *)this;
        return (S_QuadTreeListNode **)n;
    }
    return r;
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

