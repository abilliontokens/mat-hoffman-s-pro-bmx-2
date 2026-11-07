/* 17 functions from 0x001D73E0 to 0x001D8340, found by Ghidra. */
#include "common.h"

extern int D_0028F6DC;
extern int D_0028F768[2];
unsigned int __stdcall func_00201860(int);
void __stdcall func_00201A90(int, void *);
void __stdcall func_00201A60(int, int, void *);
void __stdcall func_00201900(int, unsigned int, void *);
struct S_001D8040 {
 int f0, f4, f8;
 int fC, f10, f14, f18, f1C, f20, f24;
};

struct S_001D8140 {
    int f0;
    unsigned int f4;
    unsigned int f8;
    char fC[0x20 - 0xC];
    int f20;
    unsigned int f24;
};

struct S_001D8140_Info {
    char pad0[0xC];
    unsigned int fC;
    char pad10[0x1C - 0x10];
    unsigned int f1C;
    char pad20[0xC4 - 0x20];
    unsigned int fC4;
    char padC8[0xD4 - 0xC8];
};

struct C_001B23D0 {
    void func_001B23D0();
};

struct C_001B2400 {
    void func_001B2400();
};

void func_001E891B(void *p);

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

extern int D_0028F774;
extern int D_002F0BB8;
extern float D_00275460;
extern float D_00284758;
extern float D_0027A060;

template <class T> inline const T &min_001D7E60(const T &a, const T &b) { return b < a ? b : a; }

void func_001FFB70();
void __cdecl func_001D7E60(float r, float g, float b, char *out);
void __fastcall func_001D7E60(int start, int, float r, float g, float b, char *out);
void __stdcall func_001FF960(int kind, char *buf);
void __stdcall func_001FF9F0(void *p);
void __stdcall func_001FF4E0(int a, void *b, int c, int d, float e, int f);

struct C_00012140 {
    void func_00012140(void);
};

struct C_001C3D90 {
    void func_001C3D90(void);
};

struct Vec4_001D7DD0 {
    f32 x, y, z, w;
};

struct XboxVideoCard_001D7E30 {
    void func_001D7E30(void);
};

struct XboxVideoCard_001D7D50 {
    void *volatile vtbl;
    char pad4[0x68];
    volatile int f6C;
    char pad70[0x5B4 - 0x70];
    int a5B4[0x40];
    int f6B4;
    int f6B8;
    int f6BC;
    int f6C0;
    int f6C4;
    int f6C8;
    int f6CC;
    int f6D0;
    int a6D4[0xC0];
    union {
        u8 f9D4;
        volatile u8 f9D4v;
        volatile struct {
            u8 b01 : 2;
            u8 rest : 6;
        } f9D4b;
    };
    char pad9D5[3];
    int f9D8;
    XboxVideoCard_001D7D50 *func_001D7D50(void);
};

struct XboxVideoCard_001D8310 {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    char pad4[0x9D0];
    u8 f9D4;
    char pad9D5[3];
    int f9D8;
    void func_001D8310(void);
};

struct XboxVideoCard_001D8240 {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual void v7(int a) = 0;
    char pad4[0xC];
    int f10;
    int f14;
    char pad18[0x6BC - 0x18];
    int f6BC;
    char pad6C0[0x9D4 - 0x6C0];
    union {
        u8 f9D4;
        struct {
            u8 b0 : 1;
            u8 b1 : 1;
            u8 rest : 6;
        } f9D4b;
    };
    char pad9D5[3];
    int f9D8;
    int func_001D8240(void);
};

void __stdcall func_002025D0(int a);
void func_001FFBB0(void);

struct LightBufs_001D7FB0 {
    char a[0x100];
    char b[0x100];
    char c[0x100];
};

struct XboxVideoCard_001D7FB0 {
    char pad0[0x6D4];
    int f6D4;
    int func_001D7FB0(float x, float y, float z, int w);
};

int __stdcall func_001D6CB0(int id);
void __stdcall func_001FCEA0(void *map, int index, void *out, int a, int b);
unsigned __stdcall func_001FCFE0(void *map);
void *__stdcall func_001FCE50(void *map, unsigned index);
void __stdcall func_00201210(void *p, void *out, int a, int b);
void __stdcall func_002011F0(void *p, void *out);
void __stdcall func_00201100(void *p);

struct C_001D6D00 {
    void func_001D6D00(void *desc, int *dims, char *name);
};

