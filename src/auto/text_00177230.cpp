/* 17 functions from 0x00177230 to 0x00178210, found by Ghidra. */
#include "common.h"

extern char D_0000F800;
extern char D_0000FFF8;
extern char D_0000FFFC;

/* palette lookup table object: its table lives at +0x8710 */
struct C_00135420 {
    int func_00135420(void);
};
#include <string.h>
/* palette lookup table object: table at +0x8710 (same layout as C_00135420) */
struct C_00135410 {
    int func_00135410(void);
};
u32 func_00175840(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch);
u32 func_00175A10(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int a7, int key);
void *func_001E8AA5(int size);
void func_001E8390(void *p);
int func_00176630(u8 *src, int fmt, int width, int height, int srcPitch, int dstPitch, int a6, int a7, int a8, u8 *dst, int a10);

u32 func_00177230(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int level)
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
    func_00175840(dst, src, width, height, dstPitch, srcPitch);
    return 1;
  }
  w = width << (level - 1);
  h = height << (level - 1);
  buf = (u8 *)func_001E8AA5(h * w * 2);
  func_00175840(buf, src, w, h, w, srcPitch);
  if (level > 2) {
    n = level - 2;
    do {
      w /= 2;
      h /= 2;
      func_00175840(buf, buf, w, h, w, w * 2);
      n--;
    } while (n != 0);
  }
  func_00175840(dst, buf, width, height, dstPitch, w);
  func_001E8390(buf);
  return 1;
}

extern "C" void *memcpy(void *dst, const void *src, unsigned int n);
#pragma intrinsic(memcpy)
extern "C" u32 func_00175E30(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int flags, unsigned int mask);
extern char D_0000F81F;
u32 func_00177370(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int level, int flags)
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
    func_00175E30(dst, src, width, height, dstPitch, srcPitch, flags, (unsigned int)&D_0000F81F);
    return 1;
  }
  w = width << (level - 1);
  h = height << (level - 1);
  buf = (u8 *)func_001E8AA5(h * w * 2);
  func_00175E30(buf, src, w, h, w, srcPitch, flags, (unsigned int)&D_0000F81F);
  if (level > 2) {
    n = level - 2;
    do {
      w /= 2;
      h /= 2;
      func_00175E30(buf, buf, w, h, w, w * 2, flags, (unsigned int)&D_0000F81F);
      n--;
    } while (n != 0);
  }
  func_00175E30(dst, buf, width, height, dstPitch, w, flags, (unsigned int)&D_0000F81F);
  func_001E8390(buf);
  return 1;
}

u32 func_001774E0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int level, int a7)
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
    func_00175A10(dst, src, width, height, dstPitch, srcPitch, a7, 0x7c1f);
    return 1;
  }
  w = width << (level - 1);
  h = height << (level - 1);
  buf = (u8 *)func_001E8AA5(h * w * 2);
  func_00175A10(buf, src, w, h, w, srcPitch, a7, 0x7c1f);
  if (level > 2) {
    n = level - 2;
    do {
      w /= 2;
      h /= 2;
      func_00175A10(buf, buf, w, h, w, w * 2, a7, 0x7c1f);
      n--;
    } while (n != 0);
  }
  func_00175A10(dst, buf, width, height, dstPitch, w, a7, 0x7c1f);
  func_001E8390(buf);
  return 1;
}

#pragma intrinsic(memcpy)
u32 func_00176250(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int flags);
#pragma intrinsic(memcpy)
u32 func_00177650(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int level, int flags)
{
  u8 *buf;
  int w;
  int h;
  int y;
  int n;
  if (level == 0) {
    for (y = 0; y < height; y++) {
      memcpy(dst + y * dstPitch, src + y * srcPitch, width);
    }
    return 1;
  }
  if (level == 1) {
    func_00176250(dst, src, width, height, dstPitch, srcPitch, flags);
    return 1;
  }
  w = width << (level - 1);
  h = height << (level - 1);
  buf = (u8 *)func_001E8AA5(h * w);
  func_00176250(buf, src, w, h, w, srcPitch, flags);
  if (level > 2) {
    n = level - 2;
    do {
      w /= 2;
      h /= 2;
      func_00176250(buf, buf, w, h, w, w * 2, flags);
      n--;
    } while (n != 0);
  }
  func_00176250(dst, buf, width, height, dstPitch, w, flags);
  func_001E8390(buf);
  return 1;
}

