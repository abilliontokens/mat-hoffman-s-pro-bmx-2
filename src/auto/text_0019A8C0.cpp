/* 13 functions from 0x0019A8C0 to 0x0019B890, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"
struct S_0019A8C0_V4 {
    float x;
    float y;
    float z;
    float w;
    S_0019A8C0_V4()
    {
        z = 0.0f;
        y = 0.0f;
        x = 0.0f;
        w = 1.0f;
    }
    S_0019A8C0_V4(float a, float b, float c, float d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

void func_0001C680(S_0019A8C0_V4 *out, S_0019A8C0_V4 v, float *m);
void func_00030AC0(float *out, float *v, float *m);
void func_0013E4A0(void *dst, void *src);

static __forceinline float Abs_0019A8C0(float f)
{
    float r = f;

    *(unsigned *)&r &= 0x7fffffff;
    return r;
}

struct C_0019B6D0 {
    undefined4 func_0019B6D0(byte param_1);
};

extern int D_0028B0E4;
extern char D_00010410;
void *func_001E8A44(int size);
void func_001E891B(void *ptr);

struct S_0019A8C0_Mgr {
    void func_0019A210(void *self);
};

struct C_0019B6F0 {
    u16 f0;
    u16 f2;
    u16 f4;
    C_0019B6F0 *func_0019B6F0(void);
};

extern int D_0028B1C4;
void func_0011ACC0(void *out, void *a, void *b);
void func_00198EF0(void *a, void *b, void *c);

struct SoultreeObject;

struct C_0019B760_Mgr {
    void func_0013B210(void *p);
    void func_0013C8A0(int h, void *buf, int size, int count);
};
extern C_0019B760_Mgr *D_002BEAAC;
void func_001E8390(void *p);

struct C_0019B760_Res {
    char pad0[0x70];
    int f70;
};

struct C_0019B760 {
    void *vtbl;
    char pad4[0x50];
    void *f54;
    char pad58[0x1b0 - 0x58];
    void *f1b0;
    void *f1b4;
    char pad1b8[0x1c4 - 0x1b8];
    void *f1c4;
    void *f1c8;
    char pad1cc[0x1d4 - 0x1cc];
    C_0019B760_Res *f1d4;
    void func_0019B760(void);
};

struct S_0019A8C0_Child {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0x174];
    S_0019A8C0_Child *f178;
    void func_00197B10(void);
    void func_00198230(SoultreeObject *p);
};

struct S_0019A8C0_Mat {
    void func_000264C0(void *m);
};

struct C_001982F0_19A8C0 {
    void func_001982F0(void);
};

struct C_00132EB0_19A8C0 {
    void func_00132EB0(int a);
};

struct C_0019B700 {
    void *vtbl;
    char pad4[0x4c];
    int f50;
    char pad54[0x1b0 - 0x54];
    int f1b0;
    int f1b4;
    char pad1b8[4];
    u16 f1bc;
    char pad1be[2];
    int f1c0;
    int f1c4;
    int f1c8;
    u16 f1cc;
    u16 f1ce;
    int f1d0;
    int f1d4;
    C_0019B700 *func_0019B700(int a);
};

struct S_0019A8C0_Cam {
    S_0019A8C0_Cam *func_00193490(void);
    void func_00193500(void);
    void func_001938C0(void *a, int b, int c, void *vecA, void *vecB, int d);
    void func_00193950(void *a, void *vecA, void *vecB, int d);
};

struct C_00157660_19A8C0 {
    void func_00157660(void);
};

struct S_0019B400_Reader {
    int func_00168F40(void *name);
    void func_00169A50(int a);
    void func_00169090(int idx, void *buf);
    void func_00169010(int idx, void *val);
};

extern char D_0028B170[];
extern char D_00284A98[];
int func_001EA426(const char *a, const char *b);

struct SoultreeObject {
    void *vtbl;
    char pad4[0x20];
    union { int f24; struct { char f24_bytes[3]; unsigned char f27_low:2, f27_bit2:1, f27_high:5; }; };
    char f28[0x80];
    char padA8[0xb0 - 0xa8];
    float fB0[16];
    char padF0[0x130 - 0xf0];
    char f130[0xc];
    char pad13C[0x140 - 0x13c];
    char f140[0xc];
    char pad14C[0x170 - 0x14c];
    S_0019A8C0_Mgr *f170;
    S_0019A8C0_Child *f174;
    char pad178[4];
    S_0019A8C0_Child *f17c;
    union { u8 f180; struct { unsigned char f180_low:5, f180_bit5:1, f180_bit6:1, f180_high:1; }; };
    char pad181[3];
    int f184;
    int f188;
    S_0019A8C0_Cam *f18c;
    int f190;
    S_0019B400_Reader *f194;
    void func_0019AE40(int file);
    int func_0019B1A0(int file, SoultreeObject **arr);
    void func_0019B400(void);
    void func_00197AA0(void);
    void func_0019A8C0(void *vecA, void *vecB);
    void func_0019AD60(SoultreeObject *p, void *m);
    void func_0019ADF0(SoultreeObject *p);
    void func_0019ABA0(int a1, int a2);
    void func_0019AC50(void);
    void func_0019ACE0(void);
};


/* SoultreeObject seen through virtual slot 29 (clone into slot) */
struct S_0019B1A0_VThis {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28();
    virtual void v29(SoultreeObject **out);
};

