/* 13 functions from 0x001ADFD0 to 0x001AED80, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <math.h>
#include <xmmintrin.h>
#include "asm_helpers.h"
struct C_001AEBB0 {
    undefined4 func_001AEBB0(byte param_1);
};

extern float D_002AA2E8, D_002AA2EC;

__declspec(align(16)) struct S_ADFD0_Mat {
    float m[16];
    __forceinline void identity(void)
    {
        __m128 z = _mm_setzero_ps();
        ((__m128 *)m)[0] = z;
        ((__m128 *)m)[1] = z;
        ((__m128 *)m)[2] = z;
        ((__m128 *)m)[3] = z;
        m[0] = 1.0f;
        m[5] = 1.0f;
        m[10] = 1.0f;
        m[15] = 1.0f;
    }
};

static __forceinline void Identity_001ADFD0(S_ADFD0_Mat *volatile &p)
{
    S_ADFD0_Mat *q = p;
    __m128 z = _mm_setzero_ps();
    ((__m128 *)q->m)[0] = z;
    ((__m128 *)q->m)[1] = z;
    ((__m128 *)q->m)[2] = z;
    ((__m128 *)q->m)[3] = z;
    q->m[0] = 1.0f;
    q->m[5] = 1.0f;
    q->m[10] = 1.0f;
    q->m[15] = 1.0f;
}

struct S_ADFD0_Tex {
    char pad0[8];
    int f8;
    int fC;
    char pad10[0x94];
    int fA4;
    char padA8[0x10];
    int fB8;
};

struct S_ADFD0_Vtx {
    float x, y;
    int z;
    int color;
    float u, v;
};

struct S_ADFD0_Slot6C { void func_0014A650(void *p); };
struct S_ADFD0_Slot70 { void func_00142D00(void *p); };

struct C_1AE570_Root;
extern C_1AE570_Root *D_002EFDB8;
struct S_ADFD0_CamX {
    char pad0[0x1E0];
    int f1E0;
    int f1E4;
};
struct S_ADFD0_RootX {
    char pad0[4];
    S_ADFD0_CamX *cam;
    char pad8[0x64];
    S_ADFD0_Slot6C *f6c;
    S_ADFD0_Slot70 *f70;
};

extern int D_0020C6E0, D_0020C6E4, D_0020C6DC, D_0020C6EC, D_0020C6F0, D_0020CA50;
extern int D_00040300, D_00040304, D_00040344, D_00040348, D_00040354;
void __fastcall func_001FD020(void *p, int v);
void __fastcall func_001FEC30(int n, void *p);
void __stdcall func_001FE490(int a);
void __stdcall func_00200390(int index, int value);
void *__stdcall func_001FF410(void *buffer, int flags);
void __stdcall func_001FEE00(int stream, void *data, int stride);
void __stdcall func_00200A90(int a, int b, int c);

struct C_001ADFD0 {
    char pad0[0x10];
    void *f10;
    void *f14;
    char pad18[0xC];
    unsigned char f24, f25, f26;
    char pad27[1];
    void *f28;
    char pad2C[0x38];
    unsigned char f64;
    char pad65[3];
    int f68;
    void func_001ADFD0(float *src, S_ADFD0_Tex *tex, int *rect, int a4, int a5, int a6);
};
extern int D_0028C214;
extern int D_0028C208;
extern int D_0028C1A4;
extern int D_00284E94;
void func_001E891B(void *p);
void func_001E8390(void *p);

struct C_001ADFD0_Virt {
    virtual void v0(int a);
};

struct C_00157600 {
    void func_00157600(int a0);
};

struct C_00157660 {
    void func_00157660(void);
};

struct C_001AE3E0_Vec4 {
    int x;
    int y;
    int z;
    int w;
    void Set(int a, int b, int c, int d)
    {
        x = a;
        y = b;
        z = c;
        w = d;
    }
};

/* the queue entry a C_001AE3E0_Sub points at (flag byte at +0xC, owner at +0x10) */
struct C_001AE3E0_Entry {
    char pad0[0xC];
    unsigned char fC;
    char padD[3];
    C_001ADFD0_Virt *f10;
};

