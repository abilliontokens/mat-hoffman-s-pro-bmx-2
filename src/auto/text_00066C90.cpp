/* 3 functions from 0x00066C90 to 0x00067AA0, found by Ghidra. */
#include "common.h"

extern int D_0027850C;
extern int D_002787FC;
struct PtrObj_66C { void func_001D6410(); };
struct VObj_66C { virtual void v0(int); };
extern "C" void __cdecl func_001E891B(void *);

struct C_00066C90 {
    void *vtbl;
    char pad4[0x14];
    int unk18;
    char pad1C[8];
    int unk24[8];
    int unk44[8];
    int unk64[2];
    int unk6C[2];
    char pad74[4];
    int a78[3];
    int pad84[3];
    int a90[2];
    int unk98[5];
    int unkAC[5];
    int unkC0[6];
    int unkD8[8];
    int unkF8;
    int unkFC;
    int unk100;
    int unk104;
    int unk108;
    int unk10C;
    int unk110;
    char pad114[4];
    int unk118[8];
    int unk138;
    int unk13C[2];
    int unk144[2];
    int unk14C;
    int unk150;
    char pad154[4];
    int unk158;
    int unk15C;
    char pad160[4];
    int unk164;
    int unk168;
    void func_00066DC0();
    void func_00157660();
    void func_00157600(int a0);
    C_00066C90 *func_00066C90(int a0);
    C_00066C90 *func_00066FA0(int a0);
    void func_001577A0(void *, int);
};

struct Menu_66C {
    Menu_66C *func_001B12C0(int);
    void func_001B1580(void *, void *, void *, int);
    void func_001B1A30(float, float, int);
    void func_001B2270(unsigned int);
    void func_001B19A0(int);
};
extern int D_0028F5E0;
extern char D_002A5FA8[], D_002A5870[], D_00275678[];
extern float D_002757F0, D_0027886C, D_00278868;
int func_001ADCC0(char *, int, const char *, ...);
struct Res_66C { void *func_0018C160(void *name); };
struct Txt_66C {
    char pad0[4];
    float x;
    float y;
    char padc[0x38];
    int frame;
    unsigned int color;
    char pad4c[2];
    unsigned char flags;
    Txt_66C *func_001D5E90();
    void func_001D5FA0(int x, void *name, int y, int z);
    void func_001D6190(int a, void *b, void *c);
    void func_0005E840(void *a);
};
struct Spr_66C {
    char pad0[0x28];
    float x;
    float y;
    char pad30[8];
    unsigned int color;
    float u0, v0, u1, v1;
    float w, h;
    char pad54[4];
    unsigned char flags;
    void setX(float a) { if (x != a) { x=a; flags|=1; } }
    void setY(float a) { if (y != a) { y=a; flags|=1; } }
    void setUV(float a,float b,float c,float d) {u0=a;v0=b;u1=c;v1=d;flags|=4;}
    void setColor(unsigned int a) {color=(color&(0xff000000|a))|(a&0xffffff);flags|=2;}
    void setAlpha(unsigned char a) {((unsigned char*)&color)[3]=a;flags|=2;}
    Spr_66C *func_001D5760();
    void func_001D5810(void *name, float x, float y, int z);
};
struct App_66C { char pad[0x2e8]; void *unk2E8; Res_66C *unk2EC; };
extern App_66C *D_002A8490;
extern char D_002786A0[], D_00278690[], D_00278678[], D_00278658[];
extern int D_00278664, D_00278668, D_0027866C, D_00278670;
extern char D_00278674;
extern int D_002A60B0, D_002A60B4, D_002A60B8, D_002A60BC;
extern char D_002A60C0;
extern float D_00278654, D_00275544, D_0027653C;
extern "C" void *__cdecl func_001E8A44(unsigned int);

C_00066C90 *C_00066C90::func_00066C90(int a0)
{
    int i;

    func_00157600(a0);
    vtbl = &D_0027850C;
    for (i = 0; i < 8; i++) {
        unk24[i] = 0;
        unk44[i] = 0;
    }
    vtbl = &D_002787FC;
    unk168 = 0;
    unk108 = 0;
    unk18 = -1;
    unk100 = 0;
    unkFC = 0;
    unkF8 = 0;
    for (i = 0; i < 2; i++) {
        unk64[i] = 0;
        unk6C[i] = 0;
    }
    for (i = 0; i < 3; i++) {
        a78[i] = 0;
    }
    for (i = 0; i < 2; i++) {
        a90[i] = 0;
    }
    unk10C = 0;
    for (i = 0; i < 2; i++) {
        unk13C[i] = 0;
        unk144[i] = 0;
    }
    unk138 = 0;
    unk110 = 0;
    for (i = 0; i < 8; i++) {
        unk118[i] = 0;
    }
    unk15C = 1;
    unk158 = -1;
    for (i = 0; i < 5; i++) {
        unk98[i] = 0;
        unkAC[i] = 0;
    }
    for (i = 0; i < 6; i++) {
        unkC0[i] = 0;
    }
    unk104 = 0;
    for (i = 0; i < 8; i++) {
        unkD8[i] = 0;
    }
    unk14C = 0;
    unk150 = 0;
    unk164 = 0;
    return this;
}

