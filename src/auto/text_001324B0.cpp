/* 13 functions from 0x001324B0 to 0x00132DB8, found by Ghidra. */
#include "common.h"

static int AbsBits_001325D0(int v)
{
    return *(volatile int *)&v & 0x7fffffff;
}

struct CinematographerCam {
    void *vtbl;
    char pad_4[0x80 - 0x4];
    void *unk80;
    void *unk84;
    void *unk88;
    void *unk8C;
    void *unk90;
    void *unk94;
    void func_001324B0();
    void func_0012B540();
};

struct C_00132540 {
    void func_00132540();
};

struct C_00157600_1328F0 {
    void func_00157600(int a);
};

struct C_00164440_1328F0 {
    void *func_00164440(int a, int b);
};

struct Class_002845AC {
    int *vbptr;
    char pad4[0x21C];
    u32 f220;
    u32 f224;
    u32 f228;
    u32 f22C;
    u32 f230;
    u32 f234;
    u32 f238;
    u32 f23C;
    u32 f240;
    u32 f244;
    u32 f248;
    u32 f24C;
    u32 f250;
    u32 f254;
    u32 f258;
    u32 f25C;
    u32 f260;
    u32 f264;
    u32 f268;
    u32 f26C;
    u32 f270;
    u32 f274;
    u32 f278;
    u32 f27C;
    u32 f280;
    u32 f284;
    Class_002845AC *func_001328F0(int a, int mostDerived);
    void func_00132DB0();
    void func_00132DE0();
};

extern int D_00284514;
extern int D_00284618;
extern int D_002845AC;
void func_001E891B(void *ptr);
void func_001E8390(void *ptr);

struct C_Off_1324B0 {
    char pad0[4];
    int f4;
};

struct C_Item_1324B0 {
    void func_00133ED0();
    void func_00133140(int a, int b);
    void func_00133210();
    void func_001332A0();
};

struct C_Dst_1324B0 {
    void func_00157960();
    void func_00157A00(int a);
};

struct C_Dst64520_1324B0 {
    void func_00164520();
};

struct C_19_1324B0 {
    void func_0019ABA0(int a, int b);
};

struct C_1329F0 {
    void func_001329F0();
    void func_00132C50(int a1);
    void func_00132CA0();
};

struct C_19AC50_1324B0 {
    void func_0019AC50();
};

struct C_198E60_1324B0 {
    void func_00198E60();
};

struct Obj_132A40 {
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
    virtual void v27(int);

    void func_0019C1E0();
    Obj_132A40 **func_0019EEC0(int *);
    void func_00133730(void *, int);
    Obj_132A40 *func_00171270(int);
    void func_001577A0(void *, int);
    void func_001D3F50();
};
extern char D_002A46E8[], D_00275678[], D_002A4C10[];
extern int D_002BA15C, D_002BA03C;
int func_001ADCC0(char *, int, const char *, ...);
Obj_132A40 *func_00133750(void *, char *, int);
void *func_001E8AA5(int);
void *func_001E8A44(int);

