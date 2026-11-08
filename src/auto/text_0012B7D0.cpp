/* 8 functions from 0x0012B7D0 to 0x0012C540, found by Ghidra. */
#include "common.h"
struct IO_0012BB60 {
 int func_0013C9F0(char *, char *);
 int func_0013C6E0(int, char *, int);
 int func_0013AFF0(int, int, int);
 int func_0013C110(int);
 int func_0013B930(int, void *, int, int);
};
extern IO_0012BB60 *D_002BEAAC;
extern char D_00276274[], D_00284224[], D_00284200[], D_00282960[];
void *func_001E8A44(unsigned int);
int func_001F6570(const char *, const char *, unsigned int);
int func_001E8B76(const char *, const char *, ...);
struct Vec_0012BB60 {
 int x,y,z,w;
 Vec_0012BB60() { z=0; y=0; x=0; w=0x3f800000; }
};
struct Triple_0012BB60 { int x,y,z; };
struct Vec_0012BF90 { float x,y,z,w; Vec_0012BF90() { z=0; y=0; x=0; w=1; } };
static __forceinline Vec_0012BB60 *Alloc_0012BB60(int count) {
 Vec_0012BB60 *p=(Vec_0012BB60 *)func_001E8A44(count*16);
 if(p) { Vec_0012BB60 *q=p; for(int i=count-1;i>=0;--i,++q) { q->z=0; q->y=0; q->x=0; q->w=0x3f800000; } return p; }
 return 0;
}

extern int D_00284194;
extern int D_002A3F00;
extern int D_002A3F04;
extern int D_002A3F08;
extern int D_002A3F0C;
extern float D_00275460;
extern float D_002755E8;
extern float D_002755EC;
extern float D_00275600;

struct S_0012B950_Vec4 {
    float x, y, z, w;
};

struct S_0012B950_V3 {
    float x, y, z, w;
};

static inline S_0012B950_V3 V3Sub_0012B950(const S_0012B950_V3 &a, const S_0012B950_V3 &b)
{
    S_0012B950_V3 r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;
    r.z = a.z - b.z;
    return r;
}

static inline S_0012B950_V3 V3Add_0012B950(const S_0012B950_V3 &a, const S_0012B950_V3 &b)
{
    S_0012B950_V3 r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    r.z = a.z + b.z;
    return r;
}

static inline void V3AddInto_0012B950(S_0012B950_Vec4 *o, const S_0012B950_V3 &a, const S_0012B950_V3 &b)
{
    o->w = 1.0f;
    o->x = a.x + b.x;
    o->y = a.y + b.y;
    o->z = a.z + b.z;
}

static inline S_0012B950_V3 V3Scale_0012B950(const S_0012B950_V3 &v, float s)
{
    S_0012B950_V3 r;
    r.x = v.x * s;
    r.y = v.y * s;
    r.z = v.z * s;
    return r;
}

void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct S_0012B7D0_Vec {
    int x, y, z, w;
};

struct S_0012B7D0_Obj {
    virtual void v0(void *buf, int a1);
    virtual void v1(void *buf);
};

struct S_0012B7D0_Cam28 {
    char pad0[0x18];
    S_0012B7D0_Vec f18;
};

struct S_0012B7D0_Cam {
    char pad0[0x28];
    S_0012B7D0_Cam28 *f28;
    char pad2c[0x144];
    S_0012B7D0_Vec f170;
    void func_0012AC20(void *p1, void *p2, void *p3, void *p4, void *p5);
    void func_0012B350(void);
    void func_0012A770(int a, int b);
};

