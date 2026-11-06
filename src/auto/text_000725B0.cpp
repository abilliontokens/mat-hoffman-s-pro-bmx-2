/* 5 functions from 0x000725B0 to 0x000733F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct Vol_725 { void func_00031610(int, int); };
extern "C" int __cdecl func_001361E0(int, int, int, unsigned int);
extern int D_002B903C;
struct C_000725B0 {
    char pad0[0x64];
    int f64, f68, f6C;
    char pad70[0x14];
    int f84, f88, f8C, f90;
    char pad94[4];
    int f98, f9C, fA0;
    Vol_725 *fA4;
    char padA8[4];
    int fAC, fB0, fB4, fB8, fBC, fC0, fC4, fC8;
    int func_000725B0(int a, int b);
    int func_00157BF0(int, int);
};
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


struct Font_72 { float func_0018C210(); };
struct Lookup_72 { Font_72** func_0018C160(int); };
struct Data_72 { int x; char* p; };
struct Root_72 { char pad[0x2e8]; Data_72* data; Lookup_72* lookup; };
extern Root_72* D_002A8490;
extern char D_00278678[],D_00278690[]; extern int D_0028F5E0;
extern char D_002A5FA8[],D_002A5348[],D_00275678[],D_002A60B0[],D_002A63C8[],D_00278658[],D_00278638[],D_00278608[];
extern float D_00278D40,D_00278654,D_00275544,D_0027653C,D_00278650;
void* func_001E8A44(int);
extern "C" int func_001ADCC0(char*,int,const char*,...);
static __forceinline void pos72(Res_72C90* p,int x,int y){if(p->x!=x||p->y!=y){p->y=y;p->x=x;p->flags|=6;}}
static __forceinline void align72(Res_72C90* p,int a){if(p->align!=a){p->align=a;p->flags|=6;}}
static __forceinline void color72(Res_72C90* p,unsigned int c){if(p->color!=c){p->flags|=8;p->color=(p->color & (c|0xff000000))|(c&0xffffff);}}
static __forceinline void uv72(Obj_72C90* p){float a=127.0f*p->w;p->flags|=4;p->a=a;p->b=0.0f*p->w;p->c=15.0f*p->h;p->d=0.0f*p->h;}
static __forceinline void size72(Obj_72C90* p){if(p->width!=0x44200000){p->width=0x44200000;p->flags|=1;}if(p->height!=0x42480000){p->height=0x42480000;p->flags|=1;}}

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
    C_00072C90* func_00072E70(int);
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