static __forceinline void Transpose_0019B1A0(float *src, float *dst)
{
    __m128 t0, t1, t2, t3;

    t0 = _mm_loadl_pi(t0, (__m64 *)&src[0]);
    t0 = _mm_loadh_pi(t0, (__m64 *)&src[4]);
    t1 = _mm_loadl_pi(t1, (__m64 *)&src[2]);
    t1 = _mm_loadh_pi(t1, (__m64 *)&src[6]);
    t2 = _mm_loadl_pi(t2, (__m64 *)&src[8]);
    t2 = _mm_loadh_pi(t2, (__m64 *)&src[12]);
    t3 = _mm_loadl_pi(t3, (__m64 *)&src[10]);
    t3 = _mm_loadh_pi(t3, (__m64 *)&src[14]);
    _mm_store_ps(dst, _mm_shuffle_ps(t0, t2, 0x88));
    _mm_store_ps(dst + 4, _mm_shuffle_ps(t0, t2, 0xdd));
    _mm_store_ps(dst + 8, _mm_shuffle_ps(t1, t3, 0x88));
    _mm_store_ps(dst + 12, _mm_shuffle_ps(t1, t3, 0xdd));
}

void SoultreeObject::func_0019A8C0(void *vecA, void *vecB)
{
    SoultreeObject * volatile self = this;
    if (self->f180 & 0x80) {
        if (!(self->f180 & 8) && (self->f180 & 0x40)) {
            func_00197AA0();
        } else {
            ((void (__fastcall *)(void *))(*(void ***)self)[0x7c / 4])(self);
        }
    }
    S_0019A8C0_V4 axes[3];
    axes[0] = S_0019A8C0_V4(*(float *)((char *)self + 0x160), 0.0f, 0.0f, 1.0f);
    axes[1] = S_0019A8C0_V4(0.0f, *(float *)((char *)self + 0x164), 0.0f, 1.0f);
    axes[2] = S_0019A8C0_V4(0.0f, 0.0f, *(float *)((char *)self + 0x168), 1.0f);
    S_0019A8C0_V4 a0 = axes[0];
    func_00197AA0();
    func_00030AC0((float *)vecA, (float *)((char *)self + 0x150), (float *)((char *)self + 0xf0));
    func_0001C680(&axes[0], a0, (float *)((char *)self + 0xf0));
    func_0001C680(&axes[1], axes[1], (float *)((char *)self + 0xf0));
    func_0001C680(&axes[2], axes[2], (float *)((char *)self + 0xf0));
    ((float *)vecB)[0] = Abs_0019A8C0(axes[2].x) + Abs_0019A8C0(axes[1].x) + Abs_0019A8C0(axes[0].x);
    ((float *)vecB)[1] = Abs_0019A8C0(axes[2].y) + Abs_0019A8C0(axes[1].y) + Abs_0019A8C0(axes[0].y);
    ((float *)vecB)[2] = Abs_0019A8C0(axes[2].z) + Abs_0019A8C0(axes[1].z) + Abs_0019A8C0(axes[0].z);
}

