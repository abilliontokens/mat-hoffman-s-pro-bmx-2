/* 22 functions from 0x00191470 to 0x00192470, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <xmmintrin.h>
#include <string.h>
#include "asm_helpers.h"
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

struct C_00191DD0_Node {
    char pad0[0x140];
    unsigned char unk140;
};

struct C_00191640_Node {
    char pad0[0x20];
    float unk20;
};

struct C_00191F50_Node {
    char pad0[0x12c];
    int unk12c;
};

struct C_00191C50_Node {
    char pad0[0x130];
    unsigned int unk130;
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

static __inline void MinTo(int &r, int &a, int &b)
{
    r = a > b ? b : a;
}

static __inline void ZeroMatrix(S_00192310_Mat *&p)
{
    __m128 *v = (__m128 *)p;

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
    switch ((a0 >> 16) & 0xff) {
    case 0:
        f20 = D_002A97D8;
        break;
    case 1: {
        S_00192310_Mat m;
        S_00192310_Mat copy;

        AsmZeroMatrix(&m);
        copy = m;
        ((C_000264C0 *)&f30)->func_000264C0(&copy);
        break;
    }
    }
}

void C_00191470::func_00191510(const char * volatile a0, unsigned int a1)
{
 volatile int slot[4];
 int a,b,k;
 slot[0]=(int)this;
 switch ((a1>>16)&0xff) { case 0: f1C=0x10; break; case 1: f1C=0x40; break; }
 slot[1]=strlen(a0); slot[2]=0x17;
 a=slot[2]; b=slot[1];
 slot[3]=a > b ? b : a;
 k=slot[3];
 func_001E8920((void*)slot[0],a0,k);
 ((volatile char*)slot[0])[k]=0;
 C_00191470 *p=(C_00191470*)slot[0];
 p->f18=*(volatile unsigned int*)&a1;
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

