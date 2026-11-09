/* 15 functions from 0x001D5760 to 0x001D6600, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
extern float D_002755E4;
struct Vertex_001D5AD0 { float x,y; int z,color; int u,v; };
extern float D_00275544, D_002ABDD0, D_002ABDD4;
extern int D_002ABDC4;
extern unsigned char *D_002EFDB8;
void * __stdcall func_001FF410(void *, int);
void func_0014F670(float, float *, float *);
struct Draw_001D5AD0 { void func_001446B0(void *, int, int); };

extern int D_0028F600;
extern char D_002A60B0[];
extern char D_002A5240[];
extern int D_002AA470;
void *func_001E8A44(int size);
extern "C" char *strcpy(char *, const char *);

struct Vec4_001D5760 {
    float x, y, z, w;
    Vec4_001D5760() {
        x = y = z = 0;
        w = 1.0f;
    }
};

struct C_001D5760_Obj {
    virtual void v0(int flags);
};

/* XboxScreenIcon */
struct C_001D5760 {
    void *vtbl;
    Vec4_001D5760 v4;
    Vec4_001D5760 v14;
    float f24;
    float f28;
    float f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    float f40;
    int f44;
    float f48;
    float f4c;
    float f50;
    int f54;
    unsigned char f58;
    char pad59[3];
    C_001D5760_Obj *f5c;
    C_001D5760_Obj *f60;
    C_001D5760();
    void func_001D57E0();
    void func_001D5AD0();
};

struct DXVSStreams_001D5760 {
    virtual void v0(int flags);
    virtual void v1(int arg, int d);
    DXVSStreams_001D5760 *func_00144640();
};

struct C_001D5E90 {
    char *f0;
    Vec4_001D5760 v4;
    Vec4_001D5760 v14;
    Vec4_001D5760 v24;
    float f34;
    int f38;
    int f3c;
    void *f40;
    int f44;
    int f48;
    unsigned short f4c;
    unsigned char f4e;
    unsigned char f4f;
    unsigned char f50;
    char pad51[3];
    int f54;
    int f58;
    DXVSStreams_001D5760 *f5c;
    C_001D5E90();
    void func_001D5F00(int param);
    void func_001D6440(void);
};
#include <string.h>
#include "asm_helpers.h"
extern int D_0028F5F4;
extern int D_00284E94;

void func_001E891B(void *p);
char *func_001E8920(char *dst, const char *src, unsigned int n);
void __stdcall func_00201100(void *p);

struct C_001D5AA0 {
    undefined4 func_001D5AA0(void);
};

struct C_001D6410Obj {
    virtual void destroy(int flags);
};

struct C_001D6410 {
    void *unk0;
    char pad4[0x54];
    C_001D6410Obj *unk58;
    C_001D6410Obj *unk5C;
    void func_001D6410(void);
};

extern int D_0028F600;

struct C_001D63D0 {
    void *vtbl;
    char pad4[0x58];
    C_001D6410Obj *unk5C;
    C_001D6410Obj *unk60;
    C_001D63D0 *func_001D63D0(unsigned int flags);
};

struct C_001D6380 {
    void *vtbl;
    char pad4[0x10];
    void *unk14;
    char pad18[0x4C];
    void *unk64;
    C_001D6380 *func_001D6380(unsigned int flags);
};

struct C_001D61E0Entry {
    char pad0[0xC];
    float fC;
    float f10;
    char pad14[6];
    short s1A;
    int f1C;
};

struct C_001D61E0Scale {
    char pad0[0xC];
    int fC;
};

struct C_001D61E0Owner {
    char pad0[0x58];
    C_001D61E0Entry *tbl[1];
    C_001D61E0Scale *func_0018C070(void);
};

struct C_001D61E0 {
    unsigned char *unk0;
    char pad4[0x30];
    float unk34;
    char pad38[8];
    C_001D61E0Owner *unk40;
    int func_001D61E0(void);
};

