/* asm_helpers.h: the game's own inline-assembly helpers.
 *
 * Mat Hoffman's Pro BMX 2 was built with Visual C++ 7.0, and its code calls small __asm helpers that the compiler
 * inlined: integer min/max with cmov, SSE scalar math, vector and matrix routines. Each helper below is the exact
 * instruction sequence found in the game, checked by matching real functions that use it ("proven on").
 *
 * Use: #include "asm_helpers.h" and call the helper where a function's target has its instructions. What the
 * compiler does around an inlined __asm block comes out by itself, so write the rest as plain C (no volatile, no
 * _mm_* intrinsics): the helper's arguments and result go through stack slots, `this` is kept at [esp] and reloaded
 * before each use, and the x87 stack is flushed with fstp st(0) before an SSE block. A named local or parameter
 * passed to a helper becomes a memory operand; a literal becomes an immediate.
 *
 * A target that is a helper's own out-of-line copy (the whole function is the helper) is a one-line C wrapper:
 *     void func_000499B0(float *out, float *in) { AsmVec3Normalize(out, in); }
 * (not _func_00011020 or _func_00011040: see AsmMinF and AsmMaxF).
 *
 * This file is written by hand, not by agents: decompdecomp refuses __asm in what agents write.
 */
#ifndef ASM_HELPERS_H
#define ASM_HELPERS_H

/* ---- integers ---------------------------------------------------------------------------------------------- */

/* the smaller of a and b (cmovg). Proven on _func_001B4AF0, _func_00186B90, _func_00186C70, _func_001CB0A0. */
static __forceinline int AsmMinI(int a, int b)
{
    int r;
    __asm {
        mov eax, a
        mov ecx, b
        cmp eax, ecx
        cmovg eax, ecx
        mov r, eax
    }
    return r;
}

/* the larger of a and b (cmovl). Proven on _func_0013AC40@24, _func_001D8340@4, _func_001CB0A0. */
static __forceinline int AsmMaxI(int a, int b)
{
    int r;
    __asm {
        mov eax, a
        mov ecx, b
        cmp eax, ecx
        cmovl eax, ecx
        mov r, eax
    }
    return r;
}

/* ---- floats ------------------------------------------------------------------------------------------------ */

/* square root of x (sqrtss). Proven on _func_00011000 (its out-of-line copy), _func_00011170, _func_001AE530@8. */
static __forceinline float AsmSqrtF(float x)
{
    float r;
    __asm {
        sqrtss xmm0, x
        movss r, xmm0
    }
    return r;
}

/* the smaller of a and b (minss). Proven on _func_0011EEE0. _func_00011020 is this helper compiled on its own: a C
 * wrapper copies a and b first, so only the __asm itself matches it. */
static __forceinline float AsmMinF(float a, float b)
{
    float r;
    __asm {
        movss xmm0, a
        movss xmm1, b
        minss xmm0, xmm1
        movss r, xmm0
    }
    return r;
}

/* the larger of a and b (maxss). Proven on _func_0014AA70. _func_00011040 is this helper compiled on its own: a C
 * wrapper copies a and b first, so only the __asm itself matches it. */
static __forceinline float AsmMaxF(float a, float b)
{
    float r;
    __asm {
        movss xmm0, a
        movss xmm1, b
        maxss xmm0, xmm1
        movss r, xmm0
    }
    return r;
}

/* *dst = f truncated to int (cvttss2si). The float comes first: the parameters' stack slots depend on their order.
 * Proven on _func_00016CF0, _func_0014F450, _func_0014F4B0, _func_001CB0A0, _func_00161F80. */
static __forceinline void AsmFloatToInt(float f, int *dst)
{
    __asm {
        cvttss2si eax, f
        mov edx, dst
        mov [edx], eax
    }
}

/* *dst = f rounded to int (cvtss2si). Proven on _func_001D3730@4, _func_00032E90, _func_001D8340@4, _func_001AE890. */
static __forceinline void AsmFloatToIntRound(float f, int *dst)
{
    __asm {
        cvtss2si eax, f
        mov edx, dst
        mov [edx], eax
    }
}

/* ---- 3-float vectors (read and written as 4 floats) ---------------------------------------------------------- */

/* out = in / |in|: rsqrt and one Newton-Raphson step, the squared length clamped to FLT_MIN. Each source file of
 * the game has its own copy of the three constants, as these statics give it. Proven on _func_0001EA40,
 * _func_000499B0, _func_00055140, _func_00016DD0, _func_00179370, _func_000111B0 (out-of-line copies). */
static __forceinline void AsmVec3Normalize(float *dst, const float *src)
{
    static const __declspec(align(16)) float s_half[4] = { 0.5f, 0.5f, 0.5f, 0.5f };
    static const __declspec(align(16)) float s_three[4] = { 3.0f, 3.0f, 3.0f, 3.0f };
    static const __declspec(align(16)) float s_minLenSq[4] = { 1.17549435e-38f, 1.17549435e-38f, 1.17549435e-38f,
                                                               1.17549435e-38f };
    __asm {
        mov ecx, src
        mov edx, dst
        movups xmm0, [ecx]
        movaps xmm1, xmm0
        mulps xmm0, xmm0
        movhlps xmm2, xmm0
        addss xmm2, xmm0
        shufps xmm0, xmm0, 0xe1
        addss xmm2, xmm0
        movss xmm4, xmm2
        movss xmm5, s_minLenSq
        cmpltss xmm4, xmm5
        andps xmm4, xmm5
        addss xmm2, xmm4
        rsqrtss xmm0, xmm2
        mulss xmm2, xmm0
        movss xmm3, s_three
        mulss xmm2, xmm0
        mulss xmm0, s_half
        subss xmm3, xmm2
        mulss xmm0, xmm3
        shufps xmm0, xmm0, 0
        mulps xmm0, xmm1
        movups [edx], xmm0
    }
}

