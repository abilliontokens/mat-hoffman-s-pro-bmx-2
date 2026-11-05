/* 11 functions from 0x001CE140 to 0x001CF110, found by Ghidra. */
#include "common.h"
#include <string.h>
#include <xmmintrin.h>

extern int D_0028EF54;
extern float D_00275544;

void func_001E891B(void *p);
int __stdcall func_001DDC28(int a);
int __stdcall func_001DDDD6(int a, int b);
int __stdcall func_001DD13C(int a);
extern "C" void __stdcall D_00220AE0(void *obj, int arg);

struct SoundIface {
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
};

struct SoundList {
    int count;
    int *data;
    char pad8[0xc];
    int count2;
    int *data2;
    char pad1c[0xc];
    int func_001CDED0(int id);
    void func_001CBCF0(int id);
    void Clear()
    {
        memset(data, 0, count * sizeof(int));
        count = 0;
    }
    int Item(int i)
    {
        if (count2 > 0 && data2 != 0 && i < count2) {
            return data2[i];
        }
        return 0;
    }
};

struct XboxMusic {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual void vf05(); virtual void vf06(); virtual void vf07();
    virtual void vf08(); virtual void vf09(); virtual void vf0A(); virtual void vf0B();
    virtual void vf0C(); virtual void vf0D(); virtual void vf0E(); virtual void vf0F();
    virtual void vf10(); virtual void vf11(); virtual void vf12(); virtual void vf13();
    virtual void vf14(); virtual void vf15(); virtual void vf16(); virtual void vf17();
    virtual void vf18(); virtual void vf19(); virtual void vf1A(); virtual void vf1B();
    virtual void vf1C(); virtual void vf1D(); virtual int vf1E(int id, int arg);
    virtual void vf1F(int id, int arg);
    virtual void vf20();
    virtual void vf21(int arg);
    virtual void vf22(); virtual void vf23(); virtual void vf24(); virtual void vf25();
    virtual int vf26(int arg);
    virtual void vf27(); virtual void vf28();
    virtual int vf29(int id);
    char pad04[0x20];
    int f24;
    int f28;
    char pad2c[0xc];
    int state;
    SoundList list3c;
    SoundList list64;
    char pad8c[0x14];
    int fa0;
    int f_a4;
    int f_a8;
    int f_ac;
    char padb0[8];
    SoundIface *fb8;
    SoundIface *fbc;
    char padc0[0xc];
    int fcc;
    char padd0[0xd4];
    int f1a4;
    int f1a8;
    void func_001CB650(int arg);
    void func_001CD260();
    int func_001CD450(int a, int b);
    int func_001CEE50(int a, int b);
    void func_001CE920();
    void func_001CEF50();
    int func_001CEFD0(int id);
    int func_001CF040(int arg);
    void func_0001C9B0();
};

int func_00011260(int lo, int hi);

struct LockOwner {
    char pad0[0x38];
    SoundList l38;
    void *Lock() { return (char *)this + 0x50; }
};
struct Globals138 {
    char pad[0x138];
    LockOwner *f138;
};
extern Globals138 *D_002F08EC;
int __stdcall func_00220A12(int h, int a, int b, int c);

struct Voice {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1A(); virtual void v1B();
    virtual void v1C(); virtual void v1D(); virtual void v1E(); virtual void v1F();
    virtual void v20(int a);
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v2A(); virtual void v2B(); virtual void v2C();
    virtual void v2D(); virtual void v2E(); virtual void v2F(); virtual void v30();
    virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
    virtual void v39(); virtual void v3A(); virtual void v3B(); virtual void v3C();
    virtual void v3D(); virtual void v3E(); virtual void v3F(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(int a);
    char pad04[0x11c];
    int f120;
    char pad124[0x18];
    int f13c;
    int f140;
    char pad144[0x10];
    int f154;
    char pad158[0x48];
    int f1a0;
    char pad1a4[0x64];
    unsigned char flags;
    int func_001CE4C0();
};

extern char D_0028F0A8[];
extern char D_002843B0[];
int __stdcall func_001DD8C5(int h, int idx, void *a, void *b, unsigned short *name, int len);
int func_001EA410(unsigned short *s);
int func_001DDE51(char *dst, const char *fmt, ...);
void *func_001E8AA5(int size);
int func_001ADCC0(char *dst, int size, const char *fmt, ...);

template <class T> inline const T &Min(const T &a, const T &b)
{
    return b < a ? b : a;
}

struct TrackRec {
    int f0;
    char *name;
    char pad8[8];
    char f10[8];
};

struct IntList {
    int count;
    int *data;
    int grow;
    int cap;
    int func_0015ACA0(int n);
};

struct TrackSet {
    TrackRec *recs;
    char pad4[4];
    int handle;
    IntList ids;
    char pad1c[0x28];
};

struct TrackDB {
    char pad0[0x34];
    TrackSet *sets;
    void func_001CE9F0(int idx, int set);
};

static __forceinline float min_ss_001CE660(float a, float b)
{
    float r;
    _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&b), _mm_load_ss(&a)));
    return r;
}

