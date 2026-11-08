/* 11 functions from 0x0018CF40 to 0x0018DE60, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern "C" int strcmp(const char *s1, const char *s2);
extern "C" unsigned int strlen(const char *);
extern "C" char *func_001E95A4(char *, const char *);
extern char D_0027CEF0[];
extern char D_0028A9F0[];
extern "C" void *func_001E8AA5(unsigned int);
extern "C" void *func_001E83E8(void *, unsigned int);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);
static inline int ms_min(volatile int a, volatile int b) { int x = a, y = b; volatile int result = x < y ? x : y; return result; }

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
struct C_0018DDD0_Mgr {
    int func_0018DDD0(C_0018DDD0_Owner *owner, C_0018DDD0_List *list, const char *name);
    int func_001904E0(C_0018DDD0_Owner *owner, int a, C_0018DDD0_Node *node, int b, int c);
};

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
    int sub;
    int max;
    int slot;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
};

struct C_0018D330_Item {
    int f0;
    int f4;
    int f8;
    int fC;
};

struct C_0018D330_List {
    char pad0[0x2c];
    C_0018D330_Item *items;
    int count;
    int capacity;
};

extern "C" void *func_001E83E8(void *, unsigned int);
extern "C" char *func_001E8920(char *dst, const char *src, unsigned int n);

struct C_0018D7B0 {
    char pad0[0x164];
    C_0018D330_List *lists;
    char pad168[8];
    C_0018D7B0_Def *defs;
    int defCount;
    int defCapacity;
    C_0018D7B0_Slot *slots;
    int slotCount;
    int slotCapacity;
    void func_0018D5C0(char *name, int type, int max, int a, int b, int c, int d, int e);
    int findDef(int b)
    {
        int i;

        for (i = 0; i < defCount; i++) {
            if (b == (*(u16 *)&defs[i].sub >> 8)) {
                return i;
            }
        }
        return 0;
    }
    void func_0018D7B0(const char *name, int index, int b, int c, int d);
    void func_0018D330(int index, int a, int b, const char *str);
    void func_0018CF40(int index, int a, int b, const char *str, const char *name, int c);
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
    void *func_0018DA90(void *result, int index, int type, const char *name, int *out);
};

void C_0018D7B0::func_0018CF40(volatile int index, int a, int b, const char *str, const char *name, int c)
{
#define L_ (*(char **)(self + 0x164) + index * 0x38)
#define R_(l) (*(char **)((l) + 0x20) + *(int *)((l) + 0x24) * 0x1c)
    char *volatile self = (char *)this;
    char *list = (char *)lists + index * 0x38;
    int count = *(int *)(list + 0x24);
    if (*(int *)(list + 0x28) < count + 1) {
        *(int *)(list + 0x28) = count + 20;
        list = L_;
        *(char **)(L_ + 0x20) = (char *)func_001E83E8(*(char **)(list + 0x20), *(int *)(list + 0x28) * 0x1c);
        list = L_;
        if (*(char **)(list + 0x20) == 0)
            return;
    }
    *(int *)(R_(list) + 0x18) = a;
    { char *l = L_; *(int *)(R_(l)) = b; }
    { char *l = L_; *(int *)(R_(l) + 0x8) = c; }
    { char *l = L_; *(int *)(R_(l) + 0x4) = *(int *)(l + 0x24); }

    int i;
    int n = *(int *)(self + 0x174);
    for (i = 0; i < n; i++) {
        char *d = *(char **)(self + 0x170);
        if (strcmp(name, *(char **)(d + i * 0x24)) == 0) {
            char *l = L_;
            *(int *)(R_(l) + 0xc) = (*(int *)(d + i * 0x24 + 4) & 0xffff00) | 1;
            break;
        }
    }

    char buffer[256] = "";
    char packed[256] = "";
    int length = strlen(str);
    int limit = 255;
    int size = AsmMinI(limit, length);
    func_001E8920(buffer, str, size);
    buffer[size] = 0;
    volatile int parts = 1;
    int p = 1;
    if (buffer[0]) {
        char *s = buffer;
        char *d = packed;
        do {
            char ch = *s;
            if (ch != ' ') {
                *d++ = ch;
                if (ch == ',')
                    p++;
            }
            s++;
        } while (*s);
        parts = p;
    }
    list = L_;
    *(void **)(R_(list) + 0x10) = func_001E8AA5(p * 4);
    volatile char *token = func_001E95A4(packed, D_0028A9F0);
    volatile int k = 0;
    do {
        int cnt = *(int *)(self + 0x174);
        for (i = 0; i < cnt; i++) {
            char *d = *(char **)(self + 0x170);
            if (strcmp((char *)token, *(char **)(d + i * 0x24)) == 0) {
                char *l = L_;
                *(int *)(*(char **)(R_(l) + 0x10) + k) = (*(int *)(d + i * 0x24 + 4) & 0xffff00) | 1;
                k += 4;
                break;
            }
        }
        token = func_001E95A4(0, D_0028A9F0);
    } while (token);
    { char *l = L_; *(int *)(R_(l) + 0x14) = parts; }
    (*(int *)(L_ + 0x24))++;
#undef L_
#undef R_
}

void C_0018D7B0::func_0018D330(int index, int a, int b, const char *str)
{
    int i;

    if (lists[index].capacity < lists[index].count + 1) {
        lists[index].capacity = lists[index].count + 10;
        lists[index].items = (C_0018D330_Item *)func_001E83E8(lists[index].items, lists[index].capacity * sizeof(C_0018D330_Item));
    }
    if (lists[index].items) {
        lists[index].items[lists[index].count].f4 = a;
        lists[index].items[lists[index].count].f0 = b;
        char buf[256] = {0};
        char out[256] = {0};
        const char *e = str;
        while (*e++) {}
        int len = e - (str + 1);
        int n = ms_min(255, len);
        func_001E8920(buf, str, n);
        buf[n] = 0;
        if (buf[0]) {
            char *s = buf;
            char *d = out;
            do {
                if (*s != ' ') {
                    *d++ = *s;
                }
            } while (*++s);
        }
        int cnt = defCount;
        C_0018D7B0_Def *p = defs;
        for (i = 0; i < cnt; i++, p++) {
            if (strcmp(out, p->name) == 0) {
                lists[index].items[lists[index].count].f8 = (defs[i].sub & 0xffff00) | 1;
                lists[index].items[lists[index].count].fC = defs[i].f10;
                lists[index].count++;
                return;
            }
        }
    }
}

int C_0018D580::func_0018D580(unsigned int id)
{
    int i = 0;

    if (0 < idCount) {
        unsigned short *p = (unsigned short *)((char *)ids + 4);
        do {
            if (id == (unsigned int)(*p >> 8)) {
                return i;
            }
            i++;
            p = (unsigned short *)((char *)p + 0x24);
        } while (i < idCount);
    }
    return 0;
}

extern "C" void *func_001E83E8(void *, unsigned int);
extern "C" void *func_001E8AA5(unsigned int);
void C_0018D7B0::func_0018D5C0(char *name, int type, int max, int a, int b, int c, int d, int e)
{
    if (defCapacity < defCount + 1) {
        defCapacity = defCount + 10;
        defs = (C_0018D7B0_Def *)func_001E83E8(defs, defCapacity * sizeof(C_0018D7B0_Def));
        if (!defs) return;
    }
    if (b == 1) b = 126;
    defs[defCount].name = name;
    defs[defCount].f20 = b;
    defs[defCount].f14 = c;
    defs[defCount].f18 = e;
    defs[defCount].f1C = d;
    defs[defCount].max = max;
    defs[defCount].f10 = a;
    if (type == 9 && max > 0) {
        if (slotCapacity < slotCount + 1) {
            slotCapacity = slotCount + 10;
            slots = (C_0018D7B0_Slot *)func_001E83E8(slots, slotCapacity * sizeof(C_0018D7B0_Slot));
            if (!slots) return;
        }
        slots[slotCount].recs = (C_0018D7B0_Rec *)func_001E8AA5(max * sizeof(C_0018D7B0_Rec));
        slots[slotCount].f4 = max;
        defs[defCount].slot = slotCount;
        *(int *)&defs[defCount].sub = (slotCount << 16) | 0x901;
        slotCount++;
    } else {
        *(int *)&defs[defCount].sub = (type << 8) | 1;
    }
    defCount++;
}

void C_0018D7B0::func_0018D7B0(const char *name, int index, int b, int c, int d)
{
    int i;
    int j;
    int slot;

    for (i = 0; i < defCount; i++) {
        if (strcmp(name, defs[i].name) == 0) {
            if (index > defs[i].max) {
                return;
            }
            slot = defs[i].slot;
            slots[slot].recs[index].f0 = b;
            slots[slot].recs[index].f4 = (c << 8) | 1;
            slots[slot].recs[index].f8 = d;
            j = findDef(c);
            slots[slot].recs[index].fC = defs[j].f14;
            slots[slot].recs[index].f10 = defs[j].f18;
            slots[slot].recs[index].f14 = defs[j].f1C;
            return;
        }
    }
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

void *__fastcall func_0018DA90(char *volatile self, int, void *result, int type, int index, const char *name, int *out)
{
    int slot;
    int i = 0;
    int value[17];
    char buffer[256] = "";
    value[16] = -1;
    int length = strlen(name);
    int limit = 255;
    int size = AsmMinI(limit, length);
    func_001E8920(buffer, name, size);
    buffer[size] = 0;
    int dots = 0;
    for (int k = 0; buffer[k]; k++) if (buffer[k] == '.') dots++;
    value[0] = 0;
    char *token = func_001E95A4(buffer, D_0027CEF0);
    if (type == 1) {
        char *list = *(char **)(self + 0x164) + index * 0x38;
        volatile int count = *(int *)(list + 0x30);
        char *items = *(char **)(list + 0x2c);
        for (i = 0; i < count; i++) {
            if (strcmp(token, *(char **)(items + i * 16)) == 0) {
                int id = *(int *)(items + i * 16 + 8);
                slot = (id >> 16) & 255;
                *out = id;
                value[16] = i;
                break;
            }
        }
    } else if (type == 2) {
        char *list = *(char **)(self + 0x158) + index * 0x60;
        int count = *(int *)(list + 0x58);
        char *items = *(char **)(list + 0x54);
        for (i = 0; i < count; i++) {
            if (strcmp(token, items + i * 0x1c0) == 0) {
                slot = (unsigned char)items[i * 0x1c0 + 0x1a];
                *out = i;
                value[16] = i;
                break;
            }
        }
    }
    token = func_001E95A4(0, D_0027CEF0);
    if (token && value[16] != -1) {
        dots--;
        volatile int n = 0;
        do {
            if (n == dots) {
                char *list = *(char **)(self + 0x17c) + slot * 8;
                int count = *(int *)(list + 4);
                char *items = *(char **)list;
                for (i = 0; i < count; i++) {
                    if (strcmp(token, *(char **)(items + i * 24)) == 0) {
                        int high = *(int *)(items + i * 24 + 8);
                        int low = *(int *)(items + i * 24 + 4);
                        *out = low;
                        value[16] = (value[16] & 255) | (high << 16);
                        break;
                    }
                }
            }
            token = func_001E95A4(0, D_0027CEF0);
            n++;
        } while (token);
    }
    for (i = 0; i < 17; i++) ((int *)result)[i] = value[i];
    return result;
}

int C_0018DDD0_Mgr::func_0018DDD0(C_0018DDD0_Owner *owner, C_0018DDD0_List *list, const char *name)
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