void SoultreeObject::func_0019ABA0(int a1, int a2)
{
    float vecB[4];
    float vecA[4];
    S_0019A8C0_Cam *p = (S_0019A8C0_Cam *)func_001E8A44(0x28);

    f18c = p ? p->func_00193490() : 0;
    vecA[2] = 0.0f;
    vecA[1] = 0.0f;
    vecA[0] = 0.0f;
    vecA[3] = 1.0f;
    vecB[2] = 0.0f;
    vecB[1] = 0.0f;
    vecB[0] = 0.0f;
    vecB[3] = 1.0f;
    func_0019A8C0(vecA, vecB);
    f18c->func_001938C0(&f24, a1, a2, vecA, vecB, 0);
}

void SoultreeObject::func_0019AC50(void)
{
    float vecB[4];
    float vecA[4];

    if (f18c != 0) {
        vecA[2] = 0.0f;
        vecA[1] = 0.0f;
        vecA[0] = 0.0f;
        vecA[3] = 1.0f;
        vecB[2] = 0.0f;
        vecB[1] = 0.0f;
        vecB[0] = 0.0f;
        vecB[3] = 1.0f;
        func_0019A8C0(vecA, vecB);
        f18c->func_00193950(&f24, vecA, vecB, f188);
    }
}

void SoultreeObject::func_0019ACE0(void)
{
    S_0019A8C0_Cam *p;

    vtbl = (void *)&D_0028B0E4;
    if (f170 != 0) {
        f170->func_0019A210(this);
    }
    if (f174 != 0) {
        while (f174->f178 != 0) {
            f174->f178->v2();
        }
        f174->v2();
    }
    p = f18c;
    if (p != 0) {
        p->func_00193500();
        func_001E891B(p);
    }
    ((C_00157660_19A8C0 *)this)->func_00157660();
}

void SoultreeObject::func_0019AD60(SoultreeObject *p, void *m)
{
    if (p == this) {
        ((S_0019A8C0_Mat *)((char *)this + 0xb0))->func_000264C0(m);
        ((C_001982F0_19A8C0 *)this)->func_001982F0();
    } else {
        if (p != 0) {
            p->func_00197AA0();
            func_0011ACC0(m, m, (char *)p + 0xf0);
        }
        func_00198EF0((char *)this + 0xb0, this, m);
        ((C_001982F0_19A8C0 *)this)->func_001982F0();
    }
    if (f180 & 1) {
        f180 &= 0xfe;
        if (f174 != 0) {
            f174->func_00197B10();
        }
    }
}

void SoultreeObject::func_0019ADF0(SoultreeObject *p)
{
    if (p->f170 != 0) {
        f170->func_0019A210(p);
    }
    p->f170 = (S_0019A8C0_Mgr *)this;
    if (f174 == 0) {
        f174 = (S_0019A8C0_Child *)p;
    } else {
        f174->func_00198230(p);
    }
}

