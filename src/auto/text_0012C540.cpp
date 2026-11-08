/* 8 functions from 0x0012C540 to 0x0012D460, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
extern int D_00284274;
extern int D_002A3FD8, D_002A3FDC, D_002A3FE0, D_002A3FE4;
extern int D_002A3FF8, D_002A3FFC, D_002A4000, D_002A4004;

struct C_0012C940 {
    void func_00171270(int a0);
    void func_001719D0(float a0);
    C_0012C940 *func_0012C940(int a0);
};

struct C_0013B210 {
    void func_0013B210(void *);
    int func_0013B1A0(char *);
    int func_0013C9F0(char *, char *);
    void func_0013C8A0(int, void *, int, int);
    void func_0013C110(int);
};
extern C_0013B210 *D_002BEAAC;
void func_001E891B(void *);

struct Vec12C { float x,y,z; };
struct Vec16C { float x,y,z,w; };
struct C_0012C540 {
 char pad[0x24];
 Vec12C *a,*b,*c;
 char pad30[0x10];
 int count;
 int *d;
 int func_0012C540(char *, Vec16C *);
 void func_0012BB60(char *,char *);
};
extern int D_002A3F00, D_002A3F04, D_002A3F08, D_002A3F0C;
extern char D_0028422C[],D_00275FB4[];
void D_00021290();
void *func_001E8A44(unsigned int);
void __stdcall func_00011FF0(void *, int, int, void (*)());
void func_00030F30(char *,char *);
static inline Vec12C *alloc_12C(int n) {
    Vec12C *p=(Vec12C*)func_001E8A44(n*12);
    if(p) { func_00011FF0(p,12,n,D_00021290); return p; }
    return 0;
}
/* ---- declarations for func_0012CD10 (CarProcedural init, vtable slot 45) ---- */
extern char D_002A4C10[], D_00275678[], D_002A46E8[], D_00284398[], D_0028438C[];
extern char D_00284380[], D_00284374[], D_00284368[], D_0028435C[], D_00284350[], D_00284348[];
extern float D_00283A78, D_00275544, D_00275460;
extern int D_002BA15C;
extern "C" unsigned int strlen(const char *);
extern "C" char *strcpy(char *, const char *);
#pragma intrinsic(strlen, strcpy)
int func_001ADCC0(char *, int, const char *, ...);
void *func_001E8920(void *, const void *, unsigned int);
void func_00012140();

struct M_12CD10 { /* model / skeleton node object (0x1e0 bytes) */
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();
    virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();
    virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();
    virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();
    virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();
    virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();
    virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();
    virtual void v35(char *name, int a, int b);
    M_12CD10 *func_00143580(int);
    M_12CD10 *func_00198330(char *name);
    void func_00197E70(void *out);
    void func_001983E0(Vec16C *hi, Vec16C *lo);
};

struct T_12CD10 { /* 0x110 animation controller */
    char pad0[0x60];
    void *obj60;
    void *self64;
    int src68;
    char pad6c[0x34];
    void (*cbA0)();
    char padA4[3];
    unsigned char flagsA7;
    T_12CD10 *func_0017F050(int);
    void func_0017F0A0(int);
    void func_001334E0(int);
    void func_001334F0(void *a);
    void func_00181140(void *a, char *path, int b);
};

struct A_12CD10 { /* 0x1e0 animation object */
    char pad0[0x60];
    void *obj60;
    void *self64;
    int src68;
    char pad6c[0x3b];
    unsigned char flagsA7;
    A_12CD10 *func_0019B700(int);
    void func_00129920(int);
    void func_0019D7B0(void *a, char *b);
};

struct V4i_12CD10 { int a, b, c, d; };
struct __declspec(align(16)) Mat_12CD10 {
    float m[16];
    void identity();
};
inline void Mat_12CD10::identity()
{
    __m128 z = _mm_setzero_ps();
    _mm_store_ps(m, z);
    _mm_store_ps(m + 4, z);
    _mm_store_ps(m + 8, z);
    _mm_store_ps(m + 12, z);
    m[0] = m[5] = m[10] = m[15] = 1;
}

