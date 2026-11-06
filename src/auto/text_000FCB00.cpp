/* 1 function from 0x000FCB00 to 0x000FF3C0, found by Ghidra. */
#include "common.h"

extern char D_00278678[], D_002786A0[], D_00278690[], D_002786B0[], D_00282598[], D_00282580[], D_00282568[], D_00282550[], D_00282544[];
extern int D_0028F5EC, D_0028F5E0;
extern "C" void *func_001E8A44(unsigned int size);

struct Text_FCB00 {
    Text_FCB00 *func_001B12C0(int a);
    void func_001B13A0(char *a, char *b, int c, int d);
    void func_001B1A30(int a, int b, int c);
    void func_001B2270(unsigned int color);
    void func_001B19A0(int a);
    void func_001B17D0(char *a);
};

struct Img_FCB00 {
    char pad0[0x28];
    int width;
    int f2C;
    char pad30[0xC];
    float a, b, c, d;
    char pad4C[0xC];
    unsigned char flags;
    Img_FCB00 *func_001D5760();
    void func_001D5810(char *name, float x, float y, int z);
};

struct Obj_FCB00 {
    char pad0[0x4];
    int x, y;
    char padC[0x38];
    int f44, f48;
    char pad4C[2];
    unsigned char flags;
    Obj_FCB00 *func_001D5E90();
    void func_001D6190(int a, void *b, char *c);
};

struct Obj60_FCB00 {
    Obj60_FCB00 *func_001D5E90();
};

struct MgrB_FCB00 { void func_0005B240(); };

struct S_000FCB00_Mgr2 {
    char pad0[0x2e0];
    MgrB_FCB00 *f2e0;
    char pad2e4[4];
    void *f2e8;
    S_000FCB00_Mgr2 *f2ec;
    int func_0018C780(int, void *, int);
    void *func_0018C160(int);
    void func_0005B240();
};

struct C_000FCB00 {
    char pad0[0x284];
    int f284[2];
    char pad28c[0x1c];
    int f2a8;
    int f2ac;
    int f2b0;
    int f2b4;
    char pad2b8[0x150];
    Obj_FCB00 *f408;
    char pad40c[0x1c20];
    int f202c, f2030, f2034, f2038;
    char pad203c[8];
    Img_FCB00 *f2044;
    int func_001BE4F0(int, int, int);
    void func_001577A0(void *obj, int flags);
    void func_000D2080();
    void func_000D1AE0();
    void func_000D1980();
    C_000FCB00 *func_000FCB00(int a, int b, int c);
};

extern S_000FCB00_Mgr2 *D_002A8490;

C_000FCB00 *C_000FCB00::func_000FCB00(int a, int b, int c) {
    const char *names[3] = {D_00278678, D_002786A0, D_00278690};
    int v;
    void *p;

    func_001BE4F0(a, b, c);
    D_002A8490->f2ec->func_0018C780(3, (void *)names, 0);
    p = D_002A8490->f2ec->func_0018C160((int)D_00278690);
    v = p ? *(int *)p : 0;
    D_002A8490->f2ec->func_0018C160((int)D_00278678);
    D_002A8490->f2ec->func_0018C160((int)D_002786A0);
    return this;
}
