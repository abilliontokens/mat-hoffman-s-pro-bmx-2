/* 11 functions from 0x00137810 to 0x00138800, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "asm_helpers.h"
extern "C" void *memset(void *, int, unsigned);
struct C_001387E0 {
    undefined4 func_001387E0(byte param_1);
};

struct C_00138790 {
    undefined4 func_00138790(byte param_1);
};

struct C_001387D0 {
    C_001387D0* func_001387D0(int a0);
};

struct FileSys {
    int func_0013C9F0(int name, void *mode);
    int func_0013C8A0(int h, void *buf, int size, int count);
    int func_0013AFD0(int h);
    int func_0013AFF0(int h, int pos, int whence);
    void func_0013C110(int h);
};
struct CubeSub { CubeSub *func_00136AD0(); void *func_001365B0(int h, int a); };
struct CubeSub2 { void func_0014A520(void *p); void func_0014A560(void *p, int a); };
struct CubeSub3 { CubeSub3 *func_00142C70(); void func_00142C80(void *p, int a); };
struct CubeSub4 { void *func_00135150(int h); };
void func_001D3F50(void);
extern FileSys *D_002BEAAC;
extern char D_00275FB4[], D_00018B10[], D_002A67B4[], D_002BDD28[], D_0028499C[], D_00284990[];
void *func_001E8A44(int size);
void func_0014A7B0(void *a, void *b);
void *__stdcall func_001FF3C0(int size);
extern int D_002849BC;
extern int D_00284924;
extern int D_002A67D8;
extern int D_002BDE8C;

struct CubeTextureMap {
    void *vtbl;
    void func_001D6AD0(int a);
    void *func_001387B0(int a);
};

struct DrawableCubeVirt {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_0014A540 {
    void func_0014A540(void);
};

struct C_00012140 {
    void func_00012140(void);
};

struct C_00193500 {
    void func_00193500(void);
};

extern void *D_002BDE9C;
extern int D_002BDEA0;
void func_001E891B(void *p);
void func_001E8390(void *p);
void __stdcall func_00201100(void *p);

extern float D_00275460;
int func_00011260(int lo, int hi);

#include <xmmintrin.h>

struct S_137F90_Obj {
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
    virtual int v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21(int a);
};

struct S_137F90_Src {
    char pad0[8];
    int f8;
    int fC;
    int f10;
};

struct S_137F90_Slot6C {
    void func_0014A650(C_0014A540 *p);
};

struct S_137F90_Slot70 {
    void func_00142D00(C_00012140 *p);
};

struct S_137F90_G {
    char pad0[4];
    char *f4;
    char pad8[0x20];
    float f28;
    char pad2C[0x6C - 0x2C];
    S_137F90_Slot6C *f6c;
    S_137F90_Slot70 *f70;
};

struct S_137F90_V4 {
    float x, y, z, w;
};

struct S_137F90_Quad {
    char b[0x90];
};

struct S_137F90_RS {
    int f0;
    int f4;
    int f8;
    char pad[0x80 - 0xC];
};

__declspec(align(16)) struct S_137F90_Mat {
    float m[16];
    __forceinline void identity(void)
    {
        __m128 z = _mm_setzero_ps();
        ((__m128 *)m)[0] = z;
        ((__m128 *)m)[1] = z;
        ((__m128 *)m)[2] = z;
        ((__m128 *)m)[3] = z;
        m[15] = m[10] = m[5] = m[0] = 1.0f;
    }
};

static __forceinline void identity_ref_00137F90(S_137F90_Mat *&p)
{
    S_137F90_Mat *q = p;
    _mm_store_ps(&q->m[0], _mm_setzero_ps());
    _mm_store_ps(&q->m[4], _mm_setzero_ps());
    _mm_store_ps(&q->m[8], _mm_setzero_ps());
    _mm_store_ps(&q->m[12], _mm_setzero_ps());
    q->m[0] = 1.0f;
    q->m[5] = 1.0f;
    q->m[10] = 1.0f;
    q->m[15] = 1.0f;
}

extern S_137F90_G *D_002EFDB8;
extern int D_00040300, D_00040304, D_00040354, D_0004035C;
extern int D_0020C6DC, D_0020C710, D_0020C718, D_0020C720, D_0020CA50;
extern S_137F90_RS D_0020C6E0[];
extern int D_0020C6E4[];
extern int D_0020C8E4;
extern int D_002BEA90;
extern S_137F90_Quad D_002BA728[];

struct S_137810_V3 { float x, y, z; };
struct S_137810_V4 { float x, y, z, w; };
struct S_137810_Clamp { char pad0[0x10]; float f10, f14; };
struct S_137810_Proj { void func_001C5C50(char *a, float *m, float *v, int z, int *out); };
extern S_137810_Proj *D_002AB66C;
extern S_137F90_Mat D_002BEA50;
extern float D_002BEA10[], D_002BE040[], D_002BE9A8[];
extern float D_00275AEC, D_0028491C, D_002757FC;
#define CLAMP8_137810(o) { \
    if (D_002757FC > (o)->f10) (o)->f10 = 8.0f; \
    if (D_002757FC < (o)->f14 || (o)->f14 > (o)->f10) (o)->f14 = 8.0f; }
#define CELL2(n) \
    idx = (j + (n)) / 4 + j + (n); \
    if (!((vf[idx] & (vf[idx + 1] & (vf[idx + 5] & vf[idx + 6]))) & 0xffffffef)) { \
        *(unsigned short *)((char *)this->f28 + k * 0xfc + 0x12c) |= (unsigned short)(1 << (j + (n))); \
        o = ((S_137810_Clamp **)this->f28)[0x13 + k * 0x3f + j + (n)]; \
        if (o) CLAMP8_137810(o) \
    }
void __fastcall func_001FD020(void *p, int v);
void __fastcall func_001FEC30(int n, void *p);
int __fastcall func_001FEBD0(int n, void *p);
void __stdcall func_001FE490(int a);
void __stdcall func_00200390(int index, int value);
void *__stdcall func_001FF410(void *buffer, int flags);
void __stdcall func_001FEE00(int stream, void *data, int stride);
void __stdcall func_00200B30(void *a, int b, void *c);
void __stdcall func_00200950(int a, int b, void *c, void *d, int e);
void __stdcall func_001FF4E0(int a, void *b, int c, int d, float e, int f);
void func_000263B0(float *out, float *a, float *b);
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

/* 0x28-byte entry of DrawableCube::f3c */
struct DrawableCubeItem {
    float f0;
    float f4;
    char pad8[4];
    float fC;
    float f10;
    int f14;
    float f18;
    float f1C;
    float f20;
    u8 f24;
};

