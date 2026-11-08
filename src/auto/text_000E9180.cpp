/* 3 functions from 0x000E9180 to 0x000EA070, found by Ghidra. */
#include "common.h"
struct C_000E9FD0 {
    char pad0[0x784];
    int unk784;
    void func_000E9FD0(void);
};


struct C_001B1980 {
    void func_001B1980(void);
};

struct C_000E9FE0 {
    char pad0[0x340];
    C_001B1980 *unk340;
    C_001B1980 *unk344;
    C_001B1980 *unk348;
    C_001B1980 *unk34C;
    C_001B1980 *unk350;
    char pad354[0x12C];
    int unk480;
    char pad484[0xC];
    int unk490;
    int unk494;
    int unk498;
    int unk49C;
    int unk4A0;
    char pad4A4[0x24];
    int unk4C8;
    int unk4CC;
    char pad4D0[0x2B8];
    int unk788;
    void func_000E86C0(void);
    void func_000E9FE0(void);
};

extern float D_0027DE74;
extern float D_002755E8;
extern float D_00276524;
extern float D_00281A60;
extern float D_00281A5C;
extern int D_00281A64;
extern void *D_002EFDB8;
extern void *D_002A8490;
extern float D_002A33B8;
extern float D_002A33BC;
extern float D_002A33C0;
extern int D_0027EB58;

int func_000BC670();
void func_000BC590();
int func_000BE020(int a);
int func_000BDF30(int a);
int func_001E8858(float v);
void func_0001C1E0(int a, int b, int c, int d);
void func_0001BB00(int a, int b, int c);
void func_00197E70(float *v);
void func_001996A0(int a, float *v, float *w, float *x, int y);
void func_0001B910(void *p);

struct S_0E9180_270 {
    char pad0[0x270];
    int func_000BC670();
    void func_000BC590();
};

#include <xmmintrin.h>
struct Vec_0E9180 { float x,y,z,w; };
static __forceinline void cross_0E9180(Vec_0E9180 * volatile out,const Vec_0E9180 * volatile a,const float *b) {
    const Vec_0E9180 *pa=a;
    _mm_storeu_ps(&out->x, _mm_shuffle_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&pa->x), _mm_shuffle_ps(_mm_loadu_ps(b),_mm_loadu_ps(b),0xc9)),
        _mm_mul_ps(_mm_loadu_ps(b),_mm_shuffle_ps(_mm_loadu_ps(&pa->x),_mm_loadu_ps(&pa->x),0xc9))),
        _mm_sub_ps(_mm_mul_ps(_mm_loadu_ps(&pa->x), _mm_shuffle_ps(_mm_loadu_ps(b),_mm_loadu_ps(b),0xc9)),
        _mm_mul_ps(_mm_loadu_ps(b),_mm_shuffle_ps(_mm_loadu_ps(&pa->x),_mm_loadu_ps(&pa->x),0xc9))),0xc9));
}
static __forceinline void cross_scalar_0E9180(Vec_0E9180 * volatile out,const Vec_0E9180 * volatile a,const float *b) {
    const Vec_0E9180 *v=a;
    Vec_0E9180 *r=out;
    r->x=v->y*b[2]-v->z*b[1];
    r->y=v->z*b[0]-v->x*b[2];
    r->z=v->x*b[1]-v->y*b[0];
    r->w=0;
}
struct V_0E9180 {
    virtual void v0(); virtual void v4(); virtual void v8(); virtual void vc();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
};
struct PageVirtual_0E9180 : V_0E9180 {
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6c();
    virtual void v70(int,int);
};
struct Transform_0E9180 {
    void func_00197E70(void *);
    void func_001996A0(int, Vec_0E9180);
};
struct Model_0E9180 {
    int *vbtable;
    Transform_0E9180 *transform;
    V_0E9180 *interfacePtr() { return (V_0E9180 *)((char *)this + vbtable[1]); }
};
struct Item_0E9180 { char pad[0x1a4]; Model_0E9180 *model; };
struct List_0E9180 : V_0E9180 { char pad[0x24]; Item_0E9180 **items; };
struct Query_0E9180 { int func_0005C1D0(int); };
struct Timer_0E9180 { void func_001C4B60(int,int); int func_001C3F10(); };
struct S_0E9180_Manager {
    char pad0[0x2c];
    List_0E9180 *f2c;
    void func_0001BC00(int,void *);
    int func_0001B3C0(void *);
    void func_0001C1E0(int, int, int, int);
    void func_0001BB00(int, void *, int);
    void func_0001B910(void *);
};
struct S_0E9180_150 {
    char pad0[0x3a8];
    V_0E9180 **f3a8;
    char pad3ac[0x484-0x3ac];
    S_0E9180_Manager *f484;
};

