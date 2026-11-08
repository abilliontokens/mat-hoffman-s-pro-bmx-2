/* 14 functions from 0x00178210 to 0x00178C60, found by Ghidra. */
#include "common.h"

/* 0xF800 / 0xFFE0 masks: the original object references them as symbols */
extern char D_0000F800;
extern char D_0000FFE0;
extern char D_0000F000;
extern char D_0000FF00;
extern char D_0000FFF8;
extern char D_0000FFF0;
extern char D_0000FFF0;

u32 func_00178210(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int pal)
{
  u8 *srow;
  u8 *drow;
  u8 *s;
  u8 *d;
  int x;
  int y;

  srow = src;
  drow = dst;
  for (y = height; y > 0; y--) {
    s = srow;
    d = drow;
    for (x = width; x > 0; x--) {
      d[2] = *(u8 *)(pal + *s * 3 + 0x12);
      d[1] = *(u8 *)(pal + *s * 3 + 0x11);
      d[0] = *(u8 *)(pal + *s * 3 + 0x10);
      s++;
      d += 3;
    }
    srow += srcPitch;
    drow += dstPitch * 3;
  }
  return 1;
}

u32 func_001782B0(u16 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int pal)
{
  u8 *srow;
  u16 *drow;
  u8 *s;
  u16 *d;
  int x;
  int y;

  srow = src;
  drow = dst;
  for (y = height; y > 0; y--) {
    s = srow;
    d = drow;
    for (x = width; x > 0; x--) {
      *d = *(u16 *)(pal + 0x510 + *s * 2);
      d++;
      s++;
    }
    srow += srcPitch;
    drow += dstPitch;
  }
  return 1;
}

u32 func_00178330(u16 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int pal)
{
  u8 *srow;
  u16 *drow;
  u8 *s;
  u16 *d;
  int x;
  int y;

  srow = src;
  drow = dst;
  for (y = height; y > 0; y--) {
    s = srow;
    d = drow;
    for (x = width; x > 0; x--) {
      *d = *(u16 *)(pal + 0x310 + *s * 2);
      d++;
      s++;
    }
    srow += srcPitch;
    drow += dstPitch;
  }
  return 1;
}

u32 func_001783B0(u16 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
{
  u16 *d;
  u16 *p;
  u8 *s;
  u8 *q;
  u16 c;
  int x;
  int y;

  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    for (p = d, q = s, x = width; x > 0; x--) {
      c = (u16)(((((u16)q[2] & 0xfff0) << 4) | (u16)q[1]) & 0xfff0);
      c |= (u16)((u8)(q[3] & 0xf0) << 8);
      c |= (u16)(u8)(q[0] >> 4);
      *p = c;
      p++;
      q += 4;
    }
    s += srcPitch * 4;
    d += dstPitch;
  }
  return 1;
}

u32 func_00178470(u16 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int alphaRef)
{
  u16 *d;
  u16 *p;
  u8 *s;
  u8 *q;
  u16 c;
  int x;
  int y;

  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    for (p = d, q = s, x = width; x > 0; x--) {
      c = q[2];
      c = (u16)(((c & 0xfff8) << 5) | q[1]);
      c = (u16)(((c & 0xfff8) << 2) | (q[0] >> 3));
      *p = c;
      if (q[3] >= alphaRef) {
        c |= 0x8000;
        *p = c;
      }
      p++;
      q += 4;
    }
    s += srcPitch * 4;
    d += dstPitch;
  }
  return 1;
}

u32 func_00178540(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
{
  u8 *d;
  u8 *s;
  u8 *p;
  u8 *q;
  int x;
  int y;

  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    for (p = d, q = s, x = width; x > 0; x--) {
      p[2] = q[2];
      p[1] = q[1];
      p[0] = q[0];
      p += 3;
      q += 4;
    }
    s += srcPitch * 4;
    d += dstPitch * 3;
  }
  return 1;
}

u32 func_001785C0(u16 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int key)
{
    u16 *d;
    u16 *p;
    u8 *s;
    u8 *q;
    u16 c;
    u16 keyc;
    int x;
    int y;

    keyc = (u16)(((key >> 9) & 0x7c00) | ((key >> 6) & 0x3e0) | ((key >> 3) & 0x1f));
    s = src;
    d = dst;
    for (y = height; y > 0; y--) {
        for (p = d, q = s, x = width; x > 0; x--) {
            if (q[2] == 0xff && q[1] == 0 && q[0] == 0xff) {
                *p = keyc;
            } else {
                c = q[2];
                c = (u16)(((c & 0xfff8) << 5) | q[1]);
                c = (u16)((((c & 0xfff8) | 0xe000) << 2) | (q[0] >> 3));
                *p = c;
            }
            p++;
            q += 3;
        }
        s += srcPitch * 3;
        d += dstPitch;
    }
    return 1;
}

