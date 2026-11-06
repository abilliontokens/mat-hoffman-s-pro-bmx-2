/* 14 functions from 0x00143C00 to 0x00144BF0, found by Ghidra. */
#include "common.h"

struct Entry_00144AE0 { int f0; int f4; int f8; int fc; };
struct Mgr_00144AE0 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14(int index);
    virtual void v18();
    virtual int v1c(const char *name, int flag);
    int f4;
    int f8;
    int fc;
    int f10;
    Entry_00144AE0 *f14;
};
extern Mgr_00144AE0 *D_002A71C0;
extern char D_00285C6C[], D_00285C5C[], D_00285C40[], D_00285C28[], D_00285C0C[];
int __stdcall func_001FCF20(int,int,int,int,int,int,int);
int __stdcall func_001FCE50(int,int);

extern unsigned char *D_002EFDB8;
void __stdcall func_001FEE00(int stream, void *data, int stride);
void __stdcall func_00200B30(void *a, int b, void *c);
struct DXStripSurfaceData {
    void *vtbl;
    unsigned char flags;
    char pad5[3];
    int f8;
    int fc;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void *f24;
    void *f28;
    int f2c;
    void *f30;
    void *f34;
    DXStripSurfaceData(int file);
    void func_001444F0();
};

extern int D_00285B84;
extern int D_00285B58;
extern int D_00284E94;
extern int D_00285B64;

void __stdcall func_00201100(void *p);
void func_001E891B(void *p);

void func_001E8390(void *p);
void *func_001E8AA5(unsigned int size);
void *func_001E8A44(int size);

struct C_0013B210 {
    void func_0013C8A0(int a0, void *a1, int a2, int a3);
};

extern C_0013B210 *D_002BEAAC;



extern int D_002A99B0;
extern int D_002A6F8C;
extern const float D_00275544;
extern const float D_00275460;
extern float D_002EFEA0;
extern char *D_002F08BC;
extern char D_002A7054[];
extern int D_00040304, D_00040344, D_00040348, D_00040350;
extern int D_0020C6DC, D_0020C6E0, D_0020C6E4, D_0020C6EC, D_0020C6F0, D_0020C6F4, D_0020C6F8;
extern int D_0020C760, D_0020C764, D_0020C76C, D_0020C770, D_0020C774, D_0020C778;
extern int D_0020CA7C;

void __stdcall func_001FF940(void *a, void *b);
void *__stdcall func_001FF3C0(int size);
void *__stdcall func_001FF410(void *buffer, int flags);
int __fastcall func_001FEBD0(int n, void *p);
void __fastcall func_001FEC30(int n, void *p);
void __fastcall func_001FD020(void *p, int v);
void __stdcall func_00200390(int index, int value);
void __stdcall func_00200510(int index, int value);
void __stdcall func_00200950(int a, int b, void *c, void *d, int e);

struct Vec4_143C00 {
    float x, y, z, w;
};
extern Vec4_143C00 D_002BECE0[];

struct Vec3_143C00 {
    float x, y, z;
    Vec3_143C00() { x = y = z = 0; }
};

struct Corner_143C00 {
    Vec3_143C00 pos;
    float w;
};

struct Quad_143C00 {
    char pad0[0x74];
    Corner_143C00 c[4];
    char padB4[0x2c];
    int fE0;
    int fE4;
    char padE8[8];
    int fF0;
    int fF4;
};

struct Vtx28_143C00 {
    Vec3_143C00 pos;
    float u0, v0, u1, v1;
};

struct Vtx20_143C00 {
    Vec3_143C00 pos;
    float u, v;
};

struct Tex_143C00 {
    char pad0[0xb8];
    int fB8;
    int fBC;
};

struct Slot6C_143C00 {
    void func_0014A650(int a0);
};

struct Slot70_143C00 {
    void func_00142D00(int a0);
};