template <class T> inline const T &Min_001D5FA0(const T &a, const T &b)
{
    return b < a ? b : a;
}

struct C_001D5FA0Obj {
    void *vtbl;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    char pad18[0x4c];
    int f64;
    char pad68[8];
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
    C_001D5FA0Obj()
    {
        vtbl = &D_0028F5F4;
        f8 = 0;
        fC = 0;
        f64 = 0;
        f10 = 6;
        f14 = 0;
    }
    void func_001D5660(int a, int b);
};

/* screen surface data: reads the size of a surface slot (by index, by .ini-style name, or defaults) */
struct Sub_001D5810 {
    char pad0[0x18];
    short f18;
};
struct Info_001D5810 {
    char pad0[8];
    int f8;
    int fC;
    char pad10[0x44];
    Sub_001D5810 *f54;
};
struct Rec_001D5810 {
    char *name;
    Info_001D5810 *info;
    char pad8[8];
};
struct Tbl_001D5810 {
    char pad0[0x14];
    Rec_001D5810 *f14;
    void func_00161680(void);
    void func_001B2640(void);
};
struct Size_001D5810 {
    char pad0[0x14];
    unsigned w;
    unsigned h;
};
struct Cfg_001D5810 {
    char pad0[0x4cc];
    void func_00168280(void);
    int func_00169490(const char *s, int flag);
    void func_00169710(const char *s);
    void func_00168C50(const char *key, float def, float *out);
    void func_001691E0(void);
};
struct Part_001D5810 {
    virtual void v0();
    virtual void v1(float a, int b);
    int f4;
    char pad8[8];
    C_001D5FA0Obj *f10;
    Part_001D5810 *func_00144640(void);
    void vSlot1(float a, int b);
};
struct C_001D5810 {
    void *vtbl;
    int f4;
    int f8;
    char pad0C[0x18];
    float f24;
    float f28;
    float f2C;
    char pad30[0x1c];
    float f4C;
    float f50;
    int f54;
    unsigned char f58;
    char pad59[3];
    Part_001D5810 *f5C;
    C_001D5FA0Obj *f60;
    C_001D5810 *func_001D5810(float a, int b, int c, int d);
};
extern undefined4 D_002A829C;
extern undefined4 D_002AA6C0;
extern undefined4 D_002A71C0;
extern float D_002755E4;
extern float D_002755E8;
extern float D_00275460;
extern char D_00286764;
extern char D_0028F624;
extern char D_0028F614;
extern char D_0028F604;
int __stdcall func_001FCE40(void *a, int b, Size_001D5810 *out);
void func_00030F30(char *dst, const char *src);

struct C_001D6190 {
    void func_001D5FA0(int a, int b, int c, int d);
    void func_001D6190(int a, const char *s, int b);
};

extern float D_00275544;

static inline void FloatToInt(int *out, float f)
{
    int * volatile p = out;

    *p = (int)f;
}

static __forceinline void FloatToIntLoad(int *out, float f)
{
    int * volatile p = out;

    *p = _mm_cvtt_ss2si(_mm_load_ss(&f));
}

struct C_001D6290Sub {
    short s0;
    short pad2;
    short s4;
    short pad6;
    int f8;
};

struct C_001D6290Entry {
    char pad0[4];
    float f4;
    float f8;
    char padC[8];
    C_001D6290Sub f14;
};

struct C_001D6290Scale {
    char pad0[8];
    int f8;
};

struct C_001D6290Owner {
    char pad0[0x58];
    C_001D6290Entry *tbl[1];
    C_001D6290Scale *func_0018C070(void);
};

struct C_001D6290 {
    unsigned char *unk0;
    char pad4[0x30];
    float unk34;
    char pad38[8];
    C_001D6290Owner *unk40;
    char pad44[0xc];
    unsigned char unk50;
    int func_001D6290(void);
};


