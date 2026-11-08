/* 7 functions from 0x0019C710 to 0x0019D6C0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include <new>

void *func_001E8A44(int size);
void func_00133D80(void *p);
extern int D_002B92E0;
extern int D_002B92F0;

/* (0, 0, 0, 1) vector */
struct V4_0019CB00 {
    float x;
    float y;
    float z;
    float w;
    V4_0019CB00() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
    V4_0019CB00(int) { x = 0.0f; y = 0.0f; z = 0.0f; w = 1.0f; }
};

/* the 0x38-byte transform stored at +0x54 */
struct S_0019CB00_Xform {
    V4_0019CB00 a;
    V4_0019CB00 b;
    V4_0019CB00 c;
    float f30;
    float f34;
    S_0019CB00_Xform *Init(void)
    {
        a.z = 0.0f;
        a.y = 0.0f;
        a.x = 0.0f;
        a.w = 1.0f;
        b.z = 0.0f;
        b.y = 0.0f;
        b.x = 0.0f;
        b.w = 1.0f;
        c.z = 0.0f;
        c.y = 0.0f;
        c.x = 0.0f;
        c.w = 1.0f;
        return this;
    }
};

struct VObj_0019C710 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0a(); virtual void v0b();
    virtual void v0c(); virtual void v0d(); virtual void v0e(); virtual void v0f();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1a(); virtual void v1b();
};

/* the engine's file wrapper (D_002BEAAC): read(file, dst, size, count) */
struct S_19CCE0_File {
    void func_0013C8A0(int file, void *dst, int size, int count);
};
extern S_19CCE0_File *D_002BEAAC;
#define RD_19CCE0(dst, size) D_002BEAAC->func_0013C8A0(file, dst, size, 1)
void __stdcall func_00011FF0(void *p, int stride, int count, void (*ctor)());
void func_0019B6F0(void);
void D_00021290(void);

/* 3 x u16 (the engine's 16-bit rgb), zeroed by its constructor */
struct S_19CCE0_Rgb16 {
    unsigned short f0, f2, f4;
    S_19CCE0_Rgb16() { f4 = 0; f2 = 0; f0 = 0; }
};
/* the same without constructor */
struct S_19CCE0_Raw16 {
    unsigned short f0, f2, f4;
};
struct S_19CCE0_Vec3 {
    float x, y, z;
    S_19CCE0_Vec3() {}
    S_19CCE0_Vec3(const S_19CCE0_Vec3 &o) { x = o.x; y = o.y; z = o.z; }
};
struct S_19CCE0_V3z {
    float x, y, z;
    S_19CCE0_V3z() { z = 0; y = 0; x = 0; }
    static void *operator new[](unsigned int n) { return func_001E8A44(n); }
};
struct S_19CCE0_Color {
    short r, g, b;
    S_19CCE0_Color *func_0001AF00(const void *v);
};
/* 0x24-byte record of the second table */
struct S_19CCE0_Elem {
    int f0;
    float len;
    unsigned short f8, fA;
    S_19CCE0_V3z a;
    S_19CCE0_V3z b;
    static void *operator new[](unsigned int n) { return func_001E8A44(n); }
};
extern "C" float __cdecl sqrtf(float);
/* the stack frame of func_0019CCE0, laid out as the original has it (0x54 bytes from esp+0x10) */
struct S_19CCE0_Frame {
    struct SoultreeCollisionObject * volatile self;
    float vf[3];
    int hasColor;
    int nRec;
    int count;
    int x2;
    int y1;
    int x1;
    volatile float sqx;
    char A[12];
    char ta[12];
    char B[16];
};
static __forceinline void Identity_19C710(float *m)
{
    __m128 z = _mm_setzero_ps();
    _mm_store_ps(m, z);
    _mm_store_ps(m + 4, z);
    _mm_store_ps(m + 8, z);
    _mm_store_ps(m + 12, z);
    m[0] = 1.0f;
    m[5] = 1.0f;
    m[10] = 1.0f;
    m[15] = 1.0f;
}
static __forceinline void Set3_19CCE0(S_19CCE0_Vec3 *dst, S_19CCE0_Vec3 src)
{
    *dst = src;
}
static __forceinline void Sqrt_19CCE0(float *out, float x)
{
    _mm_store_ss(out, _mm_sqrt_ss(_mm_load_ss(&x)));
}
/* 0x14-byte record of the third table */
struct S_19CCE0_Rec {
    unsigned short f0, f2, f4;
    unsigned short pad6;
    int f8;
    S_19CCE0_Color col;
    unsigned short pad12;
};

struct SoultreeCollisionObject {
    int vtbl;
    char pad_0[0x50];
    S_0019CB00_Xform *unk54;
    char pad_58[0xa4 - 0x58];
    unsigned short unkA4;
    unsigned char unkA6;
    unsigned char unkA7;
    char pad_A8[0xb0 - 0xa8];
    char unkB0[0x40];
    float unkF0[4][4];
    char pad_130[0x80];
    union {
        char unk1B0[0xc];
        struct {
            void *unk1B0p;
            void *unk1B4p;
            int unk1B8;
        };
    };
    unsigned short unk1BC;
    char pad_1BE[0x1c4 - 0x1be];
    int unk1C4;
    int unk1C8;
    unsigned short unk1CC;
    short unk1CE;
    float unk1D0;
    char *unk1D4;
    void func_0019CCE0(int file);
    void func_0019C710(float *src, int a2, short a3, int n);
    void func_0019CB00(void);
    void func_0019CCA0(int param_1);
    void func_0019CBF0(int param_1, int param_2);
    int func_0019D680(void *param_1);
    void func_00157A00(int param_1);
    int func_0019BB80(void *param_1);
    void func_0019BA70();
    void func_0019B890();
    void func_0019B760();
    void func_00133E60();
    void *func_0019D650(int flags);
};

extern "C" void __stdcall func_0019BBD0(unsigned short param_1, int *param_2, int param_3, char *param_4, char *param_5);
extern "C" void __stdcall func_0019BD20(unsigned short param_1, int *param_2, char *param_3, char *param_4, int param_5);

int SoultreeCollisionObject::func_0019D680(void *param_1)
{
    int result;
    if (((int *)param_1)[0x14] != 6) {
        return 0;
    }
    result = func_0019BB80(param_1);
    if (result != 0) {
        func_0019BA70();
        func_0019B890();
    }
    return result;
}
