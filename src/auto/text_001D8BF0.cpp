/* 5 functions from 0x001D8BF0 to 0x001D9970, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct C_001D9950 {
    undefined4 func_001D9950(byte param_1);
};

struct S_001D8BF0_Arg {
    char pad0[0xC];
    unsigned char fC;
    char padD[3];
    void *f10;
};
struct XboxWater_1D8BF0 {
    char pad0[0x2F0];
    void *f2F0;
    void func_001D8BF0(S_001D8BF0_Arg *a);
};

extern int D_00284E94;
void func_001E891B(void *p);
extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

struct DXVSDataItem {
    void *vtbl;
    void *func_001D9930(int flags);
};

struct DXVSData {
    char pad0[0x304];
    int f304;
    int f308;
    void *func_001DDB7E(int size, int a2, int a3, int a4);
    int func_001D9760(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

/* the Xbox surface description func_002011F0 fills in */
struct S_001D9820_Desc {
    unsigned int Format;
    unsigned int Type;
    unsigned int Usage;
    unsigned int Size;
    unsigned int MultiSampleType;
    unsigned int Width;
    unsigned int Height;
};

struct S_001D9820_Lock {
    int Pitch;
    void *pBits;
};

/* the 18-byte header of an uncompressed true-colour .tga */
struct S_001D9820_Tga {
    unsigned char idLength;
    unsigned char colorMapType;
    unsigned char imageType;
    unsigned char colorMap[5];
    unsigned short xOrigin;
    unsigned short yOrigin;
    unsigned short width;
    unsigned short height;
    unsigned char bitsPerPixel;
    unsigned char descriptor;
};

extern char D_00282960[];
void *func_001E8A44(int size);
void *func_0014FDF0(const char *name, const char *mode);
int func_0014FE80(const void *buf, int size, int count, void *fp);
int func_0014FE50(void *fp);
void __stdcall func_002011F0(void *surface, S_001D9820_Desc *desc);
void __stdcall func_00201210(void *surface, S_001D9820_Lock *lock, int rect, int flags);

void __stdcall func_0021DB06(int a, int b, int c, int d, int e, int f);
void __stdcall func_0021DB71(int a, int b, int c, int d, int e, int f);
void __stdcall func_0021DB47(int a, int b, int c, int d, int e, int f, int g, int h, int i);
void __stdcall func_00201150(int a, int b);


void XboxWater_1D8BF0::func_001D8BF0(S_001D8BF0_Arg *a)
{
    a->f10 = f2F0;
    a->fC &= 0xFE;
}

int DXVSData::func_001D9760(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    void *buf;
    int *desc;
    int size;

    size = a1 * a2 * 4;
    buf = func_001DDB7E(size, -1, 0, 0x404);
    for (int i = 0; i < 6; i++)
        ((int *)a5)[i] = 0;
    func_0021DB06(f304, f308, a4, a5, 0, *(volatile int *)&a3);
    desc = (int *)a6;
    memset(desc, 0, 12);
    func_0021DB71(size, 8, 0x40, 1, (int)desc, 0);
    func_0021DB47(a1, a2, 1, 8, 0x12, 1, a7, 0, *(volatile int *)&a3);
    func_00201150(a5, (int)buf);
    func_00201150((int)desc, (int)buf);
    func_00201150(a7, (int)buf);
    return 0;
}

int __stdcall func_001D9820(void *surface, const char *path, int bpp)
{
    S_001D9820_Desc desc;
    S_001D9820_Tga hdr;
    S_001D9820_Lock lock;
    void *fp;
    void *buf;
    int w;

    func_002011F0(surface, &desc);
    w = desc.Width;
    memset(&hdr, 0, sizeof(hdr));
    hdr.idLength = 0;
    hdr.imageType = 2;
    hdr.width = (unsigned short)w;
    hdr.height = (unsigned short)desc.Height;
    hdr.bitsPerPixel = (unsigned char)bpp;
    hdr.descriptor = 0x28;
    fp = func_0014FDF0(path, D_00282960);
    if (fp == 0) {
        return 0x80004005;
    }
    func_0014FE80(&hdr, 0x12, 1, fp);
    func_00201210(surface, &lock, 0, 0x40);
    buf = func_001E8A44(desc.Height * w * 4);
    memcpy(buf, lock.pBits, desc.Size);
    func_0014FE80(buf, 1, (desc.Height * w * bpp) >> 3, fp);
    func_0014FE50(fp);
    func_001E891B(buf);
    return 0;
}

void *DXVSDataItem::func_001D9930(int flags)
{
    vtbl = (void *)&D_00284E94;
    if (flags & 1)
        func_001E891B(this);
    return this;
}

undefined4 C_001D9950::func_001D9950(byte param_1)
{
  int func_001D8B70(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D8B70();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}
