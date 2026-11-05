/* 17 functions from 0x00177230 to 0x00178210, found by Ghidra. */
#include "common.h"

int func_00135420(void);
/* palette lookup table object: its table lives at +0x8710 */
struct C_00135420 {
    int func_00135420(void);
};
int func_00135410(void);
int func_00176630(u8 *src, int fmt, int width, int height, int srcPitch, int dstPitch, int a6, int a7, int a8, u8 *dst, int a10);

u32 func_00177860(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
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
      p[2] = (*(u16 *)q >> 7) & 0xf8;
      p[1] = (*(u16 *)q >> 2) & 0xf8;
      p[0] = q[0] << 3;
      p[3] = (*(u16 *)q & 0x8000) ? 0xff : 0;
      p += 4;
      q += 2;
    }
    s += srcPitch * 2;
    d += dstPitch * 4;
  }
  return 1;
}

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

u32 func_00177CA0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int a6, int a7)
{
  u8 *d;
  u8 *s;
  u8 *p;
  u8 *q;
  u8 *tbl;
  int x;
  int y;
  if (a6 != 0 && a7 != 0) {
    func_00176630(src, 0x235, width, height, srcPitch, dstPitch, 0, 0, 0, dst, a7);
    return 1;
  }
  s = src;
  d = dst;
  tbl = (u8 *)func_00135420();
  for (y = height; y > 0; y--) {
    for (q = s, p = d, x = width; x > 0; x--) {
      *p = tbl[*(u16 *)q];
      p++;
      q += 2;
    }
    s += srcPitch * 2;
    d += dstPitch;
  }
  return 1;
}

u32 func_00177F50(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, u32 key)
{
  u8 *s = src;
  u8 *d = dst;
  u8 *p;
  u8 *q;
  int x;
  int y;
  u16 c;
  c = ((key >> 9) & 0x7c00) | ((key >> 6) & 0x3e0) | ((key >> 3) & 0x1f);
  for (y = height; y > 0; y--) {
    for (p = d, q = s, x = width; x > 0; x--) {
      if (*(u16 *)q == c) {
        p[2] = 0xff;
        p[1] = 0;
        p[0] = 0xff;
      } else {
        p[2] = (*(u16 *)q >> 7) & 0xf8;
        p[1] = (*(u16 *)q >> 2) & 0xf8;
        p[0] = q[0] << 3;
      }
      p[3] = 0xff;
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

