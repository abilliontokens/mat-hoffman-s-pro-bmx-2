/* 4 functions from 0x001904E0 to 0x00191470, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

struct C_000264C0 {
    void func_000264C0(void *param);
};

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern char D_0028AA74[8];
float func_00011240();
void *func_001E8AA5(int size);
void *func_001E8920(void *, const void *, int);

/* node of the per-entry list, linked through +0x2C, 8-byte tag at +0 */
struct S_1904E0_Rec {
    char name[0x40];
    int f40;
};

struct S_1904E0_Entry {
    int f0;
    S_1904E0_Rec rec;
    unsigned int f48;
    int f4C;
};

struct S_1904E0_Param { char pad0[0xc]; unsigned int flags; int *types; int count; void *callee; };
struct S_1904E0_Table { char pad0[0x20]; S_1904E0_Param *params; int pad24; int pad28; void *fields; char pad30[8]; };

struct S_1904E0_Frame {
    int count;
    int recId;
    unsigned int flags;
    int tbl;
};

struct S_1904E0_Sub {
    void *func_00191400(void);
};

struct S_1904E0_Run {
    char pad0[8];
    int f8;
};

__declspec(align(16)) struct C_0018F350 {
    char pad0[0x18];
    unsigned int f18;
    char pad1c[0xc];
    char *f28;
    char pad2c[0x12c - 0x2c];
    int f12c;
    char pad130[0x150 - 0x130];
    S_1904E0_Sub f150;
    char pad151[0x1c0 - 0x151];
    C_0018F350 *func_0018F350(void);
    void func_0018F4D0(unsigned int a);
    void func_0018E250(char *a, unsigned int b);
    void *func_0018E1D0(void);
    void func_0018F390(char *, unsigned int, void *);
};

struct S_00191270_Node {
    char tag[0x20];
    S_1904E0_Entry *f20;
    int f24;
    char pad28[4];
    S_00191270_Node *f2C;
};

struct S_00191270_List {
    char pad0[0x104];
    S_00191270_Node *f104;
};

/* 0x60-byte slot of the manager's table, indexed by the owner's slot number */
struct S_00191270_Entry {
    int f0;
    char pad4[0x40];
    int f44;
    S_00191270_List *f48;
    int f4C;
    int f50;
    void *f54;
    int f58;
    int f5C;
};

struct S_00191270_Owner {
    char pad0[0x28];
    int f28;
    char pad2c[0xc];
    int f38;
    void func_0018C820(float delay, int start, int end, S_00191270_Node *node);
};

struct S_1904E0_Ops { char pad0[0x14]; void (__cdecl *convert)(S_1904E0_Rec *, C_0018F350 *); int (__cdecl *binary)(C_0018F350 *, C_0018F350 *, int, C_0018F350 *); int (__cdecl *bit)(C_0018F350 *, C_0018F350 *, unsigned int); char pad20[4]; };
struct C_00191270 {
    char pad0[0x14c];
    struct S_1904E0_Run *f14c;
    char pad150[8];
    S_00191270_Entry *f158;
    char pad15c[8];
    S_1904E0_Table *f164;
    int func_0018D580(unsigned int id);
    int func_0018E7D0(int kind, char *name, int *out);
    void func_0018EA50(unsigned int a, void *b);
    int func_0018CE00(S_00191270_Owner *owner, char *name);
    int func_0018FF10(int a, int b, int slot, int *out);
    void func_001904E0(S_00191270_Owner *owner, int slot, S_00191270_Node *node, int c, int d);
    void func_0018E0E0(S_00191270_Node *node, int slot);
    void func_00191270(S_00191270_Owner *owner, int a, char *name, int b);
};

struct C_00191400_Vec {
    int x;
    int y;
    int z;
    int w;
};

struct C_00191400 {
    char pad0[0x18];
    int f18;
    char pad1c[4];
    C_00191400_Vec f20;
    C_00191400_Vec f30;
    void *func_00191400(void);
    void func_00191420(int a0, unsigned int a1, C_00191400_Vec *a2);
};