struct S_001D7C50_desc {
    u32 id;
    char pad4[0x10];
    u32 w;
    u32 h;
};

static __forceinline void LoadLevel_001D7C50(C_001D6D00 *self, void *p, int *dims, S_001D7C50_desc *desc)
{
    func_00201210(p, dims, 0, 0x80);
    func_002011F0(p, desc);
    self->func_001D6D00(desc, dims, 0);
}

struct S_001D7910_Rect {
    int pitch;
    void *bits;
};

struct S_001D7910_Desc {
    int format;
    int type;
    int usage;
    unsigned int size;
    int msaa;
    int width;
    int height;
};

extern int D_002ABE74;
void *__cdecl func_001E8A44(int size);
void __cdecl func_00178C60(void *a, void *b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m);
int __stdcall func_001FCF20(int w, int h, int levels, int depth, int usage, int format, int type);
int __stdcall func_001FCE40(void *map, int index, void *out);
int __cdecl func_001B2910(int format);
int __stdcall func_0020FE81(void *map, int a, int b, int c);
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

struct XboxTextureMap {
    char pad0[8];
    int f8;
    int fC;
    char pad10[0xA0 - 0x10];
    int fA0;
    int fA4;
    int fA8;
    char padAC[0xB0 - 0xAC];
    int fB0;
    char padB4[0xB8 - 0xB4];
    void *field_b8;
    char padBC[4];
    u32 arrC0[10];
    u32 arrE8[10];
    int func_001D7BF0(int param_1);
    int func_001D7C50();
    int func_001D7910(void *data, int width, int height, int a4, int minDim, int srcFmt, int dxFmt, unsigned int flags, int a9);
    int func_001D73E0(int file, int width, int height, int minDim, int fmt, int size, int dxFmt, unsigned int flags, int a9);
};

struct VTexMap_001D73E0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int func_001D7910(void *data, int width, int height, int a4, int minDim, int srcFmt, int dxFmt, unsigned int flags, int a9);
};

struct FileMgr_001D73E0 {
    int func_0013AFD0(int file);
    int func_0013C8A0(int file, void *dst, int size, int count);
};
extern FileMgr_001D73E0 *D_002BEAAC;

struct TexAlloc_001D73E0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void *v30(int size);
    virtual void *v31(int size);
};
extern TexAlloc_001D73E0 *D_002F0670;

int __cdecl func_001B2870(int x);
int __cdecl func_001B27B0(int x);
int __cdecl func_001B2730(int x);
int __cdecl func_001B2810(int x);
void __cdecl func_001611C0(void *dst, void *src, int n);

struct C_001D7CE0 {
    void *vtbl;
    C_001D7CE0 *func_001D7CE0();
    void *func_001D7D10(int flags);
};

