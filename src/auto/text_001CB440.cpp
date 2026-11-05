/* 33 functions from 0x001CB440 to 0x001CC3C0, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_0028ED78;
extern float D_00276098;
extern float D_002755E0;

extern "C" void (__stdcall *__imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *__imp__RtlLeaveCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);

struct S_001CB440_Global {
    char pad0[0x138];
    int f138;
};

extern S_001CB440_Global *D_002F08EC;

void func_001E891B(void *p);

struct C_001CC110 {
    int unk0;
    void func_0001DFF0(void);
    void *func_001CC110(int flags);
};

struct C_001CB440 {
    char pad0[0x208];
    unsigned char f208;
    int func_001CB440(void);
};

struct C_001CB490 {
    char pad0[0x128];
    int f128;
    float f12c;
    float f130;
    float f134;
    char pad138[0x1a8 - 0x138];
    int f1a8;
    int func_001CB490(int param_1, int param_2, int param_3);
};

struct S_001CB510_Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct C_001CB510 {
    char pad0[0x13c];
    int f13c;
    char pad140[4];
    S_001CB510_Obj *f144;
    char pad148[8];
    int f150;
    void func_001CB510(void);
};

extern float D_00275544;
extern "C" void __stdcall D_00220AE0(void *obj, int arg);
char *func_001E8920(char *dst, const char *src, int n);

/* XboxSoundGroup: virtual slot 31 is called after the GameObject-style tree update */
struct C_001576C0 {
    void func_001576C0(void);
};

struct C_001CB940 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1A(); virtual void v1B();
    virtual void v1C(); virtual void v1D(); virtual void v1E();
    virtual void v1F(int a, int b);
    void func_001CB940(void);
    void func_001CB960(void);
    void func_00157680(void);
    void func_001CB980(void);
};

/* a sound object that can be handed focus by another one of the same kind */
struct C_001CB560 {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(int a);
    char pad4[0x108];
    unsigned int f10C;
    char pad110[0x2c];
    int f13c;
    char pad140[0x14];
    C_001CB560 *f154;
    char pad158[0xb0];
    unsigned char f208;
    int func_001CB560(C_001CB560 *other);
};

/* one resource of an entry: a file name and, for the ones already in memory,
   the object func_001DDAEE opens instead */
struct S_001CB810_Res {
    char *name;
    char pad4[0xc];
    void *f10;
    char pad14[4];
};

/* a COM-style object: the functions in its table take it as their first
   stack argument, so its methods are __stdcall */
struct S_001CB7D0_Com {
    virtual void __stdcall v0();
    virtual void __stdcall v1();
};

extern char D_0028ED6C[];
extern char D_002A48F8[];
extern int D_00010000;

int func_001ADCC0(char *buf, int size, const char *fmt, ...);
void __stdcall func_001DD13C(int handle);
int __stdcall func_001DCC3C(const char *name, unsigned int access, int share,
                            int sa, int disposition, int attributes, int templ);
int __stdcall func_001DDAEE(void *res, int flags);

struct S_001CB610_Entry {
    S_001CB810_Res *f0;
    char pad4[0x1c];
    char name[0x1f];
    char term;
    unsigned char f40;
    char pad41[3];
};
int __stdcall func_0023F469(int a0, int handle, int a2, int *a3, int a4, int a5,
                            int *desc, S_001CB7D0_Com **out);

struct C_001CB610 {
    char pad0[0x24];
    int f24;
    char pad28[0xc];
    S_001CB610_Entry *f34;
    char pad38[0x6c];
    int fa4;
    int fa8;
    int fac;
    char padb0[4];
    S_001CB7D0_Com *fb4;
    char padb8[0xc];
    int fc4;
    void func_001CB610(int idx, const char *name);
    int func_001CB7D0(void);
    int func_001CB810(int idx);
    unsigned int func_001CB8A0(void);
};

/* XboxMusic (see text_001CE140.cpp), the part func_001CB650 touches */
struct C_001CB650 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1A(); virtual void v1B();
    virtual void v1C(); virtual void v1D(); virtual void v1E(); virtual void v1F();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(int a, float b, int c);
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual int v29(int a);
    char pad4[0x20];
    int f24;
    char pad28[0x5c];
    int f84;
    float f88;
    int f8c;
    int f90;
    char pad94[4];
    int f98;
    char pad9c[4];
    unsigned char fa0;
    char pada1[3];
    int fa4;
    char pada8[4];
    int fac;
    char padb0[8];
    void *fb8;
    void *fbc;
    char padc0[8];
    int fc8;
    int fcc;
    unsigned int fd0[0x2b];
    int func_001CB650(float a);
    int func_001CB6D0(void);
    int func_001CB720(int a, int b, int c);
    int func_001CB780(unsigned int *out, unsigned int idx);
};