struct C_00143C00 {
    char pad0[0x24];
    Tex_143C00 **f24;
    char pad28[0xc];
    float f34;
    float f38;
    char pad3C[0x14];
    int f50;
    int f54;
    float f58;
    char pad5C[8];
    float f64;
    char pad68[4];
    float f6C;
    char pad70[0x14];
    float f84;
    float f88;
    char pad8C[8];
    float f94;
    float f98;
    char pad9C[8];
    int fA4;
    char padA8[4];
    int fAC;
    char padB0[0x28];
    float fD8;
    int fDC;
    char padE0[4];
    float fE4;
    char padE8[4];
    int fEC;
    void *fF0[3];
    int fFC;
    __forceinline float GetScale()
    {
        float s;
        switch (fAC) {
        case 0:
            s = fD8 / D_002EFEA0;
            break;
        case 1:
        case 2:
            s = fD8;
            break;
        case 3:
            s = D_00275460;
            break;
        }
        return s;
    }
    __forceinline void SetColor(float s);
    __forceinline void Uv28(Vtx28_143C00 *v, float rw, float rh);
    __forceinline void Uv20(Vtx20_143C00 *v, float rw, float rh);
    void func_00143C00(Quad_143C00 *arg);
};

struct Color_143C00 {
    float r, g, b, a;
    Color_143C00(float x, float y, float z, float w)
    {
        r = x;
        g = y;
        b = z;
        a = w;
    }
};

__forceinline void C_00143C00::SetColor(float s)
{
    const Vec4_143C00 *m = &D_002BECE0[fAC];
    Color_143C00 col(s * m->x, s * m->y, s * m->z, f58);
    func_001FEBD0(0x20, &col);
}

__forceinline void C_00143C00::Uv28(Vtx28_143C00 *v, float rw, float rh)
{
    v->u0 = (v->pos.x - f94) * rw;
    v->v0 = (v->pos.z - f98) * rh;
    v->u1 = v->u0;
    v->v1 = v->v0;
}

__forceinline void C_00143C00::Uv20(Vtx20_143C00 *v, float rw, float rh)
{
    v->u = (v->pos.x - f94) * rw;
    v->v = (v->pos.z - f98) * rh;
}


struct C_001AF300 {
    void func_001AF300(void *param);
};

struct C_001AF320 {
    void func_001AF320();
};

struct C_001AF0B0 {
    void func_001AF0B0();
};

struct C_001AF0D0 {
    void func_001AF0D0();
};

struct C_001449B0 {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    int f2c;
    C_001449B0 *func_001449B0(void *param);
    void func_001449E0();
    void func_00144A20(int size);
};

struct C_001445C0 {
    void *vtbl;
    char pad4[0x10];
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void *f24;
    void *f28;
    char pad2c[4];
    void *f30;
    void *f34;
    void func_001445C0();
};

struct C_00144640 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    void *f10;
    C_00144640 *func_00144640();
};

struct C_00144660Obj {
    virtual void func_v0(int param);
};

struct C_00144660 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    C_00144660Obj *f10;
    void func_00144660();
};

struct C_00144940 {
    void *vtbl;
    void *func_00144940(unsigned int flags);
};

struct C_00144710 {
    C_00144710 *func_00144710(int a0);
};

struct C_001474B0 {
    void func_001474B0(void *owner, int a0, int a1);
};

struct Sel_001446B0 {
    char pad0[4];
    C_001474B0 *obj;
    char pad8[8];
};

struct C_00144690 {
    virtual void v0();
    virtual int func_00144690(int a0, int a1);
};
struct C_001AF120_ {
    int func_001AF120(const char *name, int arg);
};

struct Mgr_002A829C {
    char pad0[0x14];
    Sel_001446B0 *arr;
};

extern Mgr_002A829C *D_002A829C;

struct C_001446B0 {
    char pad0[4];
    int f4;
    void func_001446B0(int a0, int a1, int a2);
};

struct C_00144960 {
    void *vtbl;
    char pad4[8];
    u8 fc;
    char padD[3];
    void *f10;
    void func_001AF100(int a0, int a1, int a2, int a3);
    int func_00144960(int a0, int a1, int a2, int a3);
};


