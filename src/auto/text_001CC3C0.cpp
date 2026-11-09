/* 10 functions from 0x001CC3C0 to 0x001CD3B0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

extern int D_0028EECC;
extern int D_0028ED5C;
struct C_002BEAAC {
 int func_0013AFB0(int);
 void func_0013AFF0(int,int,int);
 void func_0013C8A0(int,int,int,int);
};
extern C_002BEAAC *D_002BEAAC;
void *func_001E8A44(unsigned int);
int func_001E8AA5(int);
int __stdcall func_00220A36(int);
struct C_001CD260_Item { void *a; void *b; char pad8[16]; };
struct C_001CD260_Group {
 C_001CD260_Item *items; int count; int f8; int size; void *data; char pad14[0x30];
};
struct C_001CD260 {
 char pad0[0x34]; C_001CD260_Group *groups;
 int f38; int size3C; void *data40;
 char pad44[0xC]; int size50; void *data54;
 char pad58[0xC]; int size64; void *data68;
 char pad6C[0x3C]; int countA8;
 char padAC[0x14]; void *dataC0;
 void func_001CD260();
};
void func_001E8390(void *);
void func_001E891B(void *);
extern "C" void * __cdecl memset(void *, int, unsigned int);
extern "C" void * __cdecl memcpy(void *, const void *, unsigned int);
static __forceinline void clear_001CD260(int *size) {
 memset(*(void **)(size + 1), 0, *size * 4);
 *size = 0;
}

struct C_0001C980 {
    void *func_0001C980(int a);
};
extern int D_0028EF54;

struct S_XboxMusicList {
    int count;
    void **items;
    int growBy;
    int capacity;
    u8 flags;
    char pad[3];

    void reset()
    {
        items = 0;
        count = 0;
        growBy = 0;
        capacity = 0;
        flags &= 0xfe;
    }

    void init(int n)
    {
        items = (void **)func_001E8A44(n * 4);
        growBy = 0x10;
        capacity = n;
        flags |= 1;
    }
};

struct S_XboxMusicArg {
    char pad0[0x28];
    int f28;
};

struct XboxMusic {
    void *vtbl;
    char pad4[0x20];
    int f24;
    char pad28[4];
    S_XboxMusicArg *f2C;
    int f30;
    int f34;
    int f38;
    S_XboxMusicList l0;
    S_XboxMusicList l1;
    S_XboxMusicList l2;
    int f78;
    int f7C;
    int f80;
    int f84;
    int f88;
    int f8C;
    int f90;
    int f94;
    int f98;
    int f9C;
    u8 fA0;
    char padA1[3];
    int fA4;
    int fA8;
    int fAC;
    int fB0;
    int fB4;
    int fB8;
    int fBC;
    int fC0;
    int fC4;
    int fC8;
    int fCC;
    int fD0[0x35];
    int f1A4;
    int f1A8;
    XboxMusic(int a, S_XboxMusicArg *b, int c);
};

struct S_WaveFormat {
    u16 wFormatTag;
    u16 nChannels;
    u32 nSamplesPerSec;
    u32 nAvgBytesPerSec;
    u16 nBlockAlign;
    u16 wBitsPerSample;
    u16 cbSize;
    u16 wSamplesPerBlock;
};

#pragma pack(push, 1)
struct S_WaveFormatEx {
    u16 wFormatTag;
    u16 nChannels;
    u32 nSamplesPerSec;
    u32 nAvgBytesPerSec;
    u16 nBlockAlign;
    u16 wBitsPerSample;
    u16 cbSize;
};
#pragma pack(pop)

struct S_BufferDesc {
    u32 dwSize;
    u32 dwFlags;
    u32 dwBufferBytes;
    S_WaveFormat *lpwfxFormat;
    void *lpMixBins;
    u32 dwInputMixBin;
};

struct S_001CCC50_Global {
    char pad0[0x30];
    int f30;
};
extern S_001CCC50_Global *D_002F08EC;
extern int D_00040000;
int __stdcall func_002226F7(int a, S_BufferDesc *desc, int *out, int d);

struct C_001CCC50 {
    char pad0[0x110];
    int f110;
    char pad114[0x84];
    s16 f198;
    char pad19A[2];
    int f19C;
    int f1A0;
    int func_001CCC50(int *out, u32 bytes, u32 rate, u16 bits, u32 align, s16 tag, int stereo, int a7, int a8, u32 flags);
};

struct C_001CD220 {
    char pad0[0xCC];
    int fCC;
    bool func_001CD220(void);
};

int func_001CB0A0(int x);
void func_001CBC10(int e, void *file, int line);
int __stdcall func_002209A2(int a, int b);
int __stdcall func_00220A8A(int a, int b);
int __stdcall func_00220AD6(int a, int b);
int __stdcall func_002223E1(int a, int b, int c);

struct C_001CC3C0_138 {
    char pad0[0x28];
    int f28;
};

struct C_001CC3C0_140 {
    int f0;
    char pad4[0x8];
    int fC;
};

struct C_001CC3C0_144 {
    virtual void v0();
    virtual void v1();
    int f4;
    int f8;
    void func_0001DFE0();
};

struct C_001CC3C0_154 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual int v7();
};

struct S_Vec_001CC4B0;
struct S_V4_001CCE10 {
    int x, y, z, w;
    void Set(int a, int b, int c, int d) { x = a; y = b; z = c; w = d; }
};
struct C_001CC3C0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
    virtual void v6();
    virtual int v7();
    virtual void v8();
    virtual int v9(int a);
    char pad0[0x108];
    int f10C;
    char pad110[8];
    int f118;               /* 0x118 */
    char pad11C[0x8];       /* 0x11C */
    int f124;               /* 0x124 */
    char pad128[0x10];      /* 0x128 */
    C_001CC3C0_138 *f138;   /* 0x138 */
    int f13C;               /* 0x13C */
    C_001CC3C0_140 *f140;   /* 0x140 */
    C_001CC3C0_144 *f144;   /* 0x144 */
    char pad148[8];
    int f150;
    C_001CC3C0_154 *f154;   /* 0x154 */
    char pad158[0x50];      /* 0x158 */
    int f1A8;               /* 0x1A8 */
    char pad1AC[0x8];       /* 0x1AC */
    int f1B4;               /* 0x1B4 */
    char pad1B8[0x20];      /* 0x1B8 */
    int f1D8;               /* 0x1D8 */
    char pad1DC[0xC];       /* 0x1DC */
    int f1E8;               /* 0x1E8 */
    char pad1EC[0xC];       /* 0x1EC */
    int f1F8;               /* 0x1F8 */
    char pad1FC[0xC];       /* 0x1FC */
    u8 f208;                /* 0x208 */
    int func_001CCAC0(int a, int b, int c, int d);
    int func_001CC3C0(int param_1);
    int func_001CC460(int param_1);
    int func_001CCA10(void);
    int func_001CC4B0(int *a, int *b, int *c, int *d);
     int func_001CCE10(S_V4_001CCE10 v);
};
int __stdcall func_00221A71(int h, int a, int b, int c, int d);
#include <xmmintrin.h>
static __forceinline float Max_001CC4B0(float a, float b) { return _mm_max_ss(_mm_set_ss(a), _mm_set_ss(b)).m128_f32[0]; }
struct S_Vec_001CC4B0 { int x, y, z; };
int __stdcall func_00221A71(int h, S_Vec_001CC4B0 v, int d);
int __stdcall func_00221B90(int h, S_Vec_001CC4B0 v, int d);
int __stdcall func_00221BB9(int h, S_Vec_001CC4B0 v, int d);
int __stdcall func_00221AA6(int h, S_Vec_001CC4B0 v, int d);
int __stdcall func_002219B4(int h, S_Vec_001CC4B0 v, int d);
struct S_3DParams_001CC4B0 {
    int insideCone;     /* 0x00 */
    int outsideCone;    /* 0x04 */
    int coneVolume;     /* 0x08 */
    float minDist;      /* 0x0C */
    float maxDist;      /* 0x10 */
    int mode;           /* 0x14 */
    int f18;            /* 0x18 */
    int f1C;            /* 0x1C */
    int f20;            /* 0x20 */
};
extern float D_0028EF4C;
int __stdcall func_00221BB9(int h, int a, int b, int c, int d);
int __stdcall func_00221B73(int h, float a, int d);
int __stdcall func_00221B5B(int h, float a, int d);
int __stdcall D_00221B51(int h, int a, int b, int d);
int __stdcall D_00221B56(int h, int a, int d);
int __stdcall func_00221BE2(int h, int a, int d);
int __stdcall func_00221C12(int h, int a, int d);
int __stdcall func_00221BFA(int h, int a, int d);
int __stdcall func_00221B8B(int h, int a, int d);
int __stdcall func_00221AA6(int h, int a, int b, int c, int d);
int __stdcall func_00221A2D(int h, float a, int d);
int __stdcall func_00221A09(int h, float a, int d);
int __stdcall func_00221990(int h, int a, int b, int d);
int __stdcall func_002219E9(int h, int a, int d);
int __stdcall func_002219B4(int h, int a, int b, int c, int d);
int __stdcall func_00221ADB(int h, int a, int d);
int __stdcall func_00221B23(int h, int a, int d);
int __stdcall func_00221AFF(int h, int a, int d);
int __stdcall func_00221A51(int h, int a, int d);
int __stdcall func_00221B90(int h, int a, int b, int c, int d);

