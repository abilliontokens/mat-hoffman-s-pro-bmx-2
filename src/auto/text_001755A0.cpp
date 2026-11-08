/* 4 functions from 0x001755A0 to 0x00176250, found by Ghidra. */
#include "common.h"

extern char D_0000F0F0[];
extern char D_0000FFFF[];
extern char D_0000FFF8[];
extern char D_0000F81F[];
extern char D_0000FFFC[];


#pragma optimize("y", on)
int _func_001755A0(unsigned short *dst, unsigned short *src, int w, int h, int dstPitch, int srcPitch, unsigned char flags)
{
    int x, y;
    if (flags & 1) {
        unsigned short *s = src;
        unsigned short *d = dst;
        for (y = h; y > 0; --y) {
            unsigned short *p = d;
            for (x = h; x > 0; --x) {
                int a = s[0], b = s[1], c = s[srcPitch], e = s[srcPitch + 1];
                int t = (((a & (int)D_0000F0F0) << 12 | (a & 0xF0F))
                       + ((b & (int)D_0000F0F0) << 12 | (b & 0xF0F))
                       + ((c & (int)D_0000F0F0) << 12 | (c & 0xF0F))
                       + ((e & (int)D_0000F0F0) << 12 | (e & 0xF0F))) >> 2;
                t = (t >> 12 ^ t) & 0xF0F ^ (t >> 12);
                *p++ = (unsigned short)t;
            }
            s += srcPitch * 2;
            d += dstPitch;
        }
        return 1;
    }
    {
        unsigned short *srow = src;
        unsigned short *drow = dst;
        for (y = h; y > 0; --y) {
            unsigned short *s = srow;
            unsigned short *d = drow;
            for (x = w; x > 0; --x) {
                unsigned int a = s[0], b = s[1], c = s[srcPitch], e = s[srcPitch + 1];
                unsigned int r = (((((a >> 10) & 0x3C) + ((b >> 10) & 0x3C) + ((c >> 10) & 0x3C) + ((e >> 10) & 0x3C) + 2) >> 4) << 4)
                    | (((((a >> 6) & 0x3C) + ((b >> 6) & 0x3C) + ((c >> 6) & 0x3C) + ((e >> 6) & 0x3C) + 2) >> 4));
                r = (r << 4) | (((((a >> 2) & 0x3C) + ((b >> 2) & 0x3C) + ((c >> 2) & 0x3C) + ((e >> 2) & 0x3C) + 2) >> 4));
                r = (r << 4) | ((((a & 15) + (b & 15) + (c & 15) + (e & 15)) * 4 + 2) >> 4);
                *d++ = (unsigned short)r;
                s += 2;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
        }
    }
    return 1;
}
#pragma optimize("y", on)
int func_00175840(unsigned short *dst, unsigned short *src, int width, int height, int dstStride, int srcStride)
{
    unsigned short *srcRow = src, *dstRow = dst;
    for (int y = height; y > 0; --y) {
        unsigned short *out = dstRow;
        for (int x = width; x > 0; --x) {
            unsigned short p0, p1, p2, p3;
            int n = 0, b = 0, g = 0, r = 0;
            p0 = src[0];
            p2 = src[srcStride];
            p3 = src[srcStride + 1];
            if (p0 & 0x8000) { r = (p0 >> 7) & 248; g = (p0 >> 2) & 248; b = (p0 & 31) << 3; n = 1; }
            p1 = src[1];
            if (p1 & 0x8000) { r += (p1 >> 7) & 248; g += (p1 >> 2) & 248; b += (p1 & 31) << 3; ++n; }
            if (p2 & 0x8000) { r += (p2 >> 7) & 248; g += (p2 >> 2) & 248; b += (p2 & 31) << 3; ++n; }
            if (p3 & 0x8000) { r += (p3 >> 7) & 248; g += (p3 >> 2) & 248; b += (p3 & 31) << 3; ++n; }
            if (n >= 2) {
                int c = ((r + n * 4) / n & 0xfff8) << 5;
                c |= (g + n * 4) / n;
                c = (c & 0xfff8) | 0xe000;
                *out++ = (c << 2) | (((b + n * 4) / n) >> 3);
            } else *out++ = 0;
            src += 2;
        }
        srcRow += srcStride * 2; src = srcRow;
        dstRow += dstStride;
    }
    return 1;
}
#pragma optimize("y", off)
int func_00175A10(unsigned short *dst, unsigned short *src, int width, int height, int dstPitch, int srcPitch, unsigned char flags, unsigned short key)
{
    unsigned short *srow;
    unsigned short *drow;
    unsigned short *s;
    unsigned short *d;
    unsigned int sum;
    unsigned int pair;
    unsigned int a;
    unsigned int b;
    int x;
    int y;
    srow = src;
    drow = dst;
    if (flags & 1) {
        volatile int rowOffset = srcPitch * 2;
        for (y = height; y > 0; --y) {
            s = srow;
            d = drow;
            for (x = height; x != 0; --x) {
                sum = 0;
                pair = *(unsigned int *)s;
                a = pair & (unsigned int)D_0000FFFF;
                b = pair >> 16;
                sum += (b * 0x8000) & 0x1f00000;
                sum += (a & 0x3e0) << 15;
                sum += b & 0x7c1f;
                sum += a & 0x7c1f;
                s = (unsigned short *)((char *)s + rowOffset);
                pair = *(unsigned int *)s;
                a = pair & (unsigned int)D_0000FFFF;
                b = pair >> 16;
                sum += (b * 0x8000) & 0x1f00000;
                sum += (a & 0x3e0) << 15;
                sum += b & 0x7c1f;
                sum += a & 0x7c1f;
                s = (unsigned short *)((char *)s - rowOffset);
                sum >>= 2;
                *d = (unsigned short)((sum & 0x7c1f) + ((sum >> 15) & 0x3e0));
                s += 2;
                ++d;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
        }
    } else if (flags & 2) {
        for (y = height; y > 0; --y) {
            s = srow;
            d = drow;
            for (x = width; x > 0; --x) {
                unsigned short c = s[srcPitch];
                unsigned short e = s[srcPitch + 1];
                unsigned short p0 = s[0];
                unsigned short p1 = s[1];
                int n = 0, blue = 0, green = 0, red = 0;
                if (p0 != key) { red += (p0 >> 7) & 0xf8; green += (p0 >> 2) & 0xf8; blue += (p0 & 31) << 3; ++n; }
                if (p1 != key) { red += (p1 >> 7) & 0xf8; green += (p1 >> 2) & 0xf8; blue += (p1 & 31) << 3; ++n; }
                if (c != key) { red += (c >> 7) & 0xf8; green += (c >> 2) & 0xf8; blue += (c & 31) << 3; ++n; }
                if (e != key) { red += (e >> 7) & 0xf8; green += (e >> 2) & 0xf8; blue += (e & 31) << 3; ++n; }
                int out = key;
                if (n >= 1) {
                    int t = (red + n * 4) / n;
                    t = (t & (unsigned int)D_0000FFF8) << 5;
                    t |= (green + n * 4) / n;
                    t = (t & (unsigned int)D_0000FFF8) << 2;
                    t |= ((blue + n * 4) / n) >> 3;
                    out = t;
                }
                *d++ = (unsigned short)out;
                s += 2;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
        }
    } else {
        for (y = height; y > 0; --y) {
            s = srow;
            d = drow;
            for (x = width; x > 0; --x) {
                unsigned short c = s[srcPitch];
                unsigned short p0 = s[0];
                unsigned short p1 = s[1];
                unsigned short e = s[srcPitch + 1];
                int red = (((e >> 7) & 0xf8) + ((c >> 7) & 0xf8) + ((p1 >> 7) & 0xf8) + ((p0 >> 7) & 0xf8) + 2) >> 5;
                int green = (((e >> 2) & 0xf8) + ((c >> 2) & 0xf8) + ((p1 >> 2) & 0xf8) + ((p0 >> 2) & 0xf8) + 2) >> 5;
                int blue = (((e & 31) + (c & 31) + (p1 & 31) + (p0 & 31)) * 8 + 2) >> 5;
                *d++ = (unsigned short)((((red << 5) | green) << 5) | blue);
                s += 2;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
        }
    }
    return 1;
}
#pragma optimize("", on)

#pragma optimize("", on)

#pragma optimize("", on)

int func_00175E30(unsigned short *dst, unsigned short *src, int width, int height, int dstPitch, int srcPitch, unsigned char flags, unsigned short key)
{
    int y;
    int x;
    if (flags & 1) {
        unsigned short *srow = src;
        unsigned short *drow = dst;
        for (y = height; y > 0; --y) {
            unsigned int *p = (unsigned int *)srow;
            unsigned short *d = drow;
            for (x = height; x != 0; --x) {
                unsigned int sum = 0;
                unsigned int a;
                unsigned short b;
                a = *p & (unsigned int)D_0000FFFF;
                b = (unsigned short)(*p >> 16);
                sum += (b << 15) & 0x3f00000;
                sum += (a & 0x7e0) << 15;
                sum += b & (unsigned int)D_0000F81F;
                sum += a & (unsigned int)D_0000F81F;
                p = (unsigned int *)((unsigned short *)p + srcPitch);
                a = *p & (unsigned int)D_0000FFFF;
                b = (unsigned short)(*p >> 16);
                sum += (b << 15) & 0x3f00000;
                sum += (a & 0x7e0) << 15;
                sum += b & (unsigned int)D_0000F81F;
                sum += a & (unsigned int)D_0000F81F;
                p = (unsigned int *)((unsigned short *)p - srcPitch);
                sum >>= 2;
                *d = (unsigned short)((sum & (unsigned int)D_0000F81F) + ((sum >> 15) & 0x7e0));
                p++;
                ++d;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
        }
    } else if (flags & 2) {
        unsigned short *srow = src;
        unsigned short *drow = dst;
        for (y = height; y > 0; --y) {
            unsigned short *s = srow;
            unsigned short *d = drow;
            for (x = width; x > 0; --x) {
                unsigned short c = s[srcPitch];
                unsigned short e = s[srcPitch + 1];
                unsigned short a = s[0];
                unsigned short b = s[1];
                int count = 0, blue = 0, green = 0, red = 0;
                if (a != key) { red += (a >> 8) & 0xf8; green += (a >> 3) & 0xfc; blue += (a & 31) << 3; ++count; }
                if (b != key) { red += (b >> 8) & 0xf8; green += (b >> 3) & 0xfc; blue += (b & 31) << 3; ++count; }
                if (c != key) { red += (c >> 8) & 0xf8; green += (c >> 3) & 0xfc; blue += (c & 31) << 3; ++count; }
                if (e != key) { red += (e >> 8) & 0xf8; green += (e >> 3) & 0xfc; blue += (e & 31) << 3; ++count; }
                int out = key;
                if (count >= 1) {
                    int t = (red + count * 4) / count;
                    t = (t & (unsigned int)D_0000FFF8) << 5;
                    t |= (green + count * 2) / count;
                    t = (t & (unsigned int)D_0000FFFC) << 3;
                    t |= ((blue + count * 4) / count) >> 3;
                    out = t;
                }
                *d++ = (unsigned short)out;
                s += 2;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
        }
    } else {
        unsigned short *srow = src;
        unsigned short *drow = dst;
        for (y = height; y > 0; --y) {
            unsigned short *s = srow;
            unsigned short *d = drow;
            for (x = width; x > 0; --x) {
                unsigned short c = s[srcPitch];
                unsigned short a = s[0];
                unsigned short b = s[1];
                unsigned short e = s[srcPitch + 1];
                int red = (((e >> 8) & 0xf8) + ((c >> 8) & 0xf8) + ((b >> 8) & 0xf8) + ((a >> 8) & 0xf8) + 8) >> 5;
                int green = (((e >> 3) & 0xfc) + ((c >> 3) & 0xfc) + ((b >> 3) & 0xfc) + ((a >> 3) & 0xfc) + 4) >> 4;
                int blue = (((e & 31) + (c & 31) + (b & 31) + (a & 31)) * 8 + 8) >> 5;
                *d++ = (unsigned short)((((red << 6) | green) << 5) | blue);
                s += 2;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
        }
    }
    return 1;
}
