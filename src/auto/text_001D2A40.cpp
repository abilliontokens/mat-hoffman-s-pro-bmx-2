/* 9 functions from 0x001D2A40 to 0x001D3860, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

extern float D_002755E0;
extern int D_0028F274;
extern int D_0028F474;

void func_001E891B(void *p);
void __stdcall func_0025ADD0(void *p);
void __stdcall func_002598A0(void *p, int a1, int a2);

struct C_001C3D40 {
    void func_001C3D40(int a);
    void func_001C3D80();
};
extern C_001C3D40 *D_002F07B8;

struct C_001625A0 {
    void func_001625A0(int a);
};

struct C_001D27F0 {
    void func_001D27F0();
};

struct S_001D2A40_Dev {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *a, void *b, void *c, int d);
};
extern S_001D2A40_Dev *D_002EFDB8;

extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void *);

/* 0x54-byte keyframe track: six channels (frame, x, y, w, h, alpha) */
struct S_001D2A40_Track {
    int f0;
    short frameLo, frameHi;
    short posLo[2], posHi[2];
    short sizeLo[2], sizeHi[2];
    float alphaLo, alphaHi;
    unsigned char flags;
    unsigned char dir;
    unsigned short done;
    float step[6];
    float val[6];
};

/* 16-byte frame entry */
struct S_001D2A40_Frame {
    void *f0;
    int w;
    int h;
    int fc;
};

struct C_001D2A40 {
    char pad0[8]; int f8; char padc[4]; S_001D2A40_Track *f10; S_001D2A40_Frame *f14; char pad18[0x18];
    char f30[0x20]; void *f50;
    void func_001D2A40();
};

static __forceinline void Round_001D2A40(int * volatile out, float f) { *out = _mm_cvtss_si32(*(__m128 *)&f); }
static __forceinline void RoundD_001D2A40(int *dst, float f) { AsmFloatToIntRound(f, dst); }
static __forceinline float Get_001D2A40(const volatile float *p) { return *p; }
static __forceinline int Min_001D2A40(int a, int b) { return a > b ? b : a; }

#define TRK (*(S_001D2A40_Track *)((char *)self->f10 + off))
#define TRACK_CH2(k, LO, HI, M, FM, PM) \
    if (!(TRK.done & (M))) { \
        if (!(TRK.dir & (M))) { \
            TRK.val[k] = TRK.step[k] + TRK.val[k]; \
            if (TRK.val[k] >= (float)TRK.HI) { \
                if (TRK.flags & (FM)) { \
                    if (TRK.flags & (PM)) { \
                        TRK.dir |= (M); \
                        TRK.val[k] = (float)TRK.HI; \
                    } else { \
                        TRK.val[k] = (float)TRK.LO; \
                    } \
                } else { \
                    TRK.done |= (M); \
                    TRK.val[k] = (float)TRK.HI; \
                } \
            } \
        } else { \
            TRK.val[k] = TRK.val[k] - TRK.step[k]; \
            if (TRK.val[k] <= (float)TRK.LO) { \
                if (TRK.flags & (FM)) { \
                    if (TRK.flags & (PM)) { \
                        TRK.dir &= ~(M); \
                        TRK.val[k] = (float)TRK.LO; \
                    } else { \
                        TRK.val[k] = (float)TRK.HI; \
                    } \
                } else { \
                    TRK.done |= (M); \
                    TRK.val[k] = (float)TRK.LO; \
                } \
            } \
        } \
    }

/* the same channel step, on the track expression T (used with this->f10 + off) */
#define TRACK_CHT(T, k, LO, HI, M, FM, PM) \
    if (!((T)->done & (M))) { \
        if (!((T)->dir & (M))) { \
            (T)->val[k] = (T)->step[k] + (T)->val[k]; \
                          if ((T)->val[k] >= (float)(T)->HI) { \
                  if (!((T)->flags & (FM))) { \
                      (T)->done |= (M); \
                      (T)->val[k] = (float)(T)->HI; \
                  } else { \
                      if ((T)->flags & (PM)) { \
                          (T)->dir |= (M); \
                          (T)->val[k] = (float)(T)->HI; \
                      } else { \
                          (T)->val[k] = (float)(T)->LO; \
                      } \
                  } \
              } \
        } else { \
            (T)->val[k] = (T)->val[k] - (T)->step[k]; \
                          if ((T)->val[k] <= (float)(T)->LO) { \
                  if (!((T)->flags & (FM))) { \
                      (T)->done |= (M); \
                      (T)->val[k] = (float)(T)->LO; \
                  } else { \
                      if ((T)->flags & (PM)) { \
                          (T)->dir &= ~(M); \
                          (T)->val[k] = (float)(T)->LO; \
                      } else { \
                          (T)->val[k] = (float)(T)->HI; \
                      } \
                  } \
              } \
        } \
    }