struct C_001576D0 {
    void func_001576D0(void);
};

void __stdcall func_002223E1(int a, int b, int c);
int __stdcall func_0021FB83(int a);

extern int D_0028EECC;
void func_001CBC10(int e, void *file, int line);
int __stdcall func_0022195C(int a);
int __stdcall func_0022095F(int a, void *b);
int __stdcall func_002222E5(int a, int b, int c);

struct S_001CBF20_Vec4 {
    int x;
    int y;
    int z;
    int w;
    void CopyFrom(S_001CBF20_Vec4 *src) {
        *this = *src;
    }
};

/* sound voice wrapper: flags at +0x2c, DirectSound buffer at +0x30 */
struct C_001CBF20 {
    char pad0[0x2c];
    unsigned char f2C;
    char pad2D[3];
    int f30;
    char pad34[0xa4];
    S_001CBF20_Vec4 fD8;
    int fE8;
    float fEC;
    int func_001CBF20(void);
    int func_001CBF60(void);
    int func_001CBF90(int v);
    int func_001CBF90(float v);
};

int __stdcall func_002222E5(int a, float b, int c);

/* swap-remove int array */
struct C_001CBCF0 {
    int count;
    int *items;
    int func_001CBCF0(int value);
};
void *func_001E8A44(int size);
void __stdcall func_00220AE5(void *stream, int a, int b, int c);

/* a 0x48-byte object created by func_001CB320 */
struct C_001CB320 {
    C_001CB320 *func_001CB320(void);
};

struct C_001CBEF0 {
    char pad0[0x2c];
    unsigned char f2C;
    C_001CB320 *func_001CBEF0(void);
};

/* XMEDIAPACKET */
struct S_001CBB50_Packet {
    char *buffer;
    unsigned int size;
    unsigned int *completed;
    unsigned int *status;
    void *context;
    void *timestamp;
};

/* COM-style interface: slots are __stdcall with an implicit this */
struct S_001CBB50_Stream {
    virtual unsigned long __stdcall v0();
    virtual unsigned long __stdcall v1();
    virtual int __stdcall v2();
    virtual int __stdcall v3();
    virtual int __stdcall v4(S_001CBB50_Packet *packet, void *out);
    virtual int __stdcall v5();
};

struct S_001CB9A0_Owner {
    char pad0[0x208];
    unsigned char f208;
};

/* a streaming sound with three queued packets */
struct C_001CB9A0 {
    int f0;
    S_001CB9A0_Owner *f4;
    int f8;
    S_001CBB50_Stream *fC;
    char *f10;
    unsigned int f14[3];
    unsigned char f20;
    void func_001CB9A0(void);
    int func_001CBB50(int idx);
    void func_001CBBC0(void);
};

extern char D_0002EDEF;
extern "C" int __stdcall D_00221B4C(void *stream, unsigned int value);
int __stdcall func_00222388(int handle, int value, int flag);
int __stdcall func_00221974(int handle, unsigned int value);

struct C_0013B210 {
    void func_0013B210(void *);
};
extern C_0013B210 *D_002BEAAC;
extern int D_0028EEEC;

/* XboxSound (run-time type information), base class Sound */
struct C_001CC0C0 {
    void *vtbl;
    char pad4[0x28];
    unsigned char f2C;
    char pad2D[3];
    int f30;
    char pad34[0xc0];
    int fF4;
    char padF8[0x14];
    unsigned int f10C;
    char pad110[0x2c];
    int f13C;
    C_001CB9A0 *f140;
    char pad144[0x58];
    unsigned int f19C;
    char pad1A0[0x68];
    unsigned char f208;
    int func_001CC0C0(int v);
    void func_001CC140(void);
    int func_001CC320(unsigned int v);
    void func_001CB510(void);
    void func_0001C970(void);
};

int C_001CB440::func_001CB440(void)
{
    int v;

    _imp__RtlEnterCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    v = (f208 >> 4) & 1;
    _imp__RtlLeaveCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    return v;
}

int C_001CB490::func_001CB490(int param_1, int param_2, int param_3)
{
    float f = (float)param_2 * D_00276098;
    f130 = 0;
    int n = f1a8;

    f128 = n;
    f12c = f;
    if (param_3 != 0) {
        f134 = (((float)param_1 * D_002755E0) * (float)n - (float)n) / f;
        return 1;
    }
    f134 = (float)(param_1 - n) / f;
    return 1;
}