struct C_0012B7D0 {
    char pad0[0x24];
    int f24;
    int f28;
    S_0012B7D0_Obj **f2C;
    S_0012B7D0_Cam *f30;
    int func_0012B7D0(void *id, int a1, int a2, S_0012B7D0_Vec *a3, S_0012B7D0_Vec *a4);
};

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_0012B8F0 {
    void *vtbl;
    char pad4[0x20];
    char *f24;
    char *f28;
    char *f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
    int f40;
    int *f44;
    C_0012B8F0 *func_0012B8F0(void);
    void func_0012BF10(int idx, u32 *a, u32 *b, u32 *c, int *d);
    void func_0012C4E0(void);
    void func_0012BF90(int i0, int i1, int i2, int i3, S_0012B950_Vec4 *a, S_0012B950_Vec4 *b, S_0012B950_Vec4 *c, float *d, float t);
};

int C_0012B7D0::func_0012B7D0(void *id, int a1, int a2, S_0012B7D0_Vec *a3, S_0012B7D0_Vec *a4) {
    int i;

    for (i = 0; i < f24; i++) {
        if (id == (void *)f2C[i]) {
            float buf[24];
            memset(buf, 0, sizeof(buf));
            if (f28 >= 0) {
                f2C[f28]->v1(buf);
            }
            f30->func_0012AC20(buf, buf + 4, buf + 8, buf + 12, buf + 13);
            f28 = i;
            f2C[i]->v0(buf, a1);
            if (a2 != 0 && a3 != 0 && a4 != 0) {
                f30->func_0012B350();
                f30->f170 = *a3;
                f30->func_0012A770(a2, 2);
                f30->f28->f18 = *a4;
            }
            return 1;
        }
    }
    return 0;
}

C_0012B8F0 *C_0012B8F0::func_0012B8F0(void) {
    u32 *p;

    ((C_00157600 *)this)->func_00157600(1);
    vtbl = (void *)&D_00284194;
    p = (u32 *)&f30;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f24 = 0;
    f28 = 0;
    f2C = 0;
    f44 = 0;
    f40 = 0;
    f30 = D_002A3F00;
    f34 = D_002A3F04;
    f38 = D_002A3F08;
    f3C = D_002A3F0C;
    return this;
}

#pragma optimize("a", on)
void __stdcall func_0012B950(S_0012B950_Vec4 *out, float t, S_0012B950_Vec4 p0, S_0012B950_Vec4 p1, S_0012B950_Vec4 p2, S_0012B950_Vec4 p3) {
    float t2;
    float t3;
    float u;
    float b;
    float a;
    float c;
    float d;
    S_0012B950_V3 m0;
    S_0012B950_V3 m1;

    t2 = t * t;
    t3 = t * t2;
    u = t3 + t3;
    a = (u - t2 * 3.0f) + D_00275460;
    b = 3.0f * t2 - u;
    c = (t3 - D_00275600 * t2) + t;
    d = t3 - t2;
    m0 = V3Scale_0012B950(V3Sub_0012B950(*(S_0012B950_V3 *)&p2, *(S_0012B950_V3 *)&p0), D_002755E8);
    m1 = V3Scale_0012B950(V3Sub_0012B950(*(S_0012B950_V3 *)&p3, *(S_0012B950_V3 *)&p1), D_002755E8);
    V3AddInto_0012B950(out,
            V3Add_0012B950(
                V3Add_0012B950(V3Scale_0012B950(*(S_0012B950_V3 *)&p1, a), V3Scale_0012B950(*(S_0012B950_V3 *)&p2, b)),
                V3Scale_0012B950(m0, c)),
            V3Scale_0012B950(m1, d));
}
#pragma optimize("a", off)
float __stdcall func_0012BAE0(float t, float p0, float p1, float p2, float p3) {
    float three = 3.0f;
    float t3 = t * t * t;
    const float &r3 = t3;
    float t2 = t * t;
    float m0 = (p2 - p0) * D_002755E8;
    float m1 = (p3 - p1) * D_002755E8;
    return m0 * (((r3 - (t2 + t2)) + t))
         + m1 * (r3 - t2)
         + (((r3 + r3) - t2 * three) + D_00275460) * p1
         + ((t2 * three) - (r3 + r3)) * p2;
}

