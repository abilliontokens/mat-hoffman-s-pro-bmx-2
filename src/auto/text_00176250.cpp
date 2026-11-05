/* 7 functions from 0x00176250 to 0x00177230, found by Ghidra. */
#include "common.h"

u32 func_00176CD0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
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
      p[2] = q[1] & 0xf8;
      p[1] = (*(u16 *)q >> 3) & 0xfc;
      p[0] = q[0] << 3;
      p += 3;
      q += 2;
    }
    s += srcPitch * 2;
    d += dstPitch * 3;
  }
  return 1;
}
