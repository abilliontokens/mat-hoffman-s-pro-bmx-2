/* 11 functions from 0x0017BA00 to 0x0017C590, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "ghidra.h"
#include <xmmintrin.h>

extern f32 D_00275544;
extern f32 D_00275460;
extern f32 D_00289094;
extern f32 D_002EFD7C;

static __forceinline f32 Max_0017C360(f32 a, f32 b)
{
    f32 r;

    _mm_store_ss(&r, _mm_max_ss(_mm_load_ss(&a), _mm_load_ss(&b)));
    return r;
}
extern int D_0028909C;
extern void *D_002EFD80;

void func_001E8390(void *p);

struct C_001927A0 {
    void func_001927A0(void);
};

/* object with a virtual deleting destructor in slot 0 */
struct QuadTreeNode {
    virtual void Destroy(int flag);
};

/* objects released through virtual slot 2 */
struct QuadTreeRes {
    virtual void v0();
    virtual void v1();
    virtual void Release();
};

/* virtual slots of the QuadTree object; slot 17 returns the root node */
struct QuadTreeVt {
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
    virtual QuadTreeNode *v17();
};

/* pool allocator: constructed in place by func_0001E740(elemSize, count) */
struct Pool_0017C360 {
    Pool_0017C360 *func_0001E740(int size, int count);
};

void *func_001E8A44(int size);

/* QuadTree */
struct C_0017C300 {
    void *vtbl;
    char pad4[8];
    u16 fC;
    u8 fE;
    char padF;
    char pad10[0x18];
    f32 f28;
    f32 f2C;
    f32 f30;
    f32 f34;
    char pad38[8];
    f32 f40;
    f32 f44;
    char pad48[4];
    s32 f4C;
    s32 f50;
    f32 f54;
    s32 f58[12];
    char pad88[4];
    QuadTreeNode *f8C;
    QuadTreeRes *f90;
    QuadTreeRes *f94;
    u32 flags98;
    u32 f9C;
    u32 fA0;
    u32 fA4;
    u32 padA8;
    u32 fAC;
    char padB0[0x7D0];
    u32 unk880;
    s32 unk884;
    u32 unk888;
    u32 unk88C;
    u32 unk890;
    void *unk894;
    u32 unk898;
    u32 unk89C;
    char pad8A0[0x10];
    u32 unk8B0;
    void func_0017C300(void);
    void func_0017C360(f32 a, f32 b, f32 c, f32 d, f32 e);
    void func_0017C520(void);
};

struct QuadV2 {
    f32 x, y;
};

static inline f32 QuadCross(f32 a, f32 b, f32 c, f32 d) {
    return c * a + d * b;
}

static inline void QuadSetPt(f32 *dst, f32 x, f32 y) {
    dst[0] = x;
    dst[1] = y;
}

/* 4 points of a 2D quad, stored x,y */
struct C_0017BDE0 {
    f32 v[8];
    int func_0017BDE0(f32 x, f32 y);
    void func_0017BE40(void);
    int func_0017BFB0(void);
    void func_0017BB90(f32 *pts, int n);
};

struct C_0017BB50 {
    void func_0017BB50(undefined4 *param_1);
};

struct C_0017BB10 {
    void func_0017BB10(undefined4 *param_1);
};


int func_0017BA00(QuadV2 *a, QuadV2 *b, QuadV2 *c, QuadV2 *d, QuadV2 *out)
{
    f32 ex;
    f32 ey;
    f32 dx12;
    f32 dx43;
    f32 dy12;
    f32 dy43;
    f32 den;
    f32 t;
    f32 u;

    ex = d->x - b->x;
    ey = d->y - b->y;
    dx12 = a->x - b->x;
    dx43 = d->x - c->x;
    dy12 = a->y - b->y;
    dy43 = d->y - c->y;
    den = dx12 * dy43 - dy12 * dx43;
    if (den == D_00275544) {
        return 0;
    }
    den = D_00275460 / den;
    t = (dy43 * ex - dx43 * ey) * den;
    if (t < D_00275544) {
        return 0;
    }
    if (t > D_00275460) {
        return 0;
    }
    u = (dx12 * ey - dy12 * ex) * den;
    if (u < D_00275544) {
        return 0;
    }
    if (u > D_00275460) {
        return 0;
    }
    out->x = t * dx12 + b->x;
    out->y = t * dy12 + b->y;
    return 1;
}

