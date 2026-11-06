/* 40 functions from 0x0001C2E0 to 0x0001D280, found by Ghidra. */
#include "common.h"
#include <math.h>
#include <string.h>
#include <xmmintrin.h>
static __forceinline float clamp_ordered_1C870(float r, float c, float e)
{
    if (e > c) {
        if (r > e) return e;
        if (r < c) return c;
    } else {
        if (r < e) return e;
        if (r > c) return c;
    }
    return r;
}
struct Texture_1C2E0 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
 virtual void Load(int,int,int);
 virtual void Create(void *,int,int,int,int,int,int,int,int);
 int f4,f8,fC; char pad[0x100];
 Texture_1C2E0 *func_001D6AD0(int);
};
struct Image_1C2E0 {char pad[14]; short width,height; unsigned char bits,pad13; void *pixels;};
Image_1C2E0 *func_001B3560(int,int);
void func_001B3970(Image_1C2E0 *);
struct C_0001C2E0 {
 virtual void v0(); virtual void v1(); virtual void Reset();
 int f4,f8,fC,f10,f14,f18; Texture_1C2E0 **f1C;
 C_0001C2E0 *func_0001C2E0(int,int);
};
struct S_0001C610_V4;
struct C_00197EC0_1C750 { void func_00197EC0(void *out, void *in); };
struct C_0001C750 {
 char pad0[0x130]; float f130[4]; float f140[4]; char pad150[0x40]; float f190[4]; char pad1A0[0x8C]; C_00197EC0_1C750 *f22C;
 void func_0001C750(S_0001C610_V4 a, S_0001C610_V4 b);
};
static __forceinline void Add3_1C750(float *a, float *b) { a[0]+=b[0]; a[1]+=b[1]; a[2]+=b[2]; }
struct C_0001C710 {
    char pad0[0x130];
    float unk130;
    float unk134;
    float unk138;
    void func_0001C710(float a0, float a1, float a2, int a3);
};

struct C_0001CA50 {
    int unk0;
    void func_0001DFF0(void);
    void *func_0001CA50(int flags);
};

struct C_0001C5B0 {
    float x;
    float y;
    float z;
    C_0001C5B0 *func_0001C5B0(float *p);
};