int C_001CC3C0::func_001CC3C0(int param_1)
{
    int v;
    int r;
    int e;
    if (f138 != 0)
        v = f138->f28 * param_1 / 100;
    else
        v = param_1;
    r = func_001CB0A0(v);
    if (f13C != 0) {
        e = func_002209A2(f13C, r);
        if (e < 0) {
            func_001CBC10(e, &D_0028EECC, 0x674);
            return 0;
        }
    } else if (f140 != 0) {
        int h = f140->fC;
        e = func_00220AD6(h, r);
        if (e < 0) {
            func_001CBC10(e, &D_0028EECC, 0x67b);
            return 0;
        }
    }
    f1A8 = param_1;
    f124 = r;
    return 1;
}

int C_001CC3C0::func_001CC460(int param_1)
{
    if (f13C != 0) {
        int e = func_00220A8A(f13C, param_1);
        if (e < 0) {
            func_001CBC10(e, &D_0028EECC, 0x71e);
            return 0;
        }
    } else {
        if (f140 == 0)
            return 0;
        f140->f0 = param_1;
    }
    return 1;
}

int C_001CC3C0::func_001CC4B0(int *a, int *b, int *c, int *d)
{
    S_3DParams_001CC4B0 *p = (S_3DParams_001CC4B0 *)a;
    int e;
    if (!(f10C & 8))
        return 1;
    p->minDist = Max_001CC4B0(p->minDist, 1.0f);
    p->maxDist = Max_001CC4B0(p->maxDist, p->minDist * D_0028EF4C);
    if (f140 != 0) {
        if (b != 0) {
            S_Vec_001CC4B0 v = *(S_Vec_001CC4B0 *)b;
            e = func_00221B90(f140->fC, v.x, v.y, v.z, 1);
            if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8a4); return 0; }
        }
        if (c != 0) {
            S_Vec_001CC4B0 v = *(S_Vec_001CC4B0 *)c;
            e = func_00221BB9(f140->fC, v.x, v.y, v.z, 1);
            if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8ad); return 0; }
        }
        e = func_00221B73(f140->fC, p->minDist, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8b2); return 0; }
        e = func_00221B5B(f140->fC, p->maxDist, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8b3); return 0; }
        if ((f10C & 0x10) && p->insideCone != 0x168) {
            e = D_00221B51(f140->fC, p->insideCone, p->outsideCone, 1);
            if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8b6); return 0; }
            e = D_00221B56(f140->fC, p->coneVolume, 1);
            if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8b7); return 0; }
            return 1;
        }
        e = func_00221BE2(f140->fC, p->f18, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8c5); return 0; }
        e = func_00221C12(f140->fC, p->f1C, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8c6); return 0; }
        e = func_00221BFA(f140->fC, p->f20, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8c7); return 0; }
        e = func_00221B8B(f140->fC, p->mode, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8c8); return 0; }
    } else if (f13C != 0) {
        if (b != 0) {
            S_Vec_001CC4B0 v = *(S_Vec_001CC4B0 *)b;
            e = func_00221A71(f13C, v.x, v.y, v.z, 1);
            if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8d1); return 0; }
        }
        if (c != 0) {
            S_Vec_001CC4B0 v = *(S_Vec_001CC4B0 *)c;
            e = func_00221AA6(f13C, v.x, v.y, v.z, 1);
            if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8da); return 0; }
        }
        e = func_00221A2D(f13C, Max_001CC4B0(p->minDist, 1.0f), 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8e0); return 0; }
        e = func_00221A09(f13C, p->maxDist, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8e1); return 0; }
        if ((f10C & 0x10) && p->insideCone != 0x168) {
            e = func_00221990(f13C, p->insideCone, p->outsideCone, 1);
            if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8e4); return 0; }
            e = func_002219E9(f13C, p->coneVolume, 1);
            if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8e8); return 0; }
            if (d != 0) {
                S_Vec_001CC4B0 v = *(S_Vec_001CC4B0 *)d;
                e = func_002219B4(f13C, v.x, v.y, v.z, 1);
                if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8ed); return 0; }
            }
        }
        e = func_00221ADB(f13C, p->f18, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8f3); return 0; }
        e = func_00221B23(f13C, p->f1C, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8f4); return 0; }
        e = func_00221AFF(f13C, p->f20, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8f5); return 0; }
        e = func_00221A51(f13C, p->mode, 1);
        if (e < 0) { func_001CBC10(e, &D_0028EECC, 0x8f6); return 0; }
    }
    return 1;
}