int XboxTextureMap::func_001D73E0(int file, int width, int height, int minDim, int fmt, int size, int dxFmt, unsigned int flags, int a9)
{
    int *op;
    int count;
    int mult;
    int base;
    int curW;
    int curH;
    int mipSize;
    int convFmt;
    int sz;
    int offsets[13];
    S_001D7910_Desc desc;
    S_001D7910_Rect rect;
    void *bufB;
    void *bufA;
    int fc;
    XboxTextureMap *self = this;

    fc = func_001B2870(fmt);
    self->fB0 = 0;
    sz = func_001B2910(func_001B2910(fc) <= func_001B2910(dxFmt) ? fc : dxFmt) * width * height >> 3;
    bufA = D_002F0670->v30(sz);
    if (bufA != 0) {
    sz = (func_001B2910(func_001B2910(fc) <= func_001B2910(dxFmt) ? fc : dxFmt) * width * height >> 3) + 4;
    bufB = D_002F0670->v31(sz);
    if (bufB != 0) {
    if (func_001B2810(fmt)) {
        if (((VTexMap_001D73E0 *)self)->func_001D7910(0, width, height, width, minDim, fc, dxFmt, flags, 0) == 0)
            return 0;
        mult = 1;
        count = 0;
        op = offsets;
        do {
            base = D_002BEAAC->func_0013AFD0(file);
            if (D_002BEAAC->func_0013C8A0(file, op, 4, 1) != 1)
                return 0;
            *op += base;
            mult <<= 1;
            count++;
            op++;
        } while (mult <= width);
        base = D_002BEAAC->func_0013AFD0(file);
        op = &offsets[count];
        if (D_002BEAAC->func_0013C8A0(file, op, 4, 1) != 1)
            return 0;
        *op += base;
        mult = 1;
        count = mult;
        curW = mult;
        curH = mult;
        op = offsets;
        do {
            mipSize = op[1] - op[0];
            if (func_001B27B0(fmt)) {
                if (size == 0) {
                    if (D_002BEAAC->func_0013C8A0(file, &size, 4, 1) != 1)
                        return 0;
                    D_002BEAAC->func_0013C8A0(file, bufA, 1, size);
                } else {
                    if (D_002BEAAC->func_0013C8A0(file, bufA, func_001B2730(fmt) * curW >> 3, curH) != curH)
                        return 0;
                }
            } else {
                sz = func_001B2730(fmt) * width * curW >> 3;
                size = sz;
                if (D_002BEAAC->func_0013C8A0(file, bufB, sz, 1) != size)
                    return 0;
            }
            if (curW >= minDim) {
                int s;
                int level;
                unsigned int cnt;
                cnt = func_001FCFE0(self->field_b8);
                s = width;
                level = 0;
                if (width > curW) {
                    for (;;) {
                        if ((unsigned int)level > cnt)
                            return 0;
                        s >>= 1;
                        level++;
                        if (s <= curW)
                            break;
                    }
                }
                if (s == curW) {
                    func_001FCEA0(self->field_b8, level, &rect, 0, 0);
                    if (dxFmt == 12) {
                        func_001FCE40(self->field_b8, level, &desc);
                        memcpy(rect.bits, bufA, size);
                    } else {
                        switch (dxFmt) {
                        case 3:
                            convFmt = 0x613;
                            break;
                        default:
                            convFmt = 0x22b8;
                            break;
                        }
                        func_00178C60(rect.bits, bufB, rect.pitch * 8 / func_001B2910(dxFmt), curW, curH, curW, convFmt, fc, 0, 0, 0x80, 0xff00ff, 1);
                    }
                    self->arrC0[level] = (u32)rect.bits;
                    self->arrE8[level] = rect.pitch;
                }
            }
            op++;
            curW <<= 1;
            curH <<= 1;
        } while (curW <= width);
        return 1;
    } else {
        if (func_001B27B0(fmt) == 0) {
            memcpy(bufB, bufA, size);
        } else if (size == (func_001B2730(fmt) * width * height >> 3)) {
            memcpy(bufB, bufA, size);
        } else {
            if (size == 0) {
                if (D_002BEAAC->func_0013C8A0(file, &size, 4, 1) != 1)
                    return 0;
                if (D_002BEAAC->func_0013C8A0(file, bufA, 1, size) != size)
                    return 0;
            }
            if (fmt >= 6 && fmt <= 12)
                func_001611C0(bufB, bufA, func_001B2730(fmt) * width * height >> 3);
        }
        return ((VTexMap_001D73E0 *)self)->func_001D7910(bufB, width, height, width, minDim, fc, dxFmt, flags, 0);
    }
    }
    }
    return 0;
}