struct S_0E9180_124 {
    char pad0[0x134];
    int f134, f138;
    char pad13c[0x150-0x13c];
    S_0E9180_150 *f150;
    char pad154[0x264-0x154];
    unsigned int f264;
    Timer_0E9180 *f268;
    int f26c;
    void *f270;
    char pad274[8];
    char *f27c;
    char pad280[8];
    int f288;
    int f28c;
    int func_000BE020(int);
    int func_000BDF30(int);
    void *func_000BA9D0(int);
};

struct C_000E9180 {
    void *vtbl;
    char pad4[0x124 - 4];
    S_0E9180_124 *f124;
    char pad128[0x288 - 0x128];
    int f288;
    int f28c;
    int f290;
    int f294;
    float f298;
    int f29c;
    int f2a0;
    int f2a4;
    int f2a8;
    char pad2AC[0x468 - 0x2AC];
    int f468;
    char pad46C[0x47c - 0x46C];
    int f47c;
    int f480;
    int f484;
    float f488;
    float f48c;
    int f490;
    int f494;
    int f498;
    float f49c;
    float f4a0;
    int f4a4;
    int f4a8;
    int f4ac;
    int f4b0;
    int f4b4;
    char pad4b8[0x10];
    int f4c8;
    int f4cc;
    int f4d0;
    int f4d4;
    char pad4D8[0x4dc - 0x4D8];
    int f4dc;
    int f4e0;
    int f4e4;
    int f4e8;
    float f4ec;
    Vec_0E9180 f4f0;
    char pad500[0xc];
    int f50c;
    char pad510[0x514 - 0x510];
    void *f514;
    char pad518[0x6b8 - 0x518];
    void *f6b8;
    char pad6BC[0x784 - 0x6BC];
    int f784;
    int f788;
    int f78c;
    void func_000E9180(float dt);
    void func_000E8630();
    void func_001BEB00();
    void func_001BED00(float);
};