C_001D5760::C_001D5760() : vtbl(&D_0028F600)
{
    v4.x = 0;
    v4.y = 0;
    v4.z = 1.0f;
    v4.w = 1.0f;
    v14.x = 0;
    v14.y = 0;
    v14.z = 1.0f;
    v14.w = 1.0f;
    f24 = 1.0f;
    f28 = 1.0f;
    f2c = 1.0f;
    f30 = 0;
    f34 = 0;
    f38 = -1;
    f3c = 0;
    f40 = 1.0f;
    f44 = 0;
    f48 = 1.0f;
    f4c = 1.0f;
    f50 = 1.0f;
    f5c = 0;
    f60 = 0;
    f58 = (f58 & 0xf7) | 7;
}

void C_001D5760::func_001D57E0()
{
    vtbl = &D_0028F600;
    if (f5c != 0) {
        f5c->v0(1);
    }
    if (f60 != 0) {
        f60->v0(1);
    }
}

C_001D5810 *C_001D5810::func_001D5810(float a, int b, int c, int d)
{
    float w;
    float h;
    int idx;
    int n;
    int type;
    char name[0x104];
    Cfg_001D5810 cfg;
    Size_001D5810 sz;
    C_001D5FA0Obj *p;
    Part_001D5810 *part;
    Info_001D5810 *info;
    char *src;
    char *dst;
    char ch;

    part = (Part_001D5810 *)func_001E8A44(0x14);
    f5C = part ? part->func_00144640() : 0;
    f5C->v1(a, D_002AA470);
    ((Tbl_001D5810 *)D_002A829C)->func_00161680();
    ((Tbl_001D5810 *)D_002AA6C0)->func_001B2640();
    n = f5C->f4;
    idx = n * 16;
    type = ((Tbl_001D5810 *)D_002A829C)->f14[n].info->f54->f18;
    h = 0;
    w = 0;
    if (type == -1 || type == -2) {
        goto L1c8;
    }
    if (type == -3) {
        goto Ldef;
    }
    if (type == -4) {
        goto L1c8;
    }
    if (type >= 0) {
        info = ((Tbl_001D5810 *)D_002AA6C0)->f14[type].info;
        h = (float)info->f8;
        w = (float)info->fC;
    } else {
        func_001FCE40(((Tbl_001D5810 *)D_002A71C0)->f14[-type].info, 0, &sz);
        h = (float)sz.w;
        w = (float)sz.h;
    }
    goto Ldone;
L1c8:
    if (type == -3 || type == -4) {
        goto Ldef;
    }
    cfg.func_00168280();
    src = *(char **)((char *)((Tbl_001D5810 *)D_002A829C)->f14 + idx);
    dst = name;
    do {
        ch = *src++;
        *dst++ = ch;
    } while (ch != 0);
    func_00030F30(name, &D_00286764);
    if (cfg.func_00169490(name, 0) != 0) {
        cfg.func_00169710(&D_0028F624);
        cfg.func_00168C50(&D_0028F614, 1.0f, &h);
        cfg.func_00168C50(&D_0028F604, 1.0f, &w);
    }
    cfg.func_001691E0();
    goto Ldone;
Ldef:
    h = 640.0f;
    w = 448.0f;
Ldone:
    f4C = D_00275460 / h;
    f28 = h;
    f2C = w;
    f4 = b;
    f8 = c;
    f50 = D_00275460 / w;
    p = (C_001D5FA0Obj *)func_001E8A44(0x70);
    if (p != 0) {
        p->vtbl = &D_0028F5F4;
        p->f8 = 0;
        p->fC = 0;
        p->f64 = 0;
        p->f10 = 6;
        p->f14 = 0;
    } else {
        p = 0;
    }
    f60 = p;
    f5C->f10 = p;
    f60->func_001D5660(4, 6);
    f58 = f58 | 7;
    f54 = d;
    if (d != 0) {
        f24 = f24 * 0.5f;
    }
    return this;
}