void C_0017BB10::func_0017BB10(undefined4 *param_1)
{
  undefined4* in_ECX = (undefined4*)this;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  return;
}

void C_0017BB50::func_0017BB50(undefined4 *param_1)
{
  undefined4* in_ECX = (undefined4*)this;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[4];
  in_ECX[3] = param_1[5];
  in_ECX[4] = param_1[8];
  in_ECX[5] = param_1[9];
  in_ECX[6] = param_1[0xc];
  in_ECX[7] = param_1[0xd];
  return;
}

void C_0017BDE0::func_0017BB90(f32 *pts, int n)
{
    f32 minx;
    f32 maxx;
    f32 miny;
    f32 maxy;
    int i;
    QuadV2 p;

    if (n < 1) {
        return;
    }
    minx = maxx = pts[0];
    maxy = miny = pts[1];
    i = 1;
    if (n - 1 >= 4) {
        do {
            if (pts[i * 2] < minx) {
                minx = pts[i * 2];
            }
            if (pts[i * 2] > maxx) {
                maxx = pts[i * 2];
            }
            if (pts[i * 2 + 1] < miny) {
                miny = pts[i * 2 + 1];
            }
            if (maxy < pts[i * 2 + 1]) {
                maxy = pts[i * 2 + 1];
            }
            if (pts[i * 2 + 2] < minx) {
                minx = pts[i * 2 + 2];
            }
            if (pts[i * 2 + 2] > maxx) {
                maxx = pts[i * 2 + 2];
            }
            if (pts[i * 2 + 3] < miny) {
                miny = pts[i * 2 + 3];
            }
            if (maxy < pts[i * 2 + 3]) {
                maxy = pts[i * 2 + 3];
            }
            if (pts[i * 2 + 4] < minx) {
                minx = pts[i * 2 + 4];
            }
            if (pts[i * 2 + 4] > maxx) {
                maxx = pts[i * 2 + 4];
            }
            if (pts[i * 2 + 5] < miny) {
                miny = pts[i * 2 + 5];
            }
            if (maxy < pts[i * 2 + 5]) {
                maxy = pts[i * 2 + 5];
            }
            if (pts[i * 2 + 6] < minx) {
                minx = pts[i * 2 + 6];
            }
            if (pts[i * 2 + 6] > maxx) {
                maxx = pts[i * 2 + 6];
            }
            if (pts[i * 2 + 7] < miny) {
                miny = pts[i * 2 + 7];
            }
            if (maxy < pts[i * 2 + 7]) {
                maxy = pts[i * 2 + 7];
            }
            i += 4;
        } while (i + 3 < n);
    }
    for (; i < n; i++) {
        if (pts[i * 2] < minx) {
            minx = pts[i * 2];
        }
        if (pts[i * 2] > maxx) {
            maxx = pts[i * 2];
        }
        if (pts[i * 2 + 1] < miny) {
            miny = pts[i * 2 + 1];
        }
        if (maxy < pts[i * 2 + 1]) {
            maxy = pts[i * 2 + 1];
        }
    }
    p.x = minx;
    p.y = maxy;
    *(QuadV2 *)&v[0] = p;
    p.x = maxx;
    p.y = maxy;
    *(QuadV2 *)&v[2] = p;
    p.x = maxx;
    p.y = miny;
    *(QuadV2 *)&v[4] = p;
    p.x = minx;
    p.y = miny;
    *(QuadV2 *)&v[6] = p;
}