float sqrtf(float);
void SoultreeObject::func_0019AE40(int volatile file) {
 SoultreeObject *arr[256];
 int flag;
 D_002BEAAC->func_0013C8A0(file,&f190,4,1);
 arr[0]=this;
 int i;
 for(i=0;i<this->f190;i++) {
 if(i) ((S_0019B1A0_VThis*)this)->v29(&arr[i]);
 D_002BEAAC->func_0013C8A0(file,arr[i]->f28,0x80,1);
 D_002BEAAC->func_0013C8A0(file,arr[i]->fB0,0x40,1);
 AsmTransposeMatrix(arr[i]->fB0, arr[i]->fB0);
 D_002BEAAC->func_0013C8A0(file,&flag,4,1);
 arr[i]->f27_bit2=flag;
 D_002BEAAC->func_0013C8A0(file,&flag,4,1);
 arr[i]->f180_bit5=flag;
 D_002BEAAC->func_0013C8A0(file,arr[i]->f130,12,1);
 D_002BEAAC->func_0013C8A0(file,arr[i]->f140,12,1);
 D_002BEAAC->func_0013C8A0(file,&flag,4,1);
 arr[i]->f180_bit6=flag;
 D_002BEAAC->func_0013C8A0(file,(char*)arr[i]+0x150,12,1);
 D_002BEAAC->func_0013C8A0(file,(char*)arr[i]+0x160,12,1);
 arr[i]->f180 &= 0xbf;
 float *v=(float*)arr[i]->f140;
 float z=v[2],y=v[1],x=v[0];
 float len=x*x+y*y+z*z;
 float root=AsmSqrtF(len);
 *(float*)&arr[i]->f184=root;
 }
 int *parents=(int*)func_001E8A44(f190*4);
 D_002BEAAC->func_0013C8A0(file,parents,4,f190);
 for(i=0;i<this->f190;i++) {
 if(parents[i]!=-1) {
 SoultreeObject *child=arr[i], *parent=arr[parents[i]];
 if(child->f170) parent->f170->func_0019A210(child);
 child->f170=(S_0019A8C0_Mgr*)parent;
 S_0019A8C0_Child *sib=parent->f174;
 if(!sib) parent->f174=(S_0019A8C0_Child*)child;
 else if(!sib->f178) { sib->f178=(S_0019A8C0_Child*)child; child->f17c=sib; }
 else sib->f178->func_00198230(child);
 }
 }
 if(parents) func_001E891B(parents);
}

void func_0013E4A0(void *dst, void *src);
int SoultreeObject::func_0019B1A0(int file, SoultreeObject **arr)
{
    int *parents;
    int i;
    D_002BEAAC->func_0013C8A0(file, &f190, 4, 1);
    *arr = this;
    parents = (int *)func_001E8A44(this->f190 * 4);
    for (i = 0; i < this->f190; i++) {
        if (i != 0) ((S_0019B1A0_VThis *)this)->v29(&arr[i]);
        D_002BEAAC->func_0013C8A0(file, &arr[i]->f28, 0x80, 1);
        D_002BEAAC->func_0013C8A0(file, &arr[i]->fB0, 0x40, 1);
        AsmTransposeMatrix(arr[i]->fB0, arr[i]->fB0);
        *((u8 *)&arr[i]->f24 + 3) &= 0xfb;
        arr[i]->f180 |= 0x20;
        arr[i]->f180 |= 4;
        D_002BEAAC->func_0013C8A0(file, &arr[i]->f130, 0xc, 1);
        D_002BEAAC->func_0013C8A0(file, &arr[i]->f140, 0xc, 1);
        D_002BEAAC->func_0013C8A0(file, &arr[i]->f184, 4, 1);
        D_002BEAAC->func_0013C8A0(file, &parents[i], 4, 1);
    }
    for (i = 0; i < this->f190; i++) {
        if (parents[i] != -1) {
            SoultreeObject *child = arr[i];
            SoultreeObject *parent = arr[parents[i]];
            S_0019A8C0_Child *sib;
            if (child->f170 != 0) parent->f170->func_0019A210(child);
            child->f170 = (S_0019A8C0_Mgr *)parent;
            sib = parent->f174;
            if (sib == 0) parent->f174 = (S_0019A8C0_Child *)child;
            else if (sib->f178 == 0) {
                sib->f178 = (S_0019A8C0_Child *)child;
                child->f17c = sib;
            } else sib->f178->func_00198230(child);
        }
    }
    func_001E891B(parents);
    return this->f190;
}