void C_00143C00::func_00143C00(Quad_143C00 *arg)
{
    int v;
    if (D_002A99B0 != 0 || fAC != 3) {
        int wide = fE4 != D_00275544;
        {
            char *g = D_002F08BC;
            char *tbl[4] = { g + 0x228, g + 0x240, g + 0x240, g + 0x240 };
            func_001FF940(tbl[fAC], g + 0x258);
        }
        f94 = f84 + f64;
        f98 = f88 + f6C;
        SetColor(GetScale());
        func_001FEC30(0x18, (void *)(*(int *)(D_002EFDB8 + 4) + 0x290));
        D_0020C6DC |= 0x3000;
        D_0020CA7C = 0;
        func_001FD020(&D_00040304, 1);
        func_001FD020(&D_00040350, fDC ? 0x8006 : 0x800b);
        func_001FD020(&D_00040344, 0x302);
        func_001FD020(&D_00040348, 1);
        func_00200390(0, f24[f50]->fB8);
        func_00200510(0, f24[f50]->fBC);
        v = D_0020C6DC;
        D_0020C6E0 = fA4;
        v |= 1;
        D_0020C6DC = v;
        D_0020C6E4 = fA4;
        v = D_0020C6DC;
        v |= 1;
        D_0020C6DC = v;
        v = D_0020C6DC;
        D_0020C6EC = 2;
        D_0020C6F0 = 2;
        D_0020C6F4 = 2;
        D_0020C6F8 = fEC;
        v |= 1;
        D_0020C6DC = v;
        if (fE4 != D_00275544) {
            func_00200390(1, f24[f54]->fB8);
            func_00200510(1, f24[f54]->fBC);
            v = D_0020C6DC;
            v |= 2;
            D_0020C6DC = v;
            D_0020C760 = fA4;
            D_0020C764 = fA4;
            v |= 2;
            D_0020C6DC = v;
            D_0020C76C = 2;
            D_0020C770 = 2;
            D_0020C774 = 2;
            v |= 2;
            D_0020C6DC = v;
            D_0020C778 = fEC;
        }
        Vtx28_143C00 v28[4];
        Vtx20_143C00 v20[4];
        if (fF0[0] == 0) {
            int size = wide ? 0x70 : 0x50;
            fF0[0] = func_001FF3C0(size);
            fF0[1] = func_001FF3C0(size);
            fF0[2] = func_001FF3C0(size);
        }
        if (wide) {
            ((Slot6C_143C00 *)*(void **)(D_002EFDB8 + 0x6c))->func_0014A650(arg->fE4);
            ((Slot70_143C00 *)*(void **)(D_002EFDB8 + 0x70))->func_00142D00(arg->fF4);
            if (D_002A6F8C != 0) {
                Vtx28_143C00 *p = (Vtx28_143C00 *)func_001FF410(fF0[fFC], 0);
                p[0].pos.x = arg->c[0].pos.x;
                p[0].pos.y = arg->c[0].pos.y;
                p[0].pos.z = arg->c[0].pos.z;
                p[0].u0 = (p[0].pos.x - f94) / f34;
                p[0].v0 = (p[0].pos.z - f98) / f38;
                p[0].u1 = p[0].u0;
                p[0].v1 = p[0].v0;
                p[1].pos.x = arg->c[1].pos.x;
                p[1].pos.y = arg->c[1].pos.y;
                p[1].pos.z = arg->c[1].pos.z;
                p[1].u0 = (p[1].pos.x - f94) / f34;
                p[1].v0 = (p[1].pos.z - f98) / f38;
                p[1].u1 = p[1].u0;
                p[1].v1 = p[1].v0;
                p[2].pos.x = arg->c[2].pos.x;
                p[2].pos.y = arg->c[2].pos.y;
                p[2].pos.z = arg->c[2].pos.z;
                p[2].u0 = (p[2].pos.x - f94) / f34;
                p[2].v0 = (p[2].pos.z - f98) / f38;
                p[2].u1 = p[2].u0;
                p[2].v1 = p[2].v0;
                p[3].pos.x = arg->c[3].pos.x;
                p[3].pos.y = arg->c[3].pos.y;
                p[3].pos.z = arg->c[3].pos.z;
                p[3].u0 = (p[3].pos.x - f94) / f34;
                p[3].v0 = (p[3].pos.z - f98) / f38;
                p[3].u1 = p[3].u0;
                p[3].v1 = p[3].v0;
                func_001FEE00(0, fF0[fFC], 0x1c);
                func_00200B30((void *)6, 4, D_002A7054);
                if (++fFC == 3) {
                    fFC = 0;
                }
            } else {
                v28[0].pos.x = arg->c[0].pos.x;
                v28[0].pos.y = arg->c[0].pos.y;
                v28[0].pos.z = arg->c[0].pos.z;
                v28[1].pos.x = arg->c[1].pos.x;
                v28[1].pos.y = arg->c[1].pos.y;
                v28[1].pos.z = arg->c[1].pos.z;
                v28[2].pos.x = arg->c[2].pos.x;
                v28[2].pos.y = arg->c[2].pos.y;
                v28[2].pos.z = arg->c[2].pos.z;
                v28[3].pos.x = arg->c[3].pos.x;
                v28[3].pos.y = arg->c[3].pos.y;
                v28[3].pos.z = arg->c[3].pos.z;
                float invW = D_00275460 / f34;
                float invH = D_00275460 / f38;
                Uv28(&v28[0], invW, invH);
                Uv28(&v28[1], invW, invH);
                Uv28(&v28[2], invW, invH);
                Uv28(&v28[3], invW, invH);
                func_00200950(6, 6, D_002A7054, v28, 0x1c);
            }
        } else {
            ((Slot6C_143C00 *)*(void **)(D_002EFDB8 + 0x6c))->func_0014A650(arg->fE0);
            ((Slot70_143C00 *)*(void **)(D_002EFDB8 + 0x70))->func_00142D00(arg->fF0);
            if (D_002A6F8C != 0) {
                Vtx20_143C00 *p = (Vtx20_143C00 *)func_001FF410(fF0[fFC], 0);
                p[0].pos.x = arg->c[0].pos.x;
                p[0].pos.y = arg->c[0].pos.y;
                p[0].pos.z = arg->c[0].pos.z;
                p[0].u = (p[0].pos.x - f94) / f34;
                p[0].v = (p[0].pos.z - f98) / f38;
                p[1].pos.x = arg->c[1].pos.x;
                p[1].pos.y = arg->c[1].pos.y;
                p[1].pos.z = arg->c[1].pos.z;
                p[1].u = (p[1].pos.x - f94) / f34;
                p[1].v = (p[1].pos.z - f98) / f38;
                p[2].pos.x = arg->c[2].pos.x;
                p[2].pos.y = arg->c[2].pos.y;
                p[2].pos.z = arg->c[2].pos.z;
                p[2].u = (p[2].pos.x - f94) / f34;
                p[2].v = (p[2].pos.z - f98) / f38;
                p[3].pos.x = arg->c[3].pos.x;
                p[3].pos.y = arg->c[3].pos.y;
                p[3].pos.z = arg->c[3].pos.z;
                p[3].u = (p[3].pos.x - f94) / f34;
                p[3].v = (p[3].pos.z - f98) / f38;
                func_001FEE00(0, fF0[fFC], 0x14);
                func_00200B30((void *)6, 4, D_002A7054);
                if (++fFC == 3) {
                    fFC = 0;
                }
            } else {
                v20[0].pos.x = arg->c[0].pos.x;
                v20[0].pos.y = arg->c[0].pos.y;
                v20[0].pos.z = arg->c[0].pos.z;
                v20[1].pos.x = arg->c[1].pos.x;
                v20[1].pos.y = arg->c[1].pos.y;
                v20[1].pos.z = arg->c[1].pos.z;
                v20[2].pos.x = arg->c[2].pos.x;
                v20[2].pos.y = arg->c[2].pos.y;
                v20[2].pos.z = arg->c[2].pos.z;
                v20[3].pos.x = arg->c[3].pos.x;
                v20[3].pos.y = arg->c[3].pos.y;
                v20[3].pos.z = arg->c[3].pos.z;
                float invW = D_00275460 / f34;
                float invH = D_00275460 / f38;
                Uv20(&v20[0], invW, invH);
                Uv20(&v20[1], invW, invH);
                Uv20(&v20[2], invW, invH);
                Uv20(&v20[3], invW, invH);
                func_00200950(6, 6, D_002A7054, v20, 0x14);
            }
        }
    }
}