#pragma intrinsic(strcmp)
extern "C" int strcmp(const char *a, const char *b);
#pragma optimize("y", off)
void C_00191270::func_001904E0(S_00191270_Owner *owner, int slot, S_00191270_Node *node, int c, int d)
{
    C_0018F350 ctxA;
    C_0018F350 ctxB;
    C_0018F350 ctxC;
    S_1904E0_Rec rec;
    S_1904E0_Frame fr;
    void *frObj;
    int i;

    if (node == 0 || c == -1 || d == -1 || owner->f28 == 1) {
        return;
    }
    ctxA.func_0018F350();
    ctxB.func_0018F350();
    ctxC.func_0018F350();
    for (i = c; i < d; i++) {
        S_1904E0_Entry *e;
        unsigned int flags;
        int hi;
        int r;
        int idx;
        int sidx;
        int tmp;
        void *val;

        rec = node->f20[i].rec;
        e = &node->f20[i];
        flags = e->f48;
        hi = (flags >> 8) & 0xff;
        r = func_0018D580(hi);
        switch (e->f4C) {
        case 8: {
            volatile int a;
            volatile int b;
            volatile int m;
            const char *end = ctxB.f28;
            const char *s1 = end + 1;
            char ch;
            int n;

            do {
                ch = *end++;
            } while (ch != 0);
            a = end - s1;
            b = 0x3f;
            m = b > a ? a : b;
            n = m;
            func_001E8920(rec.name, ctxB.f28, n);
            rec.name[n] = 0;
            r = ctxC.f12c;
            if (rec.name[0] == '$') {
                if (func_0018E7D0(2, rec.name, &idx) == 1) {
                    if (f158[idx].f48 != 0 && f158[idx].f50 == 0) {
                        sidx = f158[idx].f0;
                    }
                }
            }
            break;
        }
        case 3:
            if (rec.name[0] == '$') {
                if (func_0018E7D0(1, rec.name, &idx) == 1) {
                    val = (void *)f158[idx].f0;
                    sidx = f158[idx].f44;
                } else {
                    ctxB.func_0018F4D0(flags);
                    fr.count = -1;
                    fr.flags = flags;
                    break;
                }
            } else {
                if (rec.f40 == -1) {
                    ctxB.func_0018F4D0(flags);
                    fr.count = r;
                    fr.flags = flags;
                    break;
                }
                val = owner;
                sidx = f158[slot].f44;
            }
            fr.recId = rec.f40;
            fr.flags = flags;
            fr.tbl = sidx;
            frObj = val;
            f14c->f8 = 1;
            break;
        case 2:
            if (fr.count == -1) {
                ctxB.func_0018F4D0(fr.flags);
                fr.count = -1;
                break;
            }
            tmp = fr.count - 1;
            if (tmp < 0) {
                ctxB.func_0018F4D0(fr.flags);
                fr.count = -1;
                break;
            }
            break;
        case 7:
            break;
        }
    }
}
#pragma optimize("", on)
void C_00191270::func_00191270(S_00191270_Owner *owner, int a, char *name, int b)
{
    int flag;
    int slot;
    S_00191270_Node *node;

    slot = func_0018CE00(owner, name);
    flag = 0;
    f158[slot].f48 = 0;
    f158[slot].f50 = 0;
    f158[slot].f4C = func_0018FF10(a, b, slot, &flag);
    f158[slot].f44 = owner->f38;
    owner->f38 = slot;
    if (f158[slot].f4C == 1 && f158[slot].f48 != 0) {
        for (node = f158[slot].f48->f104; node != 0; node = node->f2C) {
            if (strcmp("@Create", node->tag) == 0) {
                f158[slot].f58 = 0;
                f158[slot].f5C = f158[slot].f58 + node->f24;
                f158[slot].f54 = func_001E8AA5(f158[slot].f5C * 0x1c0);
                func_001904E0(owner, slot, node, 0, node->f24);
                break;
            }
        }
        if (flag != 0) {
            for (node = f158[slot].f48->f104; node != 0; node = node->f2C) {
                if (strcmp("@Create", node->tag) != 0) {
                    func_0018E0E0(node, slot);
                }
            }
        }
    }
}
void *C_00191400::func_00191400(void) {
    void *r = 0;

    switch ((f18 >> 16) & 0xff) {
    case 0:
        r = &f20;
        break;
    case 1:
        r = &f30;
        break;
    }
    return r;
}

void C_00191400::func_00191420(int a0, unsigned int a1, C_00191400_Vec *a2) {
    switch ((a1 >> 16) & 0xff) {
    case 0:
        f20 = *a2;
        break;
    case 1:
        ((C_000264C0 *)&f30)->func_000264C0(a2);
        break;
    }
}