/* dst = a x b. Proven on _func_0001EAB0 (its out-of-line copy), _func_0001C750@32, _func_00198F50@20. */
static __forceinline void AsmVec3Cross(float *dst, const float *a, const float *b)
{
    __asm {
        mov ecx, a
        mov edx, b
        movups xmm0, [ecx]
        movups xmm2, [edx]
        movaps xmm1, xmm0
        movaps xmm3, xmm2
        shufps xmm1, xmm1, 0xc9
        shufps xmm3, xmm3, 0xc9
        mulps xmm2, xmm1
        mulps xmm0, xmm3
        subps xmm0, xmm2
        mov eax, dst
        shufps xmm0, xmm0, 0xc9
        movups [eax], xmm0
    }
}

/* ---- 4x4 float matrices (16-byte aligned) -------------------------------------------------------------------- */

/* every element of m = 0. Proven on _func_00192310, _func_00191470@4, _func_0013E580. */
static __forceinline void AsmZeroMatrix(void *m)
{
    __asm {
        xorps xmm0, xmm0
        mov eax, m
        movaps [eax], xmm0
        movaps [eax+0x10], xmm0
        movaps [eax+0x20], xmm0
        movaps [eax+0x30], xmm0
    }
}

/* m = identity. Proven on _func_0013E4F0@4, _func_00026960, _func_00199C20@8. */
static __forceinline void AsmIdentityMatrix(void *m)
{
    __asm {
        xorps xmm0, xmm0
        mov eax, m
        mov edx, 0x3f800000
        movaps [eax], xmm0
        movaps [eax+0x10], xmm0
        movaps [eax+0x20], xmm0
        movaps [eax+0x30], xmm0
        mov [eax], edx
        mov [eax+0x14], edx
        mov [eax+0x28], edx
        mov [eax+0x3c], edx
    }
}

/* dst = src. Proven on _func_000264C0@4, _func_001677C0@4. */
static __forceinline void AsmCopyMatrix(void *dst, const void *src)
{
    __asm {
        mov eax, src
        mov edx, dst
        movaps xmm0, [eax]
        movaps xmm1, [eax+0x10]
        movaps xmm2, [eax+0x20]
        movaps xmm3, [eax+0x30]
        movaps [edx], xmm0
        movaps [edx+0x10], xmm1
        movaps [edx+0x20], xmm2
        movaps [edx+0x30], xmm3
    }
}

/* dst.xyz = m (3 rows of 4) * (v.x, v.y, v.z, 1), dst.w = 1. Proven on _func_00030AC0, _func_00197F70@8. */
static __forceinline void AsmTransformPoint(float *dst, const float *v, const float *m)
{
    __asm {
        mov ecx, v
        mov edx, m
        mov eax, dst
        movups xmm3, [ecx]
        movaps xmm0, [edx]
        movhps qword ptr [eax+8], xmm3
        movaps xmm1, [edx+0x10]
        mov dword ptr [eax+0xc], 0x3f800000
        movaps xmm2, [edx+0x20]
        movhps xmm3, qword ptr [eax+8]
        mulps xmm0, xmm3
        mulps xmm1, xmm3
        mulps xmm2, xmm3
        movaps xmm3, xmm0
        unpcklps xmm0, xmm1
        unpckhps xmm3, xmm1
        movhlps xmm5, xmm2
        addps xmm0, xmm3
        addps xmm2, xmm5
        movhlps xmm3, xmm0
        movlhps xmm0, xmm2
        shufps xmm3, xmm2, 0x14
        addps xmm0, xmm3
        movups [eax], xmm0
        mov dword ptr [eax+0xc], 0x3f800000
    }
}

/* dst = src transposed (4x4). Proven on _func_0013E4A0, whose whole body this is; the same sequence is inlined
 * in _func_00162020, _func_0013FF50@4, _func_0019B1A0@8, _func_00142F30@4 and _func_0019AE40. */
static __forceinline void AsmTransposeMatrix(float *dst, const float *src)
{
    __asm {
        mov eax, src
        mov edx, dst
        movlps xmm0, [eax]
        movhps xmm0, [eax+0x10]
        movlps xmm2, [eax+8]
        movhps xmm2, [eax+0x18]
        movlps xmm4, [eax+0x20]
        movhps xmm4, [eax+0x30]
        movlps xmm5, [eax+0x28]
        movhps xmm5, [eax+0x38]
        movaps xmm1, xmm0
        movaps xmm3, xmm2
        shufps xmm0, xmm4, 0x88
        shufps xmm1, xmm4, 0xdd
        shufps xmm2, xmm5, 0x88
        shufps xmm3, xmm5, 0xdd
        movaps [edx], xmm0
        movaps [edx+0x10], xmm1
        movaps [edx+0x20], xmm2
        movaps [edx+0x30], xmm3
    }
}

#endif