struct C_132CC0 {
    char pad0[4];
    void *f4;
    char pad8[0x278];
    void *f280;
    int f284;
    int f288;
    void func_001673B0(char *, int, int, int, int);
    void func_00132CC0(int a1, int a2, int a3);
    void func_00132D20();
    void func_00132D70();
    void func_00132A40(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

void CinematographerCam::func_001324B0()
{
    vtbl = (void *)&D_00284514;
    if (unk80 != 0) {
        func_001E891B(unk80);
    }
    if (unk84 != 0) {
        func_001E891B(unk84);
    }
    if (unk88 != 0) {
        func_001E891B(unk88);
    }
    if (unk8C != 0) {
        func_001E891B(unk8C);
    }
    if (unk90 != 0) {
        func_001E891B(unk90);
    }
    if (unk94 != 0) {
        func_001E891B(unk94);
    }
    func_0012B540();
}

float *__fastcall func_00132540(float *f)
{
    int i;
    for (i = 0; i < 8; i++) {
        f[i * 4 + 2] = 0.0f;
        f[i * 4 + 1] = 0.0f;
        f[i * 4] = 0.0f;
        f[i * 4 + 3] = 1.0f;
    }
    f[1] = -3.4028235e38f;
    f[0x20] = -3.4028235e38f;
    f[0x21] = -3.4028235e38f;
    f[0x22] = 3.4028235e38f;
    f[0] = -3.4028235e38f;
    f[2] = -3.4028235e38f;
    f[4] = 3.4028235e38f;
    f[5] = -3.4028235e38f;
    f[6] = -3.4028235e38f;
    f[8] = 3.4028235e38f;
    f[9] = 3.4028235e38f;
    f[10] = -3.4028235e38f;
    f[0xc] = -3.4028235e38f;
    f[0xd] = 3.4028235e38f;
    f[0xe] = -3.4028235e38f;
    f[0x10] = -3.4028235e38f;
    f[0x11] = -3.4028235e38f;
    f[0x12] = -3.4028235e38f;
    f[0x14] = 3.4028235e38f;
    f[0x15] = -3.4028235e38f;
    f[0x16] = -3.4028235e38f;
    f[0x18] = 3.4028235e38f;
    f[0x19] = 3.4028235e38f;
    f[0x1a] = -3.4028235e38f;
    f[0x1c] = -3.4028235e38f;
    f[0x1d] = 3.4028235e38f;
    f[0x1e] = -3.4028235e38f;
    return f;
}

int func_001325D0(float *param_1)
{
    float fVar1;
    float fVar2;
    int tmp;
    int bVar3;
    tmp = *(int *)&param_1[3];
    tmp = tmp & 0x7fffffff;
    fVar2 = *(float *)&tmp;
    bVar3 = 0;
    if (*param_1 > fVar2) {
        bVar3 = 1;
    }
    fVar1 = -fVar2;
    if (fVar1 > *param_1) {
        bVar3 = bVar3 | 2;
    }
    if (param_1[1] > fVar2) {
        bVar3 = bVar3 | 4;
    }
    if (fVar1 > param_1[1]) {
        bVar3 = bVar3 | 8;
    }
    if (param_1[2] > fVar2) {
        bVar3 = bVar3 | 0x10;
    }
    if (fVar1 > param_1[2]) {
        bVar3 = bVar3 | 0x20;
    }
    return bVar3;
}

extern float D_002B9E20[32][4];
extern float D_00275460;
extern unsigned int D_002BA020;
int func_001325D0(float *v);
int func_00132650(float *out, float *in, int n)
{
    int i, plane, cnt, bit, axis, neg, ca, cb;
    float *src, *dst, *prev, *cur, *s, *d;
    float da, db, t, k;

    if (!(D_002BA020 & 1)) {
        D_002BA020 |= 1;
        d = (float *)D_002B9E20;
        for (i = 0x20; i != 0; i--) {
            d[0] = d[1] = d[2] = 0.0f;
            d[3] = 1.0f;
            d += 4;
        }
    }
    if (n > 10) {
        return 0;
    }
    s = in;
    d = (float *)D_002B9E20;
    for (i = 0; i < n; i++, d += 4, s += 4) {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
    }
    for (plane = 5; plane >= 0; plane--) {
        neg = plane & 1;
        axis = plane >> 1;
        bit = 1 << plane;
        src = (float *)((char *)D_002B9E20 + (neg ^ 1) * 0x100);
        dst = (float *)((char *)D_002B9E20 + neg * 0x100);
        cnt = 0;
        prev = src + n * 4 - 4;
        cur = src;
        for (i = 0; i < n; i++) {
            ca = func_001325D0(prev) & bit;
            cb = func_001325D0(cur) & bit;
            if (!(ca | cb)) {
                dst[0] = prev[0];
                dst[1] = prev[1];
                dst[2] = prev[2];
                dst[3] = prev[3];
                cnt++;
            } else if (!(ca & cb)) {
                da = neg ? prev[axis] - prev[3] : prev[axis] + prev[3];
                db = neg ? cur[axis] - cur[3] : cur[axis] + cur[3];
                t = D_00275460 / (da - db);
                if (ca) {
                    k = -db * t;
                    dst[0] = cur[0] + (prev[0] - cur[0]) * k;
                    dst[1] = cur[1] + (prev[1] - cur[1]) * k;
                    dst[2] = cur[2] + (prev[2] - cur[2]) * k;
                    dst[3] = cur[3] + (prev[3] - cur[3]) * k;
                    cnt++;
                } else {
                    dst[0] = prev[0];
                    dst[1] = prev[1];
                    dst[2] = prev[2];
                    dst[3] = prev[3];
                    cnt++;
                    dst += 4;
                    k = da * t;
                    dst[0] = prev[0] + (cur[0] - prev[0]) * k;
                    dst[1] = prev[1] + (cur[1] - prev[1]) * k;
                    dst[2] = prev[2] + (cur[2] - prev[2]) * k;
                    dst[3] = prev[3] + (cur[3] - prev[3]) * k;
                    cnt++;
                }
            }
            prev = cur;
            cur += 4;
            dst += 4;
        }
        n = cnt;
        if (n == 0) {
            return 0;
        }
    }
    s = (float *)D_002B9E20;
    d = out;
    for (i = 0; i < n; i++) {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        d += 4;
        s += 4;
    }
    return n;
}

Class_002845AC *Class_002845AC::func_001328F0(int a, int mostDerived)
{
    volatile int local = 0;
    u32 *p;
    if (mostDerived != 0) {
        vbptr = &D_00284618;
        ((C_00157600_1328F0 *)((char *)this + 0x294))->func_00157600(1);
    }
    ((C_00164440_1328F0 *)this)->func_00164440(a, 0);
    *(void **)((char *)this + vbptr[1]) = (void *)&D_002845AC;
    *(int *)((char *)this + vbptr[1] - 4) = vbptr[1] - 0x294;
    p = &f220;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f230;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f240;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f250;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f260;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = &f270;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    f280 = 0;
    f284 = 0;
    return this;
}

void C_1329F0::func_001329F0()
{
    char *base = (char *)this - 0x294;
    int off;

    *(void **)((char *)((C_Off_1324B0 *)*(void **)base)->f4 + (int)this - 0x294) = (void *)&D_002845AC;
    off = ((C_Off_1324B0 *)*(void **)base)->f4;
    *(int *)(base + off - 4) = off - 0x294;
    if (*(void **)((char *)this - 0x14) != 0) {
        func_001E8390(*(void **)((char *)this - 0x14));
    }
    ((C_Dst64520_1324B0 *)((char *)this - 0x74))->func_00164520();
}

void C_132CC0::func_00132A40(int a1,int a2,int a3,int a4,int a5,int a6,int a7) {
 char path2[260], path[260], saved[260];
 func_001ADCC0(path,260,D_00275678,D_002A46E8,a1);
 func_001673B0(path,a3,a4,a5,a7);
 f288=*(int *)((char *)f4+0x174);
 if(a6) {
  int n=0; do { saved[n]=D_002A4C10[n]; } while(saved[n++]);
  D_002A4C10[0]=0;
  func_001ADCC0(path2,260,D_00275678,D_002A46E8,a2);
  Obj_132A40 *obj=func_00133750(f4,path2,5);
  n=0; do { D_002A4C10[n]=saved[n]; } while(saved[n++]);
  int type=*(int *)((char *)obj+0x50);
  if(type==0) {
   f280=func_001E8AA5(4);
   *(Obj_132A40 **)f280=obj;
   f284=1;
   (*(Obj_132A40 **)f280)->func_0019C1E0();
  } else if(type==1) {
   f280=obj->func_0019EEC0(&f284);
   obj->v2();
  } else obj->v2();
  for(int i=0;i<f284;i++) {
   ((Obj_132A40 **)f280)[i]->func_00133730(this,D_002BA03C|D_002BA15C);
   ((Obj_132A40 *)((char *)this+(*(int **)this)[1]))->func_001577A0(((Obj_132A40 **)f280)[i],-1);
   Obj_132A40 *p=(Obj_132A40 *)func_001E8A44(0x300);
   if(p) p=p->func_00171270(1); else p=0;
   p->v10();
   p->v27(*(int *)((char *)((Obj_132A40 **)f280)[i]+0x1c0));
   ((Obj_132A40 *)((char *)this+(*(int **)this)[1]))->func_001577A0(p,-1);
   *(Obj_132A40 **)((char *)((Obj_132A40 **)f280)[i]+0x64)=p;
  }
 }
 ((Obj_132A40 *)((char *)this+(*(int **)this)[1]))->func_001D3F50();
}

void C_1329F0::func_00132C50(int a1)
{
    int i;

    for (i = 0; i < *(int *)((char *)this - 0x10); i++) {
        ((C_Item_1324B0 **)*(void **)((char *)this - 0x14))[i]->func_00133ED0();
    }
    ((C_Dst_1324B0 *)((char *)this - 0x294 + ((C_Off_1324B0 *)*(void **)((char *)this - 0x294))->f4))->func_00157A00(a1);
}

void C_1329F0::func_00132CA0()
{
    ((C_Dst_1324B0 *)((char *)this - 0x294 + ((C_Off_1324B0 *)*(void **)((char *)this - 0x294))->f4))->func_00157960();
}

void C_132CC0::func_00132CC0(int a1, int a2, int a3)
{
    int i;

    ((C_19_1324B0 *)f4)->func_0019ABA0(a1, a3);
    for (i = 0; i < f284; i++) {
        ((C_Item_1324B0 **)f280)[i]->func_00133ED0();
        ((C_Item_1324B0 **)f280)[i]->func_00133140(a2, a3);
    }
}

void C_132CC0::func_00132D20()
{
    int i;

    ((C_19AC50_1324B0 *)f4)->func_0019AC50();
    for (i = 0; i < f284; i++) {
        ((C_Item_1324B0 **)f280)[i]->func_00133ED0();
        ((C_Item_1324B0 **)f280)[i]->func_00133210();
    }
}

void C_132CC0::func_00132D70()
{
    int i;

    ((C_198E60_1324B0 *)f4)->func_00198E60();
    for (i = 0; i < f284; i++) {
        ((C_Item_1324B0 **)f280)[i]->func_001332A0();
    }
}

void Class_002845AC::func_00132DB0()
{
    ((Class_002845AC *)((char *)this - *(int *)((char *)this - 4)))->func_00132DE0();
}