struct C_001AE3E0;

struct C_001AE3E0_Sub {
    void *vtbl;
    C_001AE3E0_Entry *f4;
    C_001ADFD0_Virt *f8;
    void func_001D5480(void);
    void func_001D5490(void);
    void func_001D54B0(int a);
    void Init(void)
    {
        func_001D5480();
        f8 = 0;
        vtbl = &D_0028C208;
    }
};

struct C_001AE3E0_Head {
    void *vtbl;
    char pad4[0x20];
    int f24;
    int f28;
    float f2C;
    int f30;
    int f34;
    C_001AE3E0_Vec4 *f38;
    C_001AE3E0_Vec4 *f3C;
    C_001AE3E0_Head(int param_1)
    {
        ((C_00157600 *)this)->func_00157600(param_1);
        vtbl = &D_0028C214;
    }
};

struct C_001AE3E0_Quat {
    int x;
    int y;
    int z;
    int w;
    C_001AE3E0_Quat()
    {
        z = 0;
        y = 0;
        x = 0;
        w = 0x3f800000;
    }
};

void *func_001E8A44(int size);
void *func_001E8AA5(int size);
float *func_0001E9E0(float *out, float *in);
extern int D_0028C198;

/* packed color: alpha is the top byte */
union U_001AEBD0_Color {
    unsigned int rgba;
    struct {
        unsigned char b;
        unsigned char g;
        unsigned char r;
        unsigned char a;
    } c;
};

/* the 0x6c-byte sprite a particle object owns (virtual destructor in slot 0) */
struct S_001AEBD0_Sprite : C_001ADFD0_Virt {
    char pad4[0x28];
    int f2C;
    int f30;
    int f34;
    int f38;
    float f3C;
    float f40;
    char pad44[0x10];
    U_001AEBD0_Color col[4];
    unsigned char f64;
    S_001AEBD0_Sprite *func_001ADEB0(void);
    void func_001ADF30(int a, int b);
    void SetSize(int w, int h)
    {
        f34 = w;
        f38 = h;
    }
    void SetOffset(int x, int y)
    {
        f2C = x;
        f30 = y;
    }
    void SetScale(float s)
    {
        f3C = s;
        f40 = s;
    }
    void SetAlpha(unsigned char alpha)
    {
        unsigned int c = (unsigned int)alpha << 24;
        f64 = alpha;
        col[0].rgba = (col[0].rgba & 0xffffff) | c;
        col[1].rgba = (col[1].rgba & 0xffffff) | c;
        col[2].rgba = (col[2].rgba & 0xffffff) | c;
        col[3].rgba = (col[3].rgba & 0xffffff) | c;
    }
};

static __forceinline unsigned int MakeColor_001AEBD0(int a, unsigned char r, unsigned char g, unsigned char b)
{
    return (((a << 8 | r) << 8 | g) << 8) | b;
}

static __forceinline unsigned int MakeColorF_001AEBD0(int a, float r, float g, float b)
{
    return MakeColor_001AEBD0(a, (unsigned char)(int)r, (unsigned char)(int)g, (unsigned char)(int)b);
}

struct C_001AE3E0;

/* 8-byte back-reference object stored into C_001AE3E0_Sub::f8 */
struct S_001AEBD0_Ref {
    void *vtbl;
    C_001AE3E0 *f4;
    S_001AEBD0_Ref()
    {
        vtbl = &D_0028C198;
        f4 = 0;
    }
    static void *operator new(unsigned int size) { return func_001E8A44(size); }
};

static void Attach_001AEBD0(C_001AE3E0_Sub *s, C_001AE3E0 *owner, int a)
{
    S_001AEBD0_Ref *ref;

    s->func_001D54B0(a);
    ref = new S_001AEBD0_Ref;
    s->f8 = (C_001ADFD0_Virt *)ref;
    ref->f4 = owner;
    s->f4->fC &= 0xfe;
    s->f4->f10 = s->f8;
}

