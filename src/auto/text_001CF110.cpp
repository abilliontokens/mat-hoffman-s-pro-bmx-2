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

/* stream object: slot 4 = Process(src, dst), slot 6 = Flush() */
struct StreamIface_001CFC00 {
    virtual long __stdcall s0();
    virtual long __stdcall s1();
    virtual long __stdcall s2();
    virtual long __stdcall s3();
    virtual long __stdcall Process(void *src, void *dst);
    virtual long __stdcall s5();
    virtual long __stdcall Flush();
};

static __forceinline long ProcessStream_001CFC00(StreamIface_001CFC00 *stream, S_001CF1B0_Packet *packet, void *dst)
{
    return stream->Process(packet, dst);
}

struct SoundThread_001CFDC0 {
    char pad0[0x24];
    int f24;
    char pad28[0xA0 - 0x28];
    unsigned char fA0;
    char padA1[0xAC - 0xA1];
    int fAC;
    int fB0;
    SoundIface_001CFDC0 *fB4;
    StreamIface_001CFC00 *fB8[2];
    char padC0[4];
    int fC4;
    int fC8;
    int fCC;
    int fD0[54];
    int f1A8;
    int func_001CFC00(void);
    int func_001CB780(unsigned int *out, unsigned int idx);
    int func_001CF1B0(int block, S_001CF1B0_Packet *packet);
    void func_001CB7D0();
    void func_001CB8A0();
};

struct C_0001C930 {
    void *func_0001C930(void);
};
extern int D_0028EEEC;
extern int D_002ABA44, D_002ABA48, D_002ABA4C, D_002ABA50;
extern int D_002ABA64, D_002ABA68, D_002ABA6C, D_002ABA70;
int func_001CB0A0(int x);

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
    int func_001CDB10(void);
};

struct SoundVoiceList {
    int func_001CDE90(SoundVoice *voice);
};

static inline int Voice_CheckOther(SoundVoice *&voice, SoundVoice *cur)
{
    SoundVoice *old = voice;
    voice = cur;
    return cur->func_001CD940(old);
}

extern "C" void __stdcall MmFreeContiguousMemory(void *p);

struct SoundObj_001CF590 {
    char pad0[8];
    SoundIface_001CFDC0 *f8;
    SoundIface_001CFDC0 *fC;
    void *f10;
};

struct C_001CF3C0 {
    char pad0[4];
    int f4;
    int f8;
    int fc;
    char f10[0x14];
    char f24[0x14];
    IntArray f38;
    char pad48[8];
    char cs[0x1c];
    int func_001CF450(void);
    int func_001CDD50(SoundVoiceList *list, int x, SoundVoice **out, int *outIndex, SoundVoice **out2);
    void func_001CDE40(SoundVoiceList *list, SoundVoice *voice);
    int func_001CF3C0(SoundVoice *voice);
};

struct SoundPending_001CF450 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(int a);
    char pad4[0x208 - 4];
    unsigned char f208;
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
extern "C" void __stdcall D_00220AE0(void *obj, int arg);

struct SoundElem_001CF970 {
    char pad0[0xc];
    void *fC;
};

struct XboxSound_001CF970 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6(int a);
    virtual int v7();
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
    char pad4[0x140 - 4];
    SoundElem_001CF970 *f140;
    char pad144[0x208 - 0x144];
    struct {
        unsigned char b0 : 1;
        unsigned char b1 : 1;
        unsigned char b2 : 1;
        unsigned char b3 : 1;
        unsigned char playing : 1;
        unsigned char b5 : 1;
        unsigned char b6 : 1;
        unsigned char b7 : 1;
    } f208;
    int func_001CF970(int on);
    void func_001CE4C0();
};

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
struct SoundElem_001CF2A0 {
    virtual void v0();
    virtual void v1();
    virtual void release();
};

struct SoundElemList_001CF2A0 {
    int count;
    SoundElem_001CF2A0 **items;
    int growBy;
    int capacity;
    int func_0015ACA0(int newCapacity);
    SoundElem_001CF2A0 *at(int i)
    {
        if (count > 0 && items && i < count) {
            return items[i];
        }
        return 0;
    }
    void add(SoundElem_001CF2A0 *elem)
    {
        if (count >= capacity && !func_0015ACA0(count + growBy)) {
            return;
        }
        items[count] = elem;
        count++;
    }
};

struct OwnedElemList_001CF2A0 {
    SoundElemList_001CF2A0 list;
    unsigned char flags;
    char pad[3];

    OwnedElemList_001CF2A0()
    {
        list.items = 0;
        list.count = 0;
        list.growBy = 0;
        list.capacity = 0;
        flags &= 0xfe;
    }

