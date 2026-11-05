/* 11 functions from 0x0004BAF0 to 0x0004C7A0, found by Ghidra. */
#include "common.h"

extern int D_002773EC;
void func_001E891B(void *);

struct C_0004C6F0 {
    int unk0;
    void func_00033220(void);
    void *func_0004C6F0(int flags);
};

struct C_0004BED0 {
    int unk0;
    void func_00033220(void);
    void *func_0004BED0(int flags);
};

struct C_0004C560Item {
    int a;
    int b;
};

struct C_0004C560Tracker {
    void func_00088F70(int a, int b);
    void func_00088F60(int a);
};

struct C_0004C560Obj1C0 {
    void func_00099D40(int a);
};

struct C_0004C720List {
    int count;
};

struct C_0004C720Mgr {
    char pad0[0x2e0];
    C_0004C720List *f2e0;
};

extern C_0004C720Mgr *D_002A8490;

struct C_0004C560 {
    char pad0[0x1c0];
    C_0004C560Obj1C0 *f1c0;
    char pad1c4[0x44];
    int f208;
    char pad20c[0x848];
    C_0004C560Item items[254];
    int f1244;
    C_0004C560Tracker *f1248[2];
    int f1250;
    void func_00031640(void);
    void func_00034090(void);
    void func_000342C0(void);
    void func_0004C130(void);
    void func_0004C320(void);
    void func_001577A0(void *p, int n);
    int func_0004C560(void);
    void func_0004C5D0(void);
    int func_0004C720(void);
};

void *C_0004BED0::func_0004BED0(int flags) {
    extern int D_0027732C;
    unk0 = (int)&D_0027732C;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void *C_0004C6F0::func_0004C6F0(int flags) {
    unk0 = (int)&D_002773EC;
    func_00033220();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
