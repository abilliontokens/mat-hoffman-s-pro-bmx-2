/* 4 functions from 0x001DA500 to 0x001DB4D0, found by Ghidra. */
#include "common.h"
#include <math.h>
void __stdcall func_00201100(void *);
extern float D_002F08AC,D_002EFEA0,D_00278650;
extern float D_002F100C[],D_002F1014[];
extern int D_0020CA7C,D_00040350,D_00040344,D_00040348,D_0020C8E4;
extern int D_0020C6EC,D_0020C6F0,D_0020C6F4,D_002A99B0;
extern char D_002AC7D4[];
void __fastcall func_001FEC30(int,void*);
void __stdcall func_00201590(int,void*,int);
void __stdcall func_001FDA60(int,unsigned int);
struct V3_001DA500 {float x,y,z;};
struct C_001DA500 {
 char data[0x230];
 void func_001DA500();
};

void *__stdcall func_001FF3C0(int size);
void *__stdcall func_001FF410(void *buffer, int flags);
int __fastcall func_001FEBD0(int n, void *p);
void __stdcall func_001FEE00(int index, void *ptr, int size);
void __fastcall func_001FD020(void *p, int v);
int __stdcall func_001FD770(int v);
void __stdcall func_00200390(int index, int value);
int __stdcall func_001FD8E0(int a, int b);
void __stdcall func_00200B30(int a, int b, void *c);

extern int D_002F1034;
extern int D_00040304;
extern int D_00040354;
extern int D_0020C6DC;
extern int D_0020C6E0;
extern int D_0020C6E4;
extern int D_0020CA50;
extern char D_002AC6D0[];

struct S_001DAAD0_Block {
    int d[20];
};

struct S_001DAAD0_Slot6C {
    void func_0014A650(int a0);
};

struct S_001DAAD0_Slot70 {
    void func_00142D00(int a0);
};

struct S_001DAAD0_Dev {
    char pad0[0x6C];
    S_001DAAD0_Slot6C *f6c;
    S_001DAAD0_Slot70 *f70;
};

extern S_001DAAD0_Dev *D_002EFDB8;

struct C_001DB080 {
    char pad0[0x30];
    void *f30[4];
    char pad40[0xD4 - 0x40];
    int cur;
    char padD8[0x208 - 0xD8];
    void *f208;
    float *f20C;
    int f210;
    int f214;
    void func_001DB080();
};

extern int D_002F1148;
extern float D_002F10F8[];
struct S_001DB080_Quad { float a, b, c, d, e; };
extern float D_002AC7DC[8];
extern float D_0028F8E4, D_0028F8E8, D_0028F97C;
extern float D_002F10D4, D_002F10D8, D_002F10DC, D_002F10E0;
extern float D_002F10E4, D_002F10E8, D_002F10EC, D_002F10F0;
extern char D_002AC770[], D_002AC780[];
extern float D_002AC7E0, D_002AC7E4, D_002AC7E8;
extern float D_002AC7EC, D_002AC7F0, D_002AC7F4, D_002AC7F8;
extern float D_002F10FC, D_002F1104, D_002F1108, D_002F110C, D_002F1110;
extern float D_002F1118, D_002F111C, D_002F1120, D_002F1124, D_002F112C;
extern float D_002F1130, D_002F1134, D_002F1138, D_002F1140, D_002F1144;

/* the game's inline float absolute value (the out-of-line copy is func_0001C590) */
static __forceinline float Abs_001DB080(float x)
{
    int i = *(int *)&x & 0x7fffffff;
    return *(float *)&i;
}
struct S_001DB080_Obj { void func_00199A70(float *v, int a); void func_00199A70(int a, float *v); };
int __stdcall func_001DAAD0(int a0, void *a1, void *a2);
struct C_001DAAD0 {
    char pad0[0xEC];
    int fEC;
    int fF0;
    char padF4[0x230 - 0xF4];
    void *arr230[0x96];
    int func_001DAAD0(int a0, S_001DAAD0_Block *a1, void *a2);
};