typedef void (__fastcall *VF_0E9180)(void *self, int dummy, int a, int b);
void C_000E9180::func_000E9180(float dt)
{
    C_000E9180 * volatile self=this;
    S_0E9180_124 *m = f124;
    int b, v;
    C_000E9180 *p;
    if (((S_0E9180_270 *)m->f270)->func_000BC670())
        ((S_0E9180_270 *)m->f270)->func_000BC590();
    p=self;
    v = ((u8 *)p->f6b8)[0x3b];
    if (p->f490 != v) {
        if (p->f49c >= p->f4a0) p->f498 = p->f490;
        else { b = p->f494; p->f498 = (int)((float)(p->f490-b) * (p->f49c/p->f4a0)) + b; }
        self->f49c += dt;
    }
    p=self;
    if (p->f2a0 || p->f2a4 || p->f29c || p->f50c) {
        p->f298 += dt;
        p=self;
        if (p->f298 >= D_0027DE74) {
            p->f2a8=1;
            p=self;
            ((PageVirtual_0E9180 *)p)->v70(p->f294,p->f290);
            self->f2a0=0; self->f2a4=0; self->f29c=0; self->f50c=0; self->f298=0;
        }
    }
    p=self;
    if (p->f4dc || p->f4e8 || p->f4e0 || p->f4e4) {
        p->f4ec += dt;
        p=self;
        if (p->f4ec >= D_002755E8) {

            if (p->f4e0) {
                self->f288=m->func_000BE020(1);
                m->f150->f484->func_0001C1E0(self->f28c,0,1,0);
                m->f150->f484->func_0001C1E0(self->f288,0,1,0);
                m->f150->f484->func_0001BB00(self->f28c,&D_00281A64,0);
                m->f150->f484->func_0001BB00(self->f288,&D_00281A64,0);
                self->f4c8=1;
                self->f4d4=m->f288;
                self->f4e0=0;
            }

            p=self;
            if (p->f4dc) {
                self->f288=m->func_000BE020(1);
                m->f150->f484->func_0001C1E0(self->f28c,0,1,0);
                m->f150->f484->func_0001C1E0(self->f288,0,1,0);
                m->f150->f484->func_0001BB00(self->f28c,&D_00281A64,0);
                m->f150->f484->func_0001BB00(self->f288,&D_00281A64,0);
                self->f4c8=1;
                self->f4d4=m->f288;
                self->f4dc=0;
            }

            p=self;
            if (p->f4e8) {
                self->f28c=m->func_000BDF30(1);
                m->f150->f484->func_0001C1E0(self->f28c,0,1,0);
                m->f150->f484->func_0001C1E0(self->f288,0,1,0);
                m->f150->f484->func_0001BB00(self->f28c,&D_00281A64,0);
                m->f150->f484->func_0001BB00(self->f288,&D_00281A64,0);
                self->f4cc=1;
                self->f4d0=m->f28c;
                self->f4e8=0;
            }

            p=self;
            if (p->f4e4) {
                self->f28c=m->func_000BDF30(1);
                m->f150->f484->func_0001C1E0(self->f28c,0,1,0);
                m->f150->f484->func_0001C1E0(self->f288,0,1,0);
                m->f150->f484->func_0001BB00(self->f28c,&D_00281A64,0);
                m->f150->f484->func_0001BB00(self->f288,&D_00281A64,0);
                self->f4cc=1;
                self->f4d0=m->f28c;
                self->f4e4=0;
            }
        }
    }
    p=self;
    v=((u8 *)p->f514)[0x3b];
    if(p->f47c != v) {
        if(p->f488 >= p->f48c) p->f484=p->f47c;
        else { b=p->f480; p->f484=(int)((float)(p->f47c-b)*(p->f488/p->f48c))+b; }
        self->f488 += dt;
    }

    p=self;
    if (p->f78c) {
        if (p->f784) {
            self->f28c=m->func_000BDF30(0);
            self->f288=m->func_000BE020(0);
            m->f150->f484->f2c->v14();
            m->f150->f484->f2c->v18();
            Item_0E9180 *item=m->f150->f484->f2c->items[self->f28c];
            item->model->interfacePtr()->v1c();
            char *camera=*(char **)((char *)D_002EFDB8+4);
            Vec_0E9180 pos=*(Vec_0E9180 *)(camera+0x170);
            Vec_0E9180 dir=*(Vec_0E9180 *)(camera+0x180);
            volatile Vec_0E9180 cross={0,0,0,1};
            item->model->transform->func_00197E70(&self->f4f0);
            Vec_0E9180 scaled;
            scaled.x=dir.x*D_00276524;
            scaled.y=dir.y*D_00276524;
            scaled.z=dir.z*D_00276524;
            Vec_0E9180 result;
            result.x=scaled.x+pos.x; result.y=scaled.y+pos.y; result.z=scaled.z+pos.z; result.w=1;
            pos=result;
            cross_scalar_0E9180((Vec_0E9180 *)&cross,&dir,&D_002A33B8);
            Vec_0E9180 up,side;
            up.x=D_002A33B8*D_00281A60; up.y=D_002A33BC*D_00281A60; up.z=D_002A33C0*D_00281A60;
            side.x=cross.x*D_00281A5C; side.y=cross.y*D_00281A5C; side.z=cross.z*D_00281A5C;
            side.x+=up.x; side.y+=up.y; side.z+=up.z;
            pos.x+=side.x; pos.y+=side.y; pos.z+=side.z;
            item->model->transform->func_001996A0(0,pos);
            m->f150->f484->func_0001B910(item);
            item=m->f150->f484->f2c->items[self->f288];
            item->model->interfacePtr()->v1c();
            item->model->transform->func_001996A0(0,pos);
            m->f150->f484->func_0001B910(item);
            m->f150->f484->func_0001BC00(self->f28c,&D_0027EB58);
            m->f150->f484->func_0001BB00(self->f28c,&D_00281A64,0);
            m->f150->f484->func_0001BC00(self->f288,&D_0027EB58);
            m->f150->f484->func_0001BB00(self->f288,&D_00281A64,0);
            (*m->f150->f3a8)->v14();
            self->func_000E8630();
            self->f490=255; self->f494=0; self->f498=self->f480; self->f49c=0; self->f4a0=0.25f;
            self->f4a4=1; self->f4ac=1; self->f4b4=1; self->f784=0;
        }
        if (self->f788) {
            m->f150->f484->f2c->items[self->f28c]->model->transform->func_001996A0(0,self->f4f0);
            m->f150->f484->f2c->items[self->f288]->model->transform->func_001996A0(0,self->f4f0);
            m->f150->f484->func_0001C1E0(self->f28c,0,1,1);
            m->f150->f484->func_0001BC00(self->f28c,&D_00281A64);
            m->f150->f484->func_0001BB00(self->f28c,&D_0027EB58,0);
            m->f150->f484->func_0001C1E0(self->f288,0,1,1);
            m->f150->f484->func_0001BC00(self->f288,&D_00281A64);
            m->f150->f484->func_0001BB00(self->f288,&D_0027EB58,0);
            m->f150->f484->f2c->v1c();
            (*m->f150->f3a8)->v1c();
            if (self->f124->f134==0x1b) {
                int i,off;
                for(i=0,off=0;off<0x1a80;off+=0x1a8,++i) {
                    char *global=*(char **)((char *)D_002A8490+0x2e0);
                    int active=(*(Query_0E9180 **)(global+0x2c0))->func_0005C1D0(i);
                    if (!active) {
                        if(off==0x1a8||off==0x4f8||off==0x9f0||off==0xd40||off==0x13e0||off==0x18d8) {
                            int id=m->f150->f484->func_0001B3C0(m->f27c+off);
                            m->f150->f484->f2c->items[id]->model->interfacePtr()->v14();
                        }
                    } else {
                        if(off==0x1a8||off==0x4f8||off==0x9f0||off==0xd40||off==0x13e0||off==0x18d8) {
                            int id=m->f150->f484->func_0001B3C0(m->f27c+off);
                            m->f150->f484->f2c->items[id]->model->interfacePtr()->v1c();
                        }
                    }
                }
            }
            if (*(int *)(*(char **)((char *)D_002A8490+0x2e0)+0x324)==1) {
                m->f150->f484->f2c->items[self->f28c]->model->interfacePtr()->v14();
                m->f150->f484->f2c->items[self->f288]->model->interfacePtr()->v14();
            }
            self->f788=0;
            self->func_001BEB00();
            char *rider=(char *)m->func_000BA9D0(3);
            *(int *)(rider+0x59c)=1; *(int *)(rider+0x5a0)=0;
            if (*(int *)(*(char **)((char *)D_002A8490+0x2e0)+0x324)==1) {
                self->f124->f138=7; self->f124->f134=2;
            } else if (self->f124->f134!=0x1b) {
                switch(m->f264) {
                case 0: case 3: case 6: self->f124->f138=7; p=self; p->f124->f134=3; break;
                case 1: case 4: case 7: p=self; p->f124->f138=7; self->f124->f134=3; break;
                case 2: case 5: case 8: self->f124->f138=7; self->f124->f134=3; break;
                }
            }
        }
    }
    p=self;
    if ((p->f784 || p->f788) && !p->f78c && !p->f468 && p->f124->f134!=0x1b) {
        ((Timer_0E9180 *)m->f268)->func_001C4B60(500,1);
        self->f468=1;
    }
    if (!((Timer_0E9180 *)m->f268)->func_001C3F10() && self->f124->f134!=0x1b) self->f78c=0;
    else { self->f78c=1; self->f468=0; }
    self->func_001BED00(dt);
}

void C_000E9FD0::func_000E9FD0(void) {
    int func_001BF220(...);
    unk784 = 1;
    func_001BF220();
}

void C_000E9FE0::func_000E9FE0(void) {
    func_000E86C0();
    unk490 = 0;
    unk494 = 255;
    unk498 = unk480;
    unk49C = 0;
    unk4A0 = 0;
    unk34C->func_001B1980();
    unk350->func_001B1980();
    unk340->func_001B1980();
    unk344->func_001B1980();
    unk348->func_001B1980();
    unk4C8 = 0;
    unk4CC = 0;
    unk788 = 1;
}

