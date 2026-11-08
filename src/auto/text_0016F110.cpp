/* 4 functions from 0x0016F110 to 0x0016FEE0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
struct Rdr6F110 {
    char pad0[0x4d4];
    void func_00168280();
    void func_001691E0();
    int func_00169490(char *a, int b);
    void func_00169710(void *a);
    void func_00168BE0(void *a, void *b, void *c, int d);
    void func_00168C20(void *a, int b, void *c);
    void func_00168C50(void *a, float b, void *c);
    void func_00168A10(void *a, void *b);
    void func_00168B90(void *a, void *b);
};
struct C_0016F110 {
    char pad0[0x104];
    void *f104;
    char pad108[0x2c];
    void *f134;
    int f138;
    int f13c;
    float f140;
    int f144;
    int f148;
    int f14c;
    int f150;
    int func_0016F110(char *name);
};
extern char D_002A5558[];
extern char D_00288A74[];
extern int D_00277298;
extern char D_00275630[];
extern char D_00288A68[];
extern char D_00288A5C[];
extern char D_00288A50[];
extern char D_00288A44[];
void func_00030F30(char *a, void *b);
extern "C" char *strcpy(char *, const char *);
extern "C" char *strcat(char *, const char *);
extern "C" int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void *func_001E8A44(unsigned int n);

struct S_0016FBC0_Node {
    float x,y,z;
    char padc[0x14];
    S_0016FBC0_Node *next;
    int f24, index;
    float f2c, f30, f34, f38, f3c;
    int f40, flags;
    char *owner;
};
struct S_0016FBC0_Entry { int id; S_0016FBC0_Node *node; };
struct S_0016FBC0_Root { int f0; char *obj; };
extern S_0016FBC0_Root *D_002EFDB8;
extern float D_002A88BC;
extern "C" void *__stdcall func_001FF410(int size, int align);
struct C_0016FBC0 {
    char pad0[0x104];
    int *table;
    int id, f10c;
    S_0016FBC0_Entry *entries;
    int f114, count;
    char pad11c[0x24];
    float f140;
    char pad144[0x18];
    int size1, size2, count1, count2, max;
    void func_0016FBC0();
};

struct O_0016F800 { char pad[0xa8]; int f; };
struct S_16F800_Part { float x, y, z; char padc[0x14]; S_16F800_Part *next; float f24; };
struct S_16F800_Bucket { unsigned int id; S_16F800_Part *node; };
struct S_16F800_Range {
    char pad0[0x170]; float f170, f174, f178, f17c;
    float f180, f184, f188;
    char pad18c[0x1fc - 0x18c]; float f1fc, f200;
    char pad204[0x270 - 0x204]; float f270, f274, f278, f27c;
};
struct S_16F800_Idx { char pad0[4]; int index; };
struct S_16F800_Table { char pad0[4]; void *obj; char pad8[8]; };
struct S_16F800_Creator { char pad0[0x14]; S_16F800_Table *f14; };
struct S_16F800_Obj { char pad0[0xd4]; int fD4; void func_001B07A0(); };
struct C_0015DA60 { void func_0015DD80(float *matrix, int count, char *in, char *out, int stride); };
struct C_0016F800 {
    char pad0[0x97];
    char f97;
    char pad98[0xb7 - 0x98];
    char fB7;
    char padB8[0xd7 - 0xb8];
    char fD7;
    char padD8[0xf7 - 0xd8];
    char fF7;
    char padF8[0x108 - 0xf8];
    int frame;          // 0x108
    int f10c;           // 0x10c
    S_16F800_Bucket *buckets; // 0x110
    int minb;           // 0x114
    int maxb;           // 0x118
    int count;          // 0x11c
    int used;           // 0x120
    int pad124[2];      // 0x124
    S_16F800_Part **nodes; // 0x12c
    char pad130[0x14];  // 0x130
    int f144;           // 0x144
    S_16F800_Idx *f148; // 0x148
    char pad14c[0x24];  // 0x14c
    O_0016F800 *obj170; // 0x170
    int func_0016F800(void);
};
extern "C" void __fastcall func_001D7D00(void);
extern const int D_002A88B8;
extern float D_00288A7C, D_00275994, D_00275460;
extern int *D_002F0630;
extern S_16F800_Creator *D_002A829C;
extern C_0015DA60 *D_002E2930;
int func_001E8858(float f);
void func_000265C0(float *out, void *a, void *b, void *c, int d, int e);

struct C_00142560 {
    void func_00142560(void);
};

struct C_0016F7B0 {
    char pad0[0x11c];
    int count;
    char pad120[0xc];
    int *items;
    char pad130[0x40];
    C_00142560 *obj170;
    void func_0016F7B0(void);
};

extern char D_00288A3C[], D_00288A34[], D_00288A28[], D_00288A1C[], D_00288A14[], D_00288A0C[], D_00288A04[], D_002889FC[], D_002889F0[];
extern float D_00278C48;
extern float D_0027AA20;
extern float D_00279B54;
extern float D_0027A098;
extern float D_002755E8;
int C_0016F110::func_0016F110(char *name)
{
    float a, b;
    float fa, fb, fc, fd;
    char sbuf[0x40];
    char buf[0x104];
    Rdr6F110 rdr;
    char buf2[0xf0];
    int i;

    rdr.func_00168280();
    strcpy(buf, D_002A5558);
    strcat(buf, name);
    func_00030F30(buf, D_00288A74);
    if (rdr.func_00169490(buf, 0) != 0) {
        rdr.func_00169710(&D_00277298);
        rdr.func_00168BE0(D_00288A68, D_00275630, buf2, -1);
        rdr.func_00168C20(D_00288A5C, 0, &f14c);
        rdr.func_00168C20(D_00288A50, 0, &f138);
        rdr.func_00168C50(D_00288A44, 255.0f, &f140);
        if (f138 > 0) {
            int *item = (int *)func_001E8A44(f138 * 12);
            f134 = item;
            for (i = 0; i < f138; i++) {
                func_001ADCC0(sbuf, 0x40, D_00288A3C, i);
                rdr.func_00169710(sbuf);
                rdr.func_00168A10(D_00288A34, &item[i * 3 + 0]);
                rdr.func_00168A10(D_00288A28, &item[i * 3 + 1]);
                rdr.func_00168A10(D_00288A1C, &item[i * 3 + 2]);
            }
        }
        if (f14c > 0) {
            float *q = (float *)func_001E8A44(f14c * 32);
            f104 = q;
            for (i = 0; i < f14c; i++) {
                func_001ADCC0(sbuf, 0x40, D_00288A14, i);
                rdr.func_00169710(sbuf);
                rdr.func_00168B90(D_00288A0C, &fa);
                rdr.func_00168B90(D_00288A04, &fb);
                rdr.func_00168B90(D_002889FC, &fc);
                rdr.func_00168B90(D_002889F0, &fd);
                q[i * 8 + 0] = fa;
                q[i * 8 + 1] = fc;
                q[i * 8 + 2] = fb;
                q[i * 8 + 3] = fc;
                q[i * 8 + 4] = fb;
                q[i * 8 + 5] = fd;
                q[i * 8 + 6] = fa;
                q[i * 8 + 7] = fd;
            }
        }
        f150 = 0;
        rdr.func_001691E0();
        return 1;
    }
    f14c = 0x3d;
    f104 = func_001E8A44(0x7a0);
    for (i = 0; i < 14; i++) {
        a = (float)(i / 4) * D_00278C48;
        b = (float)(i % 4) * D_00278C48;
        ((float *)f104)[i * 8 + 0] = b;
        ((float *)f104)[i * 8 + 1] = a;
        ((float *)f104)[i * 8 + 2] = b + D_00278C48;
        ((float *)f104)[i * 8 + 3] = a;
        ((float *)f104)[i * 8 + 4] = b + D_00278C48;
        ((float *)f104)[i * 8 + 5] = a + D_00278C48;
        ((float *)f104)[i * 8 + 6] = b;
        ((float *)f104)[i * 8 + 7] = a + D_00278C48;
    }
    for (i = 0xe; i < 0x12; i++) {
        a = (float)((i - 0xe) / 2) * D_0027AA20 + D_00279B54;
        b = (float)((i - 0xe) % 2) * D_0027AA20 + D_00278C48;
        ((float *)f104)[i * 8 + 0] = b;
        ((float *)f104)[i * 8 + 1] = a;
        ((float *)f104)[i * 8 + 2] = b + D_0027AA20;
        ((float *)f104)[i * 8 + 3] = a;
        ((float *)f104)[i * 8 + 4] = b + D_0027AA20;
        ((float *)f104)[i * 8 + 5] = a + D_0027AA20;
        ((float *)f104)[i * 8 + 6] = b;
        ((float *)f104)[i * 8 + 7] = a + D_0027AA20;
    }
    for (i = 0x1d; i < 0x2d; i++) {
        a = (float)((i - 0x1d) / 4) * D_0027A098 + D_00279B54;
        b = (float)((i - 0x1d) % 4) * D_0027A098 + D_002755E8;
        ((float *)f104)[i * 8 + 0] = b;
        ((float *)f104)[i * 8 + 1] = a;
        ((float *)f104)[i * 8 + 2] = b + D_0027A098;
        ((float *)f104)[i * 8 + 3] = a;
        ((float *)f104)[i * 8 + 4] = b + D_0027A098;
        ((float *)f104)[i * 8 + 5] = a + D_0027A098;
        ((float *)f104)[i * 8 + 6] = b;
        ((float *)f104)[i * 8 + 7] = a + D_0027A098;
    }
    for (i = 0x2d; i < 0x3d; i++) {
        a = (float)((i - 0x2d) / 4) * D_0027A098 + D_00279B54;
        b = (float)((i - 0x2d) % 4) * D_0027A098 + D_00279B54;
        ((float *)f104)[i * 8 + 0] = b;
        ((float *)f104)[i * 8 + 1] = a;
        ((float *)f104)[i * 8 + 2] = b + D_0027A098;
        ((float *)f104)[i * 8 + 3] = a;
        ((float *)f104)[i * 8 + 4] = b + D_0027A098;
        ((float *)f104)[i * 8 + 5] = a + D_0027A098;
        ((float *)f104)[i * 8 + 6] = b;
        ((float *)f104)[i * 8 + 7] = a + D_0027A098;
    }
    f150 = 1;
    rdr.func_001691E0();
    return 0;
}

void C_0016F7B0::func_0016F7B0(void)
{
    int count = this->count;
    int w = 0;
    int i = 0;
    if (count > 0) {
        for (; i < this->count; i++) {
            int e = this->items[i];
            if (*(char *)(e + 0x44) & 0x80) {
                this->items[w] = e;
                w++;
            }
        }
    }
    this->count = w;
    if (this->obj170) {
        this->obj170->func_00142560();
    }
}

int C_0016F800::func_0016F800(void)
{
    S_16F800_Range *r;
    S_16F800_Obj *o;
    S_16F800_Part *node;
    S_16F800_Bucket *e;
    float scale, f, inv, d;
    float v1[4];
    float v2[4];
    __declspec(align(16)) float m[16];
    int i, b, q;

    this->f144 = 0;
    if (this->obj170->f) func_001D7D00();
    if (this->count <= 0) return 1;

    o = (S_16F800_Obj *)D_002A829C->f14[this->f148->index].obj;
    o->func_001B07A0();
    this->f144 = D_002F0630[o->fD4 + 4];

    r = (S_16F800_Range *)D_002EFDB8->obj;
    scale = D_00275460 / (r->f200 - r->f1fc);
    this->used = 0;
    this->minb = 0x7fffffff;
    this->maxb = 0;
    this->frame++;
    f = (float)D_002A88B8 * D_00288A7C;
    inv = D_00275460 / f;

    for (i = 0; i < this->count; i++) {
        node = this->nodes[i];
        d = node->y * r->f274 + node->z * r->f278 + node->x * r->f270 + r->f27c;
        if (d > r->f200) continue;
        if (d < r->f1fc) continue;
        AsmFloatToInt(d * f, &q);
        node->f24 = (float)q * inv;
        b = func_001E8858((float)(D_002A88B8 - 1) * d * scale);
        if (b >= D_002A88B8) continue;
        e = &this->buckets[b];
        if (e->id < this->frame) {
            e->node = node;
            e->id = this->frame;
            node->next = 0;
        } else {
            node->next = e->node;
            e->node = node;
        }
        this->used++;
        this->minb = AsmMinI(this->minb, b);
        this->maxb = AsmMaxI(this->maxb, b);
    }
    if (this->used == 0) return 1;

    v1[0] = r->f170 + r->f180 * D_00275994;
    v1[1] = r->f174 + r->f184 * D_00275994;
    v1[2] = r->f178 + r->f188 * D_00275994;
    v1[3] = 1.0f;
    v2[0] = -r->f180;
    v2[1] = -r->f184;
    v2[2] = -r->f188;
    v2[3] = 1.0f;
    func_000265C0(m, v1, v2, (char *)r + 0x190, 1, 1);
    D_002E2930->func_0015DD80(m, 4, (char *)this + 0x44, (char *)this + 0x84, 0x10);
    this->f97 = 0;
    this->fB7 = 0;
    this->fD7 = 0;
    this->fF7 = 0;
    return 1;
}

void C_0016FBC0::func_0016FBC0()
{
    float *second;
    float *first = (float *)func_001FF410(size1,16);
    float *out;
    if(size2) { out=(float *)func_001FF410(size2,16); second=out; }
    else out=second;
    count2=0;
    count1=0;
    int index=count;
    volatile int i=index;
    if(index<0) return;
    do {
        S_0016FBC0_Node *p;
        int *b=(int *)entries;
        if(b[index*2] == id && (p=(S_0016FBC0_Node *)b[index*2+1]) != 0)
        do {
            float alpha=1.0f;
            if(p->flags & 0x2000) { alpha=f140; ++count1; }
            else if(p->flags & 1) ++count1;
            else { int n=count2+1; out=first; count2=n; }
            if(count1>max) { out=first; ++count2; count1=max; }
            int flags=p->flags;
            if(flags & 0x80) {
                float *obj=(float *)(D_002EFDB8->obj+0x170);
                float x=p->x-obj[0];
                float y=p->y-obj[1];
                float z=p->z-obj[2];
                float dist=z*z+y*y+x*x;
                float fade=1.0f-p->f34*p->f2c;
                if(dist < *(float *)(p->owner+0x218))
                    alpha *= fade * *(float *)(p->owner+0x21c) * dist;
                else alpha *= fade;
            } else if(flags&2) alpha *= 1.0f-p->f34*p->f2c;
            else if(flags&0x1000) {
                float a=p->f3c, b=p->f38;
                float na=a*a, nb=b*b;
                alpha *= ((na*p->f3c)/(nb*p->f38))*(p->f34*p->f2c);
            }
            float size=*(float *)(D_002EFDB8->obj+0x1d8)*p->f38*D_002A88BC;
            int *uv=table+p->index*8;
            if(!(p->flags&0x4000)) {
                ((int*)out)[3]=uv[0]; ((int*)out)[4]=uv[1];
                ((int*)out)[11]=uv[6]; ((int*)out)[12]=uv[7];
                ((int*)out)[19]=uv[4]; ((int*)out)[20]=uv[5];
                ((int*)out)[27]=uv[2];
            } else {
                if(flags&0x4000) {
                    ((int*)out)[3]=uv[2]; ((int*)out)[27]=uv[0];
                    ((int*)out)[11]=uv[4]; ((int*)out)[19]=uv[6];
                } else {
                    ((int*)out)[3]=uv[0]; ((int*)out)[11]=uv[6];
                    ((int*)out)[19]=uv[4]; ((int*)out)[27]=uv[2];
                }
                if(p->flags&0x8000) {
                    ((int*)out)[4]=uv[3]; ((int*)out)[28]=uv[1];
                    ((int*)out)[12]=uv[5]; ((int*)out)[20]=uv[7];
                    goto positions;
                } else {
                    ((int*)out)[4]=uv[1]; ((int*)out)[12]=uv[7]; ((int*)out)[20]=uv[5];
                }
            }
            ((int*)out)[28]=uv[3];
positions:
            out[0]=p->x;out[1]=p->y;out[2]=p->z;out[6]=size;out[7]=alpha;out[5]=0.0f;
            out[8]=p->x;out[9]=p->y;out[10]=p->z;out[14]=size;out[15]=alpha;out[13]=1.0f;
            out[16]=p->x;out[17]=p->y;out[18]=p->z;out[22]=size;out[23]=alpha;out[21]=2.0f;
            out[24]=p->x;out[25]=p->y;out[26]=p->z;out[30]=size;out[31]=alpha;out[29]=3.0f;
            if(out==second) second+=32; else first+=32;
            p=p->next;
            out=second;
        } while(p);
        index=i-1;
        i=index;
    } while(index>=0);
}