struct C_001AE3E0 : C_001AE3E0_Head {
    C_001AE3E0_Quat f40;
    int f50;
    S_001AEBD0_Sprite *f54;
    C_001AE3E0_Sub f58;
    void *f64;
    int f68;
    int f6C;
    int f70;
    int f74;
    int f78;
    char pad7C[8];
    union {
        unsigned char f84;
        struct {
            unsigned char f84_0 : 1;
            unsigned char f84_1 : 1;
            unsigned char f84_2 : 1;
        };
    };
    C_001AE3E0(int param_1);
    void func_001AE460(void);
    void func_001AE4D0(C_001AE3E0_Vec4 a, C_001AE3E0_Vec4 b, int idx);
    C_001AE3E0 *func_001AEBD0(int a1, int a2, float *a3, int a4, float a5, int a6, int a7, int a8, float a9, float a10, float a11, int a12, char a13);
};

struct C_001AE7D0 {
    void *vtbl;
    C_001ADFD0_Virt *f4;
    void *func_001AE7D0(int flags);
};

void func_001E891B(void *p);
void __stdcall func_00201100(void *p);

struct C_001AEB70Obj {
    virtual void v0(int flags);
};

struct C_001AEB70 {
    void *vtbl;
    int f4;
    C_001AEB70Obj *f8;
    void func_001D5490(void);
    void *func_001AEB70(int flags);
};

struct C_001AE810Mgr {
    char pad0[0x14];
    char *f14;
    void func_001B26C0(int a0);
};

struct C_001AE810F10 {
    void func_0014A540(void);
};

struct C_001AE810F14 {
    void func_00012140(void);
};

extern C_001AE810Mgr *D_002AA6C0;

struct C_001AE700_Obj {
    char pad0[0x3C];
    float f3C;
    float f40;
    char pad44[0x10];
    unsigned int f54;
    unsigned int f58;
    unsigned int f5C;
    unsigned int f60;
    unsigned char f64;
};

struct C_001AE700 {
    char pad0[0x28];
    float f28;
    float f2C;
    char pad30[0x24];
    C_001AE700_Obj *f54;
    char pad58[0xC];
    int *f64;
    float f68;
    void func_001AE700(void);
};

extern int D_002AA3F4;
extern const float D_0027A060;
extern const float D_00287B68;
extern const float D_00284758;
extern const float D_00275460;
extern const float D_002AA3F0;
extern const float D_00276E9C;

struct C_001AE810 {
    void *vtbl;
    C_001AEB70Obj *f4;
    int f8;
    int fC;
    C_001AE810F10 *f10;
    C_001AE810F14 *f14;
    int f18;
    void *f1C;
    void *f20;
    void func_001AE810(void);
};