int C_0017BDE0::func_0017BDE0(f32 x, f32 y) {
 int i=0;
 do { int j=(i+1)&3;
 float a[2]; a[0]=v[i*2+1]-v[j*2+1]; a[1]=v[j*2]-v[i*2];
 float b[2]; b[0]=x-v[i*2]; b[1]=y-v[i*2+1];
 if (a[0]*b[0]+a[1]*b[1]>D_00275544) return 0;
 ++i; } while(i<4);
 return 1;
}

void C_0017BDE0::func_0017BE40(void) {
    struct { int x0, y0, x1, y1, x2, y2, x3, y3; } t;
    int *w = (int *)v;
    t.x1 = w[2];
    t.y1 = w[3];
    t.x2 = w[4];
    t.y2 = w[5];
    t.x3 = w[6];
    t.y3 = w[7];
    f32 d01 = v[1] - v[3];
    f32 d20 = v[5] - v[1];

    if ((v[3] - v[5]) * v[0] + d01 * v[4] + d20 * v[2] < D_00275544) {
        if ((v[1] - v[5]) * v[6] + (v[7] - v[1]) * v[4] + (v[5] - v[7]) * v[0] < D_00275544) {
            return;
        }
        f32 s3 = (v[3] - v[7]) * v[4];
        s3 += (v[5] - v[3]) * v[6];
        s3 += (v[7] - v[5]) * v[2];
        if (s3 < D_00275544) {
            w[6] = t.x2;
            w[7] = t.y2;
            w[4] = t.x3;
            w[5] = t.y3;
        } else {
            w[6] = t.x2;
            w[7] = t.y2;
            w[2] = t.x3;
            w[3] = t.y3;
            w[4] = t.x1;
            w[5] = t.y1;
        }
    } else {
        if ((v[1] - v[7]) * v[4] + (v[7] - v[5]) * v[0] + d20 * v[6] < D_00275544) {
            w[2] = t.x3;
            w[3] = t.y3;
            w[6] = t.x1;
            w[7] = t.y1;
        } else {
            f32 s = (v[3] - v[7]) * v[0];
            s += (v[7] - v[1]) * v[2];
            s += d01 * v[6];
            if (s < D_00275544) {
                w[2] = t.x2;
                w[3] = t.y2;
                w[4] = t.x1;
                w[5] = t.y1;
            } else {
                w[2] = t.x2;
                w[3] = t.y2;
                w[4] = t.x3;
                w[5] = t.y3;
                w[6] = t.x1;
                w[7] = t.y1;
            }
        }
    }
}

int C_0017BDE0::func_0017BFB0(void) {
 f32 e[8][2]; int k; int off;
 e[0][0]=v[2]-v[0]; e[0][1]=v[3]-v[1];
 e[1][0]=v[4]-v[2]; e[1][1]=v[5]-v[3];
 e[2][0]=v[6]-v[4]; e[2][1]=v[7]-v[5];
 e[3][0]=v[0]-v[6]; e[3][1]=v[1]-v[7]; k=0; off=0;
 do {
 *(u32*)((char*)(e+4)+off+4)=*(u32*)((char*)e+off);
 *(f32*)((char*)(e+4)+off)=-*(f32*)((char*)e+off+4);
 ++k;
 f32 *q=e[k&3];
 f32 a = q[1] * *(f32*)((char*)(e+4)+off+4);
 f32 b = q[0] * *(f32*)((char*)(e+4)+off);
 if(D_00275544 < a + b) return 0;
 off+=8;
 }while(off<32);
 return 1;
}

