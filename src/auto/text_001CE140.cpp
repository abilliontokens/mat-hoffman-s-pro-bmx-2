/* 11 functions from 0x001CE140 to 0x001CF110, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"
#include <string.h>
#include <xmmintrin.h>

extern int D_0028EF54;
extern float D_00275544;
extern float D_002755E4;

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
extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *cs);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void *cs);
extern "C" void (__stdcall *_imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlLeaveCriticalSection)(void *cs);
int __stdcall func_00220A12(int h, int a, int b, int c);

struct Voice {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v20(int a);
    virtual void v24(int a); virtual void v0A(); virtual void v0B();
    virtual void v0C(); virtual void v0D(); virtual void v0E(); virtual void v0F();
    virtual void v10(); virtual void v11();
    virtual void v48(int a);
    char pad04[4];
    char path[0x104];
    unsigned int f10c;
    unsigned int f110;
    char pad114[4];
    unsigned int f118;
    float f11c;
    int f120;
    char pad124[0x18];
    int f13c;
    int f140;
    int f144;
    char pad148[8];
    void *f150;
    int f154;
    char f158[0x14];
    short f16c;
    char pad16e[2];
    unsigned int f170;
    unsigned int f174;
    unsigned short f178;
    unsigned short f17a;
    char pad17c[4];
    unsigned int f180;
    unsigned int f184[3];
    unsigned int f190;
    char pad194[8];
    unsigned int f19c;
    int f1a0;
    char pad1a4[8];
    int f1ac;
    char pad1b0[0x58];
    unsigned char flags;
    int func_001CE140(int arg);
    int func_001CE4C0();
    int func_001CE770(int buf);
    int func_001CCAC0(int buf, int handle, int zero, unsigned int size);
    int func_001CCC50(int *out, int a, unsigned int b, int c, int d,
                      short e, int f, int g, int h, unsigned int i);
};

struct S_Loader_001CE770 {
    int func_0013C9F0(char *name, char *mode);
    int func_0013C8A0(int handle, void *dst, int size, int count);
    void func_0013C110(int handle);
};
extern S_Loader_001CE770 *D_002BEAAC;
extern char D_00275FB4;

extern char D_0028F0A8[];
extern char D_002843B0[];
int __stdcall func_001DD8C5(int h, int idx, void *a, void *b, unsigned short *name, int len);
int func_001EA410(unsigned short *s);
int func_001DDE51(char *dst, const char *fmt, ...);
void *func_001E8AA5(int size);
int func_001ADCC0(char *dst, int size, const char *fmt, ...);

void *func_001E8A44(int size);
void *func_001E83E8(void *p, int size);
int __stdcall func_001DD816(void *p);
int __stdcall func_001DD7F7(int h, void *p);
void __stdcall func_001DE66C(int h);
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
    void Add(int value) {
        if(count >= cap) {
            int n=count+grow;
            if(n<=cap) return;
            int *p=(int *)func_001E8A44(n*4);
            if(!p) return;
            memcpy(p,data,cap*4);
            int *old=data;
            data=p;
            func_001E891B(old);
            cap=n;
        }
        data[count]=value;
        ++count;
    }
};

struct TrackSet {
    TrackRec *recs;
    int count;
    int handle;
    IntList ids;
    unsigned char f1c : 1;
    unsigned char unused1c : 7;
    char pad1d[3];
    char name[32];
    unsigned char flags;
    char pad41[3];
};

struct TrackDB {
    char pad0[0x34];
    TrackSet *sets;
    char pad38[0x18];
    IntList ids;
    char pad60[0x48];
    int count;
    void func_001CE9F0(int idx, int set);
    int func_001CEB70();
    void func_001CD260();
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

int Voice::func_001CE140(int arg)
{
    RtlEnterCriticalSection(D_002F08EC->f138->Lock());
    if (!(flags & 8)) {
        if (flags & 4) {
            if (!D_002F08EC->f138->l38.func_001CDED0((int)this)) {
                RtlLeaveCriticalSection(D_002F08EC->f138->Lock());
                return 0;
            }
            flags = (flags & 0xef) | 0x20;
            RtlLeaveCriticalSection(D_002F08EC->f138->Lock());
            return 1;
        }
        RtlLeaveCriticalSection(D_002F08EC->f138->Lock());
        return 0;
    }
    RtlLeaveCriticalSection(D_002F08EC->f138->Lock());
    if (f13c) {
        v20(f1a0);
        v24(f1ac);
        if (f154) {
            flags = (flags & 0xef) | 0x20;
            return 1;
        }
        int mode;
        if (flags & 1) {
            if (arg & 1)
                mode = 3;
            else
                mode = 1;
        } else {
            if (arg & 1)
                mode = 2;
            else
                mode = 0;
        }
        if (func_00220A12(f13c, 0, 0, mode))
            return 0;
        flags &= 0xef;
        f120 = 0;
        return 1;
    }
    RtlEnterCriticalSection(D_002F08EC->f138->Lock());
    if (f140) {
        v48(0);
        RtlLeaveCriticalSection(D_002F08EC->f138->Lock());
        v20(f1a0);
        f120 = 0;
        return 1;
    }
    RtlLeaveCriticalSection(D_002F08EC->f138->Lock());
    return 1;
}

int Voice::func_001CE4C0()
{
    void (__stdcall *enter)(void *) = _imp__RtlEnterCriticalSection;
    enter((void *)D_002F08EC->f138->Lock());
    if (!(flags & 8)) {
        if (flags & 4) {
            if (!D_002F08EC->f138->l38.func_001CDED0((int)this)) {
                _imp__RtlLeaveCriticalSection((void *)D_002F08EC->f138->Lock());
                return 0;
            }
            flags = (flags & 0xef) | 0x20;
            _imp__RtlLeaveCriticalSection((void *)D_002F08EC->f138->Lock());
            return 1;
        }
        _imp__RtlLeaveCriticalSection((void *)D_002F08EC->f138->Lock());
        return 0;
    }
    void (__stdcall *leave)(void *) = _imp__RtlLeaveCriticalSection;
    leave((void *)D_002F08EC->f138->Lock());
    if (f13c) {
        if (f154) {
            flags = (flags & 0xef) | 0x20;
            return 1;
        }
        int r;
        if (flags & 1)
            r = func_00220A12(f13c, 0, 0, 1);
        else
            r = func_00220A12(f13c, 0, 0, 0);
        if (r) {
            return 0;
        }
        flags &= 0xef;
        f120 = 0;
        return 1;
    }
    enter((void *)D_002F08EC->f138->Lock());
    if (f140) {
        v48(0);
        leave((void *)D_002F08EC->f138->Lock());
        v20(f1a0);
        f120 = 0;
        return 1;
    }
    leave((void *)D_002F08EC->f138->Lock());
    return 1;
}

int XboxSound::func_001CE660(float dt)
{
    XboxSound * volatile self = this;
    int x;
    int * volatile p;
    float t;
    float r;

    if (f154 != 0) {
        func_001CCA10();
    }
    if (self->v07() != 0) {
        self->f120 += dt;
    }
    if (self->f12c > D_00275544) {
        self->f130 += dt;
        _mm_store_ss(&r, _mm_min_ss(_mm_set_ss(self->f130), _mm_set_ss(self->f12c)));
        t = r * self->f134;
        p = &x;
        *p = _mm_cvttss_si32(_mm_set_ss(t));
        self->v09(self->f128 + x);
        if (self->f130 >= self->f12c) {
            self->f12c = 0;
            self->f130 = self->f12c;
        }
    }
    return 1;
}

int Voice::func_001CE770(int buf)
{
    int handle = -1;

    if (f144 == 0) {
        handle = D_002BEAAC->func_0013C9F0(path, &D_00275FB4);
        if (handle == -1) {
            return 0;
        }
        int r = D_002BEAAC->func_0013C8A0(handle, f158, 0x2c, 1);
        if (r != 1) {
            D_002BEAAC->func_0013C110(handle);
            return 0;
        }
        if (f16c == 0x69) {
            if (D_002BEAAC->func_0013C8A0(handle, f184, 0x10, 1) != 1) {
                D_002BEAAC->func_0013C110(handle);
                return 0;
            }
        }
    }
    if (f16c == 0x69) {
        f118 = f190;
    } else {
        f118 = f180;
    }
    f11c = (float)f118 / (float)f174;
    if ((f10c & 0x100) && f150) {
        f19c = f170;
        f1a0 = f170;
        if (func_001CCAC0(buf, handle, 0, f118)) {
            if (handle != -1) {
                D_002BEAAC->func_0013C110(handle);
            }
            return 1;
        }
    } else {
        if (func_001CCC50(&f13c, 0, f170, f17a, f178, f16c, (flags >> 1) & 1,
                          (f10c & 8) == 8, 1, f110)) {
            buf = f13c;
            if (func_001CCAC0(buf, handle, 0, f118)) {
                if (handle != -1) {
                    D_002BEAAC->func_0013C110(handle);
                }
                return 1;
            }
        }
    }
    if (handle != -1) {
        D_002BEAAC->func_0013C110(handle);
    }
    return 0;
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

void TrackDB::func_001CE9F0(volatile int idx, volatile int set)
{
    TrackDB *volatile self = this;
    int len;
    int n;
    char name[0x20];
    char wname[0x40];
    sets[set].recs[idx].f0 = 0;
    TrackSet *current = &self->sets[set];
    int index = idx;
    char *f10 = current->recs[index].f10;
    func_001DD8C5(current->handle, index, f10, &len, (unsigned short *)wname, 0x20);
    len = func_001EA410((unsigned short *)wname);
    n = AsmMinI(len, 0x20);
    for (int i = 1; i < n * 2; i += 2) {
        if (wname[i]) {
            wname[i - 1] = 1;
            wname[i] = 0;
        }
    }
    func_001DDE51(name, D_0028F0A8, wname);
    self->sets[set].recs[idx].name = (char *)func_001E8AA5(strlen(name) + 3);
    func_001ADCC0(self->sets[set].recs[idx].name, 0x20, D_002843B0, name);
    IntList *l = &self->sets[set].ids;
    if (l->count < l->cap || l->func_0015ACA0(l->count + l->grow)) {
        l->data[l->count] = idx;
        l->count++;
    }
}

int TrackDB::func_001CEB70()
{
    int capacity = count;
    struct { int handle; unsigned int count; int unk; unsigned short name[32]; } info;
    int h = func_001DD816(&info);
    if (h != -1) {
        do {
            if (count + 1 > capacity) {
                TrackSet *p = (TrackSet *)func_001E83E8(sets, capacity * (sizeof(TrackSet) * 2));
                if (!p) {
                    func_001CD260();
                    func_001DE66C(h);
                    return 0x8007000e;
                }
                int bytes = capacity * sizeof(TrackSet);
                memset((char *)p + bytes, 0, bytes);
                sets = p;
                capacity *= 2;
            }
            if (info.count > 0) {
                sets[count].flags &= ~1;
                sets[count].handle = info.handle;
                sets[count].count = info.count;
                int len = func_001EA410(info.name);
                int n = AsmMinI(len, 32);
                char *name = (char *)info.name;
                for (int i = 1; i < n * 2; i += 2) {
                    if (name[i]) { name[i-1] = 1; name[i] = 0; }
                }
                func_001DDE51(sets[count].name, D_0028F0A8, info.name);
                sets[count].recs = (TrackRec *)func_001E8AA5(sets[count].count * 24);
                IntList *list = &sets[count].ids;
                list->data = (int *)func_001E8A44(4);
                list->grow = 16;
                list->cap = 1;
                *(unsigned char *)(list + 1) |= 1;
                int j = 0;
                if (sets[count].count > 0) do {
                    func_001CE9F0(j, count);
                    ++j;
                } while (j < sets[count].count);
                ids.Add(count);
                ++count;
            }
        } while (func_001DD7F7(h, &info));
        func_001DE66C(h);
    }
    sets = (TrackSet *)func_001E83E8(sets, count * sizeof(TrackSet));
    return 0;
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