struct S_001DAC10_Tex {
    char pad0[0xB8];
    int fB8;
};

struct S_001DAC10_Entry {
    int f0; float scale,x,fC,z; char pad14[0x18];
    S_001DAC10_Tex *f2c;
    int f30;
    S_001DAC10_Tex *f34;
    S_001DAC10_Tex *f38;
    char pad3C[0x48 - 0x3C];
};

struct S_001DAC10_Mgr {
    char pad0[0x2C];
    S_001DAC10_Entry *f2c;
};

extern S_001DAC10_Mgr *D_002F08BC;
extern int D_002F1038;
extern int D_0020C760;
extern int D_0020C764;
extern float D_00275460;
void __stdcall func_001FE490(int a0);
int __stdcall func_001FCE50(int a0, int a1);
void __stdcall func_001FF940(int a0, int a1);
void __stdcall func_00201100(int a0);

struct S_001DAC10_Vert {
    float x, y, z;
    float u0, v0;
    float u1, v1;
    S_001DAC10_Vert() { x = y = z = 0; u0 = v0 = u1 = v1 = 0; }
};

struct S_001DAC10_Quad {
    S_001DAC10_Vert v[4];
};

struct S_001DAC10_Color {
    float r, g, b, a;
    S_001DAC10_Color(float r_, float g_, float b_, float a_) { r = r_; g = g_; b = b_; a = a_; }
};

struct C_001DAC10 {
    char pad0[0xD4];
    int fD4;
    char padD8[0xE8 - 0xD8];
    int fE8;
    char padEC[0xF8 - 0xEC];
    int fF8;
    char padFC[0x488 - 0xFC];
    void *arr488[6];
    void func_001DAC10();
    __forceinline void DrawQuad(S_001DAC10_Vert *verts, S_001DAC10_Color *color, S_001DAC10_Entry *e, int tex)
    {
        void **p = &arr488[D_002F1038];
        int f;
        if (*p == 0)
            *p = func_001FF3C0(0x70);
        *(S_001DAC10_Quad *)func_001FF410(arr488[D_002F1038], 0) = *(S_001DAC10_Quad *)verts;
        func_001FEBD0(0x20, color);
        func_001FEE00(0, arr488[D_002F1038], 0x1c);
        func_001FD020(&D_00040304, 0);
        func_001FD020(&D_00040354, 0x207);
        f = D_0020C6DC;
        f |= 0x2000;
        D_0020C6DC = f;
        D_0020CA50 = 0;
        func_001FD770(0x1b02);
        func_00200390(0, e->f2c->fB8);
        f = D_0020C6DC;
        f |= 1;
        D_0020C6E0 = 3;
        D_0020C6DC = f;
        D_0020C6E4 = 3;
        func_00200390(1, e->f2c->fB8);
        f = D_0020C6DC;
        f |= 2;
        D_0020C760 = 3;
        D_0020C6DC = f;
        D_0020C764 = 3;
        func_00200B30(6, 4, D_002AC6D0);
        func_00201100(tex);
        if (D_002F1038 == 5)
            D_002F1038 = 0;
        else
            D_002F1038++;
    }
};

