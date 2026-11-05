/* 17 functions from 0x001CF110 to 0x001D0020, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct S_001CF1B0_Packet {
    char *buffer;
    u32 size;
    u32 *completed;
    u32 rest[3];
};
struct C_001CF1B0 {
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33(int);
    char pad4[0x34];
    int state;
    char pad3c[0x74];
    int index;
    void *stream;
    void *handles[2];
    char *buffer;
    int func_001CF1B0(int block, S_001CF1B0_Packet *packet);
    void func_001CB7D0();
    void func_001CEF50();
    void func_001CB8A0();
};
int __stdcall func_00220AE5(void *, int, int, int);
struct C_001CFAE0 {
    undefined4 func_001CFAE0(byte param_1);
};

#include <string.h>

extern int D_0028EE8C;

void func_001E891B(void *p);
extern "C" int __stdcall func_0021FB68(void *handle);

void *func_001E8A44(int size);
int __stdcall func_001DDBC7(int a, int b, int c, int d);
int __stdcall func_001DDDD6(int a, int b);
int __stdcall func_001DD13C(int a);
int __stdcall func_001DE8C7(int unused, int threadHandle, void *ctx1, void *ctx2, u32 flags, u32 *threadId);
unsigned long __stdcall func_001CF590(void *ctx);

struct SoundIface_001CFDC0 {
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
};

struct SoundThread_001CFE20 {
    int f0;
    int f4;
    char pad8[0x44];
    int f4C;
    int func_001CFE20(void);
};

struct SoundThread_001CFDC0 {
    char pad0[0xB4];
    SoundIface_001CFDC0 *fB4;
    char padB8[0xC4 - 0xB8];
    int fC4;
    char padC8[0x1A8 - 0xC8];
    int f1A8;
    void func_001CFC00(void);
};

struct SoundObj_001CFE90 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4(int a, int b, int c, int d, int e);
    SoundObj_001CFE90 *func_001CF740(void *parent, int a, int b);
};

struct SoundFactory_001CFE90 {
    SoundObj_001CFE90 *func_001CFE90(int a1, int a2, int a3, int a4, int a5, int a6);
};

struct IntArray {
    int count;
    int *data;
    int growBy;
    int capacity;
    int func_0015ACA0(int newCapacity);
    int func_001CDED0(int id);
    void func_001CBCF0(int id);
    void Clear()
    {
        memset(data, 0, count * sizeof(int));
        count = 0;
    }
    int Get(int i)
    {
        if (count > 0 && data != 0 && i < count) {
            return data[i];
        }
        return 0;
    }
    void Add(int value)
    {
        if (count >= capacity && !func_0015ACA0(count + growBy)) {
            return;
        }
        data[count] = value;
        count++;
    }
};

struct MusicTrack {
    char pad0[0xc];
    IntArray list;
    char pad1c[0x28];
};

struct XboxMusic {
    char pad0[0x24];
    int current;
    char pad28[0xc];
    MusicTrack *tracks;
    int state;
    IntArray history;
    char pad4c[0x54];
    int flags;
    int currentTrack;
    void func_001CF110(IntArray *list);
    int func_001CFB00(int arg);
    int func_001CF040(int arg);
    int func_001CD450(int id, int arg);
};

struct SoundVoice {
    char pad0[0x20];
    unsigned char flags;
    char pad21[0xeb];
    unsigned char f10c;
    int func_001CD940(SoundVoice *other);
};

struct SoundVoiceList {
    int func_001CDE90(SoundVoice *voice);
};

struct C_001CF3C0 {
    char pad0[8];
    int f8;
    int fc;
    char f10[0x14];
    char f24[0x14];
    int func_001CDD50(SoundVoiceList *list, int x, SoundVoice **out, int *outIndex, SoundVoice **out2);
    void func_001CDE40(SoundVoiceList *list, SoundVoice *voice);
    int func_001CF3C0(SoundVoice *voice);
};

struct C_SoundRelease {
    virtual void vv0();
    virtual void vv1();
    virtual void release();
};

struct C_001CDCF0 {
    void func_001CDCF0();
};

struct XboxSoundInterface {
    void *vtbl;
    char pad4[0x28];
    unsigned char f2c;
    char pad2d[3];
    void *f30;
    char pad34[0x104];
    C_001CDCF0 *f138;
    C_SoundRelease *f13c;
    void func_0001CA30();
    void func_001CF6E0();
    void *func_001CFE70(int flags);
};

extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *cs);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void *cs);

struct SoundThreadEx_001CFEF0 : SoundThread_001CFE20 {
    char cs[0x1c];
};

struct SoundGlobal_001CFEF0 {
    char pad0[0x138];
    SoundThreadEx_001CFEF0 *f138;
};
extern SoundGlobal_001CFEF0 *D_002F08EC;

struct SoundStream_001CFEF0 {
    char pad0[8];
    char f8;
    char pad9[0x13c - 9];
    int f13c;
    int f140;
    int f144;
    SoundStream_001CFEF0 *f148;
    SoundStream_001CFEF0 *f14c;
    char pad150[8];
    int f158[15];
    char pad194[0x208 - 0x194];
    unsigned char f208;
    int func_001CE770(int a);
    int func_001CFEF0(void);
};

void XboxMusic::func_001CF110(IntArray *list)
{
    int i;
    tracks[currentTrack].list.Clear();
    for (i = 0; i < list->count; i++) {
        tracks[currentTrack].list.Add(list->Get(i));
    }
}

int C_001CF3C0::func_001CF3C0(SoundVoice *voice)
{
    int index;
    SoundVoice *found;
    SoundVoiceList *list;
    int x;
    if (voice->f10c & 8) {
        x = f8;
        list = (SoundVoiceList *)f10;
    } else {
        x = fc;
        list = (SoundVoiceList *)f24;
    }
    if (func_001CDD50(list, x, &found, &index, &found)) {
        SoundVoice *prev;
        prev = voice;
        voice = found;
        if (voice->func_001CD940(prev) == 0 && (index >= 0 || list->func_001CDE90(voice) != 0)) {
            return 1;
        }
        voice->flags &= ~8;
        func_001CDE40(list, voice);
    }
    return 0;
}

void XboxSoundInterface::func_001CF6E0()
{
    vtbl = (void *)&D_0028EE8C;
    f2c &= ~1;
    if (f138 != 0) {
        C_001CDCF0 *obj = f138;
        obj->func_001CDCF0();
        func_001E891B(obj);
    }
    if (f30 != 0 && func_0021FB68(f30) == 0) {
        f30 = 0;
    }
    f13c->release();
    func_0001CA30();
}

undefined4 C_001CFAE0::func_001CFAE0(byte param_1)
{
  int func_001CE920(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001CE920();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

int func_00011260(int lo, int hi);
int XboxMusic::func_001CFB00(int arg)
{
    int idx;
    int cur;
    state = 2;
    if (!(flags & 1)) return -1;
    idx = func_00011260(0, tracks[currentTrack].list.count - 1);
    cur = tracks[currentTrack].list.Get(idx);
    if (tracks[currentTrack].list.count > 1) {
        if (history.count == tracks[currentTrack].list.count) return func_001CF040(arg);
        for (;;) {
            if (cur != current) {
                if (history.func_001CDED0(cur) != 0) break;
            }
            idx = (idx + 1) % tracks[currentTrack].list.count;
            cur = tracks[currentTrack].list.Get(idx);
        }
    }
    if (arg && !func_001CD450(cur, 1)) history.func_001CBCF0(cur);
    return cur;
}

int __stdcall func_001CFDC0(SoundThread_001CFDC0 *p)
{
    int r;

    do {
        p->func_001CFC00();
        r = func_001DDDD6(p->f1A8, 0x10);
    } while (r == 0x102);
    if (p->fC4 != -1) {
        func_001DD13C(p->fC4);
        p->fC4 = -1;
    }
    if (p->fB4 != 0) {
        p->fB4->Release();
        p->fB4 = 0;
    }
    return 0;
}

int SoundThread_001CFE20::func_001CFE20(void)
{
    if (f4C != 0) {
        return 0x80004005;
    }
    f4 = func_001DDBC7(0, 1, 0, 0);
    if (f4 == 0) {
        return 0x80004005;
    }
    f0 = func_001DE8C7(0, 0, (void *)&func_001CF590, this, 0, 0);
    if (f0 == 0) {
        return 0x80004005;
    }
    f4C = 1;
    return 0;
}

void *XboxSoundInterface::func_001CFE70(int flags)
{
    func_001CF6E0();
    if (flags & 1) {
        func_001E891B(this);
    }
    return this;
}

SoundObj_001CFE90 *SoundFactory_001CFE90::func_001CFE90(int a0, int a1, int a2, int a3, int a4, int a5)
{
    SoundObj_001CFE90 *p = (SoundObj_001CFE90 *)func_001E8A44(0x20c);

    if (p == 0) {
        return 0;
    }
    p = p->func_001CF740(this, a0, 1);
    if (p == 0) {
        return 0;
    }
    return p->v4(a1, a2, a3, a4, a5) ? p : 0;
}