int _func_001786C0(unsigned short* dst, unsigned short* src, int w, int h, int dstStride, int srcStride, unsigned int thresh, unsigned int color)
{
    int t = (thresh & ~0xf) << 8;
    unsigned short c = ((color >> 9) & 0x7c00) | ((color >> 6) & 0x3e0) | ((color >> 3) & 0x1f);
    unsigned short* s = src;
    unsigned short* d = dst;
    unsigned short p;
    int x, y;
    for (y = h; y > 0; y--) {
        unsigned short* sp = s;
        unsigned short* dp = d;
        for (x = w; x > 0; x--, sp++) {
            p = *sp;
            if ((p & 0xf000) < t)
                *dp++ = c;
            else
                *dp++ = (unsigned short)(((((p & 0xf00) << 1) | (p & 0xf0)) << 1 | (p & 0xf)) << 1);
        }
        s += srcStride;
        d += dstStride;
    }
    return 1;
}

int func_001787C0(unsigned short* dst, unsigned short* src, int width, int height, int dstPitch, int srcPitch, int alpha)
{
    int x, y;
    unsigned short v;
    int thr = (alpha & ~0xF) << 8;
    unsigned short* srow = src;
    unsigned short* drow = dst;
    for (y = height; y > 0; y--) {
        for (x = width; x > 0; x--) {
            v = *src;
            if ((v & 0xF000) < thr) {
                *dst = 0;
            } else {
                *dst = (unsigned short)((((((v & 0xFF00) | 0xF000) << 1) | (v & 0xF0)) << 1 | (v & 0xF)) << 1);
            }
            dst++;
            src++;
        }
        srow += srcPitch;
        drow += dstPitch;
        src = srow;
        dst = drow;
    }
    return 1;
}

u32 func_00178890(u16 *dst, u16 *src, int width, int height, int dstPitch, int srcPitch, int thresh, u32 key)
{
  u16 *d;
  u16 *s;
  u16 *p;
  u16 *q;
  u16 c;
  u16 v;
  int ref;
  int x;
  int y;

  ref = (thresh & ~0xf) << 8;
  c = (u16)(((key >> 8) & 0xf800) | ((key >> 5) & 0x7e0) | ((key >> 3) & 0x1f));
  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    for (q = s, p = d, x = width; x > 0; x--) {
      v = *q;
      if ((v & 0xf000) < ref) {
        *p++ = c;
      } else {
        *p++ = (u16)(((((v & 0xff00) << 1) | (v & 0xf0)) << 2 | (v & 0xf)) << 1);
      }
      q++;
    }
    s += srcPitch;
    d += dstPitch;
  }
  return 1;
}

u32 func_00178990(u16 *dst, u16 *src, int width, int height, int dstPitch, int srcPitch, u32 key)
{
  u16 *d;
  u16 *s;
  u16 *p;
  u16 *q;
  u16 c;
  int x;
  int y;

  c = (u16)(((key & 0xf80000) >> 9) | ((key & 0xf800) >> 6) | ((key & 0xf8) >> 3));
  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    for (p = d, q = s, x = width; x > 0; x--) {
      *p = *q;
      if (*q == 0x7c1f) {
        *p = c;
      } else {
        *((u8 *)p + 1) |= 0x80;
      }
      p++;
      q++;
    }
    s += srcPitch;
    d += dstPitch;
  }
  return 1;
}

u32 func_00178A40(u16 *dst, u16 *src, int width, int height, int dstPitch, int srcPitch, u32 key)
{
    u16 *d;
    u16 *s;
    u16 *p;
    u16 *q;
    u16 c;
    int x;
    int y;

    c = (u16)(((key & 0xf80000) >> 9) | ((key & 0xf800) >> 6) | ((key & 0xf8) >> 3));
    s = src;
    d = dst;
    for (y = height; y > 0; y--) {
        for (q = s, p = d, x = width; x > 0; x--, q++) {
            if (*q & 0x8000) {
                *p++ &= 0x7fff;
            } else {
                *p++ = c;
            }
        }
        s += srcPitch;
        d += dstPitch;
    }
    return 1;
}

u32 func_00178AE0(u16 *dst, u16 *src, int width, int height, int dstPitch, int srcPitch, u32 key)
{
  u16 *d;
  u16 *s;
  u16 *p;
  u16 *q;
  u16 c;
  u16 v;
  int x;
  int y;

  c = (u16)(((key >> 8) & 0xf800) | ((key >> 5) & 0x7e0) | ((key >> 3) & 0x1f));
  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    for (p = d, q = s, x = width; x > 0; x--) {
      v = (u16)(((*q >> 1) & 0x7fe0) | (*q & 0x1f));
      *p = v;
      if (*q != c) {
        v |= 0x8000;
        *p = v;
      }
      p++;
      q++;
    }
    s += srcPitch;
    d += dstPitch;
  }
  return 1;
}

u32 func_00178BA0(u16 *dst, u16 *src, int width, int height, int dstPitch, int srcPitch, u32 key)
{
  u16 *d;
  u16 *s;
  u16 *p;
  u16 *q;
  u16 c;
  u16 v;
  int x;
  int y;

  c = (u16)(((key >> 8) & 0xf800) | ((key >> 5) & 0x7e0) | ((key >> 3) & 0x1f));
  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    for (q = s, p = d, x = width; x > 0; x--) {
      v = *q;
      if (v & 0x8000) {
        *p++ = (u16)(((v & 0xffe0) << 1) | (v & 0x1f));
      } else {
        *p++ = c;
      }
      q++;
    }
    s += srcPitch;
    d += dstPitch;
  }
  return 1;
}