int C_001CC3C0::func_001CCA10(void)
{
    if ((int)f154 != -1 && f154->v7() != 0)
        return 1;
    int c = f118;
    int b = f144->f8;
    int a = f13C;
    if (func_002223E1(a, b, c) != 0)
        return 0;
    if (v9(f1A8) == 0)
        return 0;
    if (func_001CC4B0(&f1B4, &f1E8, &f1F8, &f1D8) == 0)
        return 0;
    f154 = 0;
    if (f208 & 0x20) {
        v5(0);
        f208 &= 0xdf;
    }
    return 1;
}

int C_001CC3C0::func_001CCAC0(int a, int b, int c, int d)
{
 int fresh = f144 == 0;
 if (fresh) {
  if (b == -1) return 0;
  C_001CC3C0_144 *p = (C_001CC3C0_144 *)func_001E8A44(12);
  if (p) {
   int n = f118;
   p->func_0001DFE0();
   *(void **)p = &D_0028ED5C;
   p->f8 = func_001E8AA5(n);
  } else p = 0;
  f144 = p;
 }
 if (!f144 || !f144->f8) return 0;
 if (fresh) {
  if (D_002BEAAC->func_0013AFB0(b))
   D_002BEAAC->func_0013AFF0(b,44,0);
  D_002BEAAC->func_0013C8A0(b,f144->f8,f118,1);
 } else f144->v1();
 f208 |= 8;
 f124 = func_001CB0A0(f1A8);
 if (!f150 || !(f10C & 0x100)) {
  if (!a) return 0;
  int n = f118;
  int buffer = f144->f8;
  if (func_002223E1(a,buffer,n)) return 0;
  func_00220A8A(a,c);
  func_00220A36(a);
  if (!v9(f1A8)) return 0;
  if (!func_001CC4B0(&f1B4,&f1E8,&f1F8,&f1D8)) return 0;
 }
 return 1;
}