void DXStripSurfaceData::func_001444F0()
{
    if (f14) func_001FEE00(0, f14, 12);
    if (f18) func_001FEE00(1, f18, 12);
    if (f1c) func_001FEE00(2, f1c, 4);
    if (f28) func_001FEE00(4, f28, 4);
    for (int i = 0; i < 4; i++) {
        int selector = D_002EFDB8[0x90 + i];
        if (selector != 255) {
            int stream;
            if (i == 0) stream = 3;
            else if (i == 1) stream = 10;
            else if (i == 2) stream = 11;
            else if (i == 3) stream = 12;
            else stream = -1;
            func_001FEE00(stream, selector == 0 ? f20 : f24, 8);
        }
    }
    func_00200B30(f10, fc, f30);
}

void C_001445C0::func_001445C0()
{
    vtbl = (void *)&D_00285B58;
    if (f14 != 0) {
        func_00201100(f14);
    }
    if (f18 != 0) {
        func_00201100(f18);
    }
    if (f1c != 0) {
        func_00201100(f1c);
    }
    if (f20 != 0) {
        func_00201100(f20);
    }
    if (f24 != 0) {
        func_00201100(f24);
    }
    if (f34 != 0) {
        func_00201100(f34);
    }
    if (f28 != 0) {
        func_00201100(f28);
    }
    if (f30 != 0) {
        func_001E891B(f30);
    }
    vtbl = (void *)&D_00284E94;
}

