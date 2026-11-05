/* 11 functions from 0x0018CF40 to 0x0018DE60, found by Ghidra. */
#include "common.h"

extern "C" int strcmp(const char *s1, const char *s2);

struct C_0018D580_Sub {
    u8 a;
    u8 b;
};

/* singly linked list node: name is stored inline at the start */
struct C_0018DDD0_Node {
    char name[0x24];
    int f24;
    char pad28[4];
    C_0018DDD0_Node *next;
};

struct C_0018DDD0_Owner {
    char pad0[0x38];
    int f38;
};

struct C_0018DDD0_List {
    char pad0[0x104];
    C_0018DDD0_Node *head;
};

int __stdcall func_001904E0(C_0018DDD0_Owner *owner, int a, C_0018DDD0_Node *node, int b, int c);

struct C_0018D580_Id {
    char pad0[4];
    C_0018D580_Sub sub;
    char pad6[0x1E];
};

struct C_0018D970_Entry {
    int used;
    char name[0x5C];
};

struct C_0018DA00_Item {
    char *str;
    int f4;
    char pad8[0x14];
};

struct C_0018D900_Entry {
    char name[0x20];
    C_0018DA00_Item *items;
    int count;
    char pad28[0x10];
};

struct C_0018D7B0_Rec {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
};

struct C_0018D7B0_Slot {
    C_0018D7B0_Rec *recs;
    int f4;
};

struct C_0018D7B0_Def {
    char *name;
    u8 a;
    u8 b;
    char pad6[2];
    int max;
    int slot;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
};

struct C_0018D7B0 {
    char pad0[0x170];
    C_0018D7B0_Def *defs;
    int defCount;
    char pad178[4];
    C_0018D7B0_Slot *slots;
    void func_0018D7B0(const char *name, int index, int b, int c, int d);
};

struct C_0018D580 {
    char pad0[0x158];
    C_0018D970_Entry *named;
    int namedCount;
    char pad160[4];
    C_0018D900_Entry *entries;
    int entryCount;
    char pad16C[4];
    C_0018D580_Id *ids;
    int idCount;
    int func_0018D580(unsigned int id);
    int func_0018D900(const char *name);
    int func_0018D970(const char *name);
    int func_0018DA00(int index, const char *name);
};

int C_0018D580::func_0018D580(unsigned int id)
{
    int i = 0;

    if (0 < idCount) {
        unsigned char *p = (unsigned char *)ids + 4;
        do {
            if (id == p[1]) {
                return i;
            }
            i++;
            p += 0x24;
        } while (i < idCount);
    }
    return 0;
}

int C_0018D580::func_0018D900(const char *name)
{
    int i;

    for (i = 0; i < entryCount; i++) {
        if (strcmp(entries[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int C_0018D580::func_0018D970(const char *name)
{
    int i;

    for (i = 0; i < namedCount; i++) {
        if (named[i].used != 0 && strcmp(named[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int C_0018D580::func_0018DA00(int index, const char *name)
{
    int i;
    int count = entries[index].count;

    for (i = 0; i < count; i++) {
        if (strcmp(name, entries[index].items[i].str) == 0) {
            return entries[index].items[i].f4;
        }
    }
    return -1;
}

int __stdcall func_0018DDD0(C_0018DDD0_Owner *owner, C_0018DDD0_List *list, const char *name)
{
    C_0018DDD0_Node *n;

    for (n = list->head; n != 0; n = n->next) {
        if (strcmp(name, n->name) == 0) {
            func_001904E0(owner, owner->f38, n, 0, n->f24);
            return 1;
        }
    }
    return 0;
}

void func_0018DE50(void) {
    int func_00157A00(...);
    func_00157A00();
}
