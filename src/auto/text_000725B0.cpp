/* 5 functions from 0x000725B0 to 0x000733F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
struct Slider_725 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void setv(int); };
struct Vol_725 { void func_00031610(int, int); char pad[0x1b4]; Slider_725 *s1b4; };
struct List_725 { char pad[0x28]; Slider_725 *s28; void func_00094960(int); int func_000947B0(); int func_000952F0(); int func_00094870(); int func_00094760(); };
struct Cur_725 { char pad[4]; int f4; char pad8[0x10]; int f18, f1c; char pad20[0x2dc]; List_725 *list; };
struct Opt_725 { char pad[0x64]; struct Opt2_725 *o64; };
struct Opt2_725 { char pad[0x4c0]; Slider_725 *s4c0; };
struct Game_725 { char pad[0x2a4]; Opt_725 *opt; char pad2[0x38]; Cur_725 *cur; };
extern Game_725 *D_002A8490_g;
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
    void func_00072280();
    void func_000721D0();
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
extern float D_00278D40,D_00278650;
extern const float D_00278654,D_00275544,D_0027653C;
void* func_001E8A44(int);
extern "C" int func_001ADCC0(char*,int,const char*,...);
static __forceinline Font_72* find72(char* name){Font_72** r=D_002A8490->lookup->func_0018C160((int)name);return r?*r:0;}
static __forceinline void pos72(Res_72C90* p,int x,int y){if(p->x!=x||p->y!=y){p->y=y;p->x=x;p->flags|=6;}}
static __forceinline void align72(Res_72C90* p,int a){if(p->align!=a){p->align=a;p->flags|=6;}}
static __forceinline void color72(Res_72C90* p,unsigned int c){if(p->color!=c){p->flags|=8;p->color=(p->color & (c|0xff000000))|(c&0xffffff);}}
static __forceinline void uv72(Obj_72C90* p){float a=*(volatile float*)&p->w*D_00278654;p->flags|=4;p->a=a;p->b=*(volatile float*)&p->w*D_00275544;p->c=*(volatile float*)&p->h*D_0027653C;p->d=*(volatile float*)&p->h*D_00275544;}
static __forceinline void width72(Obj_72C90* p){if(p->width!=0x44200000){p->width=0x44200000;p->flags|=1;}}
static __forceinline void height72(Obj_72C90* p){if(p->height!=0x42480000){p->height=0x42480000;p->flags|=1;}}
static __forceinline void size72(Obj_72C90* p){width72(p);height72(p);}

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


int C_000725B0::func_000725B0(int a, int b)
{
    int a8 = *(int *)(a + 8);

    if (fC0) {
        D_002B903C = a8;
        fC0 = 0;
    }
    if (fC4 != -1 && a8 != fC4)
        return func_00157BF0(a, b);
    fC8 = 0;
    if (f98)
        return 0;
    if (func_001361E0(2, 2, a, 0x80000000)) {
        fA4->func_00031610(2, 1);
        f68 = f64;
        f6C = f64;
        if (--f64 < 0)
            f64 = 3;
        fBC = 0;
        f9C = 1;
        return func_00157BF0(a, b);
    }
    if (func_001361E0(3, 2, a, 0x80000000)) {
        fA4->func_00031610(2, 1);
        f68 = f64;
        f6C = f64;
        if (++f64 > 3)
            f64 = 0;
        fBC = 0;
        f9C = 1;
        return func_00157BF0(a, b);
    }
    if (func_001361E0(5, 2, a, 0x80000000) || func_001361E0(24, 2, a, 0x80000000)) {
        f6C = f64;
        fA4->func_00031610(4, 1);
        f98 = 1;
        fB8 = 0;
        return 1;
    }
    if (func_001361E0(0, 2, a, 0x80000000)) {
        fA0 = 1;
        switch (f64) {
        case 2:
            fA4->func_00031610(2, 1);
            fAC -= 10;
            if (fAC < 0)
                fAC = 100;
            D_002A8490_g->cur->list->s28->setv(fAC);
            D_002A8490_g->cur->f18 = fAC;
            return func_00157BF0(a, b);
        case 3:
            fA4->func_00031610(5, 1);
            fB0 -= 10;
            if (fB0 < 0)
                fB0 = 100;
            D_002A8490_g->opt->o64->s4c0->setv(fB0);
            fA4->s1b4->setv(fB0);
            D_002A8490_g->cur->f1c = fB0;
            return func_00157BF0(a, b);
        case 0:
            if (D_002A8490_g->cur->f4 != 10) {
                D_002A8490_g->cur->list->func_00094960(0);
                fA4->func_00031610(2, 1);
                do {
                    f84 = D_002A8490_g->cur->list->func_000947B0();
                } while (D_002A8490_g->cur->list->func_000952F0() <= 0);
                f88 = 1;
                f8C = D_002A8490_g->cur->list->func_00094870();
                f90 = 1;
                func_00072280();
                return func_00157BF0(a, b);
            }
            return 1;
        case 1:
            if (D_002A8490_g->cur->f4 != 10) {
                fA4->func_00031610(2, 1);
                if (D_002A8490_g->cur->list->func_000952F0() > 0) {
                    f90 = 1;
                    if (--f88 < 1) {
                        f88 = D_002A8490_g->cur->list->func_00094870();
                        func_00072280();
                    }
                    return func_00157BF0(a, b);
                }
                fA4->func_00031610(3, 1);
                return func_00157BF0(a, b);
            }
            return 1;
        }
    } else if (func_001361E0(1, 2, a, 0x80000000)) {
        fA0 = 1;
        switch (f64) {
        case 2:
            fA4->func_00031610(2, 1);
            fAC += 10;
            if (fAC > 100)
                fAC = 0;
            D_002A8490_g->cur->list->s28->setv(fAC);
            D_002A8490_g->cur->f18 = fAC;
            return func_00157BF0(a, b);
        case 3:
            fA4->func_00031610(5, 1);
            fB0 += 10;
            if (fB0 > 100)
                fB0 = 0;
            D_002A8490_g->opt->o64->s4c0->setv(fB0);
            fA4->s1b4->setv(fB0);
            D_002A8490_g->cur->f1c = fB0;
            return func_00157BF0(a, b);
        case 0:
            if (D_002A8490_g->cur->f4 != 10) {
                D_002A8490_g->cur->list->func_00094960(0);
                fA4->func_00031610(2, 1);
                do {
                    f84 = D_002A8490_g->cur->list->func_00094760();
                } while (D_002A8490_g->cur->list->func_000952F0() <= 0);
                f88 = 1;
                f8C = D_002A8490_g->cur->list->func_00094870();
                f90 = 1;
                func_000721D0();
                return func_00157BF0(a, b);
            }
            return 1;
        case 1:
            if (D_002A8490_g->cur->f4 != 10) {
                fA4->func_00031610(2, 1);
                if (D_002A8490_g->cur->list->func_000952F0() > 0) {
                    f90 = 1;
                    if (++f88 > D_002A8490_g->cur->list->func_00094870()) {
                        f88 = 1;
                        func_000721D0();
                    }
                    return func_00157BF0(a, b);
                }
                fA4->func_00031610(3, 1);
                return func_00157BF0(a, b);
            }
            return 1;
        }
    }
    return func_00157BF0(a, b);
}

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
    for (i = 0; i < 5; i++) {
        aB8[i] = 0;
    }
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

C_00072C90* C_00072C90::func_00072E70(int arg) {
C_00072C90* self=this;
Font_72** r=D_002A8490->lookup->func_0018C160((int)D_00278678);Font_72* font=r?*r:0;
r=D_002A8490->lookup->func_0018C160((int)D_00278690);Font_72* font2=r?*r:0;self->f64=arg;
Res_72C90* t=(Res_72C90*)func_001E8A44(0x60);self->f68=t?t->func_001D5E90():0;
self->f68->func_001D6190(font,*(int*)(D_002A8490->data->p+0xf20),(int)D_00278678);self->f68->func_0005E840(*(int*)(D_002A8490->data->p+0xf20));
pos72(self->f68,0x43a00000,0x42200000);align72(self->f68,D_0028F5E0);color72(self->f68,0xaaaaaaaa);
t=(Res_72C90*)func_001E8A44(0x60);self->f88=t?t->func_001D5E90():0;self->f88->func_001D6190(font2,*(int*)(D_002A8490->data->p+0x838),(int)D_00278690);color72(self->f88,0xffcccccc);pos72(self->f88,0x43cf8000,0x43c48000);
t=(Res_72C90*)func_001E8A44(0x60);self->f80=t?t->func_001D5E90():0;self->f80->func_001D5FA0(font2,(int)D_00278690,30,0);pos72(self->f80,0x43a00000,0x42ea0000);color72(self->f80,0xffcccccc);align72(self->f80,D_0028F5E0);
for(int i=0;i<5;i++){t=(Res_72C90*)func_001E8A44(0x60);self->aB8[i]=t?t->func_001D5E90():0;self->aB8[i]->func_001D5FA0(font2,(int)D_00278690,45,0);float y=font2->func_0018C210()*i+D_00278D40;t=self->aB8[i];if(t->x!=0x43a00000||*(float*)&t->y!=y){*(float*)&t->y=y;t->x=0x43a00000;t->flags|=6;}color72(self->aB8[i],0xffcccccc);align72(self->aB8[i],D_0028F5E0);}
func_001ADCC0(D_002A60B0,0x104,D_00275678,D_002A5348,D_002A5FA8);
Obj_72C90* o=(Obj_72C90*)func_001E8A44(0x64);self->f78=o?o->func_001D5760():0;self->f78->func_001D5810(D_00278658,0,0,0);uv72(self->f78);width72(self->f78);height72(self->f78);
for(int j=0;j<5;j++){o=(Obj_72C90*)func_001E8A44(0x64);Obj_72C90* n=o?o->func_001D5760():0;float x=j*D_00278650;self->a90[j]=n;self->a90[j]->func_001D5810(D_00278658,x,50,0);o=(Obj_72C90*)func_001E8A44(0x64);self->aA4[j]=o?o->func_001D5760():0;self->aA4[j]->func_001D5810(D_00278658,x,366,0);o=self->aA4[j];o->a=0;o->b=1;o->c=0.99f;o->d=0;o->flags|=4;}
o=(Obj_72C90*)func_001E8A44(0x64);self->f7C=o?o->func_001D5760():0;self->f7C->func_001D5810(D_00278658,0,398,0);uv72(self->f7C);width72(self->f7C);height72(self->f7C);
o=(Obj_72C90*)func_001E8A44(0x64);self->f70=o?o->func_001D5760():0;self->f70->func_001D5810(D_00278638,379,388,0);
o=(Obj_72C90*)func_001E8A44(0x64);self->f74=o?o->func_001D5760():0;self->f74->func_001D5810(D_00278608,379,388,0);
strcpy(D_002A60B0,D_002A63C8);return self;
}