int C_001CCC50::func_001CCC50(int *out, u32 bytes, u32 rate, u16 bits, u32 align, s16 tag, int stereo, int a7, int a8, u32 flags)
{
    S_WaveFormatEx pcm;
    S_WaveFormat adpcm;
    S_BufferDesc desc;
    memset(&desc, 0, sizeof(desc));
    desc.dwSize = sizeof(desc);
    if (tag == 1) {
        memset(&pcm, 0, 0x12);
        pcm.wFormatTag = 1;
        pcm.nSamplesPerSec = rate;
        pcm.nChannels = (stereo != 0) + 1;
        pcm.nAvgBytesPerSec = (u16)align * rate;
        pcm.nBlockAlign = align;
        pcm.wBitsPerSample = bits;
        pcm.cbSize = 0;
        desc.lpwfxFormat = (S_WaveFormat *)&pcm;
    } else if (tag == 0x69) {
        memset(&adpcm, 0, sizeof(adpcm));
        adpcm.wFormatTag = tag;
        adpcm.nChannels = (stereo != 0) + 1;
        adpcm.nAvgBytesPerSec = (u16)align * rate >> 6;
        adpcm.nSamplesPerSec = rate;
        adpcm.nBlockAlign = align;
        adpcm.wBitsPerSample = bits;
        adpcm.cbSize = 2;
        adpcm.wSamplesPerBlock = 0x40;
        desc.lpwfxFormat = &adpcm;
    }
    f19C = rate;
    f1A0 = rate;
    f110 = flags;
    u32 f = 0;
    if (flags & 1)
        f = 0x80;
    if (flags & 4)
        f |= 0x20;
    if (flags & 8)
        f |= 0x10;
    u32 df = f;
    if (a7)
        df |= 0x10;
    desc.dwFlags = df | (u32)&D_00040000;
    if (align == 0)
        desc.dwBufferBytes = bytes;
    else
        desc.dwBufferBytes = bytes - bytes % align;
    if (!(f & (u32)&D_00040000))
        f198 = 0;
    int *o = out;
    int h = D_002F08EC->f30;
    int e = func_002226F7(h, &desc, o, 0);
    if (e) {
        func_001CBC10(e, &D_0028EECC, 0xa2a);
        *out = 0;
        return 0;
    }
    return 1;
}