u32 func_00177780(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, u32 colorKey)
{
  u8 *s = src;
  u8 *d = dst;
  u8 *p;
  u8 *q;
  int x;
  int y;
  u16 key;
  u16 v;
  key = ((colorKey >> 8) & 0xf800) | ((colorKey >> 5) & 0x7e0) | ((colorKey >> 3) & 0x1f);
  for (y = height; y > 0; y--) {
    for (p = d, q = s, x = width; x > 0; x--) {
      v = *(u16 *)q;
      if (v == key) {
        p[2] = 0xff;
        p[1] = 0;
        p[0] = 0xff;
      } else {
        p[2] = (v >> 8) & 0xf8;
        p[1] = (*(u16 *)q >> 3) & 0xfc;
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
      p[3] = p[3];
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

extern int func_00176630(void *, int, int, int, int, int, int, void *, int, int, int);
extern int func_00176630(u8 *, int, int, int, int, int, int, int, u16 *, int, int);
u32 func_001779C0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int flag)
{
 u8 *d; u8 *s; u8 *p; u8 *q; int x; int y;
 if (flag) {
  func_00176630(src, 0x378, width, height, srcPitch, dstPitch, 0, dst, 0, 0, 0);
  return 1;
 }
 s = src; d = dst;
 for (y = height; y > 0; y--) {
  for (p = d, q = s, x = width; x > 0; x--) {
   *(u16 *)p = (((((u16)q[2] & 0xfff8) << 5) | (u16)q[1]) & 0xfffc) << 3 | (u16)(q[0] >> 3);
   p += 2; q += 3;
  }
  s += srcPitch * 3; d += dstPitch * 2;
 }
 return 1;
}

int func_00176630(unsigned char*, int, int, int, int, int, int, int, unsigned short*, int, int);
int func_00177AB0(unsigned short* dst, unsigned char* src, int width, int height, int dstPitch, int srcPitch, int useBlit)
{
    if (useBlit) {
        func_00176630(src, 0x378, width, height, srcPitch, dstPitch, 0, 0, dst, 0, 0);
        return 1;
    }
    unsigned short* row = dst;
    unsigned char* srow = src;
    for (int y = 0; y < height; y++) {
        unsigned short* d = row;
        unsigned char* s = srow;
        for (int x = 0; x < width; x++) {
            *d++ = (unsigned short)((((((unsigned short)s[2] & 0xFFF8) << 5) | s[1]) & 0xFFF8) << 2 | (unsigned short)(s[0] >> 3));
            s += 3;
        }
        srow += srcPitch * 3;
        row += dstPitch;
    }
    return 1;
}

u32 func_00177BA0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int a7, C_00135410 *pal)
{
    u8 *d;
    u8 *s;
    u8 *p;
    u8 *q;
    u8 *tbl;
    int x;
    int y;
    if (a7 != 0 && pal != 0) {
        func_00176630(src, 0x378, width, height, srcPitch, dstPitch, 0, 0, 0, dst, (int)pal);
        return 1;
    }
    s = src;
    d = dst;
    tbl = (u8 *)pal->func_00135410();
    for (y = height; y > 0; y--) {
        for (q = s, p = d, x = width; x > 0; x--) {
            u16 r = q[2];
            u16 g = q[1];
            u16 b = q[0];
            u16 t = (((r & (u16)0xFFF8) << 5) | g) & 0xFFF8;
            *p = tbl[(u16)(t << 2) | (b >> 3)];
            p++;
            q += 3;
        }
        s += srcPitch * 3;
        d += dstPitch;
    }
    return 1;
}

u32 func_00177CA0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int a6, C_00135420 *pal)
{
  u8 *d;
  u8 *s;
  u8 *p;
  u8 *q;
  u8 *tbl;
  int x;
  int y;
  if (a6 != 0 && pal != 0) {
    func_00176630(src, 0x235, width, height, srcPitch, dstPitch, 0, 0, 0, dst, (int)pal);
    return 1;
  }
  s = src;
  d = dst;
  tbl = (u8 *)pal->func_00135420();
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

static __declspec(noinline) int func_00177D60(int width, u16 *dst, u32 *src, int dstPitch, int height, u8 *tbl);
extern void func_sink(void *, void *, void *, void *);
static __declspec(noinline) int func_00177D60(int width, u16 *dst, u32 *src, int dstPitch, int height, u8 *tbl)
{
  int n = width / 8;
  int x;
  func_sink(&src, &dstPitch, &height, &tbl);
  while (height > 0) {
    for (x = n; x > 0; x--) {
      dst[0] = tbl[src[1] & 0x7fff] | (tbl[(src[1] >> 16) & 0x7fff] << 8);
      dst[1] = tbl[src[0] & 0x7fff] | (tbl[(src[0] >> 16) & 0x7fff] << 8);
      src += 2;
    }
    dst += dstPitch;
    height--;
  }
  return 0;
}

u32 func_00177E50(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, int a7, C_00135410 *pal)
{
 u8 *d; u8 *s; u8 *p; u8 *q; int x; int y; u8 *tbl;
 if (a7 && pal) { func_00176630(src, 0x22b, width, height, srcPitch, dstPitch, 0, 0, 0, dst, (int)pal); return 1; }
 if (srcPitch == width && srcPitch % 8 == 0) {
  func_00177D60(width, (u16 *)dst, (u32 *)src, dstPitch, height, (u8 *)pal->func_00135410());
  return 1;
 }
 s = src; d = dst;
 tbl = (u8 *)pal->func_00135410();
 for(y = height; y > 0; y--) {
  for(q=s,p=d,x=width; x>0; x--) { *p = tbl[*(u16 *)q]; p++; q+=2; }
  s += srcPitch*2; d += dstPitch;
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

u32 func_001780F0(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
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
      *(u16 *)p = ((*(u16 *)q & 0xffe0) << 1) | (*(u16 *)q & 0x1f);
      p += 2;
      q += 2;
    }
    s += srcPitch * 2;
    d += dstPitch * 2;
  }
  return 1;
}

u32 func_00178180(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch)
{
    u16 *s = (u16 *)src;
    u16 *d = (u16 *)dst;
    int x;
    int y;
    for (y = height; y > 0; y--) {
        if (width > 0) {
            for (x = 0; x < width; x++) {
                d[x] = (u16)(((s[x] >> 1) & 0x7fe0) | (s[x] & 0x1f));
            }
        }
        s += srcPitch;
        d += dstPitch;
    }
    return 1;
}

