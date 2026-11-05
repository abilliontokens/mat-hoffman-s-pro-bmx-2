/* 4 functions from 0x001904E0 to 0x00191470, found by Ghidra. */
#include "common.h"

struct C_000264C0 {
    void func_000264C0(void *param);
};

extern "C" int memcmp(const void *a, const void *b, unsigned int n);
extern char D_0028AA74[];
void *func_001E8AA5(int size);

/* node of the per-entry list, linked through +0x2C, 8-byte tag at +0 */
struct S_00191270_Node {
    char tag[0x24];
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
    char pad0[0x44];
    int f44;
    S_00191270_List *f48;
    int f4C;
    int f50;
    void *f54;
    int f58;
    int f5C;
};

struct S_00191270_Owner {
    char pad0[0x38];
    int f38;
};

struct C_00191270 {
    char pad0[0x158];
    S_00191270_Entry *f158;
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