    void init(int n)
    {
        list.items = (SoundElem_001CF2A0 **)func_001E8A44(n * 4);
        list.growBy = 0x10;
        list.capacity = n;
        flags |= 1;
    }
};

struct FlatElemList_001CF2A0 : SoundElemList_001CF2A0 {
    unsigned char flags;
    char pad[3];

    FlatElemList_001CF2A0()
    {
        items = 0;
        count = 0;
        growBy = 0;
        capacity = 0;
        flags &= 0xfe;
    }

    void init(int n)
    {
        items = (SoundElem_001CF2A0 **)func_001E8A44(n * 4);
        growBy = 0x10;
        capacity = n;
        flags |= 1;
    }
};

struct PlainElemList_001CF2A0 : SoundElemList_001CF2A0 {
    unsigned char flags;
    char pad[3];
};

struct XboxSoundGroup {
    void *vtbl;
    char pad4[0x2c];
    SoundElemList_001CF2A0 list;
    void func_001CF2A0();
};

void XboxMusic::func_001CF110(IntArray *list)
{
    int i;
    tracks[currentTrack].list.Clear();
    for (i = 0; i < list->count; i++) {
        tracks[currentTrack].list.Add(list->Get(i));
    }
}

int C_001CF1B0::func_001CF1B0(int block, S_001CF1B0_Packet *packet)
{
    u32 *done = (u32 *)&block + 1;
    memset(packet, 0, sizeof(*packet));
    packet->buffer = buffer + (block << 13);
    packet->size = 0x2000;
    packet->completed = done;
    int result = ((int (__stdcall *)(void *, void *, S_001CF1B0_Packet *))(*(void ***)stream)[4])(stream, 0, packet);
    if (result >= 0) {
        if (*done < packet->size)
            memset(packet->buffer + *done, 0, packet->size - *done);
        if (!*done) {
            ((void (__stdcall *)(void *))(*(void ***)handles[index])[5])(handles[index]);
            func_00220AE5(handles[index], 0, 0, 3);
            func_001CB7D0();
            func_001CEF50();
            index = (index - 1) & 1;
            if (state != 5) {
                func_001CB8A0();
                return 0;
            }
            v33(0);
        }
        return 0;
    }
    return result;
}

void XboxSoundGroup::func_001CF2A0()
{
    int i;
    int count = 0;
    SoundElem_001CF2A0 **items = 0;
    PlainElemList_001CF2A0 copy;
    copy.count = 0;
    copy.growBy = 0;
    copy.capacity = 0;
    copy.flags &= 0xfe;
    if (list.count > 0) {
        int n = list.count;
        items = (SoundElem_001CF2A0 **)func_001E8A44(n * 4);
        copy.items = items;
        copy.growBy = 16;
        copy.capacity = n;
        copy.flags |= 1;
        for (i = 0; i < list.count; i++) {
            SoundElem_001CF2A0 *elem = list.at(i);
            int ok = 1;
            if (count >= copy.capacity) {
                ok = copy.func_0015ACA0(count + copy.growBy);
                items = copy.items;
                count = copy.count;
            }
            if (ok) {
                items[count++] = elem;
                copy.count = count;
            }
        }
        for (i = 0; i < count; i++) {
            (count > 0 && items && i < count ? items[i] : 0)->release();
        }
    }
    memset(list.items, 0, list.count * sizeof(int));
    list.count = 0;
    func_001E891B(items);
}

int C_001CF3C0::func_001CF3C0(SoundVoice *voice)
{
    SoundVoiceList *list;
    SoundVoice *v;
    int x;
    int index;
    SoundVoice *found;

    v = voice;
    if (v->f10c & 8) {
        x = f8;
        list = (SoundVoiceList *)f10;
    } else {
        x = fc;
        list = (SoundVoiceList *)f24;
    }
    if (func_001CDD50(list, x, &found, &index, &found)) {
        if (!(v = found)->func_001CD940(v)) {
            if (index >= 0 || list->func_001CDE90(v)) {
                return 1;
            }
        }
        v->flags &= ~8;
        func_001CDE40(list, v);
    }
    return 0;
}

