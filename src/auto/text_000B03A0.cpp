/* 4 functions from 0x000B03A0 to 0x000B1350, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

extern int D_0027CE64;

void *func_001E8A44(int size);
void func_001ADCC0(char *buf, int size, char *fmt, ...);
int func_001E8AF0(char *a, char *b);
int func_001E8920(char *dst, const char *src, unsigned int n);
void __stdcall func_001577A0(void *obj, int a);
void __stdcall func_001CDE90(void *a);
void func_0001CB80(char *buf);
void func_000A3780(int a, char *b, void *c);
void func_0019AC50();
void func_000B0060(int a, int b, int c, int d, int e, int f, int g, int h, int i);
void func_0019A0A0(int a, int b, int c);
void func_00199600(int a, int b, int c, int d);
void func_00198F50(int a, int b, int c, int d, int e);
void func_0019ABA0(int a, int b);
void *func_00143580(int a);
void *func_001BB680(int a);

extern char D_0027CE10[];
extern char D_00276F28[];
extern int D_000A7E30;
extern char D_0027CE04[];
extern char D_002A5870[];
extern char D_00276BB4[];
extern char D_00276F58[];
extern char D_00276F0C[];
extern char D_002A5EA0[];
extern char D_002A60B0[];
extern char D_002A4C10[];
extern float D_00275460;
extern float D_00275548;
extern float D_00275F64;
void func_000A0980(float*,float*);
struct C_B03A0_Manager { void func_00161680(); void func_001B2640(); };
extern C_B03A0_Manager *D_002A829C;
extern C_B03A0_Manager *D_002AA6C0;

struct S_2E0_B03A0 {
    char pad0[0x4];
    int f4;
    char pad8[0x2c4 - 0x8];
    void *f2c4;
};

struct S_002A8490_B03A0 {
    char pad0[0x2e0];
    S_2E0_B03A0 *f2e0;
};

struct S_Rec_B03A0 {
    u8 pad0[0x2];
    u8 type;            /* +0x02 */
    s16 idx;            /* +0x04 */
    u8 pad6[0x30 - 0x6];
    float v0[4];        /* +0x30 */
    float v1[4];        /* +0x40 */
    float f50;          /* +0x50 */
    float f54;          /* +0x54 */
    float f58;          /* +0x58 */
    u8 pad5C[0x70 - 0x5C];
};

struct S_Obj_B03A0 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
};

struct Vec_B03A0 { float x,y,z,w; };
struct S_1E0_B03A0 {
    void *vtbl;
    char pad4[0x24];
    char name[0x104];   /* +0x28 */
    char pad12C[0x1a3 - 0x12C];
    u8 f1a3;
    S_1E0_B03A0 *func_00143580(int);
    void func_00199600(Vec_B03A0);
    void func_00198F50(float*,float*,int,int,int);
    void func_0019ABA0(int,int);
    void func_0019AC50();
    void func_0019A0A0(float,float,float);
    S_1E0_B03A0 *func_001BB680(int);
    S_1E0_B03A0 *func_001BB470(int);
    int func_001BC040(Vec_B03A0,Vec_B03A0,Vec_B03A0,Vec_B03A0,int,int,int,int);
    void func_001BBAE0(int);
    void func_001BB620(int,int,void*,int);
};

struct C_000B03A0 {
    char pad0[0x3a8];
    void *f3a8;
    char pad3AC[0x4a8 - 0x3AC];
    void *f4a8;
    char pad4AC[0x4dc - 0x4AC];
    void *f4dc;
    char pad4E0[0x544 - 0x4E0];
    void *f544;
    char pad548[0x550 - 0x548];
    void *f550;
    char pad554[0x55c - 0x554];
    int f55c;
    char pad560[0x5a8 - 0x560];
    int f5a8;
    void **f5ac;
    void func_000A3B00(void*);
    void func_000A3780(void*,char*,void*);
    void func_000B0060(void*,int,void*,float*,float*,float*,int,int,int);
    int func_000B03A0(int a1, int a2, int a3);
};

struct C_002A8490 {
    char pad0[0x124];
    int f124;
};
extern C_002A8490 *D_002A8490;

void __stdcall func_00157A00(float);

struct C_000B1320 {
    int func_000B1320(float dt);
    void func_00157A00(float dt);
};

struct C_000B1200_Entry {
    int unk0;
    int unk4;
    void *unk8;
    void *unkC;
};

extern "C" void func_001E891B(void *p);

struct C_000B11C0 {
    void *vtbl;
    char pad04[0x30];
    int unk34;
    int unk38;
    int unk3C;
    int unk40;
    void *unk44;
    void *unk48;
    C_000B1200_Entry **unk4C;
    void **unk50;
    void func_00157600(int a0);
    void func_00157660(void);
    void func_000B1200(void);
    C_000B11C0 *func_000B11C0(int param_1);
};

