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