void C_001CB510::func_001CB510(void)
{
    if (f13c != 0 && f150 == 0) {
        func_002223E1(f13c, 0, 0);
        if (f13c != 0) {
            if (func_0021FB83(f13c) == 0) {
                f13c = 0;
            }
        }
    }
    if (f144 != 0) {
        f144->v2();
    }
}

int C_001CB560::func_001CB560(C_001CB560 *other)
{
    if (f208 & 4) {
        return 1;
    }
    if (other != this) {
        if (other != 0) {
            if (((f10C & 0x100) || (other->f10C & 0x100)) && other->f13c != 0) {
                other->v6(0);
                if (!(f208 & 8)) {
                    return 0;
                }
                if (other->f13c != f13c) {
                    return 0;
                }
                f154 = other;
                return 1;
            }
        } else {
            if ((f10C & 0x100) && f13c != 0) {
                f154 = (C_001CB560 *)-1;
            }
        }
    }
    return 1;
}

void C_001CB610::func_001CB610(int idx, const char *name)
{
    if (idx <= fa8 && idx >= 0) {
        func_001E8920(f34[idx].name, name, 0x1f);
        f34[idx].term = 0;
    }
}

int C_001CB650::func_001CB650(float a)
{
    if (!(fa0 & 1)) {
        return 0;
    }
    if (fc8 != 0 && fcc != 0) {
        fcc = 0;
        if (a > D_00275544) {
            v24(0, a, 0);
        }
        D_00220AE0(fb8, 1);
        D_00220AE0(fbc, 1);
    }
    return 1;
}

int C_001CB650::func_001CB6D0(void)
{
    if ((fa0 & 1) != 0 && f24 != -1) {
        if (v29(fa4) > -1) {
            fac = f24;
            fcc = 2;
            return 1;
        }
    }
    return 0;
}

int C_001CB650::func_001CB720(int a, int b, int c)
{
    f84 = b;
    if (c == 0) {
        f8c = a;
    } else {
        f8c = (int)(f98 * ((float)a * D_002755E0));
    }
    f90 = f98;
    f88 = (float)f98;
    return 1;
}

int C_001CB650::func_001CB780(unsigned int *out, unsigned int idx)
{
    unsigned int i;

    for (i = idx; i < 0x2b; i += 2) {
        if (fd0[i] != 0x8000000a && (i > 0x14 || (i & 1) == idx)) {
            if (out != 0) {
                *out = i;
            }
            return 1;
        }
    }
    return 0;
}

int C_001CB610::func_001CB7D0(void)
{
    if (fc4 != -1) {
        func_001DD13C(fc4);
        fc4 = -1;
    }
    if (fb4 != 0) {
        fb4->v1();
        fb4 = 0;
    }
    return 0;
}

int C_001CB610::func_001CB810(int idx)
{
    char path[0x104];
    S_001CB610_Entry *e = f34 + fa4;

    if (e->f40 & 1) {
        func_001ADCC0(path, sizeof(path), D_0028ED6C, D_002A48F8, e->f0[idx].name);
        return func_001DCC3C(path, 0x80000000, 1, 0, 3, 0x80, 0);
    }
    return func_001DDAEE(e->f0[idx].f10, 0);
}

unsigned int C_001CB610::func_001CB8A0(void)
{
    int desc[5];
    int idx;

    if (fc4 != -1) {
        func_001DD13C(fc4);
        fc4 = -1;
    }
    if (fb4 != 0) {
        fb4->v1();
        fb4 = 0;
    }
    idx = fac;
    f24 = idx;
    fc4 = func_001CB810(idx);
    if (fc4 == -1) {
        return 0x80004005;
    }
    return func_0023F469(0, fc4, 0, &D_00010000, 0x2b, 3, desc, &fb4) >= 0 ? 0 : 0x80004005;
}

void C_001CB940::func_001CB940(void)
{
    ((C_001576C0 *)this)->func_001576C0();
    v1F(1, 0);
}

void C_001CB940::func_001CB960(void)
{
    ((C_001576D0 *)this)->func_001576D0();
    v1F(0, 0);
}

void C_001CB940::func_001CB980(void)
{
    func_00157680();
}