int C_000B03A0::func_000B03A0(int a1, int a2, int a3) {
 S_Rec_B03A0 *rec=(S_Rec_B03A0*)((S_002A8490_B03A0*)D_002A8490)->f2e0->f2c4;
 int count=0;
 float direction[4]={0,0,0,1};
 if (!rec) return 0;
 for(int i=0;i<150 && rec->type;i++,rec++) {
 S_Obj_B03A0 *obj=(S_Obj_B03A0*)func_001E8A44(28);
 if(obj) {obj->f4=0;obj->f8=0;obj->fC=0;obj->f10=0;obj->f14=0;obj->f18=0;obj->f0=-1;}
 for(int j=0;j<7;j++) ((int*)obj)[j]=0;
 obj->f0=rec->type-1;
 switch(rec->type-1) {
 case 0: {
 char *name=0;
 if(f5a8>0 && f5ac && rec->idx<f5a8) name=(char*)f5ac[rec->idx];
 if(func_001E8AF0(name,D_0027CE10) && !a2) {
 char *base=(char*)f4dc; int off=0x24,off2=0xa4;
 if(((S_002A8490_B03A0*)D_002A8490)->f2e0->f4==4) {base=(char*)f550;off=0x688;off2=0x708;}
 for(int k=0;k<4;k++) {((float*)(base+off+count*16))[k]=rec->v0[k];((float*)(base+off2+count*16))[k]=rec->v1[k];}
 count++;continue;
 }
 func_001ADCC0(D_002A5EA0,260,D_00276BB4,D_002A5870);
 func_001ADCC0(D_002A60B0,260,D_00276F58,D_002A5870);
 func_001ADCC0(D_002A4C10,260,D_00276BB4,D_002A5870);

 S_1E0_B03A0 *p=(S_1E0_B03A0*)func_001E8A44(0x1e0);
 if(p) p=p->func_00143580(1);
 if(((int (__fastcall *)(S_1E0_B03A0*,int,char*,int,int))(*(void***)p)[35])(p,0,name,0,0)) {
 int n=0;while(name[n])n++;if(n>127)n=127;
 func_001E8920(p->name,name,n);p->name[n]=0;
 p->func_00199600(*(Vec_B03A0*)rec->v0);
 p->func_00198F50(rec->v1,direction,1,0,0);
 p->func_0019ABA0(*(int*)f4a8,2);
 func_001577A0(p,0);
 obj->f8=(int)p;obj->f10=0;obj->f4=0;
 if(f544) ((void**)f544)[f55c++]=p;
 p->func_0019AC50();
 } else ((void (__fastcall *)(S_1E0_B03A0*,int,int))(*(void***)p)[0])(p,0,1);
 break;
 }
 case 1: {
 obj->f8=0;
 if(a2) {
 S_1E0_B03A0 *p=(S_1E0_B03A0*)func_001E8A44(0x1e0);
 if(p)p=p->func_00143580(1);
 Vec_B03A0 v=*(Vec_B03A0*)rec->v0;v.y-=rec->f54;
 if(((int (__fastcall *)(S_1E0_B03A0*,int,char*,int,int))(*(void***)p)[35])(p,0,D_0027CE04,0,1)) {
 func_001E8920(p->name,D_0027CE04,11);p->name[11]=0;
 p->func_00199600(v);p->func_00198F50(rec->v1,direction,1,0,0);
 p->f1a3 &= 0xf7;p->func_0019ABA0(*(int*)f4a8,2);func_001577A0(p,0);obj->f8=(int)p;
 }
 float x=(rec->f50-(rec->f50>1.0f?5.0f:1.0f))*0.2f+1.0f;
 float y=(rec->f54-5.0f)*0.2f+1.0f;
 float z=(rec->f58-(rec->f58>1.0f?5.0f:1.0f))*0.2f+1.0f;
 ((S_1E0_B03A0*)obj->f8)->func_0019A0A0(x,y,z);
 }
 S_1E0_B03A0 *p=(S_1E0_B03A0*)func_001E8A44(0x2f0);
 if(p)p=p->func_001BB680(1);
 Vec_B03A0 scale=*(Vec_B03A0*)&rec->f50;
 if(p->func_001BC040(*(Vec_B03A0*)rec->v0,scale,*(Vec_B03A0*)rec->v1,*(Vec_B03A0*)direction,0,0,100,0)) {
 p->func_001BBAE0(*(int*)((char*)this+0x4ac));func_001577A0(p,-1);obj->f10=(int)p;obj->f4=0;
 }else if(p)((void (__fastcall *)(S_1E0_B03A0*,int,int))(*(void***)p)[0])(p,0,1);
 break;
 }
 case 2: {
 S_1E0_B03A0 *p=(S_1E0_B03A0*)func_001E8A44(0x118);
 if(p)p=p->func_001BB470(1);
 p->func_001BB620(0,i,(void*)a3,0);
 func_001ADCC0((char*)p+0x24,0x3c,"%s",(char*)rec+6);
 func_001ADCC0((char*)p+0x60,0x78,"%s",(char*)rec+0x1a);
 *(int*)((char*)p+0xdc)=*(short*)((char*)rec+0x60);
 *(int*)((char*)p+0xd8)=*(int*)((char*)this+0x568);
 *(int*)((char*)p+0xe4)=0;
 func_000A3B00(p);obj->f4=(int)p;obj->f8=0;obj->f10=0;
 break;
 }
 case 3: case 4: case 5: {
 char *name=0;if(f5a8>0 && f5ac && rec->idx<f5a8)name=(char*)f5ac[rec->idx];
 func_001ADCC0(D_002A5EA0,260,D_00276BB4,D_002A5870);
 func_001ADCC0(D_002A60B0,260,D_00276F58,D_002A5870);
 func_001ADCC0(D_002A4C10,260,D_00276BB4,D_002A5870);
 obj->f10=0;obj->f4=0;
 S_1E0_B03A0 *p=(S_1E0_B03A0*)func_001E8A44(0x1e0);
 if(p)p=p->func_00143580(1);
 if(((int (__fastcall *)(S_1E0_B03A0*,int,char*,int,int))(*(void***)p)[35])(p,0,name,0,0)) {
 int n=0;while(name[n])n++;if(n>127)n=127;
 func_001E8920(p->name,name,n);p->name[n]=0;
 p->func_00199600(*(Vec_B03A0*)rec->v0);p->func_00198F50(rec->v1,direction,1,0,0);
 p->func_0019ABA0(*(int*)f4a8,2);func_001577A0(p,0);obj->f8=(int)p;
 if(rec->type==4 || rec->type==6) {
 S_1E0_B03A0 *q=(S_1E0_B03A0*)func_001E8A44(0x1e0);if(q)q=q->func_00143580(1);
 char *name2=name+255;
 if(((int (__fastcall *)(S_1E0_B03A0*,int,char*,int,int))(*(void***)q)[35])(q,0,name2,0,0)) {
 int n=0;while(name2[n])n++;if(n>127)n=127;
 func_001E8920(q->name,name2,n);q->name[n]=0;
 q->func_00199600(*(Vec_B03A0*)rec->v0);q->func_00198F50(rec->v1,direction,1,0,0);
 q->func_0019ABA0(*(int*)f4a8,2);func_001577A0(q,0);obj->fC=(int)q;
 if(f544)((void**)f544)[f55c++]=q;
 func_000B0060(q,*(int*)(name+0x374),name2,rec->v0,rec->v1,direction,0,0,a2);
 }else {((void (__fastcall *)(S_1E0_B03A0*,int,int))(*(void***)q)[0])(q,0,1);}
 }
 if(rec->type==5 || rec->type==6)func_000B0060(0,0,name+510,rec->v0,rec->v1,direction,0,1,a2);
 p->func_0019AC50();if(f544)((void**)f544)[f55c++]=p;
 if(*(int*)(name+0x364)) {
 char buf[260],path[260];func_001ADCC0(buf,260,name);func_0001CB80(buf);
 func_001ADCC0(path,260,D_00276F0C,D_002A5EA0,buf);func_000A3780(p,path,obj);
 }
 func_000B0060(p,*(int*)(name+0x374),name,rec->v0,rec->v1,direction,0,0,a2);
 }else ((void (__fastcall *)(S_1E0_B03A0*,int,int))(*(void***)p)[0])(p,0,1);
 break;
 }
 }
 }
 return 1;
}