C_00144640 *C_00144640::func_00144640()
{
    ((C_001AF0B0 *)this)->func_001AF0B0();
    fc = fc & 0xfe;
    vtbl = (void *)&D_00285B64;
    f10 = 0;
    return this;
}

void C_00144660::func_00144660()
{
    vtbl = (void *)&D_00285B64;
    if ((fc & 1) != 0 && f10 != 0) {
        f10->func_v0(1);
        f10 = 0;
    }
    ((C_001AF0D0 *)this)->func_001AF0D0();
}

int __stdcall func_001AF120(int a0, int a1);
int C_00144690::func_00144690(int a0, int a1)
{
    C_001AF120_ *self = (C_001AF120_ *)this;
    return self->func_001AF120((const char *)a0, a1) ? 1 : 1;
}

void C_001446B0::func_001446B0(int a0, int a1, int a2)
{
    if (a2 != -1) {
        ((C_001474B0 *)D_002A829C->arr[a2].obj)->func_001474B0(this, a0, a1);
    } else {
        ((C_001474B0 *)D_002A829C->arr[f4].obj)->func_001474B0(this, a0, a1);
    }
}

DXStripSurfaceData::DXStripSurfaceData(int file)
{
    int i4;
    unsigned short n;
    unsigned char b;
    vtbl = &D_00285B58;
    f8 = 0; fc = 0; f14 = 0; f18 = 0; f1c = 0; f20 = 0; f24 = 0; f28 = 0; f30 = 0; f34 = 0;
    f10 = (void *)6;
    D_002BEAAC->func_0013C8A0(file, &flags, 1, 1);
    D_002BEAAC->func_0013C8A0(file, &b, 1, 1);
    D_002BEAAC->func_0013C8A0(file, &b, 1, 1);
    D_002BEAAC->func_0013C8A0(file, &b, 1, 1);
    D_002BEAAC->func_0013C8A0(file, &i4, 4, 1);
    D_002BEAAC->func_0013C8A0(file, &n, 2, 1);
    f8 = n;
    D_002BEAAC->func_0013C8A0(file, &n, 2, 1);
    fc = n;
    f30 = func_001E8A44(fc * 2);
    D_002BEAAC->func_0013C8A0(file, f30, 2, fc);
    if (flags & 1) {
        int c = f8;
        f14 = func_001FF3C0(c * 12);
        void *p = func_001FF410(f14, 16);
        D_002BEAAC->func_0013C8A0(file, p, 12, c);
    }
    if (flags & 2) {
        int c = f8;
        f18 = func_001FF3C0(c * 12);
        void *p = func_001FF410(f18, 16);
        D_002BEAAC->func_0013C8A0(file, p, 12, c);
    }
    if (flags & 8) {
        int c = f8;
        f1c = func_001FF3C0(c * 4);
        void *p = func_001FF410(f1c, 16);
        D_002BEAAC->func_0013C8A0(file, p, 4, c);
    }
    if (flags & 4) {
        int c = f8;
        f20 = func_001FF3C0(c * 8);
        void *p = func_001FF410(f20, 16);
        D_002BEAAC->func_0013C8A0(file, p, 8, c);
    }
    if (flags & 16) {
        int c = f8;
        f24 = func_001FF3C0(c * 8);
        void *p = func_001FF410(f24, 16);
        D_002BEAAC->func_0013C8A0(file, p, 8, c);
    }
    if (flags & 64) {
        int c = f8;
        f28 = func_001FF3C0(c * 4);
        void *p = func_001FF410(f28, 16);
        D_002BEAAC->func_0013C8A0(file, p, 4, c);
    }
}