undefined4 C_001D5AA0::func_001D5AA0(void)
{
  extern undefined4 D_002A829C;
  extern undefined4 D_002AA6C0;
  int in_ECX = (int)this;
  
  return *(undefined4 *)
          (*(short *)(*(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x5c) + 4) * 0x10 + 4 +
                                       *(int *)(D_002A829C + 0x14)) + 0x54) + 0x18) * 0x10 + 4 +
          *(int *)(D_002AA6C0 + 0x14));
}

void C_001D5760::func_001D5AD0()
{
 Vertex_001D5AD0 *v=0;
 if(f58&7) v=(Vertex_001D5AD0*)func_001FF410(*(void**)((char*)f60+0x14),0);
 if(f58&1) {
  float w=f28*f24,h=f2c*f24;
  float x,y,r,b;
  if(f54) { x=v4.x-w; y=v4.y-h; r=v4.x+w; b=v4.y+h; }
  else { x=v4.x; y=v4.y; r=x+w; b=h+y; }
  volatile int z=f34;
  if(*(float*)&f30 != D_00275544) {
   float cs=0,sn=0;
   x-=v14.x;y-=v14.y;r-=v14.x;b-=v14.y;
   func_0014F670(*(float*)&f30,&sn,&cs);
   float xc=x*cs,xs=x*sn,yc=y*cs,ys=y*sn,rc=r*cs,rs=r*sn,bc=b*cs,bs=b*sn;
   v[0].x=(xc-ys+v14.x)*D_002ABDD0;
   v[0].y=(yc+xs+v14.y)*D_002ABDD4; v[0].z=z;
   v[1].x=(xc-bs+v14.x)*D_002ABDD0;
   v[1].y=(bc+xs+v14.y)*D_002ABDD4; v[1].z=z;
   v[2].x=(rc-ys+v14.x)*D_002ABDD0;
   v[2].y=(rs+yc+v14.y)*D_002ABDD4; v[2].z=z;
   v[3].x=(rc-bs+v14.x)*D_002ABDD0;
   v[3].y=(bc+rs+v14.y)*D_002ABDD4;
  } else {
   v[1].x=v[0].x=x*D_002ABDD0;
   v[2].y=v[0].y=D_002ABDD4*y;
   v[3].y=v[1].y=D_002ABDD4*b;
   v[3].x=v[2].x=D_002ABDD0*r;
   v[0].z=z;v[1].z=z;v[2].z=z;
  }
  v[3].z=z; f58&=~1;
 }
 if(f58&2) { v[0].color=f38;v[1].color=f38;v[2].color=f38;v[3].color=f38;f58&=~2; }
 if(f58&4) { v[0].u=f3c;v[0].v=f44;v[1].u=f3c;v[1].v=*(int*)&f48;v[2].u=*(int*)&f40;v[2].v=f44;v[3].u=*(int*)&f40;v[3].v=*(int*)&f48;f58&=~4; }
 float *m=(float*)((char*)f60+0x20);
 AsmIdentityMatrix(m);
 *(float*)((char*)f60+0x2c)=(float)*(unsigned int*)(*(char**)(D_002EFDB8+4)+0x1e0);
 *(float*)((char*)f60+0x3c)=(float)*(unsigned int*)(*(char**)(D_002EFDB8+4)+0x1e4);
 if(D_002ABDC4) ((Draw_001D5AD0*)f5c)->func_001446B0(f60,0,-1);
}

void C_001D5E90::func_001D5F00(int param)
{
    char buf[260];
    DXVSStreams_001D5760 *m;

    f0 = (char *)func_001E8A44(f4f + 1);
    strcpy(buf, D_002A60B0);
    strcpy(D_002A60B0, D_002A5240);
    m = (DXVSStreams_001D5760 *)func_001E8A44(0x14);
    f5c = m ? m->func_00144640() : 0;
    f5c->v1(param, D_002AA470);
    strcpy(D_002A60B0, buf);
}

