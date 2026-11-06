/* 5 functions from 0x000725B0 to 0x000733F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct C_00072E50 {
    void func_00072E50(void);
};

/* GameObject: the base every menu constructs first */
struct C_00157600 {
    void *func_00157600(int flags);
};

extern int D_0027850C;
extern int D_00278CD4;

extern "C" void __cdecl func_001E891B(void *);

/* a resource released with func_001D6410 and then freed */
struct Res_72C90 {
    int pad0,x,y; char padC[0x38]; int align; unsigned int color; char pad4c[2]; unsigned char flags;
    Res_72C90* func_001D5E90(); void func_001D6190(void*,int,int);void func_001D5FA0(void*,int,int,int);void func_0005E840(int);
    void func_001D6410();
};

/* an object with a virtual destructor, deleted through its vtable */
struct Obj_72C90 {
    virtual ~Obj_72C90();
    char pad4[0x24]; int width,height; char pad30[0xc]; float a,b,c,d,w,h; char pad54[4]; unsigned char flags;
    Obj_72C90* func_001D5760();void func_001D5810(char*,float,float,int);
};

/* BmxMenu-derived menu (RunResultsMenu) */
struct C_00072C90 {
    void *vtbl;
    char pad4[0x20];
    int a24[8];
    int a44[8];
    int f64;
    Res_72C90 *f68;
    int f6C;
    Obj_72C90 *f70;
    Obj_72C90 *f74;
    Obj_72C90 *f78;
    Obj_72C90 *f7C;
    Res_72C90 *f80;
    int f84;
    Res_72C90 *f88;
    char pad8C[4];
    Obj_72C90 *a90[5];
    Obj_72C90 *aA4[5];
    Res_72C90 *aB8[5];
    C_00072C90 *func_00072C90(int flags);
    void func_00072D30();
    void func_00157660();
};


C_00072C90 *C_00072C90::func_00072C90(int flags)
{
    int i;

    ((C_00157600 *)this)->func_00157600(0);
    vtbl = (void *)&D_0027850C;
    for (i = 0; i < 8; i++) {
        a24[i] = 0;
        a44[i] = 0;
    }
    vtbl = (void *)&D_00278CD4;
    f68 = 0;
    f64 = 0;
    f78 = 0;
    f7C = 0;
    for (i = 0; i < 5; i++) {
        a90[i] = 0;
        aA4[i] = 0;
    }
    f6C = 0;
    f84 = 0;
    f70 = 0;
    f74 = 0;
    f80 = 0;
    aB8[0] = 0;
    aB8[1] = 0;
    aB8[2] = 0;
    aB8[3] = 0;
    aB8[4] = 0;
    f88 = 0;
    return this;
}

void C_00072C90::func_00072D30()
{
    int i;
    Res_72C90 *p;

    vtbl = (void *)&D_00278CD4;
    p = f80;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        f80 = 0;
    }
    p = f68;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        f68 = 0;
    }
    if (f78) {
        delete f78;
        f78 = 0;
    }
    if (f7C) {
        delete f7C;
        f7C = 0;
    }
    if (f70) {
        delete f70;
        f70 = 0;
    }
    if (f74) {
        delete f74;
        f74 = 0;
    }
    for (i = 0; i < 5; i++) {
        p = aB8[i];
        if (p) {
            p->func_001D6410();
            func_001E891B(p);
        }
        aB8[i] = 0;
    }
    p = f88;
    if (p) {
        p->func_001D6410();
        func_001E891B(p);
        f88 = 0;
    }
    for (i = 0; i < 5; i++) {
        if (a90[i]) {
            delete a90[i];
            a90[i] = 0;
        }
        if (aA4[i]) {
            delete aA4[i];
            aA4[i] = 0;
        }
    }
    func_00157660();
}

void C_00072E50::func_00072E50(void)
{
  int* in_ECX = (int*)this;
  
  in_ECX[0x1b] = 0;
  (**(code **)(*in_ECX + 0x18))();
  in_ECX[0x23] = 1;
  return;
}