void C_001ADFD0::func_001ADFD0(float *srcf, S_ADFD0_Tex *tex, int *rect, int a4, int a5, int a6)
{
    int *src = (int *)srcf;
    S_ADFD0_Mat mat;
    S_ADFD0_Mat *volatile pm = &mat;
    C_001ADFD0 *volatile self = this;
    int x, y, z, w;
    int s0, s1, s2, s3;
    float u0, v0, u1, v1;
    float fx, fy, fz, fw;
    int b;
    int q0, q1;
    unsigned char cr, cg, cb;
    S_ADFD0_Vtx *p;

    Identity_001ADFD0(pm);
    if (rect != 0) {
        x = rect[0];
        y = rect[1];
        z = rect[2];
        w = rect[3];
    } else {
        x = 0;
        y = 0;
        z = tex->f8;
        w = tex->fC;
    }
    if (src != 0) {
        s0 = (int)((float)src[0] * D_002AA2E8);
        s2 = (int)((float)src[2] * D_002AA2E8);
        s1 = (int)((float)src[1] * D_002AA2EC);
        s3 = (int)((float)src[3] * D_002AA2EC);
    } else {
        s0 = 0;
        s1 = 0;
        s2 = 0x280;
        s3 = 0x1c0;
    }
    D_0020C6E0 = 3;
    D_0020C6E4 = 3;
    {
        int c6dc = D_0020C6DC | 1;
        D_0020C6EC = 1;
        D_0020C6DC = c6dc;
    }
    D_0020C6F0 = 1;
    func_001FD020(&D_00040304, 1);
    func_001FD020(&D_00040344, 0x302);
    func_001FD020(&D_00040348, 0x303);
    D_0020C6DC |= 0x2000;
    D_0020CA50 = 0;
    func_001FD020(&D_00040300, 0);
    func_001FE490(1);
    if (a6 != 0) {
        func_001FD020(&D_00040354, 0x203);
    } else {
        func_001FD020(&D_00040354, 0x207);
    }
    func_00200390(0, tex->fB8);
    fx = (float)s0;
    fy = (float)s1;
    fz = (float)s2;
    fw = (float)s3;
    b = 1;
    switch (tex->fA4) {
    case 6:
    case 0xc:
    case 0xe:
    case 0xf:
        b = 0;
        break;
    case 0x12:
    case 0x1c:
    case 0x1e:
        b = 1;
        break;
    }
    q0 = 0;
    q1 = 0;
    if (a5 == 0) {
        if (((S_ADFD0_RootX *)D_002EFDB8)->cam != 0) {
            q0 = ((S_ADFD0_RootX *)D_002EFDB8)->cam->f1E0;
            q1 = ((S_ADFD0_RootX *)D_002EFDB8)->cam->f1E4;
        }
    }
    ((volatile float *)mat.m)[3] = (float)q0;
    ((volatile float *)mat.m)[7] = (float)q1;
    if (b != 0) {
        u0 = (float)x;
        v0 = (float)y;
        u1 = (float)z;
        v1 = (float)w;
    } else {
        u0 = (float)x / (float)tex->f8;
        v0 = (float)y / (float)tex->fC;
        u1 = (float)z / (float)tex->f8;
        v1 = (float)w / (float)tex->fC;
    }
    p = (S_ADFD0_Vtx *)func_001FF410(self->f28, 0);
    *(volatile unsigned char *)&cr = self->f24;
    cg = self->f25;
    cb = self->f26;
    p[0].x = fx;
    p[0].y = fw;
    p[0].z = self->f68;
    p[0].color = MakeColor_001AEBD0(self->f64, cb, cg, cr);
    p[0].u = u0;
    p[0].v = v1;
    p[1].x = fx;
    p[1].y = fy;
    p[1].z = self->f68;
    p[1].color = MakeColor_001AEBD0(self->f64, cb, cg, cr);
    p[1].u = u0;
    p[1].v = v0;
    p[2].x = fz;
    p[2].y = fw;
    p[2].z = self->f68;
    p[2].color = MakeColor_001AEBD0(self->f64, cb, cg, cr);
    p[2].u = u1;
    p[2].v = v1;
    p[3].x = fz;
    p[3].y = fy;
    p[3].z = self->f68;
    p[3].color = MakeColor_001AEBD0(self->f64, cb, cg, cr);
    p[3].u = u1;
    p[3].v = v0;
    ((S_ADFD0_RootX *)D_002EFDB8)->f6c->func_0014A650(self->f10);
    ((S_ADFD0_RootX *)D_002EFDB8)->f70->func_00142D00(self->f14);
    func_001FEC30(0x22, mat.m);
    func_001FEE00(0, self->f28, 0x18);
    func_00200A90(6, 0, 4);
}

C_001AE3E0::C_001AE3E0(int param_1) : C_001AE3E0_Head(param_1)
{
    f58.Init();
    f6C = -1;
    f74 = -1;
    f70 = -1;
    f78 = -1;
    f50 = 0;
    f30 = 0;
    f38 = 0;
    f3C = 0;
    f64 = 0;
    f54 = 0;
    f68 = 0;
    f84 &= 0xf8;
    f24 = 1;
}

