/* 17 functions from 0x001D73E0 to 0x001D8340, found by Ghidra. */
#include "common.h"

extern int D_0028F6DC;

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

void func_001FFB70();
void __cdecl func_001D7E60(float r, float g, float b, char *out);
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
    void *vtbl;
    char pad4[0x68];
    int f6C;
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
    u8 f9D4;
    char pad9D5[3];
    int f9D8;
    XboxVideoCard_001D7D50 *func_001D7D50(void);
};

struct XboxVideoCardBF_001D7D50 {
    void *vtbl;
    char pad4[0x68];
    int f6C;
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
    u8 f9D4_lo : 2;
    u8 f9D4_hi : 6;
    char pad9D5[3];
    int f9D8;
    XboxVideoCardBF_001D7D50 *func_001D7D50(void);
};

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

struct XboxTextureMap {
    char pad0[0xB8];
    void *field_b8;
    int func_001D7BF0(int param_1);
    int func_001D7C50();
};

struct C_001D7CE0 {
    void *vtbl;
    C_001D7CE0 *func_001D7CE0();
    void *func_001D7D10(int flags);
};

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
        func_00201210(p, dims, 0, 0x80);
        func_002011F0(p, &desc);
        ((C_001D6D00 *)this)->func_001D6D00(&desc, dims, 0);
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

XboxVideoCard_001D7D50 *XboxVideoCard_001D7D50::func_001D7D50(void)
{
    u8 flags;

    ((C_001C3D90 *)this)->func_001C3D90();
    vtbl = (void *)&D_0028F774;
    memset(a5B4, 0, 0x100);
    D_002F0BB8 = 0;
    flags = f9D4;
    f6BC = 0;
    f6C = -1;
    f9D8 = 500;
    f9D4 = flags & 0xFC;
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

int XboxVideoCard_001D7FB0::func_001D7FB0(float x, float y, float z, int w)
{
    LightBufs_001D7FB0 bufs;
    int n = 0;
    int *pn = &n;

    bufs.a[0] = 0;
    bufs.b[0] = 0;
    bufs.c[0] = 0;
    func_001D7E60(1.0f, 1.0f, 1.0f, bufs.a);
    n = w;
    func_001D7E60(x, y, z, bufs.a);
    func_001FF960(2, bufs.a);
    func_001FF9F0(&f6D4);
    return 1;
}



