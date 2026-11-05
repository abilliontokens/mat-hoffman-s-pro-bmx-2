/* 11 functions from 0x001CE140 to 0x001CF110, found by Ghidra. */
#include "common.h"
#include <string.h>

extern int D_0028EF54;

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
    int growBy;
    int capacity;
    void func_001CDED0(int id);
    void Clear()
    {
        memset(data, 0, count * sizeof(int));
        count = 0;
    }
};

struct Music {
    void func_0001C9B0();
};

struct XboxMusic : Music {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual void vf05(); virtual void vf06(); virtual void vf07();
    virtual void vf08(); virtual void vf09(); virtual void vf0A(); virtual void vf0B();
    virtual void vf0C(); virtual void vf0D(); virtual void vf0E(); virtual void vf0F();
    virtual void vf10(); virtual void vf11(); virtual void vf12(); virtual void vf13();
    virtual void vf14(); virtual void vf15(); virtual void vf16(); virtual void vf17();
    virtual void vf18(); virtual void vf19(); virtual void vf1A(); virtual void vf1B();
    virtual void vf1C(); virtual void vf1D(); virtual void vf1E();
    virtual void vf1F(int id, int arg);
    virtual void vf20();
    virtual void vf21(int arg);
    virtual void vf22(); virtual void vf23(); virtual void vf24(); virtual void vf25();
    virtual void vf26(int arg);
    virtual void vf27(); virtual void vf28();
    virtual int vf29(int id);
    char pad04[0x20];
    int f24;
    int f28;
    char pad2c[0xc];
    int state;
    SoundList list3c;
    char pad4c[8];
    void *f54;
    char pad58[0xc];
    SoundList list64;
    char pad74[0x30];
    int f_a4;
    int f_a8;
    char padac[0xc];
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
    void func_001CE920();
    void func_001CEF50();
    int func_001CEFD0(int id);
};
