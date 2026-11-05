/* 17 functions from 0x00177230 to 0x00178210, found by Ghidra. */
#include "common.h"

u32 func_00177920(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
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
      p[3] = q[1] & 0xf0;
      p[2] = (*(u16 *)q >> 4) & 0xf0;
      p[1] = q[0] & 0xf0;
      p[0] = q[0] << 4;
      p += 4;
      q += 2;
    }
    s += srcPitch * 2;
    d += dstPitch * 4;
  }
  return 1;
}

u32 func_00178040(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
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
      if (*(u16 *)q == 0x7c1f) {
        p[2] = 0xff;
        p[1] = 0;
        p[0] = 0xff;
      } else {
        p[2] = (*(u16 *)q >> 7) & 0xf8;
        p[1] = (*(u16 *)q >> 2) & 0xf8;
        p[0] = q[0] << 3;
      }
      p += 3;
      q += 2;
    }
    s += srcPitch * 2;
    d += dstPitch * 3;
  }
  return 1;
}