void C_00066C90::func_00066DC0()
{
 int i;
 vtbl=&D_002787FC;
 for(i=0;i<2;i++) {
 PtrObj_66C *p=(PtrObj_66C*)unk64[i];
 if(p){p->func_001D6410();func_001E891B(p);}
 p=(PtrObj_66C*)unk6C[i];
 if(p){p->func_001D6410();func_001E891B(p);}
 }
 for(i=0;i<3;i++) pad84[i]=0;
 {PtrObj_66C*p=(PtrObj_66C*)unk100;if(p){p->func_001D6410();func_001E891B(p);}}
 {PtrObj_66C*p=(PtrObj_66C*)unkFC;if(p){p->func_001D6410();func_001E891B(p);}}
 for(i=0;i<2;i++){if(a90[i]){((VObj_66C*)a90[i])->v0(1);a90[i]=0;}}
 for(i=0;i<2;i++){
 if(unk13C[i]){((VObj_66C*)unk13C[i])->v0(1);unk13C[i]=0;}
 if(unk144[i]){((VObj_66C*)unk144[i])->v0(1);unk144[i]=0;}
 }
 if(unkF8){((VObj_66C*)unkF8)->v0(1);unkF8=0;}
 for(i=0;i<5;i++){
 if(unk98[i]){((VObj_66C*)unk98[i])->v0(1);unk98[i]=0;}
 if(unkAC[i]){((VObj_66C*)unkAC[i])->v0(1);unkAC[i]=0;}
 }
 for(i=0;i<6;i++){if(unkC0[i]){((VObj_66C*)unkC0[i])->v0(1);unkC0[i]=0;}}
 {PtrObj_66C*p=(PtrObj_66C*)unk104;if(p){p->func_001D6410();func_001E891B(p);unk104=0;}}
 {PtrObj_66C*p=(PtrObj_66C*)unk14C;if(p){p->func_001D6410();func_001E891B(p);unk14C=0;}}
 {PtrObj_66C*p=*(PtrObj_66C**)pad154;if(p){p->func_001D6410();func_001E891B(p);*(int*)pad154=0;}}
 func_00157660();
}