int C_001CF3C0::func_001CF450(void)
{
    SoundPending_001CF450 *s;
    SoundVoice *v;
    int i;
    RtlEnterCriticalSection(cs);
    if (f38.count != 0 && (s = (SoundPending_001CF450 *)f38.Get(0)) != 0) {
        s->f208 |= 0x40;
        RtlLeaveCriticalSection(cs);
        if (func_001CF3C0((SoundVoice *)s) == 0) {
            RtlEnterCriticalSection(cs);
            s->f208 &= ~0x40;
            RtlLeaveCriticalSection(cs);
            return 0x80004005;
        }
        RtlEnterCriticalSection(cs);
        if (s->f208 & 0x20) {
            s->v5(0);
            s->f208 &= ~0x20;
        }
        f38.func_001CBCF0((int)s);
    }
    RtlLeaveCriticalSection(cs);
    for (i = 0; i < ((IntArray *)f10)->count; i++) {
        v = (SoundVoice *)((IntArray *)f10)->Get(i);
        if (v != 0 && (v->flags & 8) && v->func_001CDB10() != 0) {
            return 0x80004005;
        }
    }
    for (i = 0; i < ((IntArray *)f24)->count; i++) {
        v = (SoundVoice *)((IntArray *)f24)->Get(i);
        if (v != 0 && (v->flags & 8) && v->func_001CDB10() != 0) {
            return 0x80004005;
        }
    }
    return 0;
}