void SoultreeObject::func_0019B400(void)
{
    SoultreeObject *arr[256];
    char names[256][256];
    S_0019A8C0_Mgr *saved;
    int n;
    int i;
    int j;

    saved = f170;
    f170 = 0;
    n = f194->func_00168F40(D_0028B170);
    f190 = n;
    arr[0] = this;
    for (i = 1; i < n; i++) {
        ((S_0019B1A0_VThis *)this)->v29(&arr[i]);
    }
    for (i = 0; i < n; i++) {
        f194->func_00169A50(0);
        f194->func_00169090(0, arr[i]->f28);
        f194->func_00169090(1, names[i]);
        f194->func_00169010(2, &arr[i]->fB0[0]);
        f194->func_00169010(3, &arr[i]->fB0[4]);
        f194->func_00169010(4, &arr[i]->fB0[8]);
        f194->func_00169010(5, &arr[i]->fB0[1]);
        f194->func_00169010(6, &arr[i]->fB0[5]);
        f194->func_00169010(7, &arr[i]->fB0[9]);
        f194->func_00169010(8, &arr[i]->fB0[2]);
        f194->func_00169010(9, &arr[i]->fB0[6]);
        f194->func_00169010(10, &arr[i]->fB0[10]);
        f194->func_00169010(11, &arr[i]->fB0[3]);
        f194->func_00169010(12, &arr[i]->fB0[7]);
        f194->func_00169010(13, &arr[i]->fB0[11]);
    }
    for (i = 0; i < n; i++) {
        if (func_001EA426(names[i], D_00284A98) != 0) {
            for (j = 0; j < n; j++) {
                if (func_001EA426(names[i], arr[j]->f28) == 0) {
                    SoultreeObject *child = arr[i];
                    SoultreeObject *parent = arr[j];
                    S_0019A8C0_Child *sib;

                    if (child->f170 != 0) {
                        parent->f170->func_0019A210(child);
                    }
                    child->f170 = (S_0019A8C0_Mgr *)parent;
                    sib = parent->f174;
                    if (sib == 0) {
                        parent->f174 = (S_0019A8C0_Child *)child;
                    } else if (sib->f178 == 0) {
                        sib->f178 = (S_0019A8C0_Child *)child;
                        child->f17c = sib;
                    } else {
                        sib->f178->func_00198230(child);
                    }
                }
            }
        }
    }
    f170 = saved;
}

undefined4 C_0019B6D0::func_0019B6D0(byte param_1)
{
  int func_0019ACE0(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_0019ACE0();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_0019B6F0 *C_0019B6F0::func_0019B6F0(void)
{
    f4 = 0;
    f2 = 0;
    f0 = 0;
    return this;
}

C_0019B700 *C_0019B700::func_0019B700(int a)
{
    ((C_00132EB0_19A8C0 *)this)->func_00132EB0(a);
    f1bc = 0;
    f1c0 = 0;
    f1c4 = 0;
    f1c8 = 0;
    f1b0 = 0;
    f1b4 = 0;
    f1cc = 0;
    f1ce = 0;
    f1d0 = 0;
    f1d4 = 0;
    f50 = 0;
    vtbl = (void *)&D_0028B1C4;
    return this;
}

void C_0019B760::func_0019B760(void)
{
    if (f1d4 != 0) {
        if (--f1d4->f70 <= 0) {
            D_002BEAAC->func_0013B210(f1d4);
            if (f1c4 != 0) { func_001E891B(f1c4); f1c4 = 0; }
            if (f1c8 != 0) { func_001E891B(f1c8); f1c8 = 0; }
            if (f1b0 != 0) { func_001E891B(f1b0); f1b0 = 0; }
            if (f1b4 != 0) { func_001E891B(f1b4); f1b4 = 0; }
            func_001E8390(f1d4);
            f1d4 = 0;
        }
    } else {
        if (f1c4 != 0) { func_001E891B(f1c4); f1c4 = 0; }
        if (f1c8 != 0) { func_001E891B(f1c8); f1c8 = 0; }
        if (f1b0 != 0) { func_001E891B(f1b0); f1b0 = 0; }
        if (f1b4 != 0) { func_001E891B(f1b4); f1b4 = 0; }
    }
    if (f54 != 0) { func_001E891B(f54); f54 = 0; }
}