extern float D_00278650, D_00275800, D_00278870;
extern char D_002786B0[];
extern char D_002786B0[], D_00278648[];
extern char D_002786B0[], D_00278648[], D_00278624[], D_00278638[], D_00278608[], D_00278600[];
extern int D_0028F5E0;
extern char D_002A5FA8[], D_002A5870[], D_00275678[];
int func_001ADCC0(char *buf, int size, char *fmt, ...);
C_00066C90 *C_00066C90::func_00066FA0(int a0)
{
    unk10C = a0;
    D_002A8490->unk2EC->func_0018C160(D_002786A0);
    void *p = D_002A8490->unk2EC->func_0018C160(D_00278690);
    int v14 = p ? *(int *)p : 0;
    void *q = D_002A8490->unk2EC->func_0018C160(D_00278678);
    int v10 = q ? *(int *)q : 0;
    D_002A60B0 = D_00278664;
    D_002A60B4 = D_00278668;
    D_002A60B8 = D_0027866C;
    D_002A60BC = D_00278670;
    D_002A60C0 = D_00278674;
    Spr_66C *s = (Spr_66C *)func_001E8A44(0x64);
    s = s ? s->func_001D5760() : 0;
    a90[0] = (int)s;
    s->func_001D5810(D_00278658, 0.0f, 0.0f, 0);
    if (s->x != 640.0f) { s->x = 640.0f; s->flags |= 1; }
    if (s->y != 50.0f) { s->y = 50.0f; s->flags |= 1; }
    s->u0 = s->w * D_00278654;
    s->v0 = s->w * D_00275544;
    s->u1 = s->h * D_0027653C;
    s->v1 = s->h * D_00275544;
    s->flags |= 4;
    s = (Spr_66C *)func_001E8A44(0x64);
    s = s ? s->func_001D5760() : 0;
    a90[1] = (int)s;
    s->func_001D5810(D_00278658, 0.0f, 500.0f, 0);
    if (s->x != 640.0f) { s->x = 640.0f; s->flags |= 1; }
    if (s->y != 50.0f) { s->y = 50.0f; s->flags |= 1; }
    s->u0 = s->w * D_00278654;
    s->v0 = s->w * D_00275544;
    s->u1 = s->h * D_0027653C;
    s->v1 = s->h * D_00275544;
    s->flags |= 4;
    for (int i = 0; i < 5; i++) {
        Spr_66C *s1 = (Spr_66C *)func_001E8A44(0x64);
        s1 = s1 ? s1->func_001D5760() : 0;
        unk98[i] = (int)s1;
        s1->func_001D5810(D_00278658, i * D_00278650, 50.0f, 0);
        Spr_66C *s2 = (Spr_66C *)func_001E8A44(0x64);
        s2 = s2 ? s2->func_001D5760() : 0;
        unkAC[i] = (int)s2;
        s2->func_001D5810(D_00278658, i * D_00278650, 366.0f, 0);
        s2->u0 = 0.0f;
        s2->v0 = 1.0f;
        s2->u1 = 0.99f;
        s2->v1 = 0.0f;
        s2->flags |= 4;
    }
    for (int i = 0; i < 6; i++) {
        Spr_66C *s3 = (Spr_66C *)func_001E8A44(0x64);
        s3 = s3 ? s3->func_001D5760() : 0;
        unkC0[i] = (int)s3;
        float x = (i / 2) * D_00275800 + D_00278870;
        if (i & 1)
            s3->func_001D5810(D_002786B0, x, 325.0f, 0);
        else
            s3->func_001D5810(D_002786B0, x, 100.0f, 0);
        s3->u0 = 1.0f;
        s3->v0 = 0.0f;
        s3->u1 = 0.0f;
        s3->v1 = 1.0f;
        s3->flags |= 4;
        if (s3->x != 365.0f) { s3->x = 365.0f; s3->flags |= 1; }
        s3->color = (s3->color & 0xffbfa35a) | 0xbfa35a;
        s3->flags |= 2;
    }
    s = (Spr_66C *)func_001E8A44(0x64);
    s = s ? s->func_001D5760() : 0;
    unk144[0] = (int)s;
    s->func_001D5810(D_00278648, 490.0f, 97.0f, 0);
    s = (Spr_66C *)func_001E8A44(0x64);
    s = s ? s->func_001D5760() : 0;
    unk13C[0] = (int)s;
    s->func_001D5810(D_00278624, 490.0f, 97.0f, 0);
    s = (Spr_66C *)func_001E8A44(0x64);
    s = s ? s->func_001D5760() : 0;
    unk144[1] = (int)s;
    s->func_001D5810(D_00278638, 379.0f, 97.0f, 0);
    s = (Spr_66C *)func_001E8A44(0x64);
    s = s ? s->func_001D5760() : 0;
    unk13C[1] = (int)s;
    s->func_001D5810(D_00278608, 379.0f, 97.0f, 0);
    s = (Spr_66C *)func_001E8A44(0x64);
    s = s ? s->func_001D5760() : 0;
    unkF8 = (int)s;
    s->func_001D5810(D_00278600, 0.0f, 0.0f, 0);
    s->color &= 0xff000000;
    s->flags |= 2;
    s->color |= 0x80000000;
    s->flags |= 2;
    if (s->y != 448.0f) { s->y = 448.0f; s->flags |= 1; }
    if (s->x != 640.0f) { s->x = 640.0f; s->flags |= 1; }
    Txt_66C *t = (Txt_66C *)func_001E8A44(0x60);
    t = t ? t->func_001D5E90() : 0;
    unk104 = (int)t;
    t->func_001D5FA0(v10, D_00278678, 20.0f, 0);
    if (t->color != 0xaaaaaaaa) { t->color = (t->color & 0xffaaaaaa) | 0xaaaaaa; t->flags |= 8; }
    if (t->x != 320.0f || t->y != 40.0f) { t->x = 320.0f; t->y = 40.0f; t->flags |= 6; }
    if (t->frame != D_0028F5E0) { t->frame = D_0028F5E0; t->flags |= 6; }
    t->func_0005E840(*(void **)(*(char **)((char *)D_002A8490->unk2E8 + 4) + 0x740));
    t = (Txt_66C *)func_001E8A44(0x60);
    t = t ? t->func_001D5E90() : 0;
    unk14C = (int)t;
    t->func_001D6190(v14, *(void **)(*(char **)((char *)D_002A8490->unk2E8 + 4) + 0xac8), D_00278690);
    if (t->x != 320.0f || t->y != 117.0f) { t->x = 320.0f; t->y = 117.0f; t->flags |= 6; }
    if (t->color != 0xffcccccc) { t->color = (t->color & 0xffcccccc) | 0xcccccc; t->flags |= 8; }
    if (t->frame != D_0028F5E0) { t->frame = D_0028F5E0; t->flags |= 6; }
    func_001ADCC0((char *)&D_002A60B0, 0x104, D_00275678, D_002A5870, D_002A5FA8);
return this;
}