#define TRK_T ((S_001D2A40_Track *)((char *)this->f10 + off))

#define TRACK_CH3(k, LO, HI, M, FM, PM) \
    { \
        S_001D2A40_Track &a = TRK; \
        if (!(a.done & (M))) { \
            if (!(a.dir & (M))) { \
                a.val[k] = a.step[k] + a.val[k]; \
                S_001D2A40_Track &b = TRK; \
                if (b.val[k] >= (float)b.HI) { \
                    if (b.flags & (FM)) { \
                        if (b.flags & (PM)) { \
                            b.dir |= (M); \
                            S_001D2A40_Track &c = TRK; \
                            c.val[k] = (float)c.HI; \
                        } else { \
                            b.val[k] = (float)b.LO; \
                        } \
                    } else { \
                        b.done |= (M); \
                        S_001D2A40_Track &c = TRK; \
                        c.val[k] = (float)c.HI; \
                    } \
                } \
            } else { \
                a.val[k] = a.val[k] - a.step[k]; \
                S_001D2A40_Track &b = TRK; \
                if (b.val[k] <= (float)b.LO) { \
                    if (b.flags & (FM)) { \
                        if (b.flags & (PM)) { \
                            b.dir &= ~(M); \
                            S_001D2A40_Track &c = TRK; \
                            c.val[k] = (float)c.LO; \
                        } else { \
                            b.val[k] = (float)b.HI; \
                        } \
                    } else { \
                        b.done |= (M); \
                        S_001D2A40_Track &c = TRK; \
                        c.val[k] = (float)c.LO; \
                    } \
                } \
            } \
        } \
    }

/* step one channel k of track i; M = done/dir bit, FM = repeat bit and PM = ping-pong bit of flags */
#define TRACK_CHANNEL(k, LO, HI, M, FM, PM) \
    if (!(self->f10[i].done & (M))) { \
        if (!(self->f10[i].dir & (M))) { \
            self->f10[i].val[k] = self->f10[i].step[k] + self->f10[i].val[k]; \
            if (self->f10[i].val[k] >= (float)self->f10[i].HI) { \
                if (self->f10[i].flags & (FM)) { \
                    if (self->f10[i].flags & (PM)) { \
                        self->f10[i].dir |= (M); \
                        self->f10[i].val[k] = (float)self->f10[i].HI; \
                    } else { \
                        self->f10[i].val[k] = (float)self->f10[i].LO; \
                    } \
                } else { \
                    self->f10[i].done |= (M); \
                    self->f10[i].val[k] = (float)self->f10[i].HI; \
                } \
            } \
        } else { \
            self->f10[i].val[k] = self->f10[i].val[k] - self->f10[i].step[k]; \
            if (self->f10[i].val[k] <= (float)self->f10[i].LO) { \
                if (self->f10[i].flags & (FM)) { \
                    if (self->f10[i].flags & (PM)) { \
                        self->f10[i].dir &= ~(M); \
                        self->f10[i].val[k] = (float)self->f10[i].LO; \
                    } else { \
                        self->f10[i].val[k] = (float)self->f10[i].HI; \
                    } \
                } else { \
                    self->f10[i].done |= (M); \
                    self->f10[i].val[k] = (float)self->f10[i].LO; \
                } \
            } \
        } \
    }

struct S_001D3300_Arg {
    C_001D2A40 *obj;
    int h;
    void (*cb)(int);
    int cbArg;
    int pad10[7];
    int lock;
};

int __stdcall func_001DDDD6(int h, int t);
void __stdcall func_001DE70D(int a);
void __stdcall func_001DE733(int a);
void __stdcall func_002025D0(int a);
__declspec(noreturn) void __stdcall func_001DE7C2(int a);

struct C_00160BF0 {
    void func_00160BF0();
};

void __stdcall func_00259060(void *p);
void __stdcall func_001FCEA0(void *p, int a1, int *out, int a3, int a4);
void __stdcall func_0025AA30(void *p, int a1, int a2, int a3, int a4, int a5, int a6);

struct S_001D3690_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    char pad4[0xb4];
    void *fb8;
};

struct S_001D3690_Handle {
    int f0;
    int f4;
};

/* 16-byte slot of the object table in XboxLoadingIcon */
struct S_001D35E0_Slot {
    S_001D3690_Obj *obj;
    int pad4[3];
};

/* 0x54-byte element of the array at XboxLoadingIcon+0x10 */
struct S_001D35E0_Elem {
    void *ptr;
    char pad4[0x50];
};