void __stdcall func_0012BB60(char *input, char *output) {
 char line[256];
 int header[3];
 int f=D_002BEAAC->func_0013C9F0(input,D_00276274);
 int count=0;
 while(D_002BEAAC->func_0013C6E0(f,line,255)) {
  if(!func_001F6570(line,D_00284224,6)) ++count;
 }
 int *ids=(int *)func_001E8A44(count*4);
 Vec_0012BB60 *a=Alloc_0012BB60(count);
 Vec_0012BB60 *b=Alloc_0012BB60(count);
 Vec_0012BB60 *c=Alloc_0012BB60(count);
 D_002BEAAC->func_0013AFF0(f,0,0);
 int i=0;
 while(D_002BEAAC->func_0013C6E0(f,line,255)) {
  if(!func_001F6570(line,D_00284224,6)) {
   func_001E8B76(line,D_00284200,&a[i].x,&a[i].z,&a[i].y,&b[i].x,&b[i].z,&b[i].y,&c[i].x,&c[i].z,&c[i].y,&ids[i]);
   ++i;
  }
 }
 D_002BEAAC->func_0013C110(f);
 f=D_002BEAAC->func_0013C9F0(output,D_00282960);
 header[0]=2; header[1]=count; header[2]=1;
 D_002BEAAC->func_0013B930(f,header,12,1);
 int size;

 char *buffer=(char *)func_001E8A44(size=count*40);
 char *p=buffer;
 for(i=0;i<count;++i) {
  *(Triple_0012BB60 *)p=*(Triple_0012BB60 *)&a[i]; p+=12;
  *(Triple_0012BB60 *)p=*(Triple_0012BB60 *)&b[i]; p+=12;
  *(Triple_0012BB60 *)p=*(Triple_0012BB60 *)&c[i]; p+=12;
  *(int *)p=ids[i]; p+=4;
 }
 D_002BEAAC->func_0013B930(f,buffer,size,1);
 D_002BEAAC->func_0013C110(f);
 if(buffer) func_001E891B(buffer);
 if(ids) func_001E891B(ids);
 if(a) func_001E891B(a);
 if(b) func_001E891B(b);
 if(c) func_001E891B(c);
}

void C_0012B8F0::func_0012BF10(int idx, u32 *a, u32 *b, u32 *c, int *d) {
    u32 *s = (u32 *)(f2C + idx * 12);
    a[0] = s[0];
    a[1] = s[1];
    a[2] = s[2];
    a[3] = 0x3f800000;
    s = (u32 *)(f24 + idx * 12);
    b[0] = s[0];
    b[1] = s[1];
    b[2] = s[2];
    b[3] = 0x3f800000;
    s = (u32 *)(f28 + idx * 12);
    c[0] = s[0];
    c[1] = s[1];
    c[2] = s[2];
    c[3] = 0x3f800000;
    *d = f44[idx];
}

