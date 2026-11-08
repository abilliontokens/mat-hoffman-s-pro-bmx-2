/* 2 functions from 0x0002B1C0 to 0x0002C120, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

struct S_0002B1C0_Mat {
    __m128 r0;
    __m128 r1;
    __m128 r2;
    __m128 r3;
};

struct C_000264C0 {
    S_0002B1C0_Mat mat;
    void *func_000264C0(S_0002B1C0_Mat *src);
};

struct C_0002C100 {
    void *func_0002C100(unsigned int flags);
    void *func_0002B1C0(int param);
    void func_00026A90();
    void func_00157600(int param);
};

extern int D_0027661C;
extern unsigned int D_002A10F0;
extern unsigned int D_002A10F4;
extern unsigned int D_002A10F8;
extern unsigned int D_002A10FC;
extern unsigned int D_002A1030;
extern unsigned int D_002A1120;
extern unsigned int D_002A1124;
extern unsigned int D_002A1128;
extern unsigned int D_002A112C;
extern unsigned int D_002A1110;
extern unsigned int D_002A1114;
extern unsigned int D_002A1118;
extern unsigned int D_002A111C;
extern unsigned short D_002BA160;

void func_001E891B(void *ptr);

inline void *operator new(unsigned int, void *place) { return place; }

struct V4_0002B1C0 {
    float x, y, z, w;
    V4_0002B1C0() { x = y = z = 0.0f; w = 1.0f; }
    V4_0002B1C0 *Init() { x = y = z = 0.0f; w = 1.0f; return this; }
};

struct V4k_0002B1C0 {
    float x, y, z, w;
    V4k_0002B1C0() {}
    V4k_0002B1C0(float px, float py, float pz, float pw) { x = px; y = py; z = pz; w = pw; }
    __forceinline V4k_0002B1C0 &operator=(const V4k_0002B1C0 &v) {
        ((int *)this)[0] = ((const volatile int *)&v)[0];
        ((int *)this)[1] = ((const volatile int *)&v)[1];
        ((int *)this)[2] = ((const volatile int *)&v)[2];
        ((int *)this)[3] = ((const volatile int *)&v)[3];
        return *this;
    }
};

struct S5_0002B1C0 {
    int a, b, c, d, e;
    void Init() { a = 0; b = 0; c = 0; e = 0; d = 0; }
};

#define S5_AT(off) ((S5_0002B1C0 *)((char *)p + (off)))
#define V4_AT(off) ((V4_0002B1C0 *)((char *)p + (off)))
#define V4_CPY(off, src) (*V4_AT(off) = *(V4_0002B1C0 *)&(src))
#define V4_COPY4(off, s0, s1, s2, s3) { unsigned int *dst_ = (unsigned int *)((char *)p + (off)); dst_[0] = s0; dst_[1] = s1; dst_[2] = s2; dst_[3] = s3; }
#define V4_CPY_A(off) V4_COPY4(off, D_002A10F0, D_002A10F4, D_002A10F8, D_002A10FC)
#define V4_CPY_B(off) V4_COPY4(off, D_002A1120, D_002A1124, D_002A1128, D_002A112C)
#define V4_CPY_C(off) V4_COPY4(off, D_002A1110, D_002A1114, D_002A1118, D_002A111C)

static void Identity_0002B1C0(S_0002B1C0_Mat *m)
{
    m->r0 = _mm_setzero_ps(); m->r1 = _mm_setzero_ps(); m->r2 = _mm_setzero_ps(); m->r3 = _mm_setzero_ps();
    ((float *)m)[0] = 1.0f; ((float *)m)[5] = 1.0f; ((float *)m)[10] = 1.0f; ((float *)m)[15] = 1.0f;
}

void *C_0002C100::func_0002B1C0(int param)
{
    S_0002B1C0_Mat mat1;
    S_0002B1C0_Mat mat2;
    unsigned int * volatile p = (unsigned int *)this;
    V4_0002B1C0 *q4;
    int i;
    func_00157600(param);
    p[0] = (unsigned int)&D_0027661C;
    V4_AT(0x2c)->Init();
    V4_AT(0x3c)->Init();
    q4 = V4_AT(0x4c); i = 3;
    do { q4->Init(); q4 = q4 + 1; i = i - 1; } while (i != 0);
    V4_AT(0x7c)->Init();
    V4_AT(0x8c)->Init();
    V4_AT(0x9c)->Init();
    V4_AT(0xac)->Init();
    V4_AT(0xbc)->Init();
    V4_AT(0xcc)->Init();
    V4_AT(0xdc)->Init();
    V4_AT(0xec)->Init();
    V4_AT(0xfc)->Init();
    V4_AT(0x10c)->Init();
    V4_AT(0x11c)->Init();
    V4_AT(0x12c)->Init();
    q4 = V4_AT(0x13c); i = 2;
    do { q4->Init(); q4 = q4 + 1; i = i - 1; } while (i != 0);
    V4_AT(0x53c)->Init();
    V4_AT(0x54c)->Init();
    V4_AT(0x55c)->Init();
    V4_AT(0x570)->Init();
    V4_AT(0x688)->Init();
    V4_AT(0x6cc)->Init();
    V4_AT(0x6dc)->Init();
    V4_AT(0x748)->Init();
    V4_AT(0x758)->Init();
    V4_AT(0x768)->Init();
    S5_AT(0x778)->Init();
    p[0x82] = 0; p[0xce] = 0xffffffff; p[0x10f] = 0; p[0x110] = 0; p[0x111] = 0;
    p[0x11a] = 0; p[0x11b] = 0; p[0x1a8] = 0; p[0x11c] = 0; p[0x11e] = 1; p[0x120] = 0;
    p[0x112] = 0; p[0x113] = 0; p[0x114] = 0; p[0x115] = 0; p[0x116] = 0; p[0x118] = 0; p[0x119] = 0;
    p[0x8d] = 0; p[10] = 0x4200cccd; p[300] = 0; p[0x12d] = 0; p[0x12e] = 0x41200000; p[0x12f] = 0x428c0000;
    p[0x130] = 0x3f800000; p[0x131] = 0x3e99999a; p[0x134] = 0x3e99999a; p[0x135] = 0x3f19999a; p[0x136] = 0;
    p[0x132] = 0x3e19999a; p[0x133] = 0x3e99999a; p[0x139] = 0x3e4ccccd; p[0x13b] = 0; p[0x13a] = 0x3e4ccccd;
    p[0x13c] = 0; p[0x137] = 0x40800000; p[0x138] = 0x3e800000; p[0x16f] = 0x3dcccccd;
    p[0x199] = 0x3f9c61a9; p[0x19a] = 0x3f490fd9; p[0x19b] = 0x3f9c61a9; p[0x19c] = 0x3f9c61a9; p[0x19d] = 0x3f490fd9; p[0x19e] = 0x3f9c61a9;
    p[0x2b] = 0x447a0000; p[0x2c] = 0x447a0000; p[0x2d] = 0x447a0000; p[0x2f] = 0x447a0000; p[0x30] = 0x447a0000; p[0x31] = 0x447a0000;
    p[0x33] = 0x447a0000; p[0x34] = 0x447a0000; p[0x35] = 0x447a0000; p[0x37] = 0x447a0000; p[0x38] = 0x447a0000; p[0x39] = 0x447a0000;
    p[0x143] = 0; p[0x144] = 0; p[0x145] = 0; p[0x146] = 0; p[0x147] = 0; p[0x167] = 0; p[0x148] = 0; p[0x149] = 0; p[0x14a] = 0; p[0x14b] = 0; p[0x14c] = 0;
    p[0x14d] = 0x3dcccccd; p[0x14e] = 0; p[0x13d] = 0; p[0x13e] = 0; p[0x13f] = 0;
    V4_CPY(0x53c, D_002A10F0);
    V4_CPY(0x54c, D_002A10F0);
    p[0x15b] = 0; p[0x162] = 0; p[0x160] = 0; p[0x15c] = 0; p[0x15d] = 0; p[0x15e] = 0x459c4000; p[0x15f] = 0x3f800000; p[0x161] = 0x3e4ccccd;
    p[0x184] = 0x3f060a91; p[0x187] = 0x418ba057; p[0x186] = 0x418ba057; p[0x188] = 0x41200000; p[0x189] = 0; p[0x18a] = 0; p[0x18b] = 0;
    p[0x18c] = 0x40400000; p[0x18d] = 0; p[0x18e] = 0x3f060a91; p[400] = 0; p[0x191] = 0; p[0x192] = 0; p[0x185] = 0x3f490fd9;
    p[0x88] = 0; p[0x89] = 0; p[0x8a] = 0; p[0x163] = 0; p[0x164] = 0; p[0x165] = 0; p[0x166] = 0; p[0x168] = 0; p[0x169] = 0; p[0x16b] = 0; p[0x16c] = 0; p[0x16d] = 0; p[0x170] = 0;
    p[0x125] = 0x3f800000; p[0x126] = 0x3f800000; p[0x127] = 0x3f800000; p[0x128] = 0x3f800000; p[0x171] = 0; p[0x129] = 0; p[0x12a] = 0; p[299] = 0;
    p[0x173] = 0; p[0x174] = 0; p[0x175] = 0; p[0x176] = 0; p[0x177] = 0; p[0x178] = 0; p[0x179] = 0;
    D_002A1030 = 1;
    p[0x17b] = 0; p[0x17c] = 0; p[0x17d] = 0; p[0x17a] = 0; p[0x17e] = 0; p[0x17f] = 0; p[0x1c6] = 7; p[0x1c7] = 7;
    p[0x195] = 0; p[0x196] = 0; p[0x197] = 0; p[0x198] = 0;
    V4_CPY(0xec, D_002A10F0);
    V4_CPY(0xfc, D_002A10F0);
    V4_CPY(0x4c, D_002A10F0);
    V4_CPY(0x5c, D_002A10F0);
    V4_CPY(0x6c, D_002A10F0);
    V4_CPY(0x10c, D_002A1120);
    V4_CPY(0x11c, D_002A1110);
    V4_CPY(0x12c, D_002A1110);
    mat1.r0 = _mm_setzero_ps(); mat1.r1 = _mm_setzero_ps(); mat1.r2 = _mm_setzero_ps(); mat1.r3 = _mm_setzero_ps();
    ((float *)&mat1)[0] = 1.0f; ((float *)&mat1)[5] = 1.0f; ((float *)&mat1)[10] = 1.0f; ((float *)&mat1)[15] = 1.0f;
    mat2 = mat1;
    ((C_000264C0 *)((char *)p + 0x160))->func_000264C0(&mat2);
    mat2.r0 = _mm_setzero_ps(); mat2.r1 = _mm_setzero_ps(); mat2.r2 = _mm_setzero_ps(); mat2.r3 = _mm_setzero_ps();
    ((float *)&mat2)[0] = 1.0f; ((float *)&mat2)[5] = 1.0f; ((float *)&mat2)[10] = 1.0f; ((float *)&mat2)[15] = 1.0f;
    mat1 = mat2;
    ((C_000264C0 *)((char *)p + 0x1a0))->func_000264C0(&mat1);
    V4_CPY(0x688, D_002A10F0);
    V4_CPY(0x7c, D_002A10F0);
    p[0x67c/4] = 0; p[0x680/4] = 0; p[0x684/4] = 0; p[0x490/4] = 0; p[0x5c8/4] = 0; p[0x698/4] = 0;
    *(unsigned short *)((char *)p + 0x500) = D_002BA160;
    p[0x504/4] = 0; p[0x508/4] = 0x3f800000; p[0x6ac/4] = 0x3f800000; p[0x6b0/4] = 0x3f400000; p[0x6b4/4] = 0x3f000000; p[0x6b8/4] = 0x3dcccccd; p[0x6bc/4] = 0x3f000000; p[0x6c0/4] = 0x3dcccccd; p[0x6c8/4] = 0; p[0x6c4/4] = 1; p[0x69c/4] = 0; p[0x6a4/4] = 0; p[0x6a8/4] = 0;
    V4_CPY(0x6cc, D_002A10F0);
    V4_CPY(0x6dc, D_002A10F0);
    p[0x6ec/4] = 0x3f000000; p[0x6f0/4] = 0x3f000000; p[0x704/4] = 0; p[0x714/4] = 1; p[0x70c/4] = 0; p[0x6f4/4] = 0; p[0x6f8/4] = 0x3f800000; p[0x6fc/4] = 0; p[0x700/4] = 0x3f800000;
    p[0x724/4] = 0; p[0x720/4] = 0; p[0x72c/4] = 0x3e4ccccd; p[0x730/4] = 0; p[0x728/4] = 0x3f800000; p[0x734/4] = 0x3e4ccccd; p[0x738/4] = 0; p[0x740/4] = 0; p[0x73c/4] = 0;
    p[0x484/4] = 0; p[0x488/4] = 0; p[0x48c/4] = 0; p[0x744/4] = 0;
    V4_CPY(0x748, D_002A10F0);
    V4_CPY(0x768, D_002A10F0);
    V4_CPY(0x758, D_002A10F0);
    V4_CPY(0x55c, D_002A10F0);
    V4_CPY(0x13c, D_002A10F0);
    V4_CPY(0x14c, D_002A10F0);
    p[0x214/4] = 0; p[0x218/4] = 0; p[0x210/4] = 0; p[0x78c/4] = 0;
    return (void *)p;
}

void *C_0002C100::func_0002C100(unsigned int flags)
{
    func_00026A90();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