void C_001DA500::func_001DA500() {
float c0[4],c1[4],c2[4],c3[4];
S_001DAC10_Entry *e=&D_002F08BC->f2c[*(int*)(data+0xd4)];
if(!*(void**)(data+0x218)){
*(void**)(data+0x218)=func_001FF3C0(80);
*(void**)(data+0x21c)=func_001FF3C0(80);
*(void**)(data+0x220)=func_001FF3C0(80);
}
func_001FF940((int)D_002F08BC+0x228,(int)D_002F08BC+0x258);
D_002EFDB8->f6c->func_0014A650(*(int*)(data+0xe0));
func_001FEE00(0,((void**)(data+0x218))[*(int*)(data+0xdc)],20);
D_002EFDB8->f70->func_00142D00(*(int*)(data+0xfc));
c1[0]=0;c1[1]=0;c1[2]=0; c1[3]=D_002F08AC/D_002EFEA0;
func_00201590(1,c1,1);
void *buffer=((void**)(data+0x218))[*(int*)(data+0xdc)];
float *v=(float*)func_001FF410(buffer,0);
float x=e->x,z=e->z;
v[0]=*(float*)(data+116);v[1]=*(float*)(data+120);v[2]=*(float*)(data+124);v[3]=(v[0]-x)*e->scale;v[4]=(v[2]-z)*e->scale;
v[5]=*(float*)(data+132);v[6]=*(float*)(data+136);v[7]=*(float*)(data+140);v[8]=(v[5]-x)*e->scale;v[9]=(v[7]-z)*e->scale;
v[10]=*(float*)(data+148);v[11]=*(float*)(data+152);v[12]=*(float*)(data+156);v[13]=(v[10]-x)*e->scale;v[14]=(v[12]-z)*e->scale;
v[15]=*(float*)(data+164);v[16]=*(float*)(data+168);v[17]=*(float*)(data+172);v[18]=(v[15]-x)*e->scale;v[19]=(v[17]-z)*e->scale;
c0[0]=1;c0[1]=0;c0[2]=0;c0[3]=1;
c2[0]=0;c2[1]=1;c2[2]=0;c2[3]=1;
c3[0]=0;c3[1]=0;c3[2]=1;c3[3]=1;
char *dev=*(char**)((char*)D_002EFDB8+4);
func_001FEBD0(32,c0);
func_001FEC30(24,dev+0x290);
D_0020C6DC|=0x3000;D_0020CA7C=0;
func_001FD020(&D_00040304,1);
func_001FD020(&D_00040350,0x8006);
func_001FD020(&D_00040344,1);
func_001FD020(&D_00040348,1);
func_00200390(0,e->f2c->fB8);
int flags=D_0020C6DC|1;
D_0020C6E0=4;D_0020C6DC=flags;D_0020C6E4=4;
func_001FDA60(0,0xff800000);
D_0020C6EC=2;D_0020C6F0=2;D_0020C6DC|=1;D_0020C6F4=0;
func_00200B30(6,4,D_002AC7D4);
func_001FF940((int)D_002F08BC+0x240,(int)D_002F08BC+0x258);
D_002EFDB8->f70->func_00142D00(*(int*)(data+0xf0));
func_001FDA60(0,0xff800000);
func_00200390(0,e->f34->fB8);
func_001FEBD0(32,c0);
func_00200B30(6,4,D_002AC7D4);
func_001FDA60(0,0xff008000);
func_00200390(0,e->f38->fB8);
func_001FEBD0(32,c2);
func_00200B30(6,4,D_002AC7D4);
if(D_002A99B0){
if(!*(void**)(data+0x224)){
*(void**)(data+0x224)=func_001FF3C0(80);
*(void**)(data+0x228)=func_001FF3C0(80);
*(void**)(data+0x22c)=func_001FF3C0(80);
}
v=(float*)func_001FF410(((void**)(data+0x224))[*(int*)(data+0xdc)],0);
x=D_002F100C[*(int*)(data+0xd4)*4]-D_00278650;
z=D_002F1014[*(int*)(data+0xd4)*4]-D_00278650;
v[0]=*(float*)(data+116);v[1]=*(float*)(data+120);v[2]=*(float*)(data+124);v[3]=v[0]-x;v[4]=v[2]-z;
v[5]=*(float*)(data+132);v[6]=*(float*)(data+136);v[7]=*(float*)(data+140);v[8]=v[5]-x;v[9]=v[7]-z;
v[10]=*(float*)(data+148);v[11]=*(float*)(data+152);v[12]=*(float*)(data+156);v[13]=v[10]-x;v[14]=v[12]-z;
v[15]=*(float*)(data+164);v[16]=*(float*)(data+168);v[17]=*(float*)(data+172);v[18]=v[15]-x;v[19]=v[17]-z;
func_00200390(0,((S_001DAC10_Tex*)e->f30)->fB8);
flags=D_0020C6DC|1;D_0020C6E0=4;D_0020C6DC=flags;D_0020C6E4=4;
func_001FDA60(0,0xff000000);
D_0020C6EC=2;D_0020C6F0=2;D_0020C6DC|=1;D_0020C6F4=0;
D_002EFDB8->f6c->func_0014A650(*(int*)(data+0xe0));
D_002EFDB8->f70->func_00142D00(*(int*)(data+0xf0));
func_001FEBD0(32,c3);
func_001FEE00(0,((void**)(data+0x224))[*(int*)(data+0xdc)],20);
func_00200B30(6,4,D_002AC6D0);
}
int i=0; int *state=&D_0020C6E4;
do {
func_00200390(i,0);
int flags=D_0020C6DC | (1<<i);
state[-1]=3;
state[0]=3;
D_0020C6DC=flags;
i++;state+=32;
} while((int)state<(int)&D_0020C8E4);
if(++*(int*)(data+0xdc)==3) *(int*)(data+0xdc)=0;
}