int XboxTextureMap::func_001D7910(void *data, int width, int height, int a4, int minDim, int srcFmt, int dxFmt, unsigned int flags, int a9)
{
    int x;
    void *buf;
    S_001D7910_Rect rect;
    S_001D7910_Desc desc;
    char *dst;
    void *tex;
    int levels;
    int kw;
    int kh;
    int w;
    int h;
    int i;
    int rowBytes;
    int rows;

    f8 = width;
    fC = height;
    fA0 = minDim;
    x = D_002ABE74;
    buf = 0;
    if (dxFmt != 12) {
        kw = 0;
        for (w = width >> 1; w != 0; w >>= 1)
            kw++;
        kh = 0;
        for (h = height >> 1; h != 0; h >>= 1)
            kh++;
        if (width - (1 << kw) > 0 || height - (1 << kh) > 0)
            x = 0;
        if (x == 0)
            dxFmt = (dxFmt == 6) ? 0x12 : 0x1c;
    }
    fA4 = dxFmt;
    fA8 = 1;
    flags &= 2;
    if (flags) {
        w = width;
        h = height;
        for (;;) {
            w >>= 1;
            h >>= 1;
            if (w < minDim && h < minDim)
                break;
            fA8++;
        }
    }
    if (data != 0 && (srcFmt == 0x22b || srcFmt == 0x378 || srcFmt == 0x22b8)) {
        buf = func_001E8A44(width * height * 4);
        func_00178C60(buf, data, width, height, width, width, 0x22b8, srcFmt, 0, 0, 0x80, 0, x);
        data = buf;
        srcFmt = 0x22b8;
    }
    fA0 = width;
    levels = fA8;
    tex = (void *)func_001FCF20(width, height, 1, levels, 0, dxFmt, 3);
    field_b8 = tex;
    if (((tex != 0) - 1 & (int)0x8007000e) >= 0) {
        if (data != 0) {
            func_001FCEA0(*(void * volatile *)&field_b8, 0, &rect, 0, 0);
            func_001FCE40(field_b8, 0, &desc);
            rowBytes = func_001B2910(srcFmt) * width >> 3;
            dst = (char *)rect.bits;
            if (rowBytes == rect.pitch || (dxFmt >= 12 && dxFmt <= 15)) {
                memcpy(dst, data, desc.size);
            } else if (height > 0) {
                rows = height;
                do {
                    memcpy(dst, data, rowBytes);
                    dst += rect.pitch;
                    data = (char *)data + rowBytes;
                } while (--rows != 0);
            }
            if (flags) {
                if (func_0020FE81(field_b8, 0, 0, 4) != 0) {
                    if (buf != 0)
                        func_001E891B(buf);
                    return 0;
                }
            }
        }
        for (i = 0; i < fA8; i++) {
            func_001FCEA0(field_b8, i, &rect, 0, 0);
            arrC0[i] = (u32)rect.bits;
            arrE8[i] = rect.pitch;
        }
        if (buf != 0)
            func_001E891B(buf);
        return 1;
    }
    if (buf != 0)
        func_001E891B(buf);
    return 0;
}

int XboxTextureMap::func_001D7BF0(int param_1)
{
    int info[2];
    int idx = func_001D6CB0(param_1);
    if (idx != -1) {
        func_001FCEA0(field_b8, idx, info, 0, 0);
        return info[1];
    }
    return 0;
}

int XboxTextureMap::func_001D7C50()
{
    if (field_b8 == 0)
        return 1;
    unsigned count = func_001FCFE0(field_b8);
    for (unsigned i = 0; i < count; i++) {
        void *p = func_001FCE50(field_b8, i);
        if (p == 0)
            return 0;
        int dims[2];
        S_001D7C50_desc desc;
        func_00201210(p, &dims[0], 0, 0x80);
        func_002011F0(p, (void *)&desc);
        ((C_001D6D00 *)this)->func_001D6D00((void *)&desc, &dims[0], 0);
        func_00201100(p);
    }
    return 1;
}

C_001D7CE0 *C_001D7CE0::func_001D7CE0()
{
    ((C_001B23D0 *)this)->func_001B23D0();
    vtbl = &D_0028F6DC;
    return this;
}

int func_001D7D00(void) {
    return 1;
}

void *C_001D7CE0::func_001D7D10(int flags)
{
    vtbl = &D_0028F6DC;
    ((C_001B2400 *)this)->func_001B2400();
    if (flags & 1)
        func_001E891B(this);
    return this;
}