void C_001D6190::func_001D5FA0(int a, int b, int c, int d)
{
 ((C_001D5E90 *)this)->f4e |= 0x20;
 char *p = ((C_001D5E90 *)this)->f0;
 if (p) func_001E891B(p);
 DXVSStreams_001D5760 *s = ((C_001D5E90 *)this)->f5c;
 if (s) s->v0(1);
 s = (DXVSStreams_001D5760 *)((C_001D5E90 *)this)->f58;
 if (s) s->v0(1);
 ((C_001D5E90 *)this)->f4f = (unsigned char)c;
 ((C_001D5E90 *)this)->f0 = 0;
 ((C_001D5E90 *)this)->f40 = (void *)a;
 ((C_001D5E90 *)this)->f54 = (int)((C_001D5E90 *)this)->f40 + 0x58;
 if (b == 0) ((C_001D5E90 *)this)->func_001D5F00(((int *)((C_001D5E90 *)this)->f40)[1]);
 else ((C_001D5E90 *)this)->func_001D5F00(b);
 if (d) {
 int slen = strlen((const char *)d);
 int lim = ((C_001D5E90 *)this)->f4f;
 int n = AsmMinI(slen, lim);
 ((C_001D5E90 *)this)->f50 = (unsigned char)n;
 func_001E8920(((C_001D5E90 *)this)->f0, (const char *)d, ((C_001D5E90 *)this)->f50);
 ((C_001D5E90 *)this)->f0[((C_001D5E90 *)this)->f50] = 0;
 } else { ((C_001D5E90 *)this)->f50 = 0; *((C_001D5E90 *)this)->f0 = 0; }
 ((C_001D5E90 *)this)->v14.x = 0; ((C_001D5E90 *)this)->v14.y = 0;
 ((C_001D5E90 *)this)->v4.x = 0; ((C_001D5E90 *)this)->v4.y = 0;
 ((C_001D5E90 *)this)->f48 = -1; ((C_001D5E90 *)this)->f4c = 0xff;
 ((C_001D5E90 *)this)->f34 = 1.0f; ((C_001D5E90 *)this)->f38 = 0;
 ((C_001D5E90 *)this)->v24.x = 0; ((C_001D5E90 *)this)->v24.y = 0;
 ((C_001D5E90 *)this)->f3c = 0; ((C_001D5E90 *)this)->f44 = 0;
 ((C_001D5E90 *)this)->f4e |= 1; ((C_001D5E90 *)this)->f4e |= 2; ((C_001D5E90 *)this)->f4e |= 4; ((C_001D5E90 *)this)->f4e |= 8; ((C_001D5E90 *)this)->f4e &= ~0x10;
 C_001D5FA0Obj *o = (C_001D5FA0Obj *)func_001E8A44(0x70);
 if (o) { o->vtbl = &D_0028F5F4; o->f8 = 0; o->fC = 0; o->f64 = 0; o->f10 = 6; o->f14 = 0; } else o = 0;
 ((C_001D5E90 *)this)->f58 = (int)o;
 ((int *)((C_001D5E90 *)this)->f5c)[4] = ((C_001D5E90 *)this)->f58;
 ((C_001D5FA0Obj *)((C_001D5E90 *)this)->f58)->func_001D5660(((C_001D5E90 *)this)->f4f * 6, 5);
}

C_001D5E90::C_001D5E90()
{
    f34 = 1.0f;
    f0 = 0;
    f38 = 0;
    f3c = 0;
    f40 = 0;
    f44 = 0;
    f48 = -1;
    f4c = 0xff;
    f4e &= 0xc0;
    f4f = 0;
    f50 = 0;
    f54 = 0;
    f5c = 0;
    f58 = 0;
}


void C_001D6190::func_001D6190(int a, const char *s, int b)
{
    if (s != 0) {
        func_001D5FA0(a, b, strlen(s), (int)s);
    } else {
        func_001D5FA0(a, b, 0x28, 0);
    }
}

