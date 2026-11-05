/* 22 functions from 0x00191470 to 0x00192470, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <string.h>
struct C_001923D0 {
    undefined4 func_001923D0(byte param_1);
};

extern char D_00275630;
extern char D_00010900;
extern int D_0028AB24;
extern int D_0028AAAC;
extern char D_0028AA90;
extern unsigned char D_002A9818;

int func_001E91F4(int p);
void func_001E8390(void *p);

extern float D_00275544;
double func_001E9649(int s);

struct C_0018F390 {
    void func_0018F390(char *name, int id, int *value);
    void func_0018F390(char *name, int id, char *value);
    void func_0018F390(char *name, int id, float *value);
};

struct C_00191640_Node {
    char pad0[0x20];
    float unk20;
};

struct C_001923F0 {
    void *vtbl;
    char pad4[0x24];
    int unk28;
    int unk2C;
    int unk30;
    int unk34;
    int unk38;
    void func_00192720();
    C_001923F0 *func_001923F0(int a);
};

/* 4x4 float matrix, 16-byte aligned for movaps */
__declspec(align(16)) struct S_00192310_Mat {
    float m[16];
};


void func_001E8920(void *dst, const void *src, int n);

struct C_000264C0 {
    void func_000264C0(void *param);
};

struct C_00191470_Vec {
    int x;
    int y;
    int z;
    int w;
    void Set(const int &a, const int &b, const int &c, const int &d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

/* the value holder: name[0x18], flags, size, then a vector / matrix slot */
struct C_00191470 {
    char f0[0x18];
    unsigned int f18;
    int f1C;
    C_00191470_Vec f20;
    C_00191470_Vec f30;
    void func_00191470(unsigned int a0);
    void func_00191510(const char *a0, unsigned int a1);
    void SetName(const char *src, int max)
    {
        int len = strlen(src);
        int n = max > len ? len : max;

        func_001E8920(this, src, n);
        ((char *)this)[n] = 0;
    }
};

struct C_001915A0 {
    C_00191470_Vec f0;
    C_00191470_Vec f10;
    void *func_001915A0(unsigned int a0, C_00191470_Vec *a1, int *a2);
};

extern char D_0028AA84;
extern C_00191470_Vec D_002A97D8;
extern int D_002A97DC;
extern int D_002A97E0;
extern int D_002A97E4;

void func_001E8920(void *dst, const void *src, int n);

static __inline const int &Min(const int &a, const int &b)
{
    return a > b ? b : a;
}

static __inline void ZeroMatrix(S_00192310_Mat &m)
{
    __m128 *v = (__m128 *)&m;

    v[0] = _mm_setzero_ps();
    v[1] = _mm_setzero_ps();
    v[2] = _mm_setzero_ps();
    v[3] = _mm_setzero_ps();
}

struct C_00157600 {
    void func_00157600(int a);
};

struct C_002AAEC8 {
    char func_001BC6E0(char *name);
};
extern C_002AAEC8 *D_002AAEC8;

struct C_00192370 {
    void *vtbl;
    char pad4[0x20];
    unsigned short f24;
    unsigned char f26;
    unsigned char f27;
    C_00192370 *func_00192370(int a);
};

struct C_001927A0 {
    void func_001927A0(void);
};

struct C_00192420 {
    void *vtbl;
    char pad4[0x28];
    int f2c;
    int pad30;
    int *f34;
    void func_00192420(void);
};


void C_00191470::func_00191470(unsigned int a0)
{
    C_00191470 * volatile self = this;

    switch ((a0 >> 16) & 0xff) {
    case 0:
        f20.Set(*(int *)&D_002A97D8, D_002A97DC, D_002A97E0, D_002A97E4);
        break;
    case 1: {
        S_00192310_Mat * volatile p;
        S_00192310_Mat m;
        S_00192310_Mat copy;
        __m128 *v;

        p = &m;
        v = (__m128 *)p;
        v[0] = _mm_setzero_ps();
        v[1] = _mm_setzero_ps();
        v[2] = _mm_setzero_ps();
        v[3] = _mm_setzero_ps();
        copy = m;
        ((C_000264C0 *)((char *)self + 0x30))->func_000264C0(&copy);
        break;
    }
    }
}

void C_00191470::func_00191510(const char * volatile a0, volatile unsigned int a1)
{
    C_00191470 * volatile self = this;
    volatile int len;
    volatile int lim;
    volatile int n;
    int a;
    int b;
    int k;

    switch ((a1 >> 16) & 0xff) {
    case 0:
        f1C = 0x10;
        break;
    case 1:
        f1C = 0x40;
        break;
    }
    len = strlen(a0);
    lim = 0x17;
    a = lim;
    b = len;
    n = a > b ? b : a;
    k = n;
    func_001E8920(self, a0, k);
    ((char *)self)[k] = 0;
    self->f18 = a1;
}

void *C_001915A0::func_001915A0(unsigned int a0, C_00191470_Vec *a1, int *a2)
{
    switch ((a0 >> 16) & 0xff) {
    case 0:
        f0 = *a1;
        *a2 = 0x10;
        return &f0;
    case 1:
        ((C_000264C0 *)&f10)->func_000264C0(a1);
        *a2 = 0x40;
        return &f10;
    }
    return 0;
}

void func_00191610(int name, C_0018F390 *obj)
{
    float value = (float)func_001E9649(name);
    obj->func_0018F390(&D_00275630, 0x100, &value);
}

void func_00191640(C_00191640_Node *a, C_00191640_Node *b, int op, C_0018F390 *obj)
{
    float x = a->unk20;
    float y = b->unk20;
    float r = -1.0f;

    switch (op) {
    case 0x16:
        r = y + x;
        break;
    case 0x17:
        r = x - y;
        break;
    case 0x18:
        r = y * x;
        break;
    case 0x19:
        if (y != D_00275544) {
            r = x / y;
        }
        break;
    }
    obj->func_0018F390(&D_00275630, 0x100, &r);
}

void func_001917E0(int name, C_0018F390 *obj)
{
    int value = func_001E91F4(name);
    obj->func_0018F390(&D_00275630, 0x200, &value);
}

void func_00191970(int a0, int a1, int a2, C_0018F390 *obj)
{
    char *value = &D_0028AA84;
    obj->func_0018F390(&D_00275630, 0x300, (int *)&value);
}

void func_00191C20(int name, C_0018F390 *obj)
{
    int value = func_001E91F4(name);
    obj->func_0018F390(&D_00275630, 0x700, &value);
}

void func_00191DA0(int name, C_0018F390 *obj)
{
    char value = func_001E91F4(name);
    obj->func_0018F390(&D_00275630, 0x500, &value);
}

void func_00191F20(int name, C_0018F390 *obj)
{
    int value = func_001E91F4(name);
    obj->func_0018F390(&D_00275630, 0x600, &value);
}

int func_00192300(void) {
    return 0;
}

void func_00192310(int unused, C_0018F390 *obj)
{
    S_00192310_Mat m;
    S_00192310_Mat copy;
    S_00192310_Mat * volatile p;
    __m128 *v;

    p = &m;
    v = (__m128 *)p;
    v[0] = _mm_setzero_ps();
    v[1] = _mm_setzero_ps();
    v[2] = _mm_setzero_ps();
    v[3] = _mm_setzero_ps();
    copy = m;
    obj->func_0018F390(&D_00275630, (int)&D_00010900, (int *)&copy);
}

C_00192370 *C_00192370::func_00192370(int a)
{
    ((C_00157600 *)this)->func_00157600(a);
    f24 = 0;
    f26 = 0xff;
    f27 &= 0xf8;
    vtbl = &D_0028AAAC;
    if (D_002A9818 == 0xff) {
        D_002A9818 = D_002AAEC8->func_001BC6E0(&D_0028AA90);
    }
    f26 = D_002A9818;
    f27 = (f27 & 0xf9) | 1;
    return this;
}

undefined4 C_001923D0::func_001923D0(byte param_1)
{
  int func_00157660(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_00157660();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001923F0 *C_001923F0::func_001923F0(int a)
{
    func_00192720();
    unk28 = a;
    vtbl = &D_0028AB24;
    unk34 = 0;
    unk30 = a;
    unk2C = 0;
    unk38 = 0;
    return this;
}

void C_00192420::func_00192420(void)
{
    int i;

    vtbl = &D_0028AB24;
    if (f34 != 0) {
        for (i = 0; i < f2c; i++) {
            if (f34[i] != 0) {
                func_001E8390((void *)f34[i]);
            }
        }
        func_001E8390(f34);
    }
    ((C_001927A0 *)this)->func_001927A0();
}

