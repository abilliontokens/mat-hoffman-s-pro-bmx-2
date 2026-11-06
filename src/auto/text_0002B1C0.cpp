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

void *C_0002C100::func_0002B1C0(int param)
{
    unsigned int *p = (unsigned int *)this;
    unsigned int *q;
    int i;
    func_00157600(param);
    p[0] = (unsigned int)&D_0027661C;
    p[0xd] = 0; p[0xc] = 0; p[0xb] = 0; p[0xe] = 0x3f800000;
    p[0x11] = 0; p[0x10] = 0; p[0xf] = 0; p[0x12] = 0x3f800000;
    q = p + 0x13; i = 3;
    do { q[2] = 0; q[1] = 0; q[0] = 0; q[3] = 0x3f800000; q = q + 4; i = i - 1; } while (i != 0);
    p[0x21] = 0; p[0x20] = 0; p[0x1f] = 0; p[0x22] = 0x3f800000;
    p[0x25] = 0; p[0x24] = 0; p[0x23] = 0; p[0x26] = 0x3f800000;
    p[0x29] = 0; p[0x28] = 0; p[0x27] = 0; p[0x2a] = 0x3f800000;
    p[0x2d] = 0; p[0x2c] = 0; p[0x2b] = 0; p[0x2e] = 0x3f800000;
    p[0x31] = 0; p[0x30] = 0; p[0x2f] = 0; p[0x32] = 0x3f800000;
    p[0x35] = 0; p[0x34] = 0; p[0x33] = 0; p[0x36] = 0x3f800000;
    p[0x39] = 0; p[0x38] = 0; p[0x37] = 0; p[0x3a] = 0x3f800000;
    p[0x3d] = 0; p[0x3c] = 0; p[0x3b] = 0; p[0x3e] = 0x3f800000;
    p[0x41] = 0; p[0x40] = 0; p[0x3f] = 0; p[0x42] = 0x3f800000;
    p[0x45] = 0; p[0x44] = 0; p[0x43] = 0; p[0x46] = 0x3f800000;
    p[0x49] = 0; p[0x48] = 0; p[0x47] = 0; p[0x4a] = 0x3f800000;
    p[0x4d] = 0; p[0x4c] = 0; p[0x4b] = 0; p[0x4e] = 0x3f800000;
    q = p + 0x4f; i = 2;
    do { q[2] = 0; q[1] = 0; q[0] = 0; q[3] = 0x3f800000; q = q + 4; i = i - 1; } while (i != 0);
    p[0x151] = 0; p[0x150] = 0; p[0x14f] = 0; p[0x152] = 0x3f800000;
    p[0x155] = 0; p[0x154] = 0; p[0x153] = 0; p[0x156] = 0x3f800000;
    p[0x159] = 0; p[0x158] = 0; p[0x157] = 0; p[0x15a] = 0x3f800000;
    p[0x15e] = 0; p[0x15d] = 0; p[0x15c] = 0; p[0x15f] = 0x3f800000;
    p[0x1a4] = 0; p[0x1a3] = 0; p[0x1a2] = 0; p[0x1a5] = 0x3f800000;
    p[0x1b5] = 0; p[0x1b4] = 0; p[0x1b3] = 0; p[0x1b6] = 0x3f800000;
    p[0x1b9] = 0; p[0x1b8] = 0; p[0x1b7] = 0; p[0x1ba] = 0x3f800000;
    p[0x1d4] = 0; p[0x1d3] = 0; p[0x1d2] = 0; p[0x1d5] = 0x3f800000;
    p[0x1d8] = 0; p[0x1d7] = 0; p[0x1d6] = 0; p[0x1d9] = 0x3f800000;
    p[0x1dc] = 0; p[0x1db] = 0; p[0x1da] = 0; p[0x1dd] = 0x3f800000;
    p[0x1de] = 0; p[0x1df] = 0; p[0x1e0] = 0; p[0x1e2] = 0; p[0x1e1] = 0;
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
    p[0x14f] = D_002A10F0; p[0x150] = D_002A10F4; p[0x151] = D_002A10F8; p[0x152] = D_002A10FC;
    p[0x153] = D_002A10F0; p[0x154] = D_002A10F4; p[0x155] = D_002A10F8; p[0x156] = D_002A10FC;
    p[0x15b] = 0; p[0x162] = 0; p[0x160] = 0; p[0x15c] = 0; p[0x15d] = 0; p[0x15e] = 0x459c4000; p[0x15f] = 0x3f800000; p[0x161] = 0x3e4ccccd;
    p[0x184] = 0x3f060a91; p[0x187] = 0x418ba057; p[0x186] = 0x418ba057; p[0x188] = 0x41200000; p[0x189] = 0; p[0x18a] = 0; p[0x18b] = 0;
    p[0x18c] = 0x40400000; p[0x18d] = 0; p[0x18e] = 0x3f060a91; p[400] = 0; p[0x191] = 0; p[0x192] = 0; p[0x185] = 0x3f490fd9;
    p[0x88] = 0; p[0x89] = 0; p[0x8a] = 0; p[0x163] = 0; p[0x164] = 0; p[0x165] = 0; p[0x166] = 0; p[0x168] = 0; p[0x169] = 0; p[0x16b] = 0; p[0x16c] = 0; p[0x16d] = 0; p[0x170] = 0;
    p[0x125] = 0x3f800000; p[0x126] = 0x3f800000; p[0x127] = 0x3f800000; p[0x128] = 0x3f800000; p[0x171] = 0; p[0x129] = 0; p[0x12a] = 0; p[299] = 0;
    p[0x173] = 0; p[0x174] = 0; p[0x175] = 0; p[0x176] = 0; p[0x177] = 0; p[0x178] = 0; p[0x179] = 0;
    D_002A1030 = 1;
    p[0x17b] = 0; p[0x17c] = 0; p[0x17d] = 0; p[0x17a] = 0; p[0x17e] = 0; p[0x17f] = 0; p[0x1c6] = 7; p[0x1c7] = 7;
    p[0x195] = 0; p[0x196] = 0; p[0x197] = 0; p[0x198] = 0;
    p[0x3b] = D_002A10F0; p[0x3c] = D_002A10F4; p[0x3d] = D_002A10F8; p[0x3e] = D_002A10FC;
    p[0x3f] = D_002A10F0; p[0x40] = D_002A10F4; p[0x41] = D_002A10F8; p[0x42] = D_002A10FC;
    p[0x13] = D_002A10F0; p[0x14] = D_002A10F4; p[0x15] = D_002A10F8; p[0x16] = D_002A10FC;
    p[0x17] = D_002A10F0; p[0x18] = D_002A10F4; p[0x19] = D_002A10F8; p[0x1a] = D_002A10FC;
    p[0x1b] = D_002A10F0; p[0x1c] = D_002A10F4; p[0x1d] = D_002A10F8; p[0x1e] = D_002A10FC;
    p[0x43] = D_002A1120; p[0x44] = D_002A1124; p[0x45] = D_002A1128; p[0x46] = D_002A112C;
    p[0x47] = D_002A1110; p[0x48] = D_002A1114; p[0x49] = D_002A1118; p[0x4a] = D_002A111C;
    p[0x4b] = D_002A1110; p[0x4c] = D_002A1114; p[0x4d] = D_002A1118; p[0x4e] = D_002A111C;
    ((unsigned int *)((char *)this + 0x688))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x688))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x688))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x688))[3] = D_002A10FC;
    ((unsigned int *)((char *)this + 0x7c))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x7c))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x7c))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x7c))[3] = D_002A10FC;
    p[0x67c/4] = 0; p[0x680/4] = 0; p[0x684/4] = 0; p[0x490/4] = 0; p[0x5c8/4] = 0; p[0x698/4] = 0;
    *(unsigned short *)((char *)this + 0x500) = D_002BA160;
    p[0x504/4] = 0; p[0x508/4] = 0x3f800000; p[0x6ac/4] = 0x3f800000; p[0x6b0/4] = 0x3f400000; p[0x6b4/4] = 0x3f000000; p[0x6b8/4] = 0x3dcccccd; p[0x6bc/4] = 0x3f000000; p[0x6c0/4] = 0x3dcccccd; p[0x6c8/4] = 0; p[0x6c4/4] = 1; p[0x69c/4] = 0; p[0x6a4/4] = 0; p[0x6a8/4] = 0;
    ((unsigned int *)((char *)this + 0x6cc))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x6cc))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x6cc))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x6cc))[3] = D_002A10FC;
    ((unsigned int *)((char *)this + 0x6dc))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x6dc))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x6dc))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x6dc))[3] = D_002A10FC;
    p[0x6ec/4] = 0x3f000000; p[0x6f0/4] = 0x3f000000; p[0x704/4] = 0; p[0x714/4] = 1; p[0x70c/4] = 0; p[0x6f4/4] = 0; p[0x6f8/4] = 0x3f800000; p[0x6fc/4] = 0; p[0x700/4] = 0x3f800000;
    p[0x724/4] = 0; p[0x720/4] = 0; p[0x72c/4] = 0x3e4ccccd; p[0x730/4] = 0; p[0x728/4] = 0x3f800000; p[0x734/4] = 0x3e4ccccd; p[0x738/4] = 0; p[0x740/4] = 0; p[0x73c/4] = 0;
    p[0x484/4] = 0; p[0x488/4] = 0; p[0x48c/4] = 0; p[0x744/4] = 0;
    ((unsigned int *)((char *)this + 0x748))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x748))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x748))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x748))[3] = D_002A10FC;
    ((unsigned int *)((char *)this + 0x768))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x768))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x768))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x768))[3] = D_002A10FC;
    ((unsigned int *)((char *)this + 0x758))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x758))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x758))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x758))[3] = D_002A10FC;
    ((unsigned int *)((char *)this + 0x55c))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x55c))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x55c))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x55c))[3] = D_002A10FC;
    ((unsigned int *)((char *)this + 0x13c))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x13c))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x13c))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x13c))[3] = D_002A10FC;
    ((unsigned int *)((char *)this + 0x14c))[0] = D_002A10F0; ((unsigned int *)((char *)this + 0x14c))[1] = D_002A10F4; ((unsigned int *)((char *)this + 0x14c))[2] = D_002A10F8; ((unsigned int *)((char *)this + 0x14c))[3] = D_002A10FC;
    p[0x214/4] = 0; p[0x218/4] = 0; p[0x210/4] = 0; p[0x78c/4] = 0;
    return this;
}

void *C_0002C100::func_0002C100(unsigned int flags)
{
    func_00026A90();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}