int C_001D61E0::func_001D61E0(void)
{
    int result;
    C_001D61E0Entry *e = unk40->tbl[*unk0];
    if (e == 0) {
        C_001D61E0Entry **p = unk40->tbl;
        do {
            e = *p++;
            if (e) break;
            e = *unk40->tbl;
        } while (e == 0);
    }
    result = 0;
    if (e->f1C == 0) {
        float d = e->f10 - e->fC;
        float f = (float)unk40->func_0018C070()->fC * unk34 * d;
        AsmFloatToInt(f, &result);
    } else {
        float f = (float)(e->s1A + 1) * unk34;
        AsmFloatToInt(f, &result);
    }
    return result;
}

int C_001D6290::func_001D6290(void)
{
    int result;
    float total = D_00275544;
    C_001D6290Sub *last = 0;

    if (unk50 == 0) {
        return 0;
    }
    for (int i = 0; i < unk50; i++) {
        C_001D6290Entry *e = unk40->tbl[unk0[i]];
        if (e == 0) {
            e = unk40->tbl[0];
        }
        if (e != 0) {
            last = &e->f14;
            if (last->f8 == 0) {
                total += e->f8 - e->f4;
            } else {
                total += (float)(last->s0 + last->s4);
            }
        }
    }
    if (last != 0 && last->f8 == 0) {
        AsmFloatToInt((float)unk40->func_0018C070()->f8 * unk34 * total, &result);
        return result;
    }
    AsmFloatToInt(total * unk34, &result);
    return result;
}

C_001D6380 *C_001D6380::func_001D6380(unsigned int flags)
{
    vtbl = (void *)&D_0028F5F4;
    if (unk64 != 0) {
        func_001E891B(unk64);
    }
    if (unk14 != 0) {
        func_00201100(unk14);
    }
    vtbl = (void *)&D_00284E94;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

C_001D63D0 *C_001D63D0::func_001D63D0(unsigned int flags)
{
    vtbl = (void *)&D_0028F600;
    if (unk5C != 0) {
        unk5C->destroy(1);
    }
    if (unk60 != 0) {
        unk60->destroy(1);
    }
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001D6410::func_001D6410(void)
{
    C_001D6410Obj *o;

    if (unk0 != 0) {
        func_001E891B(unk0);
    }
    o = unk5C;
    if (o != 0) {
        o->destroy(1);
    }
    o = unk58;
    if (o != 0) {
        o->destroy(1);
    }
}

void C_001D5E90::func_001D6440(void)
{
 int tmp;
 float w, h;
 if (this->f44 != 0 && *this->f0 != 0) {
 w = (float)((C_001D6290 *)this)->func_001D6290();
 h = (float)((C_001D61E0 *)this)->func_001D61E0();
 switch (this->f44) {
 case 0: this->v14.x = this->v4.x; this->v14.y = this->v4.y; goto done;
 case 1: AsmFloatToInt(this->v4.x - *(volatile float *)&w * D_002755E8, &tmp); this->v14.x = (float)tmp; break;
 case 2: this->v14.x = this->v4.x; AsmFloatToInt(this->v4.y - *(volatile float *)&h * D_002755E8, &tmp); this->v14.y = (float)tmp; goto done;
 case 3: AsmFloatToInt(this->v4.x - *(volatile float *)&w * D_002755E8, &tmp); this->v14.x = (float)tmp; AsmFloatToInt(this->v4.y - *(volatile float *)&h * D_002755E8, &tmp); this->v14.y = (float)tmp; goto done;
 default: AsmFloatToInt(this->v4.x - w, &tmp); this->v14.x = (float)tmp; break;
 }
 } else { this->v14.x = this->v4.x; }
 this->v14.y = this->v4.y;
 this->f4e |= 4;
done: this->f4e &= ~2; this->f4e |= 0x10;
}