struct C_001D35E0 {
    void *vtbl;
    int f4;
    char pad8[8];
    S_001D35E0_Elem *f10;
    S_001D35E0_Slot *f14;
    int f18;
    void func_001D35E0();
};

struct C_001D3690 {
    void *vtbl;
    char pad4[0x38];
    u32 f3c;
    u32 f40;
    S_001D3690_Handle *f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    S_001D3690_Obj *f70;
    int f74;
    int f78;
    int f7c;
    C_001D3690 *func_001D3690(int a);
    int func_001D3730(int a);
    void func_001D37C0();
    void func_001D3800();
};

extern const float D_0028F26C;
extern const float D_002779FC;
extern char D_0028F45C;
void *__cdecl func_001E8A44(unsigned int);
void *__stdcall func_001FFE40(int);
void __stdcall func_002011F0(void *, void *);
void *__stdcall func_001FCF20(int,int,int,int,int,int,int);
void *__stdcall func_001FCE50(void *,int);
void __stdcall func_001FFF40(void *,void *,int,void *,void *);
void __stdcall func_00201100(void *);
int __stdcall func_001DDBC7(int,int,int,void *);
int __stdcall func_001DE8C7(int,int,void *,void *,int,int);
void __stdcall func_001D3300(int,int);
extern "C" __declspec(dllimport) void __stdcall RtlInitializeCriticalSection(void *);
struct C_001D6AD0 {
 char pad0[8]; int f8; int fc; char pad10[0x94]; int fa4; int fa8; char padac[0xc]; void *fb8;
 C_001D6AD0 *func_001D6AD0(int);
};
struct C_001D3480 {
 char pad0[0xc]; char fc; char padd[0xb]; int f18; int f1c; void *f20; int f24; char pad28[0x24]; int f4c; C_001D6AD0 *f50;
 void func_001D3480();
};
struct C_001D3700 {
    void func_001D3700(int param_1, int param_2);
};


extern "C" void (__stdcall *__imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *__imp__RtlLeaveCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);
void C_001D2A40::func_001D2A40()
{
    int idx, alpha, w, x, h, y;
    int i;
    int off = 0;
    int dst[4];
    int src[4];
    if (this->f50 != 0) {
        int rc[4];
        rc[0] = 0;
        rc[2] = 0x280;
        rc[1] = 0;
        rc[3] = 0x1c0;
        D_002EFDB8->v4(0, this->f50, rc, 0);
    }
    for (i = 0; i < this->f8; i++, off += 0x54) {
        _imp__RtlEnterCriticalSection(this->f30);
        if (TRK_T->done != 0x3f) {
            S_001D2A40_Frame *q;
            RoundD_001D2A40(&idx, TRK_T->val[0]);
            q = &this->f14[idx];
            RoundD_001D2A40(&x, TRK_T->val[1]);
            RoundD_001D2A40(&y, TRK_T->val[2]);
            RoundD_001D2A40(&w, TRK_T->val[3]);
            RoundD_001D2A40(&h, TRK_T->val[4]);
            RoundD_001D2A40(&alpha, TRK_T->val[5]);
            alpha = AsmMinI(alpha, 255);
            dst[0] = x - (w >> 1);
            dst[1] = y - (h >> 1);
            dst[2] = dst[0] + w;
            dst[3] = dst[1] + h;
            src[0] = 0;
            src[2] = q->w;
            src[1] = 0;
            src[3] = q->h;
            TRACK_CHT(TRK_T, 0, frameLo, frameHi, 1, 1, 0x10)
            TRACK_CHT(TRK_T, 1, posLo[0], posHi[0], 2, 2, 0x20)
            TRACK_CHT(TRK_T, 2, posLo[1], posHi[1], 4, 2, 0x20)
            TRACK_CHT(TRK_T, 3, sizeLo[0], sizeHi[0], 8, 4, 0x40)
            TRACK_CHT(TRK_T, 4, sizeLo[1], sizeHi[1], 0x10, 4, 0x40)
            TRACK_CHT(TRK_T, 5, alphaLo, alphaHi, 0x20, 8, 0x80)
            _imp__RtlLeaveCriticalSection(this->f30);
            D_002EFDB8->v4(dst, q->f0, src, 0);
        }
    }
}

void __stdcall func_001D3300(int param, int unused)
{
    S_001D3300_Arg *a = (S_001D3300_Arg *)param;
    C_001D2A40 *obj = a->obj;
    int r;
    while ((r = func_001DDDD6(a->h, 0x11)) != 0) {
        if (r == 0x102) {
            func_001DE70D(a->lock);
            obj->func_001D2A40();
            if (a->cb)
                a->cb(a->cbArg);
            func_002025D0(0);
            func_001DE733(a->lock);
        }
    }
    func_001DE7C2(0);
}