extern int D_002F0BBC;
int func_001D7D40()
{
    return ++D_002F0BBC;
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
XboxVideoCard_001D7D50 *XboxVideoCard_001D7D50::func_001D7D50(void)
{
    ((C_001C3D90 *)this)->func_001C3D90();
    vtbl = (void *)&D_0028F774;
    _ReadWriteBarrier();
    memset(a5B4, 0, 0x100);
    D_002F0BB8 = 0;
    f6BC = 0;
    f6C = -1;
    f9D8 = 500;
    f9D4b.b01 = 0;
    f6C4 = 0;
    f6C8 = 0;
    f6CC = 0;
    f6D0 = 0;
    memset(a6D4, 0, 0x300);
    return this;
}
int __stdcall func_001D7DD0(Vec4_001D7DD0 *p, int b, int c, float d)
{
    Vec4_001D7DD0 v;

    v.x = p->x;
    v.z = p->z;
    v.y = p->y;
    v.w = p->w;
    func_001FF4E0(1, &v, c, b, D_00275460 - d, 0);
    return 1;
}

void XboxVideoCard_001D7E30::func_001D7E30(void)
{
    if (D_002F0BB8 != 0) {
        func_001FFB70();
        D_002F0BB8 = 0;
    }
    ((C_00012140 *)this)->func_00012140();
}

extern "C" double __cdecl pow(double, double);
void __cdecl func_001D7E60(float r, float g, float b, char *out)
{
    int i;
    for (int j = 0; i < 0x100; i++, j++) {
        float f = (float)j * D_00284758;
        int lim, v, m;
        lim = 0xff - (unsigned char)out[i];
        v = (unsigned char)(int)(pow(f, r) * D_0027A060);
        m = min_001D7E60(lim, v);
        out[i] += (char)m;
        lim = 0xff - (unsigned char)out[i + 0x100];
        v = (unsigned char)(int)(pow(f, g) * D_0027A060);
        m = min_001D7E60(lim, v);
        out[i + 0x100] += (char)m;
        lim = 0xff - (unsigned char)out[i + 0x200];
        v = (unsigned char)(int)(pow(f, b) * D_0027A060);
        m = min_001D7E60(lim, v);
        out[i + 0x200] += (char)m;
    }
}

int XboxVideoCard_001D7FB0::func_001D7FB0(float x, float y, float z, int w)
{
    LightBufs_001D7FB0 bufs;
    int n = 0;
    bufs.a[0] = 0;
    bufs.b[0] = 0;
    bufs.c[0] = 0;
    func_001D7E60(1.0f, 1.0f, 1.0f, bufs.a);
    n = *(volatile int *)&w;
    func_001D7E60(x, y, z, bufs.a);
    func_001FF960(2, bufs.a);
    func_001FF9F0(&f6D4);
    return n ? 1 : 1;
}

int __stdcall func_001D8040(S_001D8040 *p, int (__cdecl *callback)(S_001D8040 *), int adapter, int width, int height, int a5, int a6)
{
 unsigned int count;
 char display[20];
 char caps[212];
 p->f0=adapter;
 count=func_00201860(adapter);
 func_00201A90(p->f0,display);
 int total=0;
 for(unsigned int k=0;k<2;++k) {
  func_00201A60(p->f0,D_0028F768[k],caps);
  for(unsigned int i=0;i<count;) {
   func_00201900(p->f0,i,&p->fC);
   p->f4=i; p->f8=D_0028F768[k]; p->f20=64; p->f24=0;
   if ((!callback || callback(p)) && width==p->fC && height==p->f10) return total;
   ++i;
   ++total;
  }
 }
 return -1;
}

extern char D_00010000;
int __stdcall func_001D8140(S_001D8140 *p, unsigned int index, int h)
{
    S_001D8140_Info info;
    unsigned int base;
    unsigned int n;
    unsigned int i;
    unsigned int j;

    p->f0 = h;
    n = func_00201860(h);
    base = 0;
    for (i = 0; i < 2; i++) {
        if (index > base + n) {
            base += n;
            continue;
        }
        func_00201A60(p->f0, D_0028F768[i], &info);
        for (j = 0; j < n; j++, base++) {
            if (base == index) {
                func_00201900(p->f0, j, p->fC);
                p->f4 = j;
                p->f8 = D_0028F768[i];
                if (info.f1C & (unsigned int)&D_00010000)
                    p->f20 = info.fC4 < 0xfffe0100 ? 0x80 : 0x40;
                else
                    p->f20 = 0x20;
                p->f24 = (info.fC >> 19) & 1;
                return 1;
            }
        }
    }
    return 0;
}

int XboxVideoCard_001D8240::func_001D8240(void)
{
    volatile int *d = (volatile int *)&D_002F0BBC;
    static const int two = 2;
    if (f10 != 0)
        return 0;
    if (f14 == 1) {
        if (*d <= 1 && *d < two)
            goto wait;
    } else if (f14 == two && *d == 0) {
wait:
        while (*d < 1)
            ;
        *d = 0;
    }
    f6BC++;
    if (f9D4 & two) {
        func_001FF4E0(0, 0, 0xf3, 0, 0, 0);
        func_002025D0(0);
        func_001FF4E0(0, 0, 0xf3, 0, 0, 0);
        func_002025D0(0);
    }
    if (f9D4 & two) {
        func_001FFBB0();
        v7(f9D8);
        f9D4 &= ~two;
    }
    return 1;
}

void XboxVideoCard_001D8310::func_001D8310(void)
{
    v6();
}
#include <math.h>
extern float D_00284758;
extern float D_0027A060;