static __forceinline void vec3_set(float *out, float x, float y, float z) {
    out[3] = 1.0f;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

struct C_0001C540 {
    char pad0[0x10];
    int unk10;
    int unk14;
    void func_0001C540(void);
};

struct C_0001CBF0 {
    char pad0[0x44];
    int unk44;
    int func_0001CBF0(void);
};

struct V4_1CE80 { float x, y, z, w; };
struct Obj_1CE80 {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void SetA(V4_1CE80 v); virtual void SetB(V4_1CE80 v);
};
struct Node_1CE80 {
 void func_001A15C0(V4_1CE80 *out);
 void func_001A1540(void *a, void *b);
 void func_001A1620(void *out);
};
float func_0001CAF0(V4_1CE80 *a, float *b);
struct C_0001CE80 {
 char pad0[0x58]; int count; int pad5c; Node_1CE80 *nodes[1];
 int func_0001CE80(Obj_1CE80 *obj, float *p, float *q, int unused, float maxd);
};
extern float D_00275544;

struct S_0001C610_V4 {
    float x;
    float y;
    float z;
    float w;
};

static __forceinline float clamp_0001C870(double v, float lo, float hi) {
    if (hi <= lo) {
        if (v < hi) {
            return hi;
        }
        if (lo < v) {
            return lo;
        }
    } else {
        if (hi < v) {
            return hi;
        }
        if (v < lo) {
            return lo;
        }
    }
    return v;
}

static __forceinline float cross_0001C610(float *a, float *b, int i, int j) {
    return b[j] * a[i] - b[i] * a[j];
}

static __forceinline float dot3_0001C680(float x, float y, float z, float *p) {
    return x * p[0] + y * p[1] + z * p[2];
}

struct C_0001CD50 {
    char pad0[0x5C];
    int unk5C;
    void func_0001CD50(void);
};

struct C_0001CD40 {
    char pad0[0x5C];
    int unk5C;
    void func_0001CD40(void);
};

struct C_0001C9B0 {
    int unk0;
    void func_0001C9B0(void);
};

struct C_0001C970 {
    int unk0;
    void func_0001C970(void);
};

struct C_0001C920 {
    int unk0;
    void func_0001C920(void);
};

struct C_0001C9C0 {
    int unk0;
    void func_00157660(void);
    void *func_0001C9C0(int flags);
};

struct C_0001CA80 {
    int unk0;
    void func_00157660(void);
    void *func_0001CA80(int flags);
};

struct C_0001C520 {
    int unk0;
    char pad4[0x14];
    int unk18;
    int unk1C;
    void func_0001E050(void);
    C_0001C520 *func_0001C520(void);
};

struct C_0013B210 {
    void func_0013B210(void *);
 void func_0013C8A0(int,void *,int,int);
 void func_0013C110(int);
 int func_0013AFD0(int);
 void func_0013AFF0(int,int,int);
};

extern C_0013B210 *D_002BEAAC;

struct C_0001C550 {
    int unk0;
    void func_0001C290(void);
    void func_0001DFF0(void);
    void *func_0001C550(int flags);
};

void func_001E891B(void *p);
void *func_001E8A44(int size);

struct S16_1A {
    int a;
    int b;
    int c;
    int d;
};

struct S36_1A {
    int f0;
    int f4;
    int f8;
    float fC;
    float f10;
    int f14;
    float f18;
    float f1C;
    float f20;
};

struct C_001A30D0 {
    C_001A30D0 *func_001A30D0(void *a0, int a1, int a2, int a3);
};

struct C_001A23F0 {
    char pad0[0x70];
    S16_1A f70;
    S16_1A f80;
    C_001A23F0 *func_001A23F0(S36_1A s0, S16_1A s1, S16_1A s2, int a17, int a18, int a19, int a20, int a21);
};

struct C_0001CD90 {
    void *func_0001CD90(int arg);
};

struct C_0001D0B0 {
    char pad0[4];
    void *f4;
    int f8;
    int fC;
    unsigned char f10;
    int func_0001D0B0(int count, int p2);
};

struct C_00157660 {
    void func_00157660(void);
};

/* object with a deleting destructor in vtable slot 0 */
struct S_0001D200_Obj {
    virtual void d0(int flags);
};

struct S_0001D200_Slot {
    void func_001A13F0(void);
};

/* AuralScape */
struct C_0001D200 {
    void *vtbl;
    char pad4[0x30];
    void *f34;
    char pad38[0x28];
    S_0001D200_Slot *slots[4];
    char pad70[4];
    void *f74;
    char pad78[0x10];
    void *f88;
    char pad8C[0x10];
    void *f9C;
    char padA0[0x14];
    S_0001D200_Obj *fB4;
    void func_0001D200(void);
};
extern int D_00275DFC;

static __forceinline void init_0001D0F0(int *p) {
    p[1] = 0;
    p[0] = 0;
    p[2] = 0;
    p[3] = 0;
    *(unsigned char *)(p + 4) &= 0xfe;
}

/* AuralScape constructor */
struct C_0001D0F0 {
    void *vtbl;
    char pad4[0x20];
    int f24, f28, f2C, f30;
    void *f34;
    int f38, f3C;
    unsigned char f40;
    char pad41[3];
    int f44, f48, f4C, f50, f54, f58, f5C, f60, f64, f68, f6C;
    int f70, f74, f78, f7C;
    unsigned char f80;
    char pad81[3];
    int f84, f88, f8C, f90;
    unsigned char f94;
    char pad95[3];
    int f98, f9C, fA0, fA4;
    unsigned char fA8;
    char padA9[3];
    int fAC;
    unsigned char fB0;
    void func_00157600(int a);
    C_0001D0F0 *func_0001D0F0(int a);
};
char *func_001E8AC0(const char *s, int c);
int func_00135C70(int a, int b, int c, int d);

struct C_0001CD60 {
    int func_00157BF0(int a, int b);
    void func_0001CD60(int a, int b);
};

struct C_0001CC00;

struct S_0001CC00_Slot {
    S_0001CC00_Slot *func_001D5350(void);
    int func_001A2510(C_0001CC00 *owner, int a, int b);
    void func_001A13F0(void);
    int func_001A15F0(int *p);
    int func_001A1580(float *a, float *b);
    int func_001A1650(int *p);
};

struct C_0001CC00 {
    char pad0[0x2C];
    int unk2C;
    char pad30[0x14];
    int unk44;
    char pad48[0x10];
    int unk58;
    char pad5C[4];
    S_0001CC00_Slot *slots[1];
    int func_0001CC00(int idx, int a, int b);
    int func_0001CC80(int idx);
    void func_0001CCE0(int idx, int *a, float *b, float *c, int *d);
};

struct C_0001CA30 {
    void *vtbl;
    int f4;
    void *f8;
    int fC;
    int f10;
    unsigned char f14;
    char pad15[3];
    int f18;
    void *f1C;
    int f20;
    int f24;
    unsigned char f28;
    char pad29[3];
    unsigned char f2C;
    char pad2D[3];
    C_0001CA30 *func_0001C9F0(void);
    void func_0001CA30(void);
    void *func_0001CAB0(unsigned char flags);
};

struct S_0001CBC0_Item {
    char pad0[0x90];
    float f90;
};

static __forceinline void set_vtbl_0001C9F0(void **p, void *v) {
    *p = v;
}

static __forceinline void clear_bit0_0001C9F0(unsigned char *p) {
    *p &= 0xfe;
}

static __forceinline float vec3_abs(float x) {
    int i = *(int *)&x & 0x7fffffff;
    return *(float *)&i;
}

static __forceinline float bits_to_float_1C590(int v) {
    return *(float *)&v;
}

struct C_0001C8F0 {
    void *vtbl;
    char pad4[0x20];
    unsigned char f24;
    char pad25[3];
    int f28;
    int f2C;
    void *func_0001C8F0(int a);
    void func_00157600(int a);
};

struct C_0001C930 {
    void *vtbl;
    char pad4[4];
    unsigned char f8;
    char pad9[0x103];
    int f10C;
    int f110;
    int f114;
    int f118;
    int f11C;
    int f120;
    void *func_0001C930(void);
    void func_0001DFE0(void);
};

struct C_0001C980 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    void *func_0001C980(int a);
    void func_00157600(int a);
};