struct XboxSound {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06();
    virtual int v07();
    virtual void v08();
    virtual void v09(int pos);
    char pad04[0x11c];
    float f120;
    char pad124[4];
    int f128;
    float f12c;
    float f130;
    float f134;
    char pad138[0x1c];
    int f154;
    int func_001CCA10();
    int func_001CE660(float dt);
};

int XboxSound::func_001CE660(float dt)
{
    XboxSound * volatile self = this;
    int x;
    int * volatile p;
    float t;

    if (f154 != 0) {
        func_001CCA10();
    }
    if (self->v07() != 0) {
        self->f120 += dt;
    }
    if (self->f12c > D_00275544) {
        self->f130 += dt;
        t = min_ss_001CE660(self->f12c, self->f130) * self->f134;
        p = &x;
        *p = _mm_cvttss_si32(*(__m128 *)&t);
        self->v09(self->f128 + x);
        if (self->f130 >= self->f12c) {
            self->f12c = 0;
            self->f130 = self->f12c;
        }
    }
    return 1;
}

void XboxMusic::func_001CE920()
{
    *(int *)this = (int)&D_0028EF54;
    if (fcc == 2) {
        func_001CB650(0);
    }
    if (f1a8 != -1) {
        func_001DDC28(f1a8);
    }
    if (f1a4 != -1) {
        func_001DDDD6(f1a4, -1);
        func_001DD13C(f1a4);
    }
    if (f1a8 != -1) {
        func_001DD13C(f1a8);
    }
    if (fb8 != 0) {
        D_00220AE0(fb8, 0);
        fb8->Release();
    }
    if (fbc != 0) {
        D_00220AE0(fbc, 0);
        fbc->Release();
    }
    func_001CD260();
    func_001E891B(list64.data);
    func_001E891B(list3c.data2);
    func_001E891B(list3c.data);
    func_0001C9B0();
}

int XboxMusic::func_001CEE50(int a, int b)
{
    if (!(fa0 & 1)) {
        return 0;
    }
    if (list3c.count > 0) {
        list3c.Clear();
    }
    int id = a;
    if (id < 0) {
        id = vf29(f_a4);
    } else if (id > vf29(f_a4)) {
        id = 0;
    }
    list3c.func_001CDED0(id);
    if (b) {
        if (!vf1E(id, 1)) {
            state = 6;
            list3c.func_001CBCF0(id);
            return 1;
        }
        *(unsigned char *)&fa0 |= 2;
        f_ac = id;
        state = 2;
        return 1;
    }
    *(unsigned char *)&fa0 |= 2;
    f_ac = id;
    state = 6;
    return 1;
}

void XboxMusic::func_001CEF50()
{
    switch (state) {
    case 2:
        vf26(1);
        break;
    case 3:
        vf1F(f24, 1);
        break;
    case 1:
        state = 5;
        break;
    case 6:
        if (func_001CD450(f24, 1)) {
            list3c.func_001CDED0(f24);
            state = 2;
        }
        break;
    }
}

int XboxMusic::func_001CEFD0(int id)
{
    if (id < f_a8 && id >= 0) {
        list3c.Clear();
        f_a4 = id;
        f28 = vf29(id);
        list64.func_001CDED0(id);
        return 1;
    }
    return 0;
}

int XboxMusic::func_001CF040(int arg)
{
    int idx;
    int cur;

    if (!(fa0 & 1)) {
        return -1;
    }
    idx = func_00011260(0, list3c.count2 - 1);
    cur = list3c.Item(idx);
    if (list3c.count2 > 1) {
        if (list64.count == list3c.count2) {
            list64.Clear();
        }
        for (;;) {
            if (cur != f_a4) {
                if (list64.func_001CDED0(cur) != 0) {
                    break;
                }
            }
            idx = (idx + 1) % list3c.count2;
            cur = list3c.Item(idx);
        }
    }
    func_001CEFD0(cur);
    return vf26(arg);
}