void C_0012B8F0::func_0012BF90(int i0,int i1,int i2,int i3,S_0012B950_Vec4 *a,S_0012B950_Vec4 *b,S_0012B950_Vec4 *c,float *d,float t) {
 Vec_0012BF90 p[4],q[4],r[4];
 float f[4]; S_0012B950_Vec4 tmp;
 p[0].x=*(float *)(f2C+i1*12+0);
 p[0].y=*(float *)(f2C+i1*12+4);
 p[0].z=*(float *)(f2C+i1*12+8);
 p[0].w=1.0f;
 p[1].x=*(float *)(f2C+i0*12+0);
 p[1].y=*(float *)(f2C+i0*12+4);
 p[1].z=*(float *)(f2C+i0*12+8);
 p[1].w=1.0f;
 p[2].x=*(float *)(f2C+i2*12+0);
 p[2].y=*(float *)(f2C+i2*12+4);
 p[2].z=*(float *)(f2C+i2*12+8);
 p[2].w=1.0f;
 p[3].x=*(float *)(f2C+i3*12+0);
 p[3].y=*(float *)(f2C+i3*12+4);
 p[3].z=*(float *)(f2C+i3*12+8);
 p[3].w=1.0f;
 q[0].x=*(float *)(f24+i1*12+0);
 q[0].y=*(float *)(f24+i1*12+4);
 q[0].z=*(float *)(f24+i1*12+8);
 q[0].w=1.0f;
 q[1].x=*(float *)(f24+i0*12+0);
 q[1].y=*(float *)(f24+i0*12+4);
 q[1].z=*(float *)(f24+i0*12+8);
 q[1].w=1.0f;
 q[2].x=*(float *)(f24+i2*12+0);
 q[2].y=*(float *)(f24+i2*12+4);
 q[2].z=*(float *)(f24+i2*12+8);
 q[2].w=1.0f;
 q[3].x=*(float *)(f24+i3*12+0);
 q[3].y=*(float *)(f24+i3*12+4);
 q[3].z=*(float *)(f24+i3*12+8);
 q[3].w=1.0f;
 r[0].x=*(float *)(f28+i1*12+0);
 r[0].y=*(float *)(f28+i1*12+4);
 r[0].z=*(float *)(f28+i1*12+8);
 r[0].w=1.0f;
 r[1].x=*(float *)(f28+i0*12+0);
 r[1].y=*(float *)(f28+i0*12+4);
 r[1].z=*(float *)(f28+i0*12+8);
 r[1].w=1.0f;
 r[2].x=*(float *)(f28+i2*12+0);
 r[2].y=*(float *)(f28+i2*12+4);
 r[2].z=*(float *)(f28+i2*12+8);
 r[2].w=1.0f;
 r[3].x=*(float *)(f28+i3*12+0);
 r[3].y=*(float *)(f28+i3*12+4);
 r[3].z=*(float *)(f28+i3*12+8);
 r[3].w=1.0f;
 f[0]=((float *)f44)[i1];
 f[1]=((float *)f44)[i0];
 f[2]=((float *)f44)[i2];
 f[3]=((float *)f44)[i3];
 *a=*((S_0012B950_Vec4 *(__stdcall *)(S_0012B950_Vec4 *,float,S_0012B950_Vec4,S_0012B950_Vec4,S_0012B950_Vec4,S_0012B950_Vec4))func_0012B950)(&tmp,t,*(S_0012B950_Vec4 *)&p[0],*(S_0012B950_Vec4 *)&p[1],*(S_0012B950_Vec4 *)&p[2],*(S_0012B950_Vec4 *)&p[3]);
 *b=*((S_0012B950_Vec4 *(__stdcall *)(S_0012B950_Vec4 *,float,S_0012B950_Vec4,S_0012B950_Vec4,S_0012B950_Vec4,S_0012B950_Vec4))func_0012B950)(&tmp,t,*(S_0012B950_Vec4 *)&q[0],*(S_0012B950_Vec4 *)&q[1],*(S_0012B950_Vec4 *)&q[2],*(S_0012B950_Vec4 *)&q[3]);
 *c=*((S_0012B950_Vec4 *(__stdcall *)(S_0012B950_Vec4 *,float,S_0012B950_Vec4,S_0012B950_Vec4,S_0012B950_Vec4,S_0012B950_Vec4))func_0012B950)(&tmp,t,*(S_0012B950_Vec4 *)&r[0],*(S_0012B950_Vec4 *)&r[1],*(S_0012B950_Vec4 *)&r[2],*(S_0012B950_Vec4 *)&r[3]);
 *d=func_0012BAE0(t,f[0],f[1],f[2],f[3]);
}

void C_0012B8F0::func_0012C4E0(void) {
    vtbl = (void *)&D_00284194;
    if (f24 != 0) {
        func_001E891B(f24);
    }
    if (f28 != 0) {
        func_001E891B(f28);
    }
    if (f2C != 0) {
        func_001E891B(f2C);
    }
    if (f44 != 0) {
        func_001E891B(f44);
    }
    ((C_00157660 *)this)->func_00157660();
}
