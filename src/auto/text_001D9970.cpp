/* 7 functions from 0x001D9970 to 0x001DA500, found by Ghidra. */
#include "common.h"
extern int D_002AC724;
extern char D_0028F970[];
int func_001B2910(int);
struct Global_1D9E { void *vtbl; char *p4; };
extern Global_1D9E *D_002EFDB8;
extern char D_002AC63C[], D_002AC64C[], D_002AB85C[], D_002AC61C[], D_002AC62C[], D_002AC65C[];
extern float D_00275460, D_0028F7E8, D_0028F8D4, D_0028F8D0, D_0027A060, D_002F08A4, D_00284758;
extern int D_002F0BDC;
void __fastcall func_001FEC30(int, void *);
void __fastcall func_001FEBD0(int, void *);
void __stdcall func_00201590(int, void *, int);
int __stdcall func_001FEE00(int, void *, int);
void __stdcall func_00202770(void *, int);
struct Vec_1D9E { float x,y,z,w; Vec_1D9E(float a,float b,float c,float d) : x(a),y(b),z(c),w(d) {} };
void *__stdcall func_001FFE40(int);
void *func_00200210();
void __stdcall func_00201100(void *);
struct XboxWaterDisplacement;
struct DXVSWaterDataItem { void *vtbl; XboxWaterDisplacement *p4; void func_001D9ED0(); };

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);
extern "C" void *__cdecl memcpy(void *dst, const void *src, unsigned int size);

/* the 18-byte header of an uncompressed true-colour .tga */
struct S_001DA180_Tga {
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
void func_001E891B(void *p);
void *func_0014FDF0(const char *name, const char *mode);
int func_0014FE80(const void *buf, int size, int count, void *fp);
int func_0014FE50(void *fp);

struct WaterDisplacement {
    void *vtbl;
    char pad4[0x38];
    int unk3C;
    int unk40;
    char pad44[4];
    int unk48;
    int unk4C;
    char pad50[0x74];
    WaterDisplacement *func_001CAF20();
};

extern int D_0028F8F4;

struct VCall_1D9970 {
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
};

struct C_00149480_1D9970 {
    void func_00149480();
};

extern C_00149480_1D9970 *D_002F0630;

struct XboxWaterDisplacement {
    WaterDisplacement base;
    char padC4[0x10];
    int unkD4;
    int unkD8;
    int unkDC;
    int unkE0;
    int unkE4;
    int unkE8;
    int unkEC;
    char padF0[0x10];
    int unk100;
    char pad104[0xB4];
    int *unk1B8;
    char pad1BC[0x50];
    int unk20C;
    char pad210[4];
    int unk214;
    int unk218[3];
    int unk224[3];
    int unk230[0x96];
    int unk488[6];
    void *unk4A0;
    float func_001DA250(float x, float y, int *out);
    XboxWaterDisplacement *func_001DA0E0();
    void func_001D9E60(void *a1, void *a2);
    int func_001D9820(void *dest, char *name, int size);
    int func_00182020(int a0, int a1);
};

extern char D_0028F8C0[];
extern char D_0028F8B0[];
extern char D_0028F8A0[];
extern char D_0028F88C[];
extern char D_0028F878[];

struct C_001DA4C0_1D9970 {
    char pad0[0x4C];
    XboxWaterDisplacement **unk4C;
    void func_001DA4C0(int a1);
};

void XboxWaterDisplacement::func_001D9E60(void *a1, void *a2)
{
    char *p = (char *)this;
    func_001D9820(p + 0x228, D_0028F8C0, 0x20);
    func_001D9820(p + 0x258, D_0028F8B0, 0x20);
    func_001D9820(p + 0x240, D_0028F8A0, 0x20);
    func_001D9820(a1, D_0028F88C, 0x20);
    func_001D9820(a2, D_0028F878, 0x20);
}

XboxWaterDisplacement *XboxWaterDisplacement::func_001DA0E0()
{
    int i;
    base.func_001CAF20();
    base.vtbl = (void *)&D_0028F8F4;
    base.unk48 = 0;
    base.unk3C = 0;
    base.unk40 = 0;
    unkD4 = -1;
    unkD8 = 0;
    unkE0 = unkE4 = unkE8 = 0;
    unkEC = 0;
    unk100 = 0;
    base.unk4C = 0;
    unkDC = 0;
    unk20C = 0;
    unk214 = 0;
    for (i = 0; i < 3; i++) {
        unk218[i] = 0;
        unk224[i] = 0;
    }
    for (i = 0; i < 0x96; i++)
        unk230[i] = 0;
    for (i = 0; i < 6; i++)
        unk488[i] = 0;
    return this;
}

int func_001DA180(void *pixels, const char *path, int bpp, int width, int height)
{
    S_001DA180_Tga hdr;
    void *fp;
    void *buf;

    memset(&hdr, 0, sizeof(hdr));
    hdr.idLength = 0;
    hdr.imageType = 2;
    hdr.width = (unsigned short)width;
    hdr.height = (unsigned short)height;
    hdr.bitsPerPixel = (unsigned char)bpp;
    hdr.descriptor = 0x28;
    fp = func_0014FDF0(path, D_00282960);
    if (fp == 0) {
        return 0x80004005;
    }
    buf = func_001E8A44(width * height * 4);
    memcpy(buf, pixels, width * height * 4);
    func_0014FE80(&hdr, 0x12, 1, fp);
    func_0014FE80(buf, 4, width * height, fp);
    func_001E891B(buf);
    func_0014FE50(fp);
    return 0;
}

void C_001DA4C0_1D9970::func_001DA4C0(int a1)
{
    XboxWaterDisplacement **e = unk4C;
    while (e[0] != 0) {
        e[0]->func_00182020(e[0]->unk1B8[0], a1);
        e++;
        ((VCall_1D9970 *)e[-1])->v16();
    }
    D_002F0630->func_00149480();
}