unsigned long __stdcall func_001CF590(void *ctx)
{
    C_001CF3C0 *p = (C_001CF3C0 *)ctx;
    IntArray *a = (IntArray *)p->f10;
    IntArray *b = (IntArray *)p->f24;
    int i;
    int j;
    int r;

    do {
        p->func_001CF450();
        r = func_001DDDD6(p->f4, 0x10);
    } while (r == 0x102);
    for (i = 0; i < a->count; i++) {
        SoundObj_001CF590 *obj = (SoundObj_001CF590 *)a->Get(i);
        if (obj != 0) {
            if (obj->f8 != 0) {
                obj->f8->Release();
            }
            if (obj->fC != 0) {
                obj->fC->Release();
            }
            if (obj->f10 != 0) {
                MmFreeContiguousMemory(obj->f10);
            }
            func_001E891B(obj);
        }
    }
    for (j = 0; j < b->count; j++) {
        SoundObj_001CF590 *obj = (SoundObj_001CF590 *)b->Get(j);
        if (obj != 0) {
            if (obj->f8 != 0) {
                obj->f8->Release();
            }
            if (obj->fC != 0) {
                obj->fC->Release();
            }
            if (obj->f10 != 0) {
                MmFreeContiguousMemory(obj->f10);
            }
            func_001E891B(obj);
        }
    }
    a->Clear();
    b->Clear();
    p->f38.Clear();
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

SoundObj_001CFE90 *SoundObj_001CFE90::func_001CF740(void *unused, int parent, int a)
{
    int *w = (int *)this;
    IntArray *list;
    int *p;

    ((C_0001C930 *)this)->func_0001C930();
    w[0] = (int)&D_0028EEEC;
    p = &w[0x1d8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[0x1e8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    p = &w[0x1f8 / 4]; p[2] = 0; p[1] = 0; p[0] = 0; p[3] = 0x3f800000;
    w[0x138 / 4] = parent;
    list = (IntArray *)((char *)parent + 0x30);
    list->Add((int)this);
    *(short *)((char *)this + 0x198) = (short)a;
    w[0x13c / 4] = 0;
    w[0x194 / 4] = 0;
    w[0x118 / 4] = 0;
    w[0x120 / 4] = 0;
    w[0x144 / 4] = 0;
    w[0x148 / 4] = 0;
    w[0x14c / 4] = 0;
    w[0x150 / 4] = 0;
    w[0x154 / 4] = 0;
    memset(&w[0x158 / 4], 0, 0x3c);
    w[0x19c / 4] = 0;
    w[0x1a0 / 4] = 0;
    w[0x1a4 / 4] = 0x3f800000;
    w[0x1a8 / 4] = *(int *)((char *)w[0x138 / 4] + 0x28);
    w[0x1ac / 4] = 100;
    w[0x124 / 4] = func_001CB0A0(w[0x1a8 / 4]);
    w[0x1b0 / 4] = 0;
    w[0x12c / 4] = 0;
    w[0x130 / 4] = 0;
    w[0x134 / 4] = 0;
    w[0x1bc / 4] = 0;
    w[0x1c0 / 4] = 0x3f800000;
    w[0x1c8 / 4] = 0;
    w[0x1d0 / 4] = 0x3f800000;
    w[0x1d4 / 4] = 0x3f800000;
    w[0x128 / 4] = w[0x1a8 / 4];
    w[0x1c4 / 4] = 0x4e6e6b28;
    w[0x1cc / 4] = 0x3e9c0ebf;
    w[0x1b4 / 4] = 0x168;
    w[0x1b8 / 4] = 0x168;
    w[0x1d8 / 4] = D_002ABA64;
    w[0x1dc / 4] = D_002ABA68;
    w[0x1e0 / 4] = D_002ABA6C;
    w[0x1e4 / 4] = D_002ABA70;
    w[0x1e8 / 4] = D_002ABA44;
    w[0x1ec / 4] = D_002ABA48;
    w[0x1f0 / 4] = D_002ABA4C;
    w[0x1f4 / 4] = D_002ABA50;
    w[0x1f8 / 4] = D_002ABA44;
    w[0x1fc / 4] = D_002ABA48;
    w[0x200 / 4] = D_002ABA4C;
    w[0x204 / 4] = D_002ABA50;
    *((unsigned char *)this + 0x208) &= 0x80;
    w[0x140 / 4] = 0;
    return this;
}

int XboxSound_001CF970::func_001CF970(int on)
{
    int was;

    if (on != 0) {
        RtlEnterCriticalSection(D_002F08EC->f138->cs);
        was = f208.playing;
        RtlLeaveCriticalSection(D_002F08EC->f138->cs);
        if (was != 0) {
            return 1;
        }
        if (v7() == 0) {
            return 1;
        }
        if (f140 != 0) {
            D_00220AE0(f140->fC, 1);
        } else {
            v6(0);
        }
        RtlEnterCriticalSection(D_002F08EC->f138->cs);
        f208.playing = on;
        RtlLeaveCriticalSection(D_002F08EC->f138->cs);
    } else {
        RtlEnterCriticalSection(D_002F08EC->f138->cs);
        was = f208.playing;
        RtlLeaveCriticalSection(D_002F08EC->f138->cs);
        if (was == 0) {
            return 1;
        }
        if (f140 != 0) {
            D_00220AE0(f140->fC, 0);
        } else {
            func_001CE4C0();
        }
        RtlEnterCriticalSection(D_002F08EC->f138->cs);
        f208.playing = 0;
        RtlLeaveCriticalSection(D_002F08EC->f138->cs);
    }
    return 1;
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

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
int SoundThread_001CFDC0::func_001CFC00(void)
{
    S_001CF1B0_Packet pkt;
    unsigned int block;
    int r;
    int cur = fC8;
    int want = fCC;
    if (cur != want) {
        switch (cur) {
        case 0:
            switch (want) {
            case 2:
                D_00220AE0(fB8[0], 0);
                D_00220AE0(fB8[1], 0);
                func_001CB8A0();
                break;
            }
            break;
        case 1:
            switch (want) {
            case 0:
                fB8[0]->Flush();
                fB8[1]->Flush();
                func_001CB7D0();
                break;
            case 2:
                D_00220AE0(fB8[0], 0);
                D_00220AE0(fB8[1], 0);
                break;
            }
            break;
        case 2:
            switch (want) {
            case 0:
                fB8[0]->Flush();
                fB8[1]->Flush();
                func_001CB7D0();
                break;
            }
            break;
        }
        fC8 = want;
    } else {
        if (want != 2) return 0;
        if (fAC != f24 || (fA0 & 2)) {
            fA0 &= ~2;
            fB8[0]->Flush();
            fB8[1]->Flush();
            D_00220AE0(fB8[0], 0);
            D_00220AE0(fB8[1], 0);
            func_001CB8A0();
        }
    }
    if (want != 2) return 0;
    while (fB4 != 0) {
        if (func_001CB780(&block, fB0) == 0) return 0;
        int index = block;
        r = func_001CF1B0(index, &pkt);
        if (r < 0) return r;
        if (pkt.size != 0) {
            int channel = *(volatile int *)&fB0;
            pkt.rest[0] = (u32)&fD0[index];
            pkt.completed = 0;
            _ReadWriteBarrier();
            r = fB8[channel]->Process(&pkt, 0);
            if (r < 0) return r;
        }
    }
    return 0;
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

int SoundStream_001CFEF0::func_001CFEF0(void)
{
    SoundStream_001CFEF0 *child;
    int r;
    RtlEnterCriticalSection(D_002F08EC->f138->cs);
    if (f208 & 8) {
        RtlLeaveCriticalSection(D_002F08EC->f138->cs);
        return 0;
    }
    RtlLeaveCriticalSection(D_002F08EC->f138->cs);
    if (f208 & 4) {
        if (D_002F08EC->f138->f4C == 0 && D_002F08EC->f138->func_001CFE20() != 0) {
            return 0;
        }
        RtlEnterCriticalSection(D_002F08EC->f138->cs);
        f140 = 0;
        RtlLeaveCriticalSection(D_002F08EC->f138->cs);
        return 1;
    }
    if (f148 != 0 && !(f148->f208 & 8)) {
        if (f148->func_001CFEF0() == 0) {
            return 0;
        }
    } else {
        child = f148;
        if (child != 0) {
            f144 = child->f144;
            memcpy(f158, child->f158, sizeof(f158));
        }
        r = func_001CE770(f13c);
        if (r == 0) {
            f8 = (char)r;
            return r;
        }
        if (f14c != 0) {
            f14c->func_001CFEF0();
        }
    }
    return 1;
}

