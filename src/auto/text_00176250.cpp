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

#pragma intrinsic(memcpy)
extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
extern "C" u32 func_00175250(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch);
extern "C" u32 func_001755A0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int flags);
extern "C" void *func_001E8AA5(int size);
extern "C" void func_001E8390(void *p);
#pragma intrinsic(memcpy)
u32 func_00176D60(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int level)
{
  u8 *buf;
  int w;
  int h;
  int y;
  int n;
  if (level == 0) {
    for (y = 0; y < height; y++) {
      memcpy(dst + y * dstPitch * 3, src + y * srcPitch * 3, width * 3);
    }
    return 1;
  }
  if (level == 1) {
    func_00175250(dst, src, width, height, dstPitch, srcPitch);
    return 1;
  }
  w = width << (level - 1);
  h = height << (level - 1);
  buf = (u8 *)func_001E8AA5(h * w * 3);
  func_00175250(buf, src, w, h, w, srcPitch);
  if (level > 2) {
    n = level - 2;
    do {
      w /= 2;
      h /= 2;
      func_00175250(buf, buf, w, h, w, w * 2);
      n--;
    } while (n != 0);
  }
  func_00175250(dst, buf, width, height, dstPitch, w);
  func_001E8390(buf);
  return 1;
}

extern "C" u32 func_00175340(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch);
u32 func_00176EA0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int level)
{
  u8 *buf;
  int w;
  int h;
  int y;
  int n;
  if (level == 0) {
    for (y = 0; y < height; y++) {
      memcpy(dst + y * dstPitch * 4, src + y * srcPitch * 4, width * 4);
    }
    return 1;
  }
  if (level == 1) {
    func_00175340(dst, src, width, height, dstPitch, srcPitch);
    return 1;
  }
  w = width << (level - 1);
  h = height << (level - 1);
  buf = (u8 *)func_001E8AA5(h * w * 4);
  if (buf == 0) {
    return 0;
  }
  func_00175340(buf, src, w, h, w, srcPitch);
  if (level > 2) {
    n = level - 2;
    do {
      w /= 2;
      h /= 2;
      func_00175340(buf, buf, w, h, w, w * 2);
      n--;
    } while (n != 0);
  }
  func_00175340(dst, buf, width, height, dstPitch, w);
  func_001E8390(buf);
  return 1;
}

u32 func_001770E0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int level)
{
  u8 *buf;
  int w;
  int h;
  int y;
  int n;
  if (level == 0) {
    for (y = 0; y < height; y++) {
      memcpy(dst + y * dstPitch * 2, src + y * srcPitch * 2, width * 2);
    }
    return 1;
  }
  if (level == 1) {
    func_001755A0(dst, src, width, height, dstPitch, srcPitch, 0);
    return 1;
  }
  w = width << (level - 1);
  h = height << (level - 1);
  buf = (u8 *)func_001E8AA5(h * w * 2);
  func_001755A0(buf, src, w, h, w, srcPitch, 0);
  if (level > 2) {
    n = level - 2;
    do {
      w /= 2;
      h /= 2;
      func_001755A0(buf, buf, w, h, w, w * 2, 0);
      n--;
    } while (n != 0);
  }
  func_001755A0(dst, buf, width, height, dstPitch, w, 0);
  func_001E8390(buf);
  return 1;
}

