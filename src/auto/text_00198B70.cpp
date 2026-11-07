/* 19 functions from 0x00198B70 to 0x00199B00, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
extern float D_00275544;
extern float D_00275600;
extern float D_00275460;

void func_001E891B(void *ptr);
void func_0011AC30(float *out, float *in);
void func_000265C0(float *m, float *t, float *a, float *b, int c, int d);
void func_0011ACC0(void *a, void *b, float *m);

struct S_00198B70_MatCopy {
    void func_000264C0(void *m);
};

struct S_00198B70_Cam {
    void func_00193500(void);
    void func_00193870(void *a);
};

struct S_00198B70_V4 {
    int x;
    int y;
    int z;
    int w;
};

struct S_00198B70_Mat {
    float m[16];
};

struct S_00198B70_Bits {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
    u8 b3 : 1;
    u8 b4 : 1;
    u8 b5 : 1;
    u8 b6 : 1;
    u8 b7 : 1;
};

struct S_00198B70_F4 {
    float x;
    float y;
    float z;
    float w;
};

struct C_00198B70 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29(C_00198B70 **out);
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34(int a, void *b);
    char pad4[0x1d];
    u8 f21;
    char pad22[2];
    char f24;
    char pad25[2];
    union {
        u8 f27;
        S_00198B70_Bits f27b;
    };
    char pad28[0xb0 - 0x28];
    S_00198B70_Mat fB0;
    S_00198B70_Mat fF0;
    S_00198B70_V4 f130;
    S_00198B70_V4 f140;
    S_00198B70_V4 f150;
    S_00198B70_V4 f160;
    C_00198B70 *f170;
    C_00198B70 *f174;
    C_00198B70 *f178;
    C_00198B70 *f17c;
    union {
        u8 f180;
        S_00198B70_Bits f180b;
    };
    char pad181[3];
    int f184;
    int f188;
    S_00198B70_Cam *f18c;
    void func_00197AA0(void);
    void func_001576D0(void);
    void func_00198EA0(void);
    void func_001995B0(float a, float b, float c);
    void func_00199600(float a, float b, float c, float d);
    void func_00198B70(S_00198B70_V4 *out0, S_00198B70_V4 *out1);
    void func_00198BE0(int a);
    void func_00198F50(float *a, float *b, int c, int d, int e);
    void func_00198DE0(void);
    void func_00198E60(void);
    void func_001982F0(void);
    void func_00197B10(void);
    S_00198B70_F4 func_00198120(S_00198B70_F4 *p);
    S_00198B70_F4 func_00197F70(S_00198B70_F4 *p);
    S_00198B70_F4 func_00198040(S_00198B70_F4 *p);
    S_00198B70_F4 func_00197EC0(S_00198B70_F4 *p);
    void func_00199960(C_00198B70 *other, S_00198B70_F4 *v);
    void func_00199790(C_00198B70 *other, S_00198B70_F4 *v);
    void func_001994C0(C_00198B70 *other, S_00198B70_F4 *out0, S_00198B70_F4 *out1);
    void func_001996A0(C_00198B70 *other, S_00198B70_F4 v);
    void func_00198C00(C_00198B70 *src, C_00198B70 *dst);
    void func_00199110(C_00198B70 *other, float *a, float *b, int c, int d, int e);
    void func_00199300(float *q);
    void func_00199650(float *v);
    void func_00199900(float *v);
    void func_00199A70(C_00198B70 *other, S_00198B70_F4 *out);
};

void C_00198B70::func_00198B70(S_00198B70_V4 *out0, S_00198B70_V4 *out1)
{
    if ((f180 & 0x80) != 0) {
        if ((f180 & 8) == 0 && (f180 & 0x40) != 0) {
            func_00197AA0();
        } else {
            v31();
        }
    }
    if (out0 != 0) {
        *out0 = f150;
    }
    if (out1 != 0) {
        *out1 = f160;
    }
}

void C_00198B70::func_00198BE0(int a)
{
    f170 = 0;
    v34(a, this);
}

void C_00198B70::func_00198C00(C_00198B70 *src, C_00198B70 *dst)
{
    char *s=(char *)src+0x28;
    char *d=(char *)dst+0x28;
    while((*d++=*s++)!=0) {}
    ((S_00198B70_MatCopy *)&dst->fB0)->func_000264C0(&src->fB0);
    dst->f180 &= 0xfe;
    dst->f27b.b2=src->f27b.b2;
    dst->f180b.b2=src->f180b.b2;
    dst->f180b.b5=src->f180b.b5;
    dst->f130=src->f130;
    dst->f140=src->f140;
    dst->f184=src->f184;
    dst->f150=src->f150;
    dst->f160=src->f160;
    dst->f188=src->f188;
    dst->f180b.b6=src->f180b.b6;
    if(src->f178) {
        v29(&dst->f178);
        dst->f178->f170=dst->f170;
        dst->f178->f17c=dst;
        v34((int)src->f178,dst->f178);
    } else dst->f178=0;
    if(src->f174) {
        v29(&dst->f174);
        dst->f174->f170=dst;
        v34((int)src->f174,dst->f174);
    } else dst->f174=0;
}

extern "C" void *memset(void *, int, unsigned int);
void C_00198B70::func_00198DE0(void)
{
    C_00198B70 *c;

    f180b.b0 = 0;
    AsmIdentityMatrix(&fB0);
    c = f178;
    if (c != 0) {
        c->v32();
    }
    c = f174;
    if (c != 0) {
        c->v32();
    }
}

void C_00198B70::func_00198E60(void)
{
    S_00198B70_Cam *p;

    if (f18c != 0) {
        f18c->func_00193870(&f24);
        p = f18c;
        if (p != 0) {
            p->func_00193500();
            func_001E891B(p);
        }
        f18c = 0;
    }
}

void C_00198B70::func_00198EA0(void)
{
    if ((f21 & 1) == 0) {
        f27b.b2 = f180b.b1;
    }
    func_001576D0();
}

void func_00198EF0(void *a, C_00198B70 *obj, void *c)
{
    __declspec(align(16)) float inv[16];

    if (obj->f170 != 0) {
        obj->f170->func_00197AA0();
        func_0011AC30(inv, obj->f170->fF0.m);
        func_0011ACC0(a, c, inv);
    } else {
        ((S_00198B70_MatCopy *)a)->func_000264C0(c);
    }
}

void C_00198B70::func_00198F50(float *a, float *b, int c, int d, int e)
{
    float tmp[4];
    if (c == 0 && e != 0) {
        tmp[2] = 0.0f;
        tmp[1] = 0.0f;
        tmp[0] = 0.0f;
        tmp[3] = 1.0f;
        AsmVec3Cross(tmp, b, a);
        this->fB0.m[0] = tmp[0];
        this->fB0.m[4] = tmp[1];
        this->fB0.m[8] = tmp[2];
        this->fB0.m[12] = 0.0f;
        this->fB0.m[1] = b[0];
        this->fB0.m[5] = b[1];
        this->fB0.m[9] = b[2];
        this->fB0.m[13] = 0.0f;
        this->fB0.m[2] = a[0];
        this->fB0.m[6] = a[1];
        this->fB0.m[10] = a[2];
        this->fB0.m[14] = 0.0f;
        this->fB0.m[15] = 1.0f;
    } else {
        tmp[0] = fB0.m[3];
        tmp[1] = fB0.m[7];
        tmp[2] = fB0.m[11];
        tmp[3] = 1.0f;
        func_000265C0(fB0.m, tmp, a, b, c, d);
    }
    this->func_001982F0();
    if (this->f180 & 1) {
        this->f180 &= 0xfe;
        if (this->f174 != 0) {
            this->f174->func_00197B10();
        }
    }
}

void C_00198B70::func_00199110(C_00198B70 * volatile other, float *a, float *b, int c, int d, int e)
{
 C_00198B70 * volatile self=this;
 S_00198B70_V4 * volatile p;
 volatile S_00198B70_V4 t;
 volatile S_00198B70_V4 cross;
 __declspec(align(16)) float m[16];
 C_00198B70 *s;
 C_00198B70 *o;
 t.x=((int*)fB0.m)[3]; t.y=((int*)fB0.m)[7]; t.z=((int*)fB0.m)[11]; t.w=0x3f800000;
 if(!c && e) {
 cross.z=0; cross.y=0; cross.x=0; cross.w=0x3f800000;
 p=(S_00198B70_V4*)&cross;
 __m128 R = _mm_mul_ps(_mm_shuffle_ps(_mm_loadu_ps(b), _mm_loadu_ps(b), 0xc9), _mm_loadu_ps(a));
 __m128 L = _mm_mul_ps(_mm_loadu_ps(b), _mm_shuffle_ps(_mm_loadu_ps(a), _mm_loadu_ps(a), 0xc9));
 __m128 D = _mm_sub_ps(L, R);
 _mm_storeu_ps((float*)p, _mm_shuffle_ps(D, D, 0xc9));
 ((int*)m)[0]=cross.x; ((int*)m)[4]=cross.y; ((int*)m)[8]=cross.z; m[12]=0;
 ((int*)m)[1]=((int*)b)[0]; ((int*)m)[5]=((int*)b)[1]; ((int*)m)[9]=((int*)b)[2]; m[13]=0;
 ((int*)m)[2]=((int*)a)[0]; ((int*)m)[6]=((int*)a)[1]; ((int*)m)[10]=((int*)a)[2]; m[14]=0;
 ((int*)m)[3]=t.x; ((int*)m)[7]=t.y; ((int*)m)[11]=t.z; m[15]=1;
 } else func_000265C0(m,(float*)&t,a,b,c,d);
 s = self;
 o = other;
 if(o==s) func_0011ACC0(&s->fB0,m,s->fB0.m);
 else {
 if(o) { o->func_00197AA0(); func_0011ACC0(m,m,other->fF0.m); }
 s = self;
 func_00198EF0(&s->fB0,s,m);
 self->fB0.m[3]=((volatile float*)&t)[0]; self->fB0.m[7]=((volatile float*)&t)[1]; self->fB0.m[11]=((volatile float*)&t)[2];
 }
 self->func_001982F0();
 s = self;
 unsigned char fl = s->f180;
 if(fl&1) {
 s->f180 = fl&0xfe;
 s = self;
 o = s->f174;
 if(o) o->func_00197B10();
 }
}

void C_00198B70::func_00199300(float *q)
{
    float d=q[3], c=q[2], b=q[1], a=q[0];
    float n=a*a+b*b+c*c+d*d;
    if(n>D_00275544) {
        float s=D_00275600/n;
        float b2=s*q[1], c2=s*q[2], d2=s*q[3];
        float ab=b2*q[0], ac=c2*q[0], ad=d2*q[0];
        float bc=c2*q[1], bd=d2*q[1], cd=d2*q[2];
        float bb=b2*q[1], cc=c2*q[2], dd=d2*q[3];
        fB0.m[0]=D_00275460-(dd+cc);
        fB0.m[4]=bc+ad;
        fB0.m[8]=bd-ac;
        fB0.m[1]=bc-ad;
        fB0.m[5]=D_00275460-(dd+bb);
        fB0.m[9]=cd+ab;
        fB0.m[2]=bd+ac;
        fB0.m[6]=cd-ab;
        fB0.m[10]=D_00275460-(cc+bb);
    fB0.m[14]=0; fB0.m[13]=0; fB0.m[12]=0;
    func_001982F0();
    if(f180&1) { f180&=0xfe; if(f174) f174->func_00197B10(); }
    } else {
        fB0.m[0]=1.0f; fB0.m[4]=0; fB0.m[8]=0;
        fB0.m[1]=0; fB0.m[5]=1.0f; fB0.m[9]=0;
        fB0.m[2]=0; fB0.m[6]=0; fB0.m[10]=1.0f;
    fB0.m[14]=0; fB0.m[13]=0; fB0.m[12]=0;
    func_001982F0();
    if(f180&1) { f180&=0xfe; if(f174) f174->func_00197B10(); }
    }
}

void C_00198B70::func_001994C0(C_00198B70 *other, S_00198B70_F4 *out0, S_00198B70_F4 *out1)
{
    if (other == this) {
        if (out0 != 0) {
            out0->x = 0;
            out0->y = 0;
            out0->z = 1.0f;
        }
        if (out1 != 0) {
            out1->x = 0;
            out1->y = 1.0f;
            out1->z = 0;
        }
        return;
    }
    func_00197AA0();
    if (out0 != 0) {
        out0->x = fF0.m[2];
        out0->y = fF0.m[6];
        out0->z = fF0.m[10];
    }
    if (out1 != 0) {
        out1->x = fF0.m[1];
        out1->y = fF0.m[5];
        out1->z = fF0.m[9];
    }
    if (other != 0) {
        if (out0 != 0) {
            *out0 = other->func_00198040(out0);
        }
        if (out1 != 0) {
            *out1 = other->func_00198040(out1);
        }
    }
}

void C_00198B70::func_001995B0(float a, float b, float c)
{
    fB0.m[3] = a;
    fB0.m[7] = b;
    fB0.m[11] = c;
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00198B70::func_00199600(float a, float b, float c, float d)
{
    fB0.m[3] = a;
    fB0.m[7] = b;
    fB0.m[11] = c;
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00198B70::func_00199650(float *v)
{
    fB0.m[3] = v[0];
    fB0.m[7] = v[1];
    fB0.m[11] = v[2];
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00198B70::func_001996A0(C_00198B70 *other, S_00198B70_F4 v)
{
    if (other == this) {
        fB0.m[3] = v.x + fB0.m[3];
        fB0.m[7] = v.y + fB0.m[7];
        fB0.m[11] = v.z + fB0.m[11];
        func_001982F0();
        if (f180 & 1) {
            f180 &= 0xfe;
            if (f174 != 0) {
                f174->func_00197B10();
            }
        }
        return;
    }
    if (other != 0) {
        v = other->func_00197F70(&v);
        v = f170->func_00198120(&v);
    }
    func_00199650(&v.x);
}

void C_00198B70::func_00199790(C_00198B70 *other, S_00198B70_F4 *v)
{
    if (other == this) {
        fB0.m[3] = fB0.m[3] + v->x;
        fB0.m[7] = v->y + fB0.m[7];
        fB0.m[11] = v->z + fB0.m[11];
        func_001982F0();
        if (f180 & 1) {
            f180 &= 0xfe;
            if (f174 != 0) {
                f174->func_00197B10();
            }
        }
        return;
    }
    if (other != 0) {
        S_00198B70_F4 tmp;
        tmp.z = 0;
        tmp.y = 0;
        tmp.x = 0;
        tmp.w = 1.0f;
        tmp = other->func_00197F70(v);
        tmp = f170->func_00198120(&tmp);
        func_00199650(&tmp.x);
    } else {
        S_00198B70_F4 tmp;
        if (f170 != 0) {
            tmp = f170->func_00198120(v);
        } else {
            tmp = *v;
        }
        func_00199650(&tmp.x);
    }
}

void C_00198B70::func_00199900(float *v)
{
    fB0.m[3] = v[0] + fB0.m[3];
    fB0.m[7] = v[1] + fB0.m[7];
    fB0.m[11] = v[2] + fB0.m[11];
    func_001982F0();
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void C_00198B70::func_00199960(C_00198B70 *other, S_00198B70_F4 *v)
{
    if (other == this) {
        func_00199900(&v->x);
        return;
    }
    if (other != 0) {
        S_00198B70_F4 tmp;
        tmp.z = 0;
        tmp.y = 0;
        tmp.x = 0;
        tmp.w = 1.0f;
        tmp = other->func_00197EC0(v);
        tmp = f170->func_00198040(&tmp);
        func_00199900(&tmp.x);
    } else {
        S_00198B70_F4 tmp;
        if (f170 != 0) {
            tmp = f170->func_00198120(v);
        } else {
            tmp = *v;
        }
        func_00199900(&tmp.x);
    }
}

void C_00198B70::func_00199A70(C_00198B70 *other, S_00198B70_F4 *out)
{
    if (other == this) {
        out->x = fB0.m[3];
        out->y = fB0.m[7];
        out->z = fB0.m[11];
        return;
    }
    func_00197AA0();
    out->x = fF0.m[3];
    out->y = fF0.m[7];
    out->z = fF0.m[11];
    if (other != 0) {
        *out = other->func_00198120(out);
    }
}