void *C_00144940::func_00144940(unsigned int flags)
{
    ((C_001445C0 *)this)->func_001445C0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

int C_00144960::func_00144960(int a0, int a1, int a2, int a3)
{
    void *func_001E8A44(int);
    func_001AF100(a0, a1, a2, a3);
    void *p = func_001E8A44(0x38);
    if (p != 0) {
        p = ((C_00144710 *)p)->func_00144710(a0);
    } else {
        p = 0;
    }
    f10 = p;
    fc |= 1;
    return 1;
}

C_001449B0 *C_001449B0::func_001449B0(void *param)
{
    ((C_001AF300 *)this)->func_001AF300(param);
    f24 = 0;
    f28 = 0;
    f2c = 0;
    vtbl = (void *)&D_00285B84;
    return this;
}

void C_001449B0::func_001449E0()
{
    vtbl = (void *)&D_00285B84;
    if (f24 != 0) {
        func_001E8390((void *)f24);
    }
    if (f2c != 0) {
        func_001E891B((void *)f2c);
    }
    ((C_001AF320 *)this)->func_001AF320();
}

void C_001449B0::func_00144A20(int size)
{
    int id = size;
    D_002BEAAC->func_0013C8A0(id, &size, 4, 1);
    f24 = (int)func_001E8AA5(size);
    D_002BEAAC->func_0013C8A0(id, (void *)f24, size, 1);
    D_002BEAAC->func_0013C8A0(id, &size, 4, 1);
    f28 = size / 4;
    f2c = (int)func_001E8A44(f28 * 4);
    D_002BEAAC->func_0013C8A0(id, (void *)f2c, size, 1);
}

int func_00144AE0(const char *name, int width, int height, int format)
{
    if (!D_002A71C0->f8) {
        D_002A71C0->v1c(D_00285C6C, 0);
        D_002A71C0->v1c(D_00285C5C, 0);
        D_002A71C0->v1c(D_00285C40, 0);
        D_002A71C0->v1c(D_00285C28, 0);
        D_002A71C0->v1c(D_00285C0C, 0);
    }
    int index = D_002A71C0->v1c(name, 0);
    D_002A71C0->v14(index);
    if (width && !D_002A71C0->f14[index].f4) {
        int texture = func_001FCF20(width, height, 1, 1, 1, format, 3);
        if (((texture != 0) - 1 & (int)0x8007000e) < 0) return 0;
        int surface = func_001FCE50(texture, 0);
        if (((surface != 0) - 1 & (int)0x8007000e) < 0) return 0;
        D_002A71C0->f14[index].f4 = texture;
        D_002A71C0->f14[index].f8 = surface;
    }
    return -index;
}

