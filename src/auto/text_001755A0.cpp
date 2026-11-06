/* 4 functions from 0x001755A0 to 0x00176250, found by Ghidra. */
#include "common.h"

extern char D_0000F0F0[];
extern char D_0000FFFF[];
extern char D_0000FFF8[];
extern char D_0000F81F[];
extern char D_0000FFFC[];

static void Shrink565Fast(unsigned short *dst, unsigned short *src, int width, int height, int dstPitch, int srcPitch)
{
    int y;
    int x;
    for (y = height; y > 0; --y) {
        unsigned int *p = (unsigned int *)src;
        unsigned short *d = dst;
        for (x = height; x != 0; --x) {
            unsigned int sum = 0;
            unsigned int a, b;
            a = *p & (unsigned int)D_0000FFFF;
            b = *p >> 16;
            sum += (b << 15) & 0x3f00000;
            sum += (a & 0x7e0) << 15;
            sum += b & (unsigned int)D_0000F81F;
            sum += a & (unsigned int)D_0000F81F;
            p = (unsigned int *)((unsigned short *)p + srcPitch);
            a = *p & (unsigned int)D_0000FFFF;
            b = *p >> 16;
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
        src += srcPitch * 2;
        dst += dstPitch;
    }
}

static void Shrink565Keyed(unsigned short *dst, unsigned short *src, int width, int height, int dstPitch, int srcPitch, unsigned short key)
{
    int y;
    int x;
    for (y = height; y > 0; --y) {
        unsigned short *s = src;
        unsigned short *d = dst;
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
            unsigned short result = key;
            if (count >= 1) {
                int t = (red + count * 4) / count;
                t = (t & (unsigned int)D_0000FFF8) << 5;
                t |= (green + count * 2) / count;
                t = (t & (unsigned int)D_0000FFFC) << 3;
                t |= ((blue + count * 4) / count) >> 3;
                result = (unsigned short)t;
            }
            *d++ = result;
            s += 2;
        }
        src += srcPitch * 2;
        dst += dstPitch;
    }
}

static void Shrink565Plain(unsigned short *dst, unsigned short *src, int width, int height, int dstPitch, int srcPitch)
{
    int y;
    int x;
    for (y = height; y > 0; --y) {
        unsigned short *s = src;
        unsigned short *d = dst;
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
        src += srcPitch * 2;
        dst += dstPitch;
    }
}

#pragma optimize("y", off)
int func_00175E30(unsigned short *dst, unsigned short *src, int width, int height, int dstPitch, int srcPitch, unsigned char flags, unsigned short key)
{
    int y;
    int x;
    unsigned short *srow = src;
    unsigned short *drow = dst;
    if (flags & 1) {
        for (y = height; y > 0; --y) {
            unsigned int *p = (unsigned int *)srow;
            unsigned short *d = drow;
            for (x = height; x != 0; --x) {
                unsigned int sum = 0;
                unsigned int a, b;
                a = *p & (unsigned int)D_0000FFFF;
                b = *p >> 16;
                sum += (b << 15) & 0x3f00000;
                sum += (a & 0x7e0) << 15;
                sum += b & (unsigned int)D_0000F81F;
                sum += a & (unsigned int)D_0000F81F;
                p = (unsigned int *)((unsigned short *)p + srcPitch);
                a = *p & (unsigned int)D_0000FFFF;
                b = *p >> 16;
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
                unsigned short result = key;
                if (count >= 1) {
                    int t = (red + count * 4) / count;
                    t = (t & (unsigned int)D_0000FFF8) << 5;
                    t |= (green + count * 2) / count;
                    t = (t & (unsigned int)D_0000FFFC) << 3;
                    t |= ((blue + count * 4) / count) >> 3;
                    result = (unsigned short)t;
                }
                *d++ = result;
                s += 2;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
        }
    } else {
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
#pragma optimize("", on)