void C_001CB9A0::func_001CB9A0(void)
{
    int i;

    _imp__RtlEnterCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    f4 = 0;
    _imp__RtlLeaveCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    for (i = 0; i < 3; i++) {
        f14[i] = 0;
    }
    f0 = -1;
    f20 &= 0xf0;
}

int C_001CB9A0::func_001CBB50(int idx)
{
    S_001CBB50_Packet pkt;
    int r;

    memset(&pkt, 0, sizeof(pkt));
    pkt.buffer = f10 + idx * 0x4800;
    pkt.size = 0x4800;
    pkt.status = &f14[idx];
    r = fC->v4(&pkt, 0);
    if (r < 0) {
        return r;
    }
    if (f20 & 1) {
        fC->v5();
    }
    return 0;
}

void C_001CB9A0::func_001CBBC0(void)
{
    func_00220AE5(fC, 0, 0, 1);
    _imp__RtlEnterCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    f4->f208 |= 0x10;
    _imp__RtlLeaveCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    f20 |= 4;
}

int C_001CBCF0::func_001CBCF0(int value)
{
    int i;

    for (i = 0; i < count; i++) {
        if (items[i] == value) {
            items[i] = items[count - 1];
            count--;
            return 1;
        }
    }
    return 0;
}

int __stdcall func_001CBEE0(int a0, int a1, int a2, int a3, int a4) {
    return -2147467259;
}

C_001CB320 *C_001CBEF0::func_001CBEF0(void)
{
    if (f2C & 1) {
        C_001CB320 *p = (C_001CB320 *)func_001E8A44(0x48);
        if (p != 0) {
            p = p->func_001CB320();
            if (p != 0) {
                return p;
            }
        }
    }
    return 0;
}

int C_001CBF20::func_001CBF20(void)
{
    S_001CBF20_Vec4 *p = &fD8;

    if (func_0022095F(f30, p) == 0) {
        p->CopyFrom(p);
        return 1;
    }
    return 0;
}

int C_001CBF20::func_001CBF60(void)
{
    int e;
    int h;

    if (!(f2C & 1)) {
        return 0;
    }
    h = f30;
    e = func_0022195C(h);
    if (e < 0) {
        func_001CBC10(e, &D_0028EECC, 0x1f1);
        return 0;
    }
    return 1;
}

int C_001CBF20::func_001CBF90(float v)
{
    int e;
    int h;

    if (!(f2C & 1)) {
        return 0;
    }
    fEC = v;
    h = f30;
    e = func_002222E5(h, v, 1);
    if (e < 0) {
        func_001CBC10(e, &D_0028EECC, 0x205);
        return 0;
    }
    return 1;
}

int C_001CC0C0::func_001CC0C0(int v)
{
    int r;
    int h;
    int a;

    if (f2C & 1) {
        a = v;
        fF4 = a;
        h = f30;
        r = func_00222388(h, a, 1);
        if (r < 0) {
            func_001CBC10(r, &D_0028EECC, 0x284);
            return 0;
        }
        return 1;
    }
    return 0;
}

void *C_001CC110::func_001CC110(int flags) {
    unk0 = (int)&D_0028ED78;
    func_0001DFF0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void C_001CC0C0::func_001CC140(void)
{
    vtbl = (void *)&D_0028EEEC;
    if (f208 & 4) {
        __imp__RtlEnterCriticalSection((void *)(D_002F08EC->f138 + 0x50));
        if (f140 != 0) {
            f140->func_001CBBC0();
            if (f140->f4 != 0) {
                f140->f4 = 0;
            }
        }
        __imp__RtlLeaveCriticalSection((void *)(D_002F08EC->f138 + 0x50));
    } else if (!(f10C & 4)) {
        func_001CB510();
    }
    D_002BEAAC->func_0013B210(this);
    func_0001C970();
}

int C_001CC0C0::func_001CC320(unsigned int v)
{
    int r;

    if (f13C != 0) {
        if (f19C == v) {
            return 1;
        }
        if (v < 0xbc || v > (unsigned int)&D_0002EDEF) {
            return 0;
        }
        r = func_00221974(f13C, v);
        if (r < 0) {
            func_001CBC10(r, &D_0028EECC, 0x621);
            return 0;
        }
        f19C = v;
        return 1;
    }
    if (f140 == 0 || f19C == v) {
        return 1;
    }
    if (v < 0xbc || v > (unsigned int)&D_0002EDEF) {
        return 0;
    }
    r = D_00221B4C(f140->fC, v);
    if (r < 0) {
        func_001CBC10(r, &D_0028EECC, 0x630);
        return 0;
    }
    f19C = v;
    return 1;
}

