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
    for (x = width, d = drow; x > 0; x--) {
      d[2] = *(u8 *)(pal + *s * 3 + 0x12);
      d[1] = *(u8 *)(pal + *s * 3 + 0x11);
      d[0] = *(u8 *)(pal + *s * 3 + 0x10);
      s++;
      d += 3;
    }
    drow += dstPitch * 3;
    srow += srcPitch;
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
  u16 *drow;
  u8 *srow;
  u16 *d;
  u8 *s;
  int x;
  int y;

  drow = dst;
  srow = src;
  for (y = height; y > 0; y--) {
    for (x = width, d = drow, s = srow; x > 0; x--) {
      *d = (u16)(((((u16)(s[2] & 0xf0) << 4) | s[1]) & 0xfff0) | ((s[3] & 0xf0) << 8) |
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
  u8 *s;
  u16 c;
  int x;
  int y;
  int srcStep = srcPitch * 4;
  int dstStep = dstPitch;

  for (y = height; y > 0; y--) {
    for (d = dst, s = src, x = width; x > 0; x--) {
      c = s[2];
      c = (u16)(((c & 0xfff8) << 5) | s[1]);
      c = (u16)(((c & 0xfff8) << 2) | (s[0] >> 3));
      *d = c;
      if (s[3] >= alphaRef) {
        c |= 0x8000;
        *d = c;
      }
      d++;
      s += 4;
    }
    src += srcStep;
    dst += dstStep;
  }
  return 1;
}

u32 func_00178540(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
{
  u8 *d;
  u8 *s;
  int x;

  for (; height > 0; height--) {
    for (x = width, d = dst, s = src; x > 0; x--) {
      d[2] = s[2];
      d[1] = s[1];
      d[0] = s[0];
      d += 3;
      s += 4;
    }
    dst += dstPitch * 3;
    src += srcPitch * 4;
  }
  return 1;
}

u32 func_00178990(u16 *dst, u16 *src, int width, int height, int dstPitch, int srcPitch, u32 key)
{
  u16 *d;
  u16 *s;
  u16 c;
  int x;
  int y;
  int srcStep;
  int dstStep;

  c = (u16)(((key & 0xf80000) >> 9) | ((key & 0xf800) >> 6) | ((key & 0xf8) >> 3));
  srcStep = srcPitch;
  dstStep = dstPitch;
  for (y = height; y > 0; y--) {
    for (d = dst, s = src, x = width; x > 0; x--) {
      *d = *s;
      if (*s == 0x7c1f) {
        *d = c;
      } else {
        *((u8 *)d + 1) |= 0x80;
      }
      d++;
      s++;
    }
    src += srcStep;
    dst += dstStep;
  }
  return 1;
}

u32 func_00178A40(u16 *dst, u16 *src, int width, int height, int dstPitch, int srcPitch, u32 key)
{
  u8 *d;
  u8 *s;
  u16 c;
  int x;
  int y;
  int srcStep;
  int dstStep;

  c = (u16)(((key & 0xf80000) >> 9) | ((key & 0xf800) >> 6) | ((key & 0xf8) >> 3));
  srcStep = srcPitch;
  dstStep = dstPitch;
  for (y = height; y > 0; y--) {
    for (d = (u8 *)dst, s = (u8 *)src, x = width; x > 0; x--) {
      if (s[1] & 0x80) {
        d[1] &= 0x7f;
      } else {
        *(u16 *)d = c;
      }
      d += 2;
      s += 2;
    }
    src += srcStep;
    dst += dstStep;
  }
  return 1;
}

