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

/* dither row buffers: two rows of width*(B,G,R) accumulators in 8.19 fixed point */
extern int D_002EFD18;
extern int *D_002EFD1C[2];
extern int *D_002EFD20;

/* constant masks the original kept as globals (memory-operand AND/CMP/ADD) */
extern int D_0007FFFF;
extern int D_00040000;
extern int D_00080000;
extern int D_0000FFE0;
extern int D_0000F81F;
extern int D_0000FC1F;

int func_001B2910(int);
extern "C" void *func_001E8AA5(int size);
extern "C" void func_001E8390(void *p);
extern "C" void __fastcall func_001751A0(u8 *src, int count);
extern "C" void __fastcall func_001751D0(u16 *src, int count);
extern "C" void __fastcall func_00175210(u16 *src, int count);
extern "C" int abs(int);

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

u32 _func_00176630(u8 *src, int fmt, int width, int height, int srcWidth, int dstWidth,
                  u8 *out888, u16 *out565, u16 *out555, u8 *outPal, S_00176250_Pal *pal)
{
    int rowBytes;
    int pitch;
    u8 idx;
    Rgb3 *colors;
    u8 *tbl;
    int off565;
    u16 *p555;
    u8 *rgbRow;
    int y;
    u8 *p8;
    u16 *p555w;
    u16 *p565;
    u8 *p888;
    u8 *palRow;
    int eR;
    int eG;
    int eB;
    int x;
    u8 *srcRow;
    int qB;
    int qG;
    int qR;
    int bpp;
    int *buf;
    int *cur;
    int *nxt;
    int t7;

    bpp = func_001B2910(fmt);
    if (pal == 0)
        return bpp;
    tbl = (u8 *)pal->func_00135410();
    colors = (Rgb3 *)pal->func_00135400();
    if (D_002EFD18 < width) {
        if (D_002EFD1C[0] != 0)
            func_001E8390(D_002EFD1C[0]);
        D_002EFD18 = 0;
        buf = (int *)func_001E8AA5(width * 24);
        D_002EFD1C[0] = buf;
        if (buf == 0)
            return 0;
        D_002EFD20 = buf + width * 3;
        D_002EFD18 = width;
    }
    if (fmt == 0x22b)
        func_00175210((u16 *)src, width);
    else if (fmt == 0x235)
        func_001751D0((u16 *)src, width);
    else
        func_001751A0(src, width);
    pitch = bpp * srcWidth >> 3;
    srcRow = src + pitch;
    rowBytes = dstWidth * 3;
    p555 = out555;
    off565 = (int)((u8 *)out565 - (u8 *)out555);
    rgbRow = out888;
    palRow = outPal;
    for (y = 0; y < height; y++) {
        cur = D_002EFD1C[y % 2];
        nxt = D_002EFD1C[1 - y % 2];
        if (y != height - 1) {
            if (fmt == 0x22b)
                func_00175210((u16 *)srcRow, height);
            else if (fmt == 0x235)
                func_001751D0((u16 *)srcRow, height);
            else
                func_001751A0(srcRow, height);
        }
        p888 = rgbRow;
        p8 = palRow;
        p565 = (u16 *)((u8 *)p555 + off565);
        p555w = p555;
        for (x = 0; x < height; x++) {
            eR = cur[2];
            if (eR < 0)
                qR = 0;
            else if (eR >= 0x1000000)
                qR = 0xffffff;
            else {
                qR = (eR + (eR >> 31 & D_0007FFFF)) / 0x80000 * 0x80000;
                if (eR - qR > D_00040000)
                    qR += D_00080000;
            }
            eG = cur[1];
            if (eG < 0)
                qG = 0;
            else if (eG >= 0x1000000)
                qG = 0xffffff;
            else {
                qG = (eG + (eG >> 31 & D_0007FFFF)) / 0x80000 * 0x80000;
                if (eG - qG > D_00040000)
                    qG += D_00080000;
            }
            eB = cur[0];
            if (eB < 0)
                qB = 0;
            else if (eB >= 0x1000000)
                qB = 0xffffff;
            else {
                qB = (eB + (eB >> 31 & D_0007FFFF)) / 0x80000 * 0x80000;
                if (eB - qB > D_00040000)
                    qB += D_00080000;
            }
            if (pal != 0) {
                idx = tbl[((((qR >= 0x1000000 ? 0xffffff : qR) >> 9) & 0xfffffc1f
                            | (qG >= 0x1000000 ? 0xffffff : qG) >> 14) & D_0000FFE0)
                          | (u16)((qB >= 0x1000000 ? 0xffffff : qB) >> 19)];
                if (abs(eR - (colors[idx].r << 16)) <= 0
                    && abs(eG - (colors[idx].g << 16)) <= 0
                    && abs(eB - (colors[idx].b << 16)) <= 0) {
                    qR = colors[idx].r << 16;
                    qG = colors[idx].g << 16;
                    qB = colors[idx].b << 16;
                }
            }
            eR -= qR;
            eG -= qG;
            eB -= qB;
            if (qR >= 0x1000000) {
                cur[2] = 0xffffff;
                qR = 0xffffff;
            }
            if (qG >= 0x1000000) {
                cur[1] = 0xffffff;
                qG = 0xffffff;
            }
            if (qB >= 0x1000000) {
                cur[0] = 0xffffff;
                qB = 0xffffff;
            }
            qR = qR < 0 ? 0 : qR;
            qG = qG < 0 ? 0 : qG;
            qB = qB < 0 ? 0 : qB;
            cur[2] = qR;
            cur[1] = qG;
            cur[0] = qB;
            if (out888 != 0) {
                p888[2] = qR >> 16;
                p888[1] = cur[1] >> 16;
                p888[0] = cur[0] >> 16;
                p888 += 3;
            }
            if (out565 != 0)
                *p565++ = ((cur[2] >> 8) & D_0000F81F | cur[1] >> 13) & D_0000FFE0 | cur[0] >> 19;
            if (out555 != 0)
                *p555w++ = ((cur[2] >> 9) & D_0000FC1F | cur[1] >> 14) & D_0000FFE0 | (u16)(cur[0] >> 19);
            if (outPal != 0)
                *p8++ = idx;
            if (x < height - 1) {
                t7 = eR * 7 / 16;
                cur[5] += t7;
                nxt[5] += eR * -3 / 16 - 5 * eR / 16 - t7 + eR;
                t7 = eG * 7 / 16;
                cur[4] += t7;
                nxt[4] += eG * -3 / 16 - 5 * eG / 16 - t7 + eG;
                t7 = eB * 7 / 16;
                cur[3] += t7;
                nxt[3] += eB * -3 / 16 - 5 * eB / 16 - t7 + eB;
                nxt[2] += 5 * eR / 16;
                nxt[1] += 5 * eG / 16;
                nxt[0] += 5 * eB / 16;
                if (x > 0) {
                    nxt[-1] += 3 * eR / 16;
                    nxt[-2] += 3 * eG / 16;
                    nxt[-3] += 3 * eB / 16;
                }
            }
            cur += 3;
            nxt += 3;
        }
        srcRow += pitch;
        rgbRow += rowBytes;
        palRow += dstWidth * 2;
        palRow += dstWidth;
    }
    return 1;
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