void C_001AE3E0::func_001AE460(void)
{
    vtbl = &D_0028C214;
    if (f38) {
        func_001E891B(f38);
    }
    if (f3C) {
        func_001E891B(f3C);
    }
    if (f64) {
        func_001E8390(f64);
    }
    if (f54) {
        f54->v0(1);
    }
    f58.vtbl = &D_0028C208;
    if (f58.f8) {
        f58.f8->v0(1);
    }
    f58.func_001D5490();
    ((C_00157660 *)this)->func_00157660();
}

void C_001AE3E0::func_001AE4D0(C_001AE3E0_Vec4 a, C_001AE3E0_Vec4 b, int idx)
{
    f84 |= 2;
    f38[idx] = a;
    f3C[idx] = b;
}

struct C_1AE570_Cam {
    char pad0[0xF0];
    float mat[32];
    float pos[3];
    float f17C;
    float dir[3];
    char pad18C[0x54];
    int f1E0;
    int f1E4;
    int f1E8;
    unsigned int f1EC;
};
struct C_1AE570_Root {
    char pad0[4];
    C_1AE570_Cam *cam;
    char pad8[0x64];
    S_ADFD0_Slot6C *f6c;
    S_ADFD0_Slot70 *f70;
};
struct C_1AE570_Tr {
    int func_001C5C50(C_1AE570_Cam *cam, float *mat, float *b, float *a, float *out);
};
extern int D_002F00D0;
extern int D_002AA3EC;
extern C_1AE570_Root *D_002EFDB8;
extern C_1AE570_Tr *D_002AB66C;
extern const float D_002755E4;
extern const float D_00275544;
extern const float D_0028C280;
extern const float D_00275460;
void func_001578D0_(void);
struct C_1AE570 {
    char pad0[0x30];
    float f30;
    char pad34[0xC];
    float f40, f44, f48;
    char pad4C[0x30];
    float f7C, f80;
    unsigned char f84_0 : 1;
    int func_001AE570(void);
    int func_001578D0(void);
    float func_001AE530(float x, float y);
};

struct C_001AE890 {
    char pad0[8]; int f8, fC; char pad10[8]; C_001AE700 *f18;
    int f1C; void *f20; int f24, f28, f2C, f30, f34, f38;
    float f3C, f40; char pad44[0x20]; unsigned char f64; float f68;
    void func_001AE890();
    void func_001ADFD0(void *, int, int, int, int, int);
};
struct S_001AE890_View { int v[6]; };
static inline void setint_1AE890(int *out, float f) { *out = (int)f; }
void func_001ADD80(void *);
void __stdcall func_001FF940(void *, void *);
void __stdcall func_00200230(void *);
void __stdcall func_001FF4E0(int, void *, int, int, int, int);
void __stdcall func_00201210(void *, void *, int, int);
void __stdcall func_002011F0(void *, void *);
#pragma auto_inline(off)
float C_1AE570::func_001AE530(float x, float y)
{
    extern float D_00278788;
    extern float D_0028AC88;
    float dx = x - D_00278788;
    float dy = y - D_0028AC88;
    float s = dx * dx + dy * dy;

    return AsmSqrtF(s);
}

int C_1AE570::func_001AE570(void)
{
    float a[4], b[4], t, out;
    C_1AE570_Cam *cam;
    float *p;
    float x,y,z;
    int flag;
    if (D_002F00D0) return 0;
    flag=D_002AA3EC;
    f7C=320.0f; f80=100.0f;
    if(flag) {
        a[2]=0.0f; a[1]=0.0f; a[0]=0.0f; a[3]=1.0f;
        p=D_002EFDB8->cam->pos;
        z=p[2]-f48; y=p[1]-f44; x=p[0]-f40;
        b[3]=1.0f; b[0]=x; b[1]=y; b[2]=z;
        cam=D_002EFDB8->cam;
        f84_0=D_002AB66C->func_001C5C50(cam,cam->mat,b,a,&out);
        f7C=a[0];
        t=(float)D_002EFDB8->cam->f1EC-a[1]; f80=t;
        {
            float *d=D_002EFDB8->cam->dir;
            float n[3];
            n[0]=-f40; n[1]=-f44; n[2]=-f48;
            float dot = n[1]*d[1]+n[0]*d[0];
            if(dot+n[2]*d[2]>D_00275544)
                f30=D_00275460-D_0028C280*func_001AE530(a[0],t);
            else f30=0.0f;
        }
    } else f84_0=1;
    return func_001578D0();
}

