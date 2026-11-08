/* 16 functions from 0x001D0020 to 0x001D0FD0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct Vec_1D01 {
    int n; int *p; int step; int cap; unsigned char flags;
    int func_0015ACA0(int);
    void Add(int value)
    {
        if (n >= cap && !func_0015ACA0(n + step)) {
            return;
        }
        p[n] = value;
        n++;
    }
};
struct Name_1D01 { char *str; int f4; char pad8[0x10]; };
struct Ent_1D01 { Name_1D01 *names; int cnt; char pad[4]; Vec_1D01 v; char pad20[0x20]; unsigned char flags40; char pad41[3]; };
struct C_001D0020 { int func_001D0020(void); };
struct C_001D01A0 {
    char pad0[0x28]; int f28; char pad2c[8]; Ent_1D01 *f34; char pad38[0x18]; Vec_1D01 f50; char pad64[0x30]; int f94; char pad98[8]; unsigned char fA0; char padA1[3]; int fA4, fA8;
    C_001D01A0 *func_001D01A0(int n);
    int func_001CEB70(); void func_001CD260();
};
extern const char D_0028F0C0[], D_0028F0B0[];
extern "C" int func_001ADCC0(char *, int, const char *, ...);
extern "C" void *func_001EA1A1(int, int);
extern "C" void *func_001E8AA5(int);
extern "C" unsigned int strlen(const char *);
extern "C" char *strcpy(char *, const char *);
struct C_001D0DE0 {
    undefined4 func_001D0DE0(byte param_1);
};

#pragma pack(push, 1)
struct S_001D0020_Wfx {
    unsigned short wFormatTag;
    unsigned short nChannels;
    unsigned int nSamplesPerSec;
    unsigned int nAvgBytesPerSec;
    unsigned short nBlockAlign;
    unsigned short wBitsPerSample;
    unsigned short cbSize;
};
#pragma pack(pop)

struct S_001D0020_StreamDesc {
    unsigned int dwFlags;
    unsigned int dwMaxAttachedPackets;
    S_001D0020_Wfx *lpwfxFormat;
    void *lpfnCallback;
    void *lpvContext;
    void *lpMixBins;
};

struct S_001D0020_Env {
    unsigned int dwEnvelopeGenerator;
    unsigned int dwMode;
    unsigned int dwDelay;
    unsigned int dwAttack;
    unsigned int dwHold;
    unsigned int dwDecay;
    unsigned int dwRelease;
    unsigned int dwSustain;
    int lPitchScale;
    int lFilterCutOff;
};

extern "C" void *memset(void *dst, int c, unsigned int n);
#pragma intrinsic(memset)
extern const float D_0028F0AC;
int __stdcall func_002228F8(void *desc, void *outStream);
extern "C" void __stdcall D_00220ADB(void *stream, void *env);
int __stdcall func_001DDBC7(int a, int b, int c, int d);
int __stdcall func_001DE8C7(int unused, int threadHandle, void *ctx1, void *ctx2, unsigned flags, unsigned *threadId);
int __stdcall func_001CFDC0(void *ctx);
extern char D_0006A000[];
extern char D_0002B110[];

struct XboxSoundStreams_001D0020 {
    char pad0[0x84];
    float f84;
    char pad88[0xB8 - 0x88];
    void *fB8;
    void *fBC;
    void *fC0;
    char padC4[0x1A4 - 0xC4];
    int f1A4;
    int f1A8;
    int func_001D0020(void);
};

extern int D_0028F154;
extern int D_0028F004;
extern int D_0028F100;
extern int D_0026D94C;

void func_001E891B(void *p);
void *func_001E8A44(int size);
unsigned __stdcall func_0026EBC5(void *p);

struct C_00156FC0 {
    void func_00156FC0(void);
};

struct C_00157150 {
    void func_00157150(void);
};

struct XboxGame_001D0E60 {
    void *vtbl;
    char pad4[0x290];
    int f294;
    int f298;
    int f29C;
    int f2A0;
    XboxGame_001D0E60 *func_001D0E30(void);
    void func_001D0E60(void);
};

struct Obj_001D0EC0 {
    virtual void destroyObject(int flags);
    virtual void v1();
    char pad4[0x5C];
    int f60;
};

extern Obj_001D0EC0 *D_002EFDB8;
extern Obj_001D0EC0 *D_002F07B8;

struct C_00157030 {
    int func_00157030(void);
};

struct C_00156F30 {
    int func_00156F30(int a, int b);
};

int func_00135C70(int a, int b, int c, int d);

struct XboxGame_001D0EC0 {
    void *vtbl;
    char pad4[0x22C];
    u8 f230;
    char pad231[0x2A0 - 0x231];
    int f2A0;
    int func_001D0EC0(void);
    int func_001D0F70(int a0, int a1);
};

struct Obj_001D0F30 {
    char pad0[0x4c];
    void (__fastcall *f4c)(void *self);
};

struct S_001D0F30_Holder {
    Obj_001D0F30 *vtbl;
};

struct XboxGame_001D0F30 {
    char pad0[0x278];
    S_001D0F30_Holder *f278;
    int func_001D0F30(void);
};

struct C_00156840 {
    void func_00156840(void);
};

struct XboxGame_001D0E80 {
    void func_001D0E80(void);
};

extern int D_002ABA84;
void __stdcall func_0026EBC0(int count, void *types);
int __stdcall func_0026EBE7(void *type, unsigned *insertions, unsigned *removals);

struct C_00136370 {
    void func_00136370(void);
};

struct C_00135E50 {
    void func_00135E50(void);
};

struct C_001CF2A0 {
    void func_001CF2A0(void);
};

struct C_0001C920 {
    void func_0001C920(void);
};

struct XboxSoundGroup_001D0870 {
    void *vtbl;
    char pad4[0x30];
    void *f34;
    XboxSoundGroup_001D0870 *func_001D0870(unsigned int flags);
};

struct C_00135E00 {
    void func_00135E00(void);
};

struct SoundVoiceOwner_001D08B0 {
    char pad0[0x13C];
    int f13C;
};

struct SoundVoice_001D08B0 {
    char pad0[0x124];
    int f124;
    char pad128[0x13C - 0x128];
    int f13C;
    char pad140[8];
    SoundVoice_001D08B0 *f148;
    SoundVoice_001D08B0 *f14C;
    SoundVoiceOwner_001D08B0 *f150;
    char pad154[0x1B4 - 0x154];
    int f1B4;
    char pad1B8[0x1D8 - 0x1B8];
    int f1D8;
    char pad1DC[0x1E8 - 0x1DC];
    int f1E8;
    char pad1EC[0x1F8 - 0x1EC];
    int f1F8;
    int func_001CFEF0(void);
    int func_001CC4B0(int *a, int *b, int *c, int *d);
};

struct SoundEntry_001D08B0 {
    char pad0[4];
    SoundVoice_001D08B0 *voice;
    char pad8[4];
    int count;
};

struct SoundMixer_001D08B0 {
    char pad0[8];
    int count;
    char padC[8];
    SoundEntry_001D08B0 *entries;
};

struct XboxSoundInterface_001D08B0 {
    char pad0[0x13C];
    SoundMixer_001D08B0 *f13C;
    void func_001D08B0(void);
};

extern char D_0028F084[];
void func_001CBC10(int e, void *file, int line);
int __stdcall func_002209A2(int a, int b);

struct ControllerPort_001D14C0 {
    virtual void v0();
    virtual void v1(int flags);
    ControllerPort_001D14C0 *func_001D14C0(int port);
    int func_001D1550(int port);
    void func_001D15B0(void);
};

struct XboxControlInterface_001D0C30 {
    void *vtbl;
    int f4;
    char pad8[8];
    ControllerPort_001D14C0 *f10;
    ControllerPort_001D14C0 *f14[4];
    char pad24[0x14];
    int f38;
    char pad3C[0xD04 - 0x3C];
    int fD04;
    int fD08;
    int fD0C[4];
    XboxControlInterface_001D0C30 *func_001D0C30(void);
    int func_001D0C70(int unused);
    void func_001D0D30(void);
    void func_001D0D60(void);
    void func_001D0E00(void);
};


int XboxSoundStreams_001D0020::func_001D0020(void)
{
    S_001D0020_Wfx wfx = {0};
    int hr;

    wfx.wFormatTag = 1;
    wfx.nChannels = 2;
    wfx.nSamplesPerSec = 44100;
    wfx.wBitsPerSample = 16;
    wfx.nBlockAlign = 4;
    wfx.nAvgBytesPerSec = (unsigned int)D_0002B110;
    S_001D0020_StreamDesc desc = {0};
    desc.dwMaxAttachedPackets = 0x2b;
    desc.lpwfxFormat = &wfx;
    hr = func_002228F8(&desc, &fB8);
    if (hr < 0) {
        return hr;
    }
    hr = func_002228F8(&desc, &fBC);
    if (hr < 0) {
        return hr;
    }
    S_001D0020_Env env = {0};

    env.dwEnvelopeGenerator = 1;
    env.dwMode = 2;
    env.dwRelease = env.dwAttack = (int)(f84 * 93.75f);
    env.dwSustain = 0xff;
    D_00220ADB(fB8, &env);
    D_00220ADB(fBC, &env);
    fC0 = func_001E8A44((int)D_0006A000);
    if (fC0 == 0) {
        return 0x8007000e;
    }
    f1A8 = func_001DDBC7(0, 1, 0, 0);
    if (f1A8 == 0) {
        return 0x80004005;
    }
    f1A4 = func_001DE8C7(0, 0, (void *)&func_001CFDC0, this, 0, 0);
    return f1A4 != 0 ? 0 : 0x80004005;
}

C_001D01A0 *C_001D01A0::func_001D01A0(int n)
{
    char buf[0x104];
    int i;

    f28 = n;
    fA8 = 1;
    fA4 = 0;
    f34 = (Ent_1D01 *)func_001EA1A1(1, 0x44);
    f34[fA4].names = (Name_1D01 *)func_001E8AA5(f28 * 24);
    f34[fA4].cnt = f28;
    Vec_1D01 *v = &f34[fA4].v;
    v->p = (int *)func_001E8A44(4);
    v->step = 0x10;
    v->cap = 1;
    v->flags |= 1;
    for (i = 0; i < f28; i++) {
        if (f94 == 2) {
            func_001ADCC0(buf, 0x104, D_0028F0C0, i + 1);
        } else {
            func_001ADCC0(buf, 0x104, D_0028F0B0, i + 1);
        }
        f34[fA4].names[i].str = (char *)func_001E8AA5(strlen(buf) + 1);
        strcpy(f34[fA4].names[i].str, buf);
        f34[fA4].flags40 = f34[fA4].flags40 | 1;
        f34[fA4].names[i].f4 = 0;
        f34[fA4].v.Add(i);
    }
    f50.Add(fA4);
    if (func_001CEB70() != 0) {
        func_001CD260();
        return 0;
    }
    if (((C_001D0020 *)this)->func_001D0020() != 0) {
        func_001CD260();
        return 0;
    }
    fA0 |= 1;
    return this;
}

XboxSoundGroup_001D0870 *XboxSoundGroup_001D0870::func_001D0870(unsigned int flags)
{
    vtbl = (void *)&D_0028F004;
    ((C_001CF2A0 *)this)->func_001CF2A0();
    func_001E891B(f34);
    ((C_0001C920 *)this)->func_0001C920();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

void XboxSoundInterface_001D08B0::func_001D08B0(void)
{
    SoundVoice_001D08B0 *v;
    int i;
    int r;

    for (i = 0; i < f13C->count; i++) {
        if (f13C->entries[i].count > 0) {
            f13C->entries[i].voice->func_001CFEF0();
        }
    }
    for (i = 0; i < f13C->count; i++) {
        if (f13C->entries[i].count > 0) {
            v = f13C->entries[i].voice;
            if (v->f150 != 0) {
                r = v->f124;
                v->f13C = v->f150->f13C;
                r = func_002209A2(v->f13C, r);
                if (r < 0) {
                    func_001CBC10(r, D_0028F084, 0x196);
                }
                v->func_001CC4B0(&v->f1B4, &v->f1E8, &v->f1F8, &v->f1D8);
            }
            if (v->f148 == 0) {
                for (v = v->f14C; v != 0; v = v->f14C) {
                    if (v->f150 != 0) {
                        r = v->f124;
                        v->f13C = v->f150->f13C;
                        r = func_002209A2(v->f13C, r);
                        if (r < 0) {
                            func_001CBC10(r, D_0028F084, 0x196);
                        }
                        v->func_001CC4B0(&v->f1B4, &v->f1E8, &v->f1F8, &v->f1D8);
                    }
                }
            }
            f13C->entries[i].count = 0;
        }
    }
}

XboxControlInterface_001D0C30 *XboxControlInterface_001D0C30::func_001D0C30(void)
{
    ((C_00135E00 *)this)->func_00135E00();
    fD08 = 0;
    fD0C[3] = 0;
    fD0C[2] = 0;
    fD0C[1] = 0;
    fD0C[0] = 0;
    f38 = 0;
    vtbl = (void *)&D_0028F100;
    fD04 = 1;
    return this;
}

int XboxControlInterface_001D0C30::func_001D0C70(int unused)
{
    int i;
    int found = 0;
    unsigned mask;

    fD08 = 0;
    mask = func_0026EBC5((void *)&D_0026D94C);
    for (i = 0; i < 4; i++) {
        if (mask & (1 << i)) {
            f4++;
            if (!found) {
                fD08 = i;
            }
            found = 1;
            fD0C[i] = 1;
        } else {
            fD0C[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        ControllerPort_001D14C0 *p = (ControllerPort_001D14C0 *)func_001E8A44(0x72c);
        p = p != 0 ? p->func_001D14C0(i) : 0;
        f14[i] = p;
        if (p == 0 || p->func_001D1550(i) == 0) {
            if (f14[i] != 0) {
                f14[i]->v1(1);
            }
            f14[i] = 0;
        }
    }
    return 1;
}

void XboxControlInterface_001D0C30::func_001D0D30(void)
{
    int i;

    vtbl = (void *)&D_0028F100;
    for (i = 0; i < 4; i++) {
        if (f14[i] != 0) {
            f14[i]->v1(1);
        }
    }
    ((C_00135E50 *)this)->func_00135E50();
}

void XboxControlInterface_001D0C30::func_001D0D60(void)
{
    unsigned inserted;
    unsigned removed;
    unsigned bit;
    int i;

    if (func_0026EBE7((void *)&D_0026D94C, &inserted, &removed) != 0) {
        for (i = 0, bit = 1; i < 4; i++, bit <<= 1) {
            ControllerPort_001D14C0 *port = f14[i];

            if (removed & bit) {
                port->func_001D15B0();
                f4--;
            }
            if (inserted & bit) {
                port->func_001D1550(i);
                f4++;
            }
        }
    }
}

undefined4 C_001D0DE0::func_001D0DE0(byte param_1)
{
  int func_001D0D30(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001D0D30();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void XboxControlInterface_001D0C30::func_001D0E00(void)
{
    f4 = 0;
    func_0026EBC0(2, (void *)&D_002ABA84);
    func_001D0C70((int)&D_0026D94C);
    f10 = f14[0];
    ((C_00136370 *)this)->func_00136370();
}

XboxGame_001D0E60 *XboxGame_001D0E60::func_001D0E30(void)
{
    ((C_00157150 *)this)->func_00157150();
    f298 = 0;
    f29C = 0;
    f2A0 = 0;
    vtbl = (void *)&D_0028F154;
    return this;
}

void XboxGame_001D0E60::func_001D0E60(void)
{
    vtbl = (void *)&D_0028F154;
    if (f2A0 != 0) {
        f2A0 = 0;
    }
    ((C_00156FC0 *)this)->func_00156FC0();
}

void XboxGame_001D0E80::func_001D0E80(void)
{
    ((C_00156840 *)this)->func_00156840();
}

int XboxGame_001D0EC0::func_001D0EC0(void)
{
    int r = ((C_00157030 *)this)->func_00157030();

    if (D_002EFDB8 != 0) {
        D_002EFDB8->destroyObject(1);
        D_002EFDB8 = 0;
    }
    if (D_002F07B8 != 0) {
        D_002F07B8->v1();
        if (D_002F07B8 != 0) {
            D_002F07B8->destroyObject(1);
        }
        D_002F07B8 = 0;
    }
    if (f2A0 != 0) {
        f2A0 = 0;
    }
    return r;
}

int XboxGame_001D0F30::func_001D0F30(void)
{
    if (f278 != 0) {
        f278->vtbl->f4c(f278);
    }
    return 1;
}

int XboxGame_001D0EC0::func_001D0F70(int a0, int a1)
{
    if (((C_00156F30 *)this)->func_00156F30(a0, a1) != 0) {
        return 1;
    }
    if ((f230 & 4) != 0 && func_00135C70(0x41, 0, a0, 3) != 0) {
        D_002EFDB8->f60 = (D_002EFDB8->f60 != 0x1b02) + 0x1b01;
        return 1;
    }
    return 0;
}