int C_001CC3C0::func_001CCE10(S_V4_001CCE10 v)
{
    if (*(u8 *)((char *)this + 0x10c) & 8) {
        if (f13C != 0) {
            int e = func_00221A71(f13C, v.x, v.y, v.z, 1);
            if (e < 0) {
                func_001CBC10(e, &D_0028EECC, 0xa89);
                return 0;
            }
        } else if (f140 != 0) {
            int e = func_00221B90(f140->fC, v.x, v.y, v.z, 1);
            if (e < 0) {
                func_001CBC10(e, &D_0028EECC, 0xa8f);
                return 0;
            }
        }
        S_V4_001CCE10 t = v;
        *(S_V4_001CCE10 *)&f1E8 = t;
    }
    return 1;
}

XboxMusic::XboxMusic(int a, S_XboxMusicArg *b, int c)
{
    ((C_0001C980 *)this)->func_0001C980(c);
    vtbl = &D_0028EF54;
    l0.reset();
    l1.reset();
    l2.reset();
    f2C = b;
    f9C = b->f28;
    f30 = a;
    f38 = 5;
    l0.init(1);
    l1.init(1);
    l2.init(1);
    f98 = 100;
    f8C = 100;
    f90 = 100;
    f34 = 0;
    fA8 = 0;
    f78 = 0;
    f7C = 0;
    f24 = 0;
    fA4 = 0;
    fAC = 0;
    f80 = 0;
    f84 = 0;
    f88 = 0;
    f94 = 2;
    fA0 &= 0xfc;
    fB4 = 0;
    fB8 = 0;
    fBC = 0;
    fB0 = 0;
    fC0 = 0;
    fC4 = -1;
    fC8 = 0;
    fCC = 0;
    f1A4 = -1;
    f1A8 = -1;
    for (int i = 0; i < 0x35; i++)
        fD0[i] = 0;
}

bool C_001CD220::func_001CD220(void)
{
    return fCC == 1;
}

void C_001CD260::func_001CD260()
{
 if (dataC0) { func_001E891B(dataC0); dataC0 = 0; }
 if (groups) {
  clear_001CD260(&size64);
  clear_001CD260(&size50);
  for (int i=0; i<countA8; ++i) {
   for (int j=0; j<groups[i].count; ++j) {
    if (groups[i].items[j].a) func_001E8390(groups[i].items[j].a);
    if (groups[i].items[j].b) func_001E8390(groups[i].items[j].b);
   }
   func_001E8390(groups[i].items);
   clear_001CD260(&groups[i].size);
  }
  func_001E8390(groups); groups = 0;
 }
 clear_001CD260(&size3C);
 countA8=0;
}