int C_001DAAD0::func_001DAAD0(int a0, S_001DAAD0_Block *a1, void *a2)
{
    void **p = &arr230[D_002F1034];
    S_001DAAD0_Block *dst;
    void *buf;
    int v;

    if (*p == 0) {
        *p = func_001FF3C0(0x50);
    }
    buf = arr230[D_002F1034];
    dst = (S_001DAAD0_Block *)func_001FF410(buf, 0);
    *dst = *a1;
    D_002EFDB8->f6c->func_0014A650(fEC);
    func_001FEBD0(0x20, a2);
    D_002EFDB8->f70->func_00142D00(fF0);
    buf = arr230[D_002F1034];
    func_001FEE00(0, buf, 0x14);
    func_001FD020(&D_00040304, 0);
    func_001FD020(&D_00040354, 0x207);
    v = D_0020C6DC;
    v |= 0x2000;
    D_0020C6DC = v;
    D_0020CA50 = 0;
    func_001FD770(0x1b02);
    func_00200390(0, a0);
    v = D_0020C6DC;
    v |= 1;
    D_0020C6E0 = 3;
    D_0020C6DC = v;
    D_0020C6E4 = 3;
    func_001FD8E0(0, 0);
    func_00200B30(6, 4, D_002AC6D0);
    if (D_002F1034 == 0x95) {
        D_002F1034 = 0;
    } else {
        D_002F1034++;
    }
    return 0;
}

