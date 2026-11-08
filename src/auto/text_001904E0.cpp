/* 4 functions from 0x001904E0 to 0x00191470, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

struct C_000264C0 {
    void func_000264C0(void *param);
};

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern char D_0028AA74[8];
float func_00011240();
void *func_001E83E8(void *, int);
void *func_001E8A44(int);
void func_001E891B(void *);
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

struct S_1904E0_Native { float asFloat(); double asDouble(); int asInt(); };
struct S_1904E0_Param { char pad0[8]; int f8; unsigned int flags; int *types; int count; void *callee; };
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
    char pad168[8];
    S_1904E0_Ops *f170;
    void func_0018DDD0(S_00191270_Owner *, S_00191270_List *, char *);
    void func_001900E0(S_00191270_Owner *, char *, int, S_1904E0_Rec *, unsigned int, int, C_0018F350 *);
    void func_00190200(S_00191270_Owner *, int, char *, C_0018F350 *, S_1904E0_Rec *, unsigned int);
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
extern char D_00275630[], D_0028A8A4[], D_0028A89C[], D_0028A8BC[], D_0028A8B4[], D_0028A8AC[], D_0028A874[], D_0028A86C[], D_0028A864[];
#pragma optimize("y", off)
void C_00191270::func_001904E0(S_00191270_Owner *owner, int slot, S_00191270_Node *node, int c, int d)
{
    C_0018F350 ctxA;
    C_0018F350 ctxB;
    C_0018F350 ctxC;
    S_1904E0_Rec rec;
    S_1904E0_Rec arg;
    S_1904E0_Frame fr;
    void *frObj;
    int i;
        S_1904E0_Entry *e;
        unsigned int flags;
        int hi;
        int r;
        int idx;
        int sidx;
        int tmp;
        int objIdx;
        void *val;

    if (node == 0 || c == -1 || d == -1 || owner->f28 == 1) {
        return;
    }
    ctxA.func_0018F350();
    ctxB.func_0018F350();
    ctxC.func_0018F350();
    for (i = c; i < d; i++) {


        rec = node->f20[i].rec;
        e = &node->f20[i];
        flags = e->f48;
        hi = (flags >> 8) & 0xff;
        r = func_0018D580(hi);
        switch (e->f4C) {
        case 8: {
            int a;
            int b;
            int m;
            const char *end = ctxB.f28;
            const char *s1 = end + 1;
            char ch;
            int n;

            do {
                ch = *end++;
            } while (ch != 0);
            a = end - s1;
            b = 0x3f;
            m = AsmMinI(b, a);
            n = m;
            func_001E8920(rec.name, ctxB.f28, n);
            rec.name[n] = 0;
            r = ctxC.f12c;
            if (rec.name[0] == '$') {
                if (func_0018E7D0(2, rec.name, &idx) != 1) break;
                if (!f158[idx].f48 || f158[idx].f50) break;
                val = (void *)f158[idx].f0;
                goto invoke;
            }
            goto invokeDefault;
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
                r = -1;
                if (rec.f40 == -1) {
                    ctxB.func_0018F4D0(flags);
                    fr.count = r;
                    fr.flags = flags;
                    break;
                }
                val = owner;
                sidx = f158[slot].f44;
            }
            {
                int n = f164[sidx].params[rec.f40].count;
                int end = i + 1 + n;
                int read = 0;
                int j;
                for (j = i + 1; j < end; ++j) {
                    if (j >= node->f24) break;
                    ++read;
                    arg = node->f20[j].rec;
                    if (node->f20[j].f4C != 2 ||
                        ((f164[sidx].params[rec.f40].types[n-read] ^ node->f20[j].f48) & 0xff00) ||
                        (arg.name[0] == '$' && !func_0018E7D0(0, arg.name, &objIdx))) {
                        ctxB.func_0018F4D0(flags);
                        i += read;
                        fr.count = -1;
                        fr.flags = flags;
                        goto next;
                    }
                }
                fr.count = n;
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
            if (rec.name[0] == '$') {
                if (func_0018E7D0(0, rec.name, &objIdx) != 1) {
                    ctxB.func_0018F4D0(fr.flags);
                    fr.count = -1;
                    break;
                }
                val = (void *)f158[objIdx].f0;
            } else {
                objIdx = slot;
                val = owner;
            }
            if (hi) {
                switch (flags & 0xff) {
                case 2: {
                    C_0018F350 *context = (C_0018F350 *)f158[objIdx].f54 + (rec.f40 & 0xff);
                    func_0018EA50(context->f18, context->func_0018E1D0());
                    break;
                }
                case 1: {
                    int field = f158[objIdx].f44;
                    char *desc = (char *)f164[field].fields + (rec.f40 & 0xff) * 16;
                    val = (char *)val + *(int *)(desc + 4) + ((rec.f40 >> 16) & 0xff);
                    func_0018EA50((flags & 0xff0000) | (hi << 8), val);
                    break;
                }
                case 0:
                    f170[r].convert(&rec, &ctxC);
                    func_0018EA50(ctxC.f18, ctxC.func_0018E1D0());
                    break;
                }
            }
            if (tmp == 0) {
                S_1904E0_Param *param = &f164[fr.tbl].params[fr.recId];
                void *callee = param->callee;
                unsigned int type = (param->flags >> 8) & 0xff;
                fr.count = -1;
                if (callee && frObj) {
                    void *out = ctxB.f150.func_00191400();
                    if (type == 1) {
                        float value = 0.0f;
                        value = (((S_1904E0_Native *)frObj)->*(*(float (S_1904E0_Native::**)(void *))&callee))(out);
                        ctxB.func_0018F390(D_00275630, 0x100, &value);
                    } else if (type == 4) {
                        double value = 0.0;
                        value = (((S_1904E0_Native *)frObj)->*(*(double (S_1904E0_Native::**)(void *))&callee))(out);
                        ctxB.func_0018F390(D_00275630, 0x400, &value);
                    } else {
                        int value = (((S_1904E0_Native *)frObj)->*(*(int (S_1904E0_Native::**)(void *))&callee))(out);
                        if (type != 0 && type != 9)
                            ctxB.func_0018F390(D_00275630, type << 8, &value);
                    }
                    if (param->f8 == 0 && f158[objIdx].f50 == 0) {
                        ((S_00191270_Owner *)frObj)->func_0018C820(-1.0f, node->f20[i].f0 + 1, d, node);
                        return;
                    }
                }
            } else fr.count = tmp;
            break;
        case 6:
            if (f158[slot].f5C < f158[slot].f58 + 1) {
                f158[slot].f5C = f158[slot].f58 + 10;
                f158[slot].f54 = func_001E83E8(f158[slot].f54, f158[slot].f5C * 0x1c0);
            }
            if (f158[slot].f54) {
                ((C_0018F350 *)f158[slot].f54)[f158[slot].f58].func_0018F4D0(flags);
                ((C_0018F350 *)f158[slot].f54)[f158[slot].f58].func_0018E250(rec.name, flags);
                ++f158[slot].f58;
            }
            break;
        case 13:
            func_001900E0(owner, D_0028A8A4, slot, &rec, flags, r, &ctxB);
            break;
        case 14:
            func_001900E0(owner, D_0028A89C, slot, &rec, flags, r, &ctxC);
            break;
        case 16:
            i = rec.f40 - 1;
            break;
        case 17:
            if (ctxB.f12c == 1) i = rec.f40 - 1;
            break;
        case 18:
            if (ctxB.f12c == 0) i = rec.f40 - 1;
            break;
        case 9:
            ctxB.func_0018E250(D_00275630, flags);
            break;
        case 11:
            func_00190200(owner, slot, D_0028A8B4, &ctxB, &rec, flags);
            break;
        case 10:
            func_00190200(owner, slot, D_0028A8BC, &ctxB, &rec, flags);
            break;
        case 12:
            func_00190200(owner, slot, D_0028A8AC, &ctxC, &rec, flags);
            break;
        case 15: {
            unsigned int mask = 1U << rec.f40;
            int result = f170[r].bit(&ctxB, &ctxC, mask);
            ctxB.func_0018F390(D_00275630, 0x600, &result);
            break;
        }
        case 22:
            f170[r].binary(&ctxB, &ctxC, 22, &ctxB);
            break;
        case 23:
            f170[r].binary(&ctxB, &ctxC, 23, &ctxB);
            break;
        case 24:
            f170[r].binary(&ctxB, &ctxC, 24, &ctxB);
            break;
        case 25:
            f170[r].binary(&ctxB, &ctxC, 25, &ctxB);
            break;
        case 19:
            if (ctxB.f12c != 1 || ctxC.f12c != 1) ctxB.f12c = 0;
            func_00190200(owner, slot, D_0028A874, &ctxB, &rec, flags);
            break;
        case 20:
            ctxB.f12c = ctxB.f12c == 1 || ctxC.f12c == 1;
            func_00190200(owner, slot, D_0028A86C, &ctxB, &rec, flags);
            break;
        case 21:
            ctxB.f12c = ctxB.f12c != 1;
            func_00190200(owner, slot, D_0028A864, &ctxB, &rec, flags);
            break;
        case 7:
            break;
        case 4:
            if (f158[slot].f50 != 0) return;
            owner->func_0018C820(*(float *)((char *)&ctxB + 0x20), node->f20[i].f0 + 1, d, node);
            return;
        case 5: {
            if (f158[slot].f50 != 0) return;
            float low = *(float *)((char *)&ctxB + 0x20);
            float high = *(float *)((char *)&ctxC + 0x20);
            if (low > high) high = low;
            owner->func_0018C820(func_00011240() * (low - high) + high, node->f20[i].f0 + 1, d, node);
            return;
        }
        }
next:;
    }
    return;
invokeDefault:
    val = owner;
    idx = slot;
invoke:
            if (r) {
                int *continuation = (int *)func_001E8A44(0x14);
                continuation[0] = node->f20[i].f0 + 1;
                continuation[1] = d;
                continuation[2] = (int)node;
                continuation[3] = (int)owner;
                continuation[4] = slot;
                func_0018DDD0((S_00191270_Owner *)val, f158[idx].f48, rec.name);
                func_001904E0((S_00191270_Owner *)continuation[3], continuation[4], (S_00191270_Node *)continuation[2], continuation[0], continuation[1]);
                func_001E891B(continuation);
                return;
            }
            if (f158[idx].f50) return;
            {
                S_00191270_Node *it = f158[idx].f48->f104;
                while (it && strcmp(rec.name, it->tag)) it = it->f2C;
                if (it) ((S_00191270_Owner *)val)->func_0018C820(0, 0, it->f24, it);
            }
            return;

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