struct S_12CD10 { /* self; vtable slots 2, 27, 29 and 47 used */
    virtual void v0();virtual void v1();
    virtual void slot2();
    virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();
    virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();
    virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();
    virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();
    virtual void v23();virtual void v24();virtual void v25();virtual void v26();
    virtual void slot27(void *a);
    virtual void v28();
    virtual void slot29(float *m);
    virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();
    virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();
    virtual void v40();virtual void v41();virtual void v42();virtual void v43();virtual void v44();
    virtual void v45();virtual void v46();
    virtual int slot47(char *path, void *a);
    virtual void v48();virtual void v49();virtual void v50();virtual void v51();virtual void v52();
    char pad04[0x210 - 4];
    float f210;
    char pad214[0x22c - 0x214];
    M_12CD10 *f22c;
    char pad230[0x300 - 0x230];
    char name[0x100];
    M_12CD10 *f400;
    char pad404[4];
    T_12CD10 *f408;
    A_12CD10 *f40c;
    T_12CD10 *f410;
    char pad414[0x448 - 0x414];
    Vec16C f448;
    int f458[4];
    char pad468[0x498 - 0x468];
    int f498;
    char pad49c[0x4a0 - 0x49c];
    int f4a0;
    char pad4a4[0x4b0 - 0x4a4];
    int f4b0;
    unsigned int f4b4;
    char pad4b8[0x4c0 - 0x4b8];
    float f4c0;
    float f4c4;
    int f4c8;
    float f4cc;
    float f4d0;
    float f4d4;
    float f4d8;
    int f4dc;
    char pad4e0[0x4e8 - 0x4e0];
    float f4e8;
    char pad4ec[0x4fc - 0x4ec];
    int f4fc;
    M_12CD10 **f500;
    void *func_0012CD10(char *volatile model, char *volatile animation, int a2, char *a3, Vec16C *a4, float a5, int a6, int a7, float a8, int a9, unsigned int count, int a11, float a12, float a13, int a14, int a15);
    void func_001577A0(void *obj, int mode);
    void func_001D3F50();
};

struct C_0012C8F0 {
    undefined4 func_0012C8F0(byte param_1);
};

struct C_0012C910 {
    void func_0012C540(int a, int b);
    void func_001D3F50();
    void func_0012C910(int a, int b);
};

struct C_0012CC20 {
    char pad0[0x228];
    int unk228;
    void func_0012CC20(int a);
};

struct C_0012CCA0_Ref {
    int unk0;
    u32 unk4;
    void *unk8;
};

struct C_0012CCA0 {
    void *vtbl;
    char pad4[0x410];
    C_0012CCA0_Ref *unk414;
    char pad418[0xE8];
    void *unk500;
    void func_00170B50();
    void func_0012CCA0();
};


int C_0012C540::func_0012C540(char *name, Vec16C *offset)
{
    int index=0;
    Vec16C off;
    off=*(Vec16C*)&D_002A3F00;
    if(offset) off=*offset;
    if(a) func_001E891B(a);
    if(b) func_001E891B(b);
    if(c) func_001E891B(c);
    if(d) func_001E891B(d);
    char path[260];
    if(!D_002BEAAC->func_0013B1A0(name)) {
        char *src=name,*dst=path;
        do { *dst++=*src; } while(*src++);
        func_00030F30(path,D_0028422C);
        if(D_002BEAAC->func_0013B1A0(path)) {
            func_0012BB60(path,name);
        } else {
            return 0;
        }
    }
    int f=D_002BEAAC->func_0013C9F0(name,D_00275FB4);
    int header[3];
    D_002BEAAC->func_0013C8A0(f,header,12,1);
    if(header[0]!=2) { D_002BEAAC->func_0013C110(f); return 0; }
    int frames=header[2];
    count=header[1];
    int n=count;
    a=alloc_12C(n);
    b=alloc_12C(count);
    c=alloc_12C(count);
    d=(int*)func_001E8A44(count*4);
    Vec16C v1,v2,v3;
    v1.z=0;v1.y=0;v1.x=0;v1.w=1;
    v2.z=0;v2.y=0;v2.x=0;v2.w=1;
    v3.z=0;v3.y=0;v3.x=0;v3.w=1;
    for(int i=0;i<count;i++) {
        for(int j=frames;j>0;--j) {
            D_002BEAAC->func_0013C8A0(f,&v1,12,1);
            D_002BEAAC->func_0013C8A0(f,&v2,12,1);
            D_002BEAAC->func_0013C8A0(f,&v3,12,1);
            D_002BEAAC->func_0013C8A0(f,&d[index],4,1);
            v3.x+=off.x;v3.y+=off.y;v3.z+=off.z;
            Vec12C *dest=&a[index];
            *(int*)&dest->x=*(int*)&v1.x; *(int*)&dest->y=*(int*)&v1.y; *(int*)&dest->z=*(int*)&v1.z;
            dest=&b[index];
            *(int*)&dest->x=*(int*)&v2.x; *(int*)&dest->y=*(int*)&v2.y; *(int*)&dest->z=*(int*)&v2.z;
            dest=&c[index];
            *(int*)&dest->x=*(int*)&v3.x; *(int*)&dest->y=*(int*)&v3.y; *(int*)&dest->z=*(int*)&v3.z;
            ++index;
        }
    }
    D_002BEAAC->func_0013C110(f);
    return 1;
}

