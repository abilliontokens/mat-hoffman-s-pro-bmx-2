/* 7 functions from 0x00176250 to 0x00177230, found by Ghidra. */
#include "common.h"

/* 3-byte palette entry (BGR order); the lookup table is indexed by RGB555 */
struct Rgb3 {
  u8 b;
  u8 g;
  u8 r;
};

/* 4-byte destination pixel (BGRA) */
struct Rgba4 {
  u8 b;
  u8 g;
  u8 r;
  u8 a;
};

/* palette object: func_00135400 = palette entries, func_00135410 = RGB555 -> index table */
struct S_00176250_Pal {
  int func_00135410(void);
  int func_00135400(void);
};

u32 func_00176250(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, S_00176250_Pal *pal)
{
  u8 *srow = src;
  u8 *drow = dst;
  u8 *tbl;
  Rgb3 *colors;
  int key;
  int i;
  int x;
  int y;
  u8 *s;
  u8 *s1;
  u8 *d;
  u8 *p;
  Rgb3 c0;
  Rgb3 c1;
  Rgb3 c2;
  Rgb3 c3;
  int r = 0;
  int g = 0;
  int b = 0;
  int n;
  if (pal != 0) {
    tbl = (u8 *)pal->func_00135410();
    if (tbl != 0) {
      colors = (Rgb3 *)pal->func_00135400();
      if (colors != 0) {
        key = -1;
        p = (u8 *)colors;
        i = 0;
        do {
          if (p[2] == 0xff && p[1] == 0 && p[0] == 0xff) {
            key = i;
            break;
          }
          i++;
          p += 3;
        } while (i < 256);
        if (key != -1) {
          for (y = height; y > 0; y--) {
            s = srow;
            d = drow;
            for (x = width; x > 0; x--) {
              b = 0;
              g = 0;
              r = 0;
              n = 0;
              s1 = s + srcPitch;
              c0 = colors[s[0]];
              c1 = colors[s[1]];
              c2 = colors[s1[0]];
              c3 = colors[s1[1]];
              if (s[0] != key) {
                r += c0.r;
                g += c0.g;
                b += c0.b;
                n++;
              }
              if (s[1] != key) {
                r += c1.r;
                g += c1.g;
                b += c1.b;
                n++;
              }
              if (s1[0] != key) {
                r += c2.r;
                g += c2.g;
                b += c2.b;
                n++;
              }
              if (s1[1] != key) {
                r += c3.r;
                g += c3.g;
                b += c3.b;
                n++;
              }
              if (n >= 2) {
                *d++ = tbl[((((r + n * 4) / n & ~7) << 5 | ((g + n * 4) / n & ~7)) << 2) | ((b + n * 4) / n >> 3)];
              } else {
                *d++ = (u8)key;
              }
              s += 2;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
          }
        } else {
          for (y = height; y > 0; y--) {
            s = srow;
            d = drow;
            for (x = width; x > 0; x--) {
              s1 = s + srcPitch;
              c0 = colors[s[0]];
              c1 = colors[s[1]];
              c2 = colors[s1[0]];
              c3 = colors[s1[1]];
              r = c3.r + c2.r + c1.r + c0.r + 0x10;
              b = c3.b + c2.b + c1.b + c0.b + 0x10;
              g = c3.g + c2.g + c1.g + c0.g + 0x10;
              *d++ = tbl[((r & ~31) << 5) | (b >> 5) | (g & ~31)];
              s += 2;
            }
            srow += srcPitch * 2;
            drow += dstPitch;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

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

void func_00177000(u8 *dst, u8 *src, int width, int height, int dstPitch, int srcPitch, u32 color)
{
  int r = (color >> 16) & 255;
  int g = (color >> 8) & 255;
  int b = color & 255;
  u8 *p;
  u8 *q;
  int y;
  int x;

  for (y = 0; y < height; y++) {
    q = src + y * srcPitch * 3;
    p = dst + y * dstPitch * 4;
    for (x = 0; x < width; x++) {
      p[2] = q[2];
      p[1] = q[1];
      p[0] = q[0];
      if (q[2] == r && q[1] == g && q[0] == b)
        p[3] = 0;
      else
        p[3] = 255;
      q += 3;
      p += 4;
    }
  }
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

