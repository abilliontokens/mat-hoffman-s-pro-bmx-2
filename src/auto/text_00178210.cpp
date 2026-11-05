/* 14 functions from 0x00178210 to 0x00178C60, found by Ghidra. */
#include "common.h"

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
  u8 *srow;
  u16 *drow;
  u8 *s;
  u16 *d;
  int x;
  int y;

  srow = src;
  drow = dst;
  for (y = height; y > 0; y--) {
    for (x = width, d = drow, s = srow; x > 0; x--) {
      *d = (u16)((((((u16)s[2] & 0xf0) << 4) | s[1]) & 0xfff0) | ((s[3] & 0xf0) << 8) |
                 (s[0] >> 4));
      d++;
      s += 4;
    }
    drow += dstPitch;
    srow += srcPitch * 4;
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
      c = (u16)(((c & ~7) << 5) | q[1]);
      c = (u16)(((c & ~7) << 2) | (q[0] >> 3));
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

u32 func_00178990(u16 *dst, u16 *src, int width, int height, int dstPitch, int srcPitch, u32 key)
{
  u16 *d;
  u16 *s;
  u16 *p;
  u16 *q;
  u16 c;
  u16 v;
  int x;
  int y;

  c = (u16)(((key & 0xf80000) >> 9) | ((key & 0xf800) >> 6) | ((key & 0xf8) >> 3));
  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    for (p = d, q = s, x = width; x > 0; x--) {
      v = *q;
      *p = v;
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
  u8 *p;
  u8 *q;
  u16 c;
  int x;
  int y;

  c = (u16)(((key & 0xf80000) >> 9) | ((key & 0xf800) >> 6) | ((key & 0xf8) >> 3));
  s = src;
  d = dst;
  for (y = height; y > 0; y--) {
    q = (u8 *)s;
    p = (u8 *)d;
    for (x = width; x > 0; x--) {
      if (q[1] & 0x80) {
        p[1] &= 0x7f;
      } else {
        *(u16 *)p = c;
      }
      q += 2;
      p += 2;
    }
    s += srcPitch;
    d += dstPitch;
  }
  return 1;
}

