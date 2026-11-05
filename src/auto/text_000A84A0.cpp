/* 30 functions from 0x000A84A0 to 0x000A91C0, found by Ghidra. */
#include "common.h"

extern int D_0027C310;
extern "C" int strcmp(const char *s1, const char *s2);

struct C_001B59E0 {
    void func_001B59E0();
};

struct C_000A8D70 {
    void *vtbl;
    C_000A8D70 *func_000A8D70();
};

extern int D_0027C2C0;
extern int D_0027C304;
extern char D_0027C2B4[];
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);

struct C_00168550 {
    void func_00168550(char *key, char *dst, int size);
};

struct C_001B5A00 {
    void func_001B5A00(void *a, void *b);
};

/* BikeRumbleTriggerAction */
struct C_000A89F0 {
    void *vtbl;
    char pad4[0x108];
    int unk10C;
    C_000A89F0 *func_000A89F0();
};

/* BikeWarningTriggerAction */
struct C_000A8C90 {
    void *vtbl;
    char pad4[0x108];
    char unk10C[3][0x3c];
    C_000A8C90 *func_000A8C90();
    void func_000A8CC0(C_00168550 *a, void *b);
};

int __stdcall func_001BBAA0(void *a, void *b);
extern char D_000A8D40;

/* BikeShutdownTriggerAction */
struct C_000A8D90 {
    void *vtbl;
    void Register(void *cb) { func_001BBAA0(this, cb); }
    int func_000A8D90(void *a, int b);
};

struct C_000A8BC0 {
    void *vtbl;
    char pad4[0x108];
    unsigned char unk10C;
    C_000A8BC0 *func_000A8BC0();
};

struct C_000A88A0_Item {
    unsigned char unk0;
    char pad1[0x3B];
};

struct C_000A88A0_Vec {
    float z;
    float y;
    float x;
    float w;
    float &operator[](int i) { return (&z)[i]; }
};

struct C_000A88A0 {
    void *vtbl;
    char pad4[0x108];
    C_000A88A0_Item items[3];
    C_000A88A0_Vec unk1C0;
    C_000A88A0 *func_000A88A0();
};

struct C_000A8B70 {
    int func_000A8B70(void *param1, void *param2);
};

struct Obj_00168550 {
    void func_00168550(void *param1, void *param2, int param3);
};

struct C_000A8BE0 {
    char pad0[0x10C];
    unsigned char unk10C;
    void func_001B5A00(void *param1, void *param2);
    void func_000A8BE0(void *param1, void *param2);
};

struct C_000A84A0 {
    void *vtbl;
    int count;
    char pad8[8];
    void (__cdecl **funcs)(void *, void *, void *, void *);
    void **args;
    char pad18[8];
    void *field20;
    int count2;
    void **items2;
    void func_000A84A0(void *param1, void *param2);
};

struct C_000A84F0 {
    char pad0[0x24];
    int count;
    void **items;
    void func_000A84F0();
};

struct C_000A8520 {
    char pad0[0x24];
    int count;
    char **items;
    int func_000A8520(char *param);
};

void C_000A84A0::func_000A84A0(void *param1, void *param2)
{
    int i;
    i = 0;
    field20 = param1;
    if (0 < count) {
        do {
            funcs[i](param1, this, args[i], param2);
            i = i + 1;
        } while (i < count);
    }
}

void C_000A84F0::func_000A84F0()
{
    int i;
    i = 0;
    if (0 < count) {
        do {
            *(int *)((char *)items[i] + 0x18) = 0;
            i = i + 1;
        } while (i < count);
    }
}

int strcmp(const char *s1, const char *s2);
int C_000A8520::func_000A8520(char *param)
{
    int i;
    int j;
    char *p;
    i = 0;
    if (0 < count) {
        do {
            j = 0;
            p = items[i] + 0x128;
            do {
                if (strcmp(p, param) == 0) {
                    return i;
                }
                j = j + 1;
                p = p + 0x78;
            } while (j < 6);
            i = i + 1;
        } while (i < count);
    }
    return -1;
}

C_000A88A0 *C_000A88A0::func_000A88A0() {
    extern int D_0027C2A0;
    extern float D_002A2734;
    extern float D_002A2738;
    extern float D_002A273C;
    extern float D_002A2740;
    int i;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C2A0;
    unk1C0[2] = 0.0f;
    unk1C0[1] = 0.0f;
    unk1C0[0] = 0.0f;
    unk1C0[3] = 1.0f;
    for (i = 0; i < 3; i++) {
        items[i].unk0 = 0;
    }
    unk1C0[0] = D_002A2734;
    unk1C0[1] = D_002A2738;
    unk1C0[2] = D_002A273C;
    unk1C0[3] = D_002A2740;
    return this;
}

C_000A89F0 *C_000A89F0::func_000A89F0()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C2C0;
    unk10C = 0;
    return this;
}

int C_000A8B70::func_000A8B70(void *param1, void *param2) {
    extern int D_000A8A60;
    int __stdcall func_001BBAA0(void *, void *);
    if (param2 != 0) {
        func_001BBAA0(this, &D_000A8A60);
    }
    return 1;
}

C_000A8BC0 *C_000A8BC0::func_000A8BC0() {
    extern int D_0027C2E8;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C2E8;
    unk10C = 0;
    return this;
}

void C_000A8BE0::func_000A8BE0(void *param1, void *param2) {
    extern int D_0027C2F0;
    ((Obj_00168550 *)param1)->func_00168550(&D_0027C2F0, &unk10C, 0x3B);
    func_001B5A00(param1, param2);
}

C_000A8C90 *C_000A8C90::func_000A8C90()
{
    int i;
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C304;
    for (i = 0; i < 3; i++) {
        unk10C[i][0] = 0;
    }
    return this;
}

void C_000A8C90::func_000A8CC0(C_00168550 *a, void *b)
{
    char buf[0x3c];
    int i;
    for (i = 0; i < 3; i++) {
        func_001ADCC0(buf, 0x3c, D_0027C2B4, i + 1);
        a->func_00168550(buf, unk10C[i], 0x3b);
    }
    ((C_001B5A00 *)this)->func_001B5A00(a, b);
}

C_000A8D70 *C_000A8D70::func_000A8D70()
{
    ((C_001B59E0 *)this)->func_001B59E0();
    vtbl = (void *)&D_0027C310;
    return this;
}

int __stdcall func_001BBAA0(void *a, void *b);
extern char D_000A8D40;
int C_000A8D90::func_000A8D90(void *a, int b)
{
    if (b) {
        Register(&D_000A8D40);
    }
    return 1;
}