struct DrawableCube {
    void *vtbl;
    char pad4[0x23];
    u8 f27;
    S_137F90_Src * volatile f28;
    DrawableCubeVirt **f2c;
    int f30;
    int f34;
    int f38;
    DrawableCubeItem *f3c;
    char pad40[0x780];
    DrawableCubeVirt *f7c0;
    C_00193500 *f7c4;
    int f7c8;
    int f7cc;
    C_0014A540 *f7d0;
    C_00012140 *f7d4;
    void *f7d8;
    void func_00136FE0();
    void func_00137810();
    void func_00157660();
    int func_00157A00(float dt);
    void func_00137E50(float dt);
    int func_00137F90();
    void func_00192370(int a);
    void func_00138390(void);
    int func_001382B0(void);
    DrawableCube *func_00138330(int a);
    void func_001376B0(void *p);
    void func_00136BE0(int a);
    DrawableCube *func_00138480(int a);
};


void DrawableCube::func_00137810()
{
    S_137F90_Mat *pm;
    S_137810_V4 v;
    int vf[25];
    int i;
    int j;
    int k;
    int idx;
    S_137810_Clamp *o;

    v.x = *(float *)(D_002EFDB8->f4 + 0xd0);
    v.y = *(float *)(D_002EFDB8->f4 + 0xd4);
    v.z = *(float *)(D_002EFDB8->f4 + 0xd8);
    pm = &D_002BEA50;
    AsmIdentityMatrix(&D_002BEA50);
    pm->m[0] = 1.0f;
    pm->m[5] = 1.0f;
    pm->m[10] = 1.0f;
    ((int *)D_002BEA50.m)[3] = this->f28->f8;
    ((int *)D_002BEA50.m)[7] = this->f28->fC;
    ((int *)D_002BEA50.m)[11] = this->f28->f10;
    func_000263B0(D_002BEA10, D_002BEA50.m, (float *)(D_002EFDB8->f4 + 0xf0));
    for (k = 0; k < 6; k++) {
        float *ph = &D_002BE9A8[k * 4];
        float *pq = &D_002BE9A8[k * 4 - 2];
        float *vp;
        int *op;
        *(unsigned short *)((char *)this->f28 + k * 0xfc + 0x12c) = 0;
        if (!(v.y * pq[1] + v.x * pq[0] + v.z * ph[0]
              > (*(float *)(D_002EFDB8->f4 + 0x1d0) - D_00275AEC) * D_0028491C)) {
            vp = &D_002BE040[k * 100];
            op = vf;
            i = 25;
            do {
                D_002AB66C->func_001C5C50(D_002EFDB8->f4, D_002BEA10, vp, 0, op);
                vp += 4;
                op++;
                i--;
            } while (i != 0);
            for (j = 0; j < 16; j += 8) {
                CELL2(0)
                CELL2(1)
                CELL2(2)
                CELL2(3)
                CELL2(4)
                CELL2(5)
                CELL2(6)
                CELL2(7)
            }
        }
    }
}

void DrawableCube::func_00137E50(float dt)
{
    int i;
    int idle;
    DrawableCubeItem *e;

    if (f3c == 0) {
        func_00157A00(dt);
        return;
    }
    idle = 1;
    for (i = 0; i < f38; i++) {
        e = &f3c[i];
        if (e->f24 & 1) {
            idle = 0;
        } else {
            e->f18 = dt + e->f18;
        }
    }
    if (idle != 0) {
        for (i = 0; i < f38; i++) {
            e = &f3c[i];
            if (e->f18 > e->f10) {
                if (e->f1C >= D_00275460) {
                    e->f1C = 0;
                    if (func_00011260(0, 100) < e->f14) {
                        e->f24 |= 1;
                        f34 = i;
                        break;
                    }
                } else {
                    e->f1C = dt + e->f1C;
                }
            }
        }
    } else {
        e = &f3c[f34];
        e->f20 = dt * e->fC + e->f20;
        if (e->f20 > e->f4 - e->f0) {
            e->f20 = 0;
            e->f18 = 0;
            e->f24 &= ~1;
        }
    }
    func_00157A00(dt);
}