C_000B11C0 *C_000B11C0::func_000B11C0(int param_1) {
    func_00157600(param_1);
    unk44 = 0;
    unk48 = 0;
    unk34 = 0;
    unk38 = 0;
    unk3C = 0;
    unk4C = 0;
    unk50 = 0;
    unk40 = 0;
    vtbl = &D_0027CE64;
    return this;
}

void C_000B11C0::func_000B1200(void)
{
    int i;

    vtbl = &D_0027CE64;
    if (unk50 != 0) {
        for (i = 0; i < unk40; i++) {
            func_001E891B(unk50[i]);
        }
        if (unk50 != 0) {
            func_001E891B(unk50);
            unk50 = 0;
            unk40 = 0;
        }
    }
    if (unk4C != 0) {
        for (i = 0; i < unk3C; i++) {
            if (unk4C[i]->unk8 != 0) {
                func_001E891B(unk4C[i]->unk8);
                unk4C[i]->unk8 = 0;
                unk4C[i]->unk0 = 0;
            }
            if (unk4C[i]->unkC != 0) {
                func_001E891B(unk4C[i]->unkC);
                unk4C[i]->unkC = 0;
                unk4C[i]->unk4 = 0;
            }
            func_001E891B(unk4C[i]);
        }
        if (unk4C != 0) {
            func_001E891B(unk4C);
            unk4C = 0;
            unk3C = 0;
        }
    }
    if (unk44 != 0) {
        func_001E891B(unk44);
        unk44 = 0;
        unk34 = 0;
    }
    if (unk48 != 0) {
        func_001E891B(unk48);
        unk48 = 0;
        unk38 = 0;
    }
    func_00157660();
}

int C_000B1320::func_000B1320(float dt) {
    if (D_002A8490->f124 == 0) {
        func_00157A00(dt);
    }
    return 1;
}