void C_001DAC10::func_001DAC10()
{
    static S_001DAC10_Vert verts[4];
    float xs[4] = {0.0f, 128.0f, 0.0f, 128.0f};
    float ys[4] = {0.0f, 0.0f, 128.0f, 128.0f};
    static S_001DAC10_Color color1(1.0f, 0.0f, 0.0f, 1.0f);
    static S_001DAC10_Color color2(0.0f, 1.0f, 0.0f, 1.0f);
    S_001DAC10_Entry *e;
    void **p;
    void *buf;
    int tex;
    int i;
    int f;
    int t;

    func_001FE490(0);
    D_002EFDB8->f6c->func_0014A650(fE8);
    D_002EFDB8->f70->func_00142D00(fF8);
    e = &D_002F08BC->f2c[fD4];

    t = e->f34->fB8;
    tex = func_001FCE50(t, 0);
    func_001FF940(tex, 0);
    for (i = 0; i < 4; i++) {
        verts[i].x = xs[i];
        verts[i].y = ys[i];
        verts[i].u0 = xs[i] - 1.0f;
        verts[i].v0 = ys[i];
        verts[i].u1 = xs[i] + 1.0f;
        verts[i].v1 = ys[i];
    }
    p = &arr488[D_002F1038];
    if (*p == 0)
        *p = func_001FF3C0(0x70);
    buf = arr488[D_002F1038];
    *(S_001DAC10_Quad *)func_001FF410(buf, 0) = *(S_001DAC10_Quad *)verts;
    func_001FEBD0(0x20, &color1);
    buf = arr488[D_002F1038];
    func_001FEE00(0, buf, 0x1c);
    func_001FD020(&D_00040304, 0);
    func_001FD020(&D_00040354, 0x207);
    f = D_0020C6DC;
    f |= 0x2000;
    D_0020C6DC = f;
    D_0020CA50 = 0;
    func_001FD770(0x1b02);
    t = e->f2c->fB8;
    func_00200390(0, t);
    f = D_0020C6DC;
    f |= 1;
    D_0020C6E0 = 3;
    D_0020C6DC = f;
    D_0020C6E4 = 3;
    t = e->f2c->fB8;
    func_00200390(1, t);
    f = D_0020C6DC;
    f |= 2;
    D_0020C760 = 3;
    D_0020C6DC = f;
    D_0020C764 = 3;
    func_00200B30(6, 4, D_002AC6D0);
    func_00201100(tex);
    if (D_002F1038 == 5)
        D_002F1038 = 0;
    else
        D_002F1038++;

    t = e->f38->fB8;
    tex = func_001FCE50(t, 0);
    func_001FF940(tex, 0);
    for (i = 0; i < 4; i++) {
        verts[i].x = xs[i];
        verts[i].y = ys[i];
        verts[i].u0 = xs[i];
        verts[i].v0 = ys[i] - 1.0f;
        verts[i].u1 = xs[i];
        verts[i].v1 = ys[i] + 1.0f;
    }
    p = &arr488[D_002F1038];
    if (*p == 0)
        *p = func_001FF3C0(0x70);
    buf = arr488[D_002F1038];
    *(S_001DAC10_Quad *)func_001FF410(buf, 0) = *(S_001DAC10_Quad *)verts;
    func_001FEBD0(0x20, &color2);
    buf = arr488[D_002F1038];
    func_001FEE00(0, buf, 0x1c);
    func_001FD020(&D_00040304, 0);
    func_001FD020(&D_00040354, 0x207);
    f = D_0020C6DC;
    f |= 0x2000;
    D_0020C6DC = f;
    D_0020CA50 = 0;
    func_001FD770(0x1b02);
    t = e->f2c->fB8;
    func_00200390(0, t);
    f = D_0020C6DC;
    f |= 1;
    D_0020C6E0 = 3;
    D_0020C6DC = f;
    D_0020C6E4 = 3;
    t = e->f2c->fB8;
    func_00200390(1, t);
    f = D_0020C6DC;
    f |= 2;
    D_0020C760 = 3;
    D_0020C6DC = f;
    D_0020C764 = 3;
    func_00200B30(6, 4, D_002AC6D0);
    func_00201100(tex);
    if (D_002F1038 == 5)
        D_002F1038 = 0;
    else
        D_002F1038++;
}