undefined4 C_0012C8F0::func_0012C8F0(byte param_1)
{
  int func_0012C4E0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0012C4E0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void C_0012C910::func_0012C910(int a, int b)
{
    func_0012C540(a, b);
    func_001D3F50();
}

float func_0012C930(float a, float b)
{
    return (float)fmod(a, b);
}

C_0012C940 *C_0012C940::func_0012C940(int a0)
{
    int *u;
    int *p;
    func_00171270(a0);
    u = (int *)this;
    u[0] = (int)&D_00284274;
    p = &u[0x418 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &u[0x428 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x438 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x448 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x458 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x468 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x478 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    p = &u[0x488 / 4]; p[3] = 0x3f800000; p[2] = 0; p[1] = 0; p[0] = 0;
    u[0x4A4 / 4] = 0; u[0x404 / 4] = 0; u[0x498 / 4] = 0; u[0x49C / 4] = 0;
    u[0x4A8 / 4] = 0; u[0x4B4 / 4] = 0; u[0x4B8 / 4] = 0; u[0x4BC / 4] = 0;
    u[0x4C0 / 4] = 0x42f00000;
    u[0x4C8 / 4] = 0; u[0x4CC / 4] = 0; u[0x4D0 / 4] = 0;
    u[0x4F0 / 4] = 0x3f000000; u[0x4F4 / 4] = 0x3e4ccccd;
    u[0x4DC / 4] = 0; u[0x4E0 / 4] = 0; u[0x4E4 / 4] = 0; u[0x4E8 / 4] = 0; u[0x4EC / 4] = 0;
    u[0x4F8 / 4] = 0xff7fffff;
    u[0x4B0 / 4] = 1; u[0x4A0 / 4] = 1;
    u[0x418 / 4] = D_002A3FD8; u[0x41C / 4] = D_002A3FDC; u[0x420 / 4] = D_002A3FE0; u[0x424 / 4] = D_002A3FE4;
    u[0x428 / 4] = D_002A3FD8; u[0x42C / 4] = D_002A3FDC; u[0x430 / 4] = D_002A3FE0; u[0x434 / 4] = D_002A3FE4;
    u[0x438 / 4] = D_002A3FD8; u[0x43C / 4] = D_002A3FDC; u[0x440 / 4] = D_002A3FE0; u[0x444 / 4] = D_002A3FE4;
    u[0x448 / 4] = D_002A3FD8; u[0x44C / 4] = D_002A3FDC; u[0x450 / 4] = D_002A3FE0; u[0x454 / 4] = D_002A3FE4;
    u[0x458 / 4] = D_002A3FD8; u[0x45C / 4] = D_002A3FDC; u[0x460 / 4] = D_002A3FE0; u[0x464 / 4] = D_002A3FE4;
    u[0x468 / 4] = D_002A3FF8; u[0x46C / 4] = D_002A3FFC; u[0x470 / 4] = D_002A4000; u[0x474 / 4] = D_002A4004;
    u[0x4FC / 4] = 0; u[0x400 / 4] = 0; u[0x500 / 4] = 0; u[0x408 / 4] = 0;
    u[0x40C / 4] = 0; u[0x410 / 4] = 0; u[0x414 / 4] = 0; u[0x4AC / 4] = 0;
    func_001719D0(10000.0f);
    return this;
}

void C_0012CC20::func_0012CC20(int a)
{
    unk228 = a;
}

void C_0012CCA0::func_0012CCA0()
{
    vtbl = &D_00284274;
    if (unk500) {
        func_001E891B(unk500);
    }
    if (unk414) {
        unk414->unk4--;
        if (unk414->unk4 <= 0) {
            D_002BEAAC->func_0013B210(unk414);
            func_001E891B(unk414->unk8);
            func_001E891B(unk414);
        }
    }
    func_00170B50();
}

extern "C" void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
void *S_12CD10::func_0012CD10(char *volatile model, char *volatile animation, int a2, char *a3, Vec16C *a4, float a5, int a6, int a7, float a8, int a9, unsigned int count, int a11, float a12, float a13, int a14, int a15)
{
    Mat_12CD10 matrix, identity;
    char path[260], check[260], animpath[260];
    struct { S_12CD10 * volatile self; Vec16C lo; Vec16C hi; } t;
    int limit, length;
    t.self = this;
    t.hi.z = 0; t.hi.y = 0; t.hi.x = 0; t.hi.w = 1;
    t.lo.z = 0; t.lo.y = 0; t.lo.x = 0; t.lo.w = 1;
    t.self->f4b0 = a14;
    t.self->func_001D3F50();
    func_001ADCC0(check, 260, D_00275678, D_002A4C10, animation);
    if (!D_002BEAAC->func_0013B1A0(check))
        animation[0] = 0;
    func_001ADCC0(path, 260, D_00275678, D_002A46E8, a3);
    length = strlen(model);
    limit = 255;
    int n = AsmMinI(limit, length);
    func_001E8920(t.self->name, model, n);
    t.self->name[n] = 0;
    M_12CD10 *m = (M_12CD10 *)func_001E8A44(0x1e0);
    if (m)
        m = m->func_00143580(1);
    m->v35(model, 0, 1);
    t.self->func_001577A0(m, 0);
    t.self->f400 = m;
    M_12CD10 *part = t.self->f400->func_00198330(D_00284398);
    if (!part) {
        part = t.self->f400;
        t.self->f22c = t.self->f400;
        t.self->slot27(t.self->f22c);
    }
    t.self->f448 = *a4;
    t.self->f4e8 = a8;
    *(V4i_12CD10 *)t.self->f458 = *(V4i_12CD10 *)&D_002A3FD8;
    t.self->f4dc = 0;
    t.self->f498 = a6;
    t.self->f4a0 = a7;
    part->func_00197E70((char *)t.self + 0x190);
    part->func_001983E0(&t.hi, &t.lo);
    identity.identity();
    memcpy(matrix.m, identity.m, 64);
    float z = t.lo.z * t.lo.z, y = t.lo.y * t.lo.y, x = t.lo.x * t.lo.x;
    matrix.m[0] = (y + z) * t.self->f210 * D_00283A78;
    matrix.m[5] = (x + z) * t.self->f210 * D_00283A78;
    matrix.m[10] = (x + y) * t.self->f210 * D_00283A78;
    t.self->slot29(matrix.m);
    t.self->f4b4 = count;
    if (t.self->f4b4 > 0) {
        t.self->f500 = (M_12CD10 **)func_001E8A44(t.self->f4b4 * 4);
        if (t.self->f4b4 > 0) t.self->f500[0] = t.self->f400->func_00198330(D_0028438C);
        if (t.self->f4b4 > 1) t.self->f500[1] = t.self->f400->func_00198330(D_00284380);
        if (t.self->f4b4 > 2) t.self->f500[2] = t.self->f400->func_00198330(D_00284374);
        if (t.self->f4b4 > 3) t.self->f500[3] = t.self->f400->func_00198330(D_00284368);
        if (t.self->f4b4 > 4) t.self->f500[4] = t.self->f400->func_00198330(D_0028435C);
        if (t.self->f4b4 > 5) t.self->f500[5] = t.self->f400->func_00198330(D_00284350);
        t.self->f500[0]->func_001983E0(&t.hi, &t.lo);
        if (t.lo.y > D_00275544)
            t.self->f4d4 = D_00275460 / t.lo.y;
        else
            t.self->f4d4 = 1.0f;
    }
    t.self->f4fc = a2;
    T_12CD10 *tc = (T_12CD10 *)func_001E8A44(0x110);
    if (tc)
        tc = tc->func_0017F050(1);
    t.self->f408 = tc;
    t.self->f408->func_0017F0A0(3);
    t.self->f408->flagsA7 |= 1;
    t.self->func_001577A0(t.self->f408, -1);
    t.self->f4d8 = 5.0f;
    A_12CD10 *anim = (A_12CD10 *)func_001E8A44(0x1e0);
    if (anim)
        anim = anim->func_0019B700(1);
    t.self->f40c = anim;
    t.self->f40c->func_00129920(5);
    t.self->f40c->obj60 = t.self;
    t.self->f40c->self64 = t.self;
    t.self->f40c->src68 = D_002BA15C;
    t.self->f40c->flagsA7 |= 1;
    t.self->func_001577A0(t.self->f40c, -1);
    if (animation && animation[0]) {
        if (a15) {
            strcpy(animpath, animation);
            func_00030F30(animpath, D_00284348);
            T_12CD10 *c = (T_12CD10 *)func_001E8A44(0x110);
            if (c)
                c = c->func_0017F050(1);
            t.self->f410 = c;
            t.self->f410->func_0017F0A0(3);
            t.self->f410->src68 = D_002BA15C;
            t.self->f410->func_001334E0(1);
            t.self->f410->func_00181140(t.self->f22c, animpath, 0);
            t.self->f410->cbA0 = func_00012140;
            t.self->f410->obj60 = t.self->f22c;
            t.self->f410->self64 = t.self;
            t.self->func_001577A0(t.self->f410, 2);
        }
        t.self->f40c->func_0019D7B0(t.self->f400, animation);
    }
    t.self->f408->func_001334F0(t.self->f40c);
    t.self->f4c0 = a5;
    if (t.self->f4c0 > D_00275544)
        t.self->f4c4 = D_00275460 / t.self->f4c0;
    t.self->f4c8 = a11;
    t.self->f4cc = a12;
    t.self->f4d0 = a13;
    if (!t.self->slot47(path, (char *)t.self->f400 + 0x28)) {
        t.self->slot2();
        return 0;
    }
    return t.self;
}