void C_001D3480::func_001D3480()
{
 if (fc) {
  int desc[7];
  int rect[4];
  volatile int point[2];
  void *surface = func_001FFE40(0);
  func_002011F0(surface, desc);
  C_001D6AD0 *obj = (C_001D6AD0 *)func_001E8A44(0x110);
  if (obj) obj = obj->func_001D6AD0(0);
  else obj = 0;
  f50 = obj;
  obj->fb8 = func_001FCF20(640,448,1,1,0,desc[0],3);
  void *dest = func_001FCE50(f50->fb8,0);
  rect[0]=0;
  rect[2]=640;
  rect[1]=(int)D_0028F26C;
  rect[3]=(int)(D_0028F26C+D_002779FC);
  point[0]=0; point[1]=0;
  func_001FFF40(surface,rect,1,dest,(void *)point);
  func_00201100(dest);
  func_00201100(surface);
  f50->f8=640; f50->fc=448; f50->fa4=desc[0]; f50->fa8=1;
 }
 f20=this;
 f24=func_001DDBC7(0,0,0,&D_0028F45C);
 RtlInitializeCriticalSection((char *)this+0x30);
 f4c=-1;
 f1c=func_001DE8C7(0,0,(void *)func_001D3300,&f20,0,0);
 f18=1;
}

void C_001D35E0::func_001D35E0()
{
    vtbl = (void *)&D_0028F274;
    if (f18 != 0) {
        ((C_001D27F0 *)this)->func_001D27F0();
    }
    if (f14 != 0) {
        int i;
        for (i = 0; i < f4; i++) {
            if (f14[i].obj != 0) {
                f14[i].obj->v2();
                f14[i].obj = 0;
            }
        }
        func_001E891B(f14);
    }
    if (f10 != 0) {
        int i = ((int *)f10)[-1];
        char *base = (char *)f10 - 4;
        S_001D35E0_Elem *p = f10 + i;
        while (--i >= 0) {
            p--;
            if (p->ptr != 0) {
                func_001E891B(p->ptr);
            }
        }
        func_001E891B(base);
    }
    ((C_00160BF0 *)this)->func_00160BF0();
}

C_001D3690 *C_001D3690::func_001D3690(int a)
{
    ((C_001625A0 *)this)->func_001625A0(a);
    f44 = 0;
    f48 = 0;
    f70 = 0;
    f50 = 0;
    f54 = 0;
    f58 = 0;
    f7c = 0;
    f74 = 0;
    f78 = 0;
    vtbl = (void *)&D_0028F474;
    f40 = 0x3f800000;
    f4c = 0;
    u32 *p = &f3c;
    p[0] = 0x3f800000;
    f5c = 0x280;
    f60 = 0x1c0;
    f64 = 1;
    f68 = 0x302;
    f6c = 0x303;
    return this;
}

void C_001D3700::func_001D3700(int param_1, int param_2)
{
  int in_ECX = (int)this;
  int *piVar1;
  
  piVar1 = *(int **)(in_ECX + 0x44);
  *(int *)(in_ECX + 0x54) = param_1;
  *(int *)(in_ECX + 0x58) = param_2;
  if (piVar1 != (int *)0x0) {
    *(int *)(in_ECX + 0x5c) = *piVar1 + param_1;
    *(int *)(in_ECX + 0x60) = piVar1[1] + param_2;
  }
  return;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
int C_001D3690::func_001D3730(int a)
{
    int v;

    if (f44 != 0 && f48 == 0) {
        f48 = 1;
        D_002F07B8->func_001C3D40(0);
        AsmFloatToIntRound((float)(a << 15) * D_002755E0, &v);
        func_002598A0(f44, 0, v);
        return f48;
    }
    f48 = 0;
    return f48;
}
void C_001D3690::func_001D37C0()
{
    f48 = 0;
    D_002F07B8->func_001C3D80();
    if (f44 != 0) {
        func_0025ADD0(f44);
        f44 = 0;
        if (f70 != 0) {
            f70->v2();
            f70 = 0;
        }
    }
}

void C_001D3690::func_001D3800()
{
    if (f44 != 0) {
        func_00259060(f44);
        void *p = f70->fb8;
        if (p != 0) {
            int pos[2];
            func_001FCEA0(p, 0, pos, 0, 0);
            func_0025AA30(f44, pos[1], pos[0], f44->f4, 0, 0, 3);
        }
    }
}

