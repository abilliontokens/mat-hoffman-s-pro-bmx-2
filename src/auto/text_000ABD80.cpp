/* 19 functions from 0x000ABD80 to 0x000ACD50, found by Ghidra. */
#include "common.h"
extern int D_0027C818;
extern int D_0027C80C;
extern int D_0027C800;

struct C_001B59E0 {
    void func_001B59E0();
};

/* UnlockChadTriggerAction */
struct C_000ABE10 {
    void *vtbl;
    C_000ABE10 *func_000ABE10();
};

struct C_000ABD80_P1 {
    void func_00168C20(void *key, int v, void *dst);
    void func_00168C50(void *key, int v, void *dst);
};

/* MusicTriggerAction */
struct C_000ABD80 {
    char pad0[0x10c];
    int field_10C;
    int field_110;
    void func_001B5A00(void *a, void *b);
    void func_000ABD80(C_000ABD80_P1 *a, void *b);
};

void *func_001E8A44(int size);
void func_001E891B(void *p);

struct C_000AC680_Alloc {
    virtual int vfunc0(int arg);
    C_000AC680_Alloc *func_000A3DE0();
};

/* BmxScene */
struct C_000AC680 {
    char pad0[0x28];
    u32 field_28;
    char pad2[0x4dc - 0x2c];
    C_000AC680_Alloc *field_4DC;
    int func_000AC680(void);
};

int __stdcall func_000A95D0(void *p);

struct C_000AC6E0 {
    char pad0[0x538];
    void *field_538;
    void func_000AC6E0(void);
};