void C_001AE700::func_001AE700(void)
{
    int n = D_002AA3F4;
    int *p = f64;
    float step = (float)D_002AA3F4 * D_00287B68 * D_0027A060;
    int i = 0;
    C_001AE700_Obj *obj;
    float v;
    unsigned char b;
    unsigned int c;

    do {
        if (*p == 0) {
            f68 = step + f68;
        }
        i += n;
        p += n;
    } while (i < 0x100);
    obj = f54;
    v = (f2C - f28) * ((double)f68 * D_00284758) + f28;
    v = (double)obj->f3C * D_002AA3F0 + (D_00275460 - D_002AA3F0) * v;
    obj->f3C = v;
    obj->f40 = v;
    b = (unsigned char)((double)f68 * D_00276E9C);
    obj = f54;
    obj->f64 = b;
    c = (unsigned int)b << 24;
    obj->f54 = (obj->f54 & 0xffffff) | c;
    obj->f58 = (obj->f58 & 0xffffff) | c;
    obj->f5C = (obj->f5C & 0xffffff) | c;
    obj->f60 = (obj->f60 & 0xffffff) | c;
}

void *C_001AE7D0::func_001AE7D0(int flags)
{
    vtbl = &D_0028C1A4;
    if (f4) {
        f4->v0(1);
    }
    vtbl = &D_00284E94;
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001AE810::func_001AE810(void)
{
    extern int D_0028C1D0;
    extern int D_0028C1A4;
    extern int D_00284E94;
    C_001AE810F10 *p10;
    C_001AE810F14 *p14;

    vtbl = (void *)&D_0028C1D0;
    if (f1C != 0) {
        func_00201100(f1C);
    }
    if (f20 != 0) {
        func_00201100(f20);
    }
    D_002AA6C0->func_001B26C0(fC);
    p10 = f10;
    if (p10 != 0) {
        p10->func_0014A540();
        func_001E891B(p10);
    }
    p14 = f14;
    if (p14 != 0) {
        p14->func_00012140();
        func_001E891B(p14);
    }
    vtbl = (void *)&D_0028C1A4;
    if (f4 != 0) {
        f4->v0(1);
    }
    vtbl = (void *)&D_00284E94;
}

void C_001AE890::func_001AE890(void)
{
    int desc[7];
    S_001AE890_View view;
    S_001AE890_View * volatile vp;
    int rect2[4];
    int rect[4];
    struct { int pitch; int *bits; } lock;
    int bottom;
    int right;
    int left, top, r, end;
    int texA, texB;
    int *p;
    int i, x, y, v;

    func_001ADD80(f18);
    AsmFloatToIntRound((float)f34 * f3C + (float)f2C, &right);
    AsmFloatToIntRound((float)f38 * f40 + (float)f30, &bottom);
    func_001FF940(f20, *(void **)((char *)D_002EFDB8 + 0x5c));
    vp = (S_001AE890_View *)((char *)D_002EFDB8->cam + 0x1e0);
    view = *vp;
    func_00200230(&view);
    {
        int vy = view.v[1];
        int *b = (int *)((char *)f18 + 0x6c);
        left = b[0];
        top = b[1] + vy;
        r = b[2];
        end = b[3] + vy;
    }
    rect[0] = left;
    rect[1] = top;
    rect[2] = r;
    rect[3] = end;
    func_001FF4E0(1, rect, 240, 0, 0, 0);
    texB = *(int *)(D_002AA6C0->f14 + fC * 16 + 4);
    texA = *(int *)(D_002AA6C0->f14 + f8 * 16 + 4);
    f64 = 255;
    f68 = 16758600.0f;
    f24 = 0xffffff;
    func_001ADFD0((int *)((char *)f18 + 0x6c), texB, 0, 0, 0, 1);
    func_00201210(f20, &lock, 0, 0);
    func_002011F0(f20, desc);
    p = lock.bits + desc[5] * top + left;
    i = 0;
    y = top;
    while (y < end) {
        x = 0;
        do {
            v = *p++;
            f18->f64[i++] = (v == 0);
            v = *p++;
            f18->f64[i++] = (v == 0);
            v = *p++;
            f18->f64[i++] = (v == 0);
            v = *p++;
            f18->f64[i++] = (v == 0);
            v = *p++;
            f18->f64[i++] = (v == 0);
            v = *p++;
            f18->f64[i++] = (v == 0);
            v = *p++;
            f18->f64[i++] = (v == 0);
            v = *p++;
            f18->f64[i++] = (v == 0);
            x++;
        } while (x < 2);
        p += 624;
        y++;
    }
    f18->func_001AE700();
    func_001FF940(*(void **)((char *)D_002EFDB8 + 0x58), *(void **)((char *)D_002EFDB8 + 0x5c));
    func_00200230(vp);
    rect2[0] = f2C;
    rect2[1] = f30;
    rect2[2] = right;
    rect2[3] = bottom;
    func_001ADFD0(rect2, texA, 0, 0, 0, 0);
}

void *C_001AEB70::func_001AEB70(int flags)
{
    extern int D_0028C208;

    vtbl = (void *)&D_0028C208;
    if (f8 != 0) {
        f8->v0(1);
    }
    func_001D5490();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

undefined4 C_001AEBB0::func_001AEBB0(byte param_1)
{
  int func_001AE460(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001AE460();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

C_001AE3E0 *C_001AE3E0::func_001AEBD0(int a1, int a2, float *a3, int a4, float a5, int a6, int a7, int a8, float a9, float a10, float a11, int a12, char a13)
{
    char rgb[3];
    float tmp[4];
    void *mem;
    unsigned int color;
    C_001AE3E0_Sub *sub; S_001AEBD0_Ref *ref; C_001AE3E0_Entry *entry;
    f24 = a8;
    f40 = *(C_001AE3E0_Quat *)func_0001E9E0(tmp, a3);
    f28 = a4;
    f2C = a5;
    f84_2 = a13;
    mem = func_001E8A44(0x6c);
    f54 = mem ? ((S_001AEBD0_Sprite *)mem)->func_001ADEB0() : 0;
    f54->func_001ADF30(a1, (int)this);
    f54->SetScale(f2C);
    f54->SetAlpha(0);
    rgb[0] = (char)(int)a9;
    rgb[1] = (char)(int)a10;
    rgb[2] = (char)(int)a11;
    color = MakeColor_001AEBD0(-1, rgb[0], rgb[1], rgb[2]);
    f54->col[0].rgba = color;
    f54->col[1].rgba = color;
    f54->col[2].rgba = color;
    f54->col[3].rgba = color;
    f54->SetSize(a6,a7);
    f54->SetOffset(0,0);
    sub=&f58;
    sub->func_001D54B0(a2);
    ref = new S_001AEBD0_Ref;
    sub->f8=(C_001ADFD0_Virt *)ref;
    ref->f4=this;
    entry=sub->f4;
    entry->fC &= 0xfe;
    entry->f10=sub->f8;
    f38 = (C_001AE3E0_Vec4 *)func_001E8A44(f24 << 4);
    f3C = (C_001AE3E0_Vec4 *)func_001E8A44(f24 << 4);
    f64 = func_001E8AA5(0x400);
    if (D_002EFDB8 == 0 || D_002EFDB8->cam == 0) f34 = 0;
    return this;
}