void C_001DB080::func_001DB080()
{
    C_001DB080 *volatile self = this;
    int i;
    int tex;
    int n;
    int f;
    int cur;
    float v[4];
    float d0, d1;
    float k;
    S_001DAC10_Entry *e;
    S_001DB080_Quad *q;
    float *M;

    if (!(D_002F1148 & 1)) {
        D_002F1148 |= 1;
        q = (S_001DB080_Quad *)D_002F10F8;
        n = 4;
        do {
            q->c = 0.0f;
            q->b = 0.0f;
            q->a = 0.0f;
            q->e = 0.0f;
            q->d = 0.0f;
            q++;
        } while (--n);
    }
    e = &D_002F08BC->f2c[self->cur];
    tex = func_001FCE50(((S_001DAC10_Tex *)e->f30)->fB8, 0);
    func_001FF940(tex, 0);
    v[2] = 0.0f;
    v[1] = 0.0f;
    v[0] = 0.0f;
    v[3] = 1.0f;
    ((S_001DB080_Obj *)self->f30[self->cur])->func_00199A70(0, v);
    cur = self->cur;
    d0 = D_002F100C[cur * 4] - v[0];
    d1 = D_002F100C[cur * 4 + 2] - v[2];
    M = &D_002F100C[cur * 4];
    M[0] = v[0];
    M[1] = v[1];
    M[2] = v[2];
    M[3] = v[3];
    D_002F1104 = D_002AC7EC - d0;
    D_002F10F8[0] = D_002AC7EC;
    D_002F1108 = D_002AC7DC[0] - d1;
    D_002F10FC = D_002AC7DC[0];
    D_002F1118 = D_002AC7F0 - d0;
    D_002F110C = D_002AC7F0;
    D_002F111C = D_002AC7E0 - d1;
    D_002F1110 = D_002AC7E0;
    D_002F112C = D_002AC7F4 - d0;
    D_002F1120 = D_002AC7F4;
    D_002F1130 = D_002AC7E4 - d1;
    D_002F1124 = D_002AC7E4;
    D_002F1140 = D_002AC7F8 - d0;
    D_002F1134 = D_002AC7F8;
    D_002F1144 = D_002AC7E8 - d1;
    D_002F1138 = D_002AC7E8;
    func_001FE490(0);
    ((C_001DAAD0 *)self)->func_001DAAD0(((S_001DAC10_Tex *)e->f30)->fB8,
        (S_001DAAD0_Block *)D_002F10F8, (void *)D_002AC770);
    k = -D_0028F8E4;
    for (i = 0; i < self->f214; i++) {
        float *a = (float *)((char *)self->f20C + i * 0x14);
        float dx = a[0] - v[0];
        float dy = a[1] - v[2];
        float *m;
        if (Abs_001DB080(dx) > D_0028F97C) {
            continue;
        }
        if (Abs_001DB080(dy) > D_0028F97C) {
            continue;
        }
        f = D_002F1148;
        if (!(f & 2)) {
            f |= 2;
            D_002F1148 = f;
            D_002F10E8 = D_0028F8E8;
            D_002F10EC = 0.0f;
            D_002F10F0 = D_0028F8E8;
        }
        if (!(f & 4)) {
            f |= 4;
            D_002F1148 = f;
            D_002F10DC = D_0028F8E8;
            D_002F10E0 = D_0028F8E8;
        }
        m = (float *)((char *)D_002F100C + self->cur * 0x10);
        m[0] = v[0];
        m[1] = v[1];
        m[2] = v[2];
        m[3] = v[3];
        D_002F10F8[0] = k + dx + D_00278650;
        D_002F10FC = k + dy + D_00278650;
        D_002F1104 = D_002F10E4;
        D_002F1108 = D_002F10D4;
        D_002F110C = D_0028F8E4 + dx + D_00278650;
        D_002F1110 = k + dy + D_00278650;
        D_002F1118 = D_002F10E8;
        D_002F111C = D_002F10D8;
        D_002F1120 = k + dx + D_00278650;
        D_002F1124 = D_0028F8E4 + dy + D_00278650;
        D_002F112C = D_002F10EC;
        D_002F1130 = D_002F10DC;
        D_002F1134 = D_0028F8E4 + dx + D_00278650;
        D_002F1138 = D_0028F8E4 + dy + D_00278650;
        D_002F1140 = D_002F10F0;
        D_002F1144 = D_002F10E0;
        func_001FE490(0);
        ((C_001DAAD0 *)self)->func_001DAAD0(((S_001DAC10_Tex *)self->f208)->fB8,
            (S_001DAAD0_Block *)D_002F10F8, (void *)D_002AC780);
    }
    if (self->cur == self->f210 - 1) {
        self->f214 = 0;
    }
    func_00201100(tex);
}

