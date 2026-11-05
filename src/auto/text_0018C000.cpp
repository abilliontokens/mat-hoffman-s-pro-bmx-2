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

struct C_0018C070 {
    undefined4 func_0018C070(void);
};

struct C_0018C800 {
    char pad0[0x24];
    int unk24;
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    void func_0018C800(void);
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

struct C_0018C000 {
    int vtbl;
    char *unk4;
    char pad8[0x50];
    int unk58[0x100];
    int unk458;
    void *func_0018C000(char *param);
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

struct C_0018C120 {
    C_0018C120_Node *head;
    int count;
    void func_001E891B(void *p);
    void func_0018C120(void);
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
    unk458 = -1;
    p = param;
    base = p + 1;
    do {
        c = *p;
        p++;
    } while (c != 0);
    dest = (char *)func_001E8A44((int)(p - base) + 1);
    unk4 = dest;
    p = param;
    while ((*dest++ = *p++) != 0)
        ;
    return this;
}

undefined4 C_0018C070::func_0018C070(void)
{
  extern undefined4 D_002AA6C0;
  int in_ECX = (int)this;
  
  if (*(int *)(in_ECX + 0x458) == -1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x458) * 0x10 + 4 + *(int *)(D_002AA6C0 + 0x14));
}

void C_0018C090::func_0018C090(int value) {
    C_0018C090_Node *tail;
    C_0018C090_Node *n;
    tail = 0;
    if (head != 0) {
        tail = head;
        while (tail->next != 0)
            tail = tail->next;
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
        count--;
    }
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

