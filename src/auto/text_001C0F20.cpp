/* 12 functions from 0x001C0F20 to 0x001C19D0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
extern int D_00275AD4, D_00275AC8, D_0027CEE4;
extern int D_0028DC84, D_0028DC7C, D_0028DC74, D_0028DC6C, D_0028DC60;
extern int D_0028DC54, D_0028DC48, D_0028DC3C, D_0028DEEC, D_00276F28;
void func_001ADCC0(void *out, int size, int *format, void *name);
struct C_001C10D0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2c;
    int f30;
    int f34;
    void func_001C10D0(void);
};

struct C_001C1110 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    char pad4[0x28];
    int f2c;
    char pad30[8];
    void *f38;
    void *f3c;
    __forceinline void Check(void)
    {
        if (f38 == 0 || f3c == 0) {
            if (f38 != 0) {
                v7();
            }
            if (f3c != 0) {
                v5();
            }
        }
    }
    void func_001C1110(void);
};

struct S_001C0F20_Stream {
    void func_00168C20(int *name, int value, int *out);
    void func_00168C50(int *name, float value, void *out);
    int func_00168CB0(int *name, void *value, void *out);
};

extern int D_0028DD94;
extern int D_0028DD88;
extern int D_0028DD80;
extern int D_0028DD74;
extern int D_0028DD6C;
extern int D_0028DD64;
extern int D_0028DD5C;
extern int D_0028DD54;
extern int D_0028DD48;
extern int D_0028DD3C;
extern int D_0028DD34;
extern int D_0028DD2C;

struct C_001C0F20 {
    char pad0[0x24];
    void *f24;
    int f28;
    char pad2C[0x68 - 0x2c];
    int f68[12];
    C_001C0F20 *func_001C0F20(int a, S_001C0F20_Stream *stream, void *owner);
};

struct C_001D5AD0 {
    void func_001D5AD0(void);
};

struct C_00157960 {
    void func_00157960(void);
};

struct C_001C1950 {
    char pad0[0x68];
    C_001D5AD0 *f68;
    void func_001C1950(void);
};

struct C_001C1030_Handler {
    void func_001BEB90(int value);
    void func_001BEC10(int value);
    void func_001BEC90(int value, int v);
};

struct C_001C1030_Mid {
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
    virtual void v29();
    virtual void v30();
    virtual void v31(int a, int b, int c, int d);
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    char pad4[0x114];
    C_001C1030_Handler *f118;
};

struct C_001C1030 {
    char pad0[0x24];
    C_001C1030_Mid *f24;
    char pad28[0x40];
    int f68[1];
    void func_001C1030(int slot, int value, int key);
};

struct C_001C13A0_Obj {
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
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void *v35(char *, int, int);
    C_001C13A0_Obj *func_00143580(int);
    void func_00199650(void *);
    void func_00197E70(void *);
    void func_00198F50(void *, void *, int, int, int);
    void func_00197B40(void *, void *);
    void func_00199BE0(void *);
};
struct C_001C13A0 {
    char pad0[0x24];
    C_001C1030_Mid *f24;
    char pad28[0x40];
    C_001C13A0_Obj *f68;
    char f6c[0x50];
    char fbc[0x10];
    char fcc[0x10];
    char fdc[0x110];
    int f1ec, f1f0, f1f4;
    char pad1f8[8];
    int f200;
    int func_001577A0(void *, int);
    int func_001C13A0();
    C_001C13A0 *func_001C11E0(int a, void *name, S_001C0F20_Stream *stream);
};
void *func_001E8A44(unsigned int);

extern int D_0028DE54;
extern int D_0028DF04;
extern int D_0028DFE4;
void __stdcall func_00197EA0(void *p);

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_001C0730 {
    void func_001C0730(int a, int b);
};

struct S_001C1490_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    void func_00157810(void);
};

struct C_001C1490 {
    char pad0[0x68];
    union {
        S_001C1490_Obj *f68;
        S_001C1490_Obj *f68a[1];
    };
    char pad6c[0x180];
    int f1ec;
    char pad1f0[0x10];
    int f200;
    int func_001C1490(void);
};

struct C_001C1150 {
    void *vtbl;
    char pad4[0xB4];
    u32 fB8;
    u32 fBC;
    u32 fC0;
    u32 fC4;
    u32 fC8;
    u32 fCC;
    u32 fD0;
    u32 fD4;
    u32 fD8;
    char padDC[0x104];
    u32 f1E0;
    u32 f1E4;
    u32 f1E8;
    u32 f1EC;
    u32 f1F0;
    u32 f1F4;
    u32 f1F8;
    char pad1FC[0x44];
    u32 f240;
    C_001C1150 *func_001C1150(int a, int b);
};

struct C_001C14D0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44[8];
    u32 f64;
    u32 f68;
    C_001C14D0 *func_001C14D0(int a, int b);
};

struct Sub_001C1970 {
    char pad0[0x64];
    void func_001D5760();
};

struct C_001C1970 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44[8];
    u32 f64;
    Sub_001C1970 sub68;
    Sub_001C1970 subCC;
    C_001C1970 *func_001C1970(int a, int b);
};

extern int D_0028D75C, D_0028DFD8, D_0028286C, D_0028DFD0, D_0028DFC8, D_0028DFBC;
extern int D_0028DFB4, D_0028DFA8, D_0028DF9C, D_00282854, D_0028283C, D_0027DE44;
extern float D_00275544;
extern "C" char *func_001E8AC0(const char *s, int c);
struct S_001C1520_Global {
    char pad0[0x6b4];
    int f6b4;
};
extern S_001C1520_Global *D_002F07B8;
struct S_001C1520_Sprite {
    char pad0[4];
    float f4;
    float f8;
    char padC[8];
    float f14;
    float f18;
    char pad1C[0xc];
    float f28;
    float f2c;
    float f30;
    float f34;
    union {
        struct {
            unsigned rgb : 24;
            unsigned alpha : 8;
        };
        unsigned color;
    };
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    char pad54[4];
    unsigned char dirty : 1;
    unsigned char colorDirty : 1;
    unsigned char rectSet : 1;
    char pad59[0xb];
    void SetPos(float x, float y) {
        if (f4 != x || f8 != y) { f4 = x; f8 = y; dirty = 1; }
    }
    void SetWidth(float w) {
        if (f28 != w) { f28 = w; dirty = 1; }
    }
    void SetHeight(float h) {
        if (f2c != h) { f2c = h; dirty = 1; }
    }
    void SetScale(float s) {
        if (f34 != s) { f34 = s; dirty = 1; }
    }
    void SetDepth(float d) {
        if (f30 != d) { f30 = d; dirty = 1; }
    }
    void SetOffset(float x, float y) {
        if (f14 != x || f18 != y) { f14 = x; f18 = y; dirty = 1; }
    }
    void SetAlpha(short a) {
        color = (a << 24) | (color & 0xffffff);
        colorDirty = 1;
    }
    void SetUVi(int x0, int x1, int y0, int y1) {
        rectSet = 1;
        f3c = x0 * f4c;
        f40 = x1 * f4c;
        f44 = y0 * f50;
        f48 = y1 * f50;
    }
    void SetUV(float x0, float x1, float y0, float y1) {
        rectSet = 1;
        f3c = x0 * f4c;
        f40 = x1 * f4c;
        f44 = y0 * f50;
        f48 = y1 * f50;
    }
    S_001C1520_Sprite *func_001D5760();
    S_001C1520_Sprite *func_001D5810(char *name, int a, int b, int c);
};
struct S_001C1520_Stream {
    void func_00168BE0(int *key, int *def, char *dst, int n);
    int func_00168C20(int *name, int value, int *out);
    int func_00168C50(int *name, float value, float *out);
    int func_00168CB0(int *name, float *value, float *out);
    int func_00168E70(int *name, int *value, int *out);
};
struct C_001C1520 {
    char pad0[0x24];
    void *f24;
    int f28;
    char pad2C[0x3c];
    S_001C1520_Sprite *f68;
    void func_001BF600(S_001C1520_Stream *stream);
    C_001C1520 *func_001C1520(int a, S_001C1520_Stream *stream, void *owner);
};

C_001C0F20 *C_001C0F20::func_001C0F20(int a, S_001C0F20_Stream *stream, void *owner)
{
    f28 = a;
    f24 = owner;
    stream->func_00168C20(&D_0028DD94, 0, &f68[0]);
    stream->func_00168C20(&D_0028DD88, 0, &f68[1]);
    stream->func_00168C20(&D_0028DD80, 0, &f68[2]);
    stream->func_00168C20(&D_0028DD74, 0, &f68[3]);
    stream->func_00168C20(&D_0028DD6C, 0, &f68[4]);
    stream->func_00168C20(&D_0028DD64, 0, &f68[5]);
    stream->func_00168C20(&D_0028DD5C, 0, &f68[6]);
    stream->func_00168C20(&D_0028DD54, 0, &f68[7]);
    stream->func_00168C20(&D_0028DD48, 0, &f68[8]);
    stream->func_00168C20(&D_0028DD3C, 0, &f68[9]);
    stream->func_00168C20(&D_0028DD34, 0, &f68[10]);
    stream->func_00168C20(&D_0028DD2C, 0, &f68[11]);
    return this;
}

void C_001C1030::func_001C1030(int slot, int value, int key)
{
  int v = f68[slot];
  C_001C1030 *self = this;

  switch (v) {
  case -2:
    self->f24->f118->func_001BEC10(value);
    self->f24->v31(v, 1, 0, 0);
    return;
  case -1:
    self->f24->f118->func_001BEB90(value);
    self->f24->v31(v, 1, 0, 0);
    return;
  }
  if (v > 0) {
    self->f24->f118->func_001BEC90(value, v);
  }
  if (v != 0) {
    self->f24->v31(v, 1, 0, 0);
  }
}

void C_001C10D0::func_001C10D0(void)
{
    f2c = 1;
    if (f30 == 0) {
        goto check;
    }
    if (f34 != 0) {
        goto done;
    }
check:
    if (f30 != 0) {
        v7();
    }
    if (f34 != 0) {
        v5();
    }
done:
    v7();
}

void C_001C1110::func_001C1110(void)
{
  f2c = 0;
  if (f38 == 0 || f3c == 0) {
    if (f38 != 0) {
      v7();
    }
    if (f3c != 0) {
      v5();
    }
  }
  v5();
}

C_001C1150 *C_001C1150::func_001C1150(int a, int b)
{
    u32 *p;

    ((C_001C0730 *)this)->func_001C0730(a, b);
    vtbl = &D_0028DE54;
    p = (u32 *)&fBC;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    p = (u32 *)&fCC;
    p[2] = 0;
    p[1] = 0;
    p[0] = 0;
    p[3] = 0x3f800000;
    fB8 = 0;
    f240 = 0;
    f1E0 = 0;
    f1E4 = 0;
    f1E8 = 0;
    f1F8 = 0;
    f1EC = 0;
    f1F0 = 0;
    f1F4 = 0;
    return this;
}

C_001C13A0 *C_001C13A0::func_001C11E0(int a, void *name, S_001C0F20_Stream *stream)
{
 float v[4];
 v[0]=1; v[1]=1; v[2]=1; v[3]=1;
 f1f0=stream->func_00168CB0(&D_00275AD4,v,f6c);
 v[0]=0; v[1]=0; v[2]=1; v[3]=1;
 f1f4=stream->func_00168CB0(&D_00275AC8,v,fbc);
 f1f4=f1f4 && (v[0]=0,v[1]=0,v[2]=1,v[3]=1,stream->func_00168CB0(&D_0027CEE4,v,fcc));
 stream->func_00168C20(&D_0028DC84,0,(int*)((char*)this+0xb8));
 stream->func_00168C20(&D_0028DC7C,0,(int*)((char*)this+0x98));
 stream->func_00168C20(&D_0028DC74,0,(int*)((char*)this+0x9c));
 stream->func_00168C20(&D_0028DC6C,0,(int*)((char*)this+0xa0));
 stream->func_00168C20(&D_0028DC60,1,(int*)((char*)this+0xa4));
 stream->func_00168C50(&D_0028DC54,0,(char*)this+0x8c);
 stream->func_00168C50(&D_0028DC48,0,(char*)this+0x90);
 stream->func_00168C50(&D_0028DC3C,0,(char*)this+0x94);
 stream->func_00168C20(&D_0028DEEC,0,(int*)((char*)this+0x1e8));
 *(int*)((char*)this+0x28)=a;
 func_001ADCC0(fdc,0x104,&D_00276F28,name);
 return this;
}

int C_001C13A0::func_001C13A0()
{
    int result = 1;
    void *mem = func_001E8A44(0x1e0);
    f68 = mem ? ((C_001C13A0_Obj *)mem)->func_00143580(result) : 0;
    if (!func_001577A0(f68->v35(fdc, 0, 0), -1)) {
        result = 0;
    } else {
    if (f1f0) f68->func_00199650(f6c);
    else f68->func_00197E70(f6c);
    if (f1f4) f68->func_00198F50(fbc, fcc, 1, 0, 0);
    else f68->func_00197B40(fbc, fcc);
    if (f1ec) f68->func_00199BE0(&f200);
    f1ec = 0;
    }
    f24->v40();
    return result;
}

int C_001C1490::func_001C1490(void)
{
    if (f68) {
        f1ec = 1;
        func_00197EA0(&f200);
        f68->func_00157810();
        f68->v2();
        f68 = 0;
    }
    return 1;
}

C_001C14D0 *C_001C14D0::func_001C14D0(int a, int b)
{
    int i;

    ((C_00157600 *)this)->func_00157600(b);
    f24 = a;
    f2c = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3c = 0;
    f40 = 0;
    for (i = 0; i < 8; i++) {
        f44[i] = 0;
    }
    f64 = 0;
    vtbl = &D_0028DF04;
    f68 = 0;
    return this;
}

void C_001C1950::func_001C1950(void)
{
  f68->func_001D5AD0();
  ((C_00157960 *)this)->func_00157960();
}

C_001C1970 *C_001C1970::func_001C1970(int a, int b)
{
    int i;

    ((C_00157600 *)this)->func_00157600(b);
    f24 = a;
    f2c = 0;
    f28 = 0;
    f30 = 0;
    f34 = 0;
    f38 = 0;
    f3c = 0;
    f40 = 0;
    for (i = 0; i < 8; i++) {
        f44[i] = 0;
    }
    f64 = 0;
    vtbl = &D_0028DFE4;
    sub68.func_001D5760();
    subCC.func_001D5760();
    return this;
}
extern int D_00275AD4, D_00275AC8, D_0027CEE4;
extern int D_0028DC84, D_0028DC7C, D_0028DC74, D_0028DC6C, D_0028DC60;
extern int D_0028DC54, D_0028DC48, D_0028DC3C, D_0028DEEC, D_00276F28;
void func_001ADCC0(void *out, int size, int *format, void *name);