struct C_0001C4C0_Item {
    virtual void dummy0();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void func_0001C4C0(int *);
};

struct C_0001C4C0 {
    char pad0[0x18];
    int unk18;
    C_0001C4C0_Item **unk1C;
    void func_0001C4C0(int *);
};


C_0001C2E0 *C_0001C2E0::func_0001C2E0(int arg,int file) {
 int version, type, length, pos;
 D_002BEAAC->func_0013C8A0(file,&version,4,1);
 if(version!=1) {D_002BEAAC->func_0013C110(file); Reset(); return 0;}
 D_002BEAAC->func_0013C8A0(file,&f18,4,1);
 D_002BEAAC->func_0013C8A0(file,&type,4,1);
 f1C=(Texture_1C2E0 **)func_001E8A44(f18*4);
 for(int i=0;i<f18;i++) {
 Texture_1C2E0 *t=(Texture_1C2E0 *)func_001E8A44(0x110);
 if(t) t=t->func_001D6AD0(1); else t=0;
 f1C[i]=t;
 if(type==0) f1C[i]->Load(file,arg,0);
 else {
 D_002BEAAC->func_0013C8A0(file,&length,4,1);
 pos=D_002BEAAC->func_0013AFD0(file);
 Image_1C2E0 *image=func_001B3560(file,0);
 int width=image->width;
 int format=image->bits==16?0x613:image->bits==24?0x613:0x22B8;
 int internal=image->bits==16?0x22B:image->bits==24?0x378:0x22B8;
 f1C[i]->Create(image->pixels,width,image->height,width,16,internal,format,2,0);
 func_001B3970(image);
 D_002BEAAC->func_0013AFF0(file,pos+length,0);
 }
 }
 if(f18>0) {f8=f1C[0]->f8; fC=f1C[0]->fC;}
 return this;
}

void C_0001C4C0::func_0001C4C0(int *param_1) {
    int local[3];
    int i = 0;
    if (i < unk18) {
        do {
            C_0001C4C0_Item *item = unk1C[i];
            if (item != 0) {
                item->func_0001C4C0(local);
                param_1[0] = local[0];
                param_1[1] += local[1];
                param_1[2] += local[2];
            }
            i++;
        } while (i < unk18);
    }
}

C_0001C520 *C_0001C520::func_0001C520(void) {
    extern int D_00275BD0;
    func_0001E050();
    unk18 = 0;
    unk1C = 0;
    unk0 = (int)&D_00275BD0;
    return this;
}

void C_0001C540::func_0001C540(void) {
    unk10 = 0;
    unk14 = 2139095039;
}

void *C_0001C550::func_0001C550(int flags) {
    extern int D_00275BD0;
    extern C_0013B210 *D_002BEAAC;
    void func_001E891B(void *);
    unk0 = (int)&D_00275BD0;
    func_0001C290();
    D_002BEAAC->func_0013B210(this);
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