int func_0017C060(C_0017BDE0 *a, C_0017BDE0 *b, C_0017BDE0 *out)
{
 QuadV2 pts[24]; QuadV2 hit; QuadV2 *pa; QuadV2 *pb;
 int n=0; int inA=0; int inB=0; int i; int j;
 pb=(QuadV2*)b->v;
 for(i=0;i<4;i++) { if(a->func_0017BDE0(pb[i].x,pb[i].y)) {pts[n]=pb[i];n++;inA++;} }
 if(inA==4) {for(i=0;i<8;i++)out->v[i]=b->v[i];return 1;}
 pa=(QuadV2*)a->v;
 for(i=0;i<4;i++) {if(b->func_0017BDE0(pa[i].x,pa[i].y)){pts[n]=pa[i];n++;inB++;}}
 if(inB==4){for(i=0;i<8;i++)out->v[i]=a->v[i];return 1;}
 for(i=0;i<4;i++){for(j=0;j<4;j++){if(func_0017BA00(&pa[i],&pa[(i+1)&3],&pb[j],&pb[(j+1)&3],&hit)){pts[n]=hit;n++;}}}
 if(n==0)return n;
 if(n==4){
 ((QuadV2*)out->v)[0]=pts[0];((QuadV2*)out->v)[1]=pts[1];((QuadV2*)out->v)[2]=pts[2];((QuadV2*)out->v)[3]=pts[3];
 out->func_0017BE40();
 if(!out->func_0017BFB0())out->func_0017BB90(&pts[0].x,4);
 return 1;
 }
 out->func_0017BB90(&pts[0].x,n);return 1;
}

void C_0017C300::func_0017C300(void) {
    D_002EFD80 = this;
    unk880 = 0;
    unk884 = -1;
    flags98 &= ~1;
    unk888 = 0;
    unk88C = 0;
    unk890 = 0;
    unk898 = 0;
    unk894 = 0;
    unk89C = 0;
    unk8B0 = 0;
}

void C_0017C300::func_0017C360(f32 a, f32 b, f32 c, f32 d, f32 e)
{
    C_0017C300 * volatile self = this;
    C_0017C300 *p;
    Pool_0017C360 *pool;
    int limit;
    int idx;
    int step;
    f32 x;
    f32 y;
    f32 m;

    self->f8C = ((QuadTreeVt *)this)->v17();
    self->f28 = (f32)(double)a;
    self->f2C = (f32)(double)c;
    self->f30 = (f32)(double)b;
    self->f34 = (f32)(double)d;
    self->f40 = c - a;
    self->f44 = d - b;
    *(f32 *)&self->unk8B0 = (f32)(double)e;
    x = self->f40;
    y = self->f44;
    m = x > y ? x : y;
    self->f54 = D_00289094 / m;
    p = self;
    D_002EFD7C = D_00275460 / p->f54;
    limit = (int)(e * p->f54);
    p->f4C = 0;
    idx = self->f4C;
    step = 0x8000;
    do {
        step >>= 1;
        self->f58[idx] = step;
        self->f4C++;
        idx = self->f4C;
        if (idx >= 12) {
            break;
        }
    } while (step > limit);
    self->f4C--;
    self->f50 = self->f58[self->f4C];
    self->fE &= 0xfe;
    self->fC = 0;
    self->fA0 = 0;
    self->f9C = 0;
    self->fA4 = 0;
    self->fAC = 0;
    pool = (Pool_0017C360 *)func_001E8A44(0x30);
    self->f94 = (QuadTreeRes *)(pool != 0 ? pool->func_0001E740(8, 0x1000) : 0);
    pool = (Pool_0017C360 *)func_001E8A44(0x30);
    self->f90 = (QuadTreeRes *)(pool != 0 ? pool->func_0001E740(0x14, 0x1000) : 0);
}

void C_0017C300::func_0017C520(void) {
    vtbl = (void *)&D_0028909C;
    D_002EFD80 = this;
    flags98 |= 1;
    if (unk894 != 0) {
        func_001E8390(unk894);
    }
    if (f8C != 0) {
        f8C->Destroy(1);
    }
    if (f90 != 0) {
        f90->Release();
    }
    if (f94 != 0) {
        f94->Release();
    }
    ((C_001927A0 *)this)->func_001927A0();
}

