/* 22 functions from 0x0023EA00 to 0x0023F472, found by Ghidra. */
#include "common.h"

extern "C" void (__stdcall *const _imp__RtlEnterCriticalSection)(void *cs);
extern "C" void (__stdcall *const _imp__RtlLeaveCriticalSection)(void *cs);
extern "C" void (__stdcall *_imp__RtlInitializeCriticalSection)(void *cs);
extern "C" __declspec(dllimport) void __stdcall RtlEnterCriticalSection(void *cs);
extern "C" __declspec(dllimport) void __stdcall RtlLeaveCriticalSection(void *cs);
extern int D_0029016C;

void __stdcall func_001DDE02(int a0);
int __stdcall func_0023F3F7(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7);
void *func_001E8A44(int size);

/* COM-style object created by func_0023F3F7 */
struct S_0023F3F7_Obj {
    virtual int __stdcall v0();
    virtual int __stdcall Release();
    char pad4[0xb8];
    S_0023F3F7_Obj *func_0023F1AB(void);
};

int __stdcall func_0023F23E(S_0023F3F7_Obj *obj, int a0, int a1, int a2, int a3, int a4, int a5, int a6);

struct S_0023F23E_Link { S_0023F23E_Link *next; S_0023F23E_Link *prev; };
struct S_0023F23E_Node { S_0023F23E_Node *next; S_0023F23E_Node *prev; char pad[0x1c]; };
struct S_0023F23E_Obj {
    struct VT { int (__stdcall *v0)(S_0023F23E_Obj *); int v1, v2, v3, v4, v5; int (__stdcall *v6)(S_0023F23E_Obj *); } *vtbl;
    char pad4[0x30];
    char *f34;
    S_0023F23E_Node *f38;
    char pad3C[0x10];
    int f4C;
    int f50;
    char pad54[0x10];
    int f64;
    int f68;
    char pad6C[0x1c];
    int f88;
    char pad8C[8];
    unsigned int f94;
    unsigned int f98;
    S_0023F23E_Link f9c;
    S_0023F23E_Link fA4;
    int fAC;
    int fB0;
    int fB4;
    int fB8;
};
extern "C" int (__stdcall *_imp__NtQueryInformationFile)(int h, void *iosb, void *info, unsigned int len, int cls);
int __stdcall func_001DCC3C(int a, int b, int c, int d, int e, int f, int g);
int __stdcall func_001DE8C7(int a, int b, void *fn, void *p, int c, void *d);
int __stdcall func_001DDBC7(int a, int b, int c, int d);


struct S_0023EA00_Link {
    S_0023EA00_Link *next;
    S_0023EA00_Link *prev;
};

extern "C" void *__cdecl memset(void *dst, int val, unsigned int size);

void func_001E891B(void *p);
int __stdcall func_001DDC28(int a);
int __stdcall func_001DDDD6(int a, int b);
int __stdcall func_001DD13C(int a);

/* Class_0029016C: 12 stdcall virtual functions taking `this` on the stack */
struct C_0023EA00 {
    void *vtbl;
    char pad4[0x2c];
    void *f30;
    void *f34;
    void *f38;
    char pad3C[4];
    unsigned char f40;
    char pad41[0xb];
    int f4C;
    int f50;
    char pad54[8];
    unsigned int f5C;
    char pad60[4];
    int f64;
    char pad68[0x20];
    int f88;
    int f8C;
    char pad90[0x14];
    S_0023EA00_Link fA4;
    int fAC;
    void func_0023EA00(void);
    void func_0023EED3(void);
};

/* maps a byte offset into a buffer made of blocks of f50 bytes */
struct C_0023EE81 {
    char pad0[0x34];
    int f34;
    unsigned int f38;
    char pad3C[4];
    unsigned char f40;
    char pad41[0xb];
    unsigned int f4C;
    unsigned int f50;
    char pad54[8];
    unsigned int f5C;
    int func_0023EE81(unsigned int a, unsigned int b, int *out);
};

struct S_0023EF7B_Src {
    char pad0[8];
    int f8;
    int fC;
    int f10;
    int f14;
    char pad18[0x14];
    int f2C;
};

struct S_0023EF7B_Out {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
};

typedef unsigned int (__stdcall *PFN_0023EC0D)(void *ctx, unsigned int a, unsigned int b, int *out);

/* region window: either forwards to a user hook (f44) or maps a offset inside [f3c, f3c+f94) */
struct C_0023EC0D {
    void *vtbl;
    int f4;
    int f8[10];
    int f30;
    int f34;
    int f38;
    unsigned int f3c;
    unsigned int f40;
    PFN_0023EC0D f44;
    void *f48;
    int f4c;
    int f50;
    int f54[5];
    int f68;
    char f6c[0x1c];
    int f88;
    int f8C;
    int f90;
    unsigned int f94;
    int f98;
    char pad9c[8];
    S_0023EA00_Link fA4;
    int fAC;
    int fB0;
    int fB4;
    int fB8;
    unsigned int func_0023EC0D(unsigned int a, unsigned int b, int *out);
    unsigned int func_0023EE81(unsigned int a, unsigned int b, int *out);
    void func_0023EED3(void);
};

#pragma pack(push, 1)
struct S_0023F119_Wfx {
    unsigned short wFormatTag;
    unsigned short nChannels;
    unsigned int nSamplesPerSec;
    unsigned int nAvgBytesPerSec;
    unsigned short nBlockAlign;
    unsigned short wBitsPerSample;
    unsigned short cbSize;
};
#pragma pack(pop)

struct S_0023F119_Src {
    char pad0[0xc];
    int fC;
    unsigned short f10;
    int func_0023EE30(int a);
};


void func_001E891B(void *p);

/* the stream object: its lock, the packet list and the "has a thread" flag */
struct S_0023ED71 {
    char pad0[0x6c];
    char f6c[0x30];
    S_0023EA00_Link f9c;
    char pada4[0x10];
    int fb4;
};

struct S_0023EDB5 {
    char pad0[0x30];
    int f30;
};

struct C_0023EFB0 {
    void func_0023EFB0(void);
};

/* the pump thread's view of the stream: its fields and the queued-request walker */
struct C_0023EFB0_Pump {
    char pad0[0x34];
    int f34;
    char pad38[0x14];
    int f4C;
    char pad50[0x18];
    int f68;
    char f6c[0x1c];
    char pad88[4];
    unsigned int f8C;
    char pad90[4];
    int f94;
    char pad98[0xc];
    S_0023EA00_Link fA4;
    void func_0023EFB0(int a0, int a1, int a2);
    int func_0023EC71(int a0, int a1, void *req);
};

__declspec(noreturn) void __stdcall func_001DE7C2(int a);

struct S_0023ED4C_Src {
    char pad0[0x10];
    int f10;
};

struct S_0023ED4C_Out {
    int f0;
    int pad4;
    int f8;
    int fC;
};

/* a read request queued on the stream's list */
struct S_0023EC71_Req {
    S_0023EA00_Link link;
    int f8;
    int fC;
};

/* the file stream: reads windows of f94 bytes from the handle f50 */
struct C_0023EC71 {
    char pad0[0x3c];
    unsigned int f3c;
    unsigned int f40;
    char pad44[0xc];
    int f50;
    char f54[8];
    unsigned int f5c;
    char pad60[0x30];
    int f90;
    unsigned int f94;
    int pad98;
    S_0023EA00_Link f9c;
    int func_0023EC71(int a0, int a1, S_0023EC71_Req *req);
};

/* the sample stream: f10 channels of 16-bit samples, read from handle f30 in 0x800 chunks */
struct S_0023EB1F_Obj {
    char pad0[0x10];
    int f10;
    char pad14[0x1c];
    int f30;
    char pad34[0x7c];
    int fB0;
    char padB4[4];
    unsigned int fB8;
};

/* read request: destination buffer, byte size, out byte count, out status, event handle */
struct S_0023EB1F_Req {
    char *f0;
    unsigned int f4;
    int *f8;
    int *fC;
    int f10;
};

int func_001DE7AF(void);
int __stdcall func_0023FAA9(int h);
unsigned int __stdcall func_0023FC26(int h, char *buf, int a, unsigned int n);

int __stdcall func_001DD3A1(int h, int a, int b, int c);
int __stdcall func_001DD15A(int h, int buf, int len, int *n, void *ovl);
int __stdcall func_001DD670(int h, void *ovl, int *n, int wait);
int func_001DD603(void);
int __stdcall func_0023F724(void *p, void *self);
int __stdcall func_0024001F(void *h);
int __stdcall func_0023F770(void *h, int *p);
extern char D_0000FFFF;

struct C_0023ED4C {
    int func_0023ED4C(S_0023ED4C_Src *src, S_0023ED4C_Out *out);
};

#pragma optimize("s", on)
void C_0023EA00::func_0023EA00(void)
{
    for (;;) {
        if (fA4.next == &fA4) {
            break;
        }
        func_001DDE02(5);
    }
}

int __stdcall func_0023EA16(C_0023EC0D *self)
{
    int n;
    int hr;
    void *cs;
    int r;

    ((C_0023EA00 *)self)->func_0023EA00();
    cs = self->f6c;
    _imp__RtlEnterCriticalSection(cs);
    self->f3c = 0;
    self->f40 = 0;
    if (self->f44 == 0) {
        func_001DD3A1(self->f50, 0, 0, 0);
        self->f54[2] = 0;
        self->f54[3] = 0;
        r = func_001DD15A(self->f50, self->f34, self->f94, &n, self->fB4 ? self->f54 : 0);
        if (r == 0) {
            if (self->fB4 != 0)
                goto wait;
            goto err;
        } else if (self->fB4 == 0) {
            goto ok;
        }
wait:
        if (!func_001DD670(self->f50, self->f54, &n, 1)) {
err:
            _imp__RtlLeaveCriticalSection(cs);
            if (func_001DD603() <= 0)
                return func_001DD603();
            return (func_001DD603() & (int)&D_0000FFFF) | 0x80070000;
        }
    }
ok:
    if (func_0023F724(&self->f30, self) != 0) {
        hr = 0x80004005;
    } else if (func_0024001F((void *)self->f30) != 0) {
        hr = 0x80004005;
    } else if (func_0023F770((void *)self->f30, self->f8) != 0) {
        hr = 0x80004005;
    } else if (self->f8[7] != 0) {
        hr = 0x80004005;
    } else {
        self->fB0 = 1;
        hr = 0;
    }
    _imp__RtlLeaveCriticalSection(cs);
    return hr;
}

int __stdcall func_0023EB1F(S_0023EB1F_Obj *obj, S_0023EB1F_Req *req)
{
    unsigned int count = 0;
    unsigned int total = req->f4 / (obj->f10 << 1);
    int hr = 0;
    unsigned int done = 0;
    char *buf = req->f0;

    while (done < total) {
        unsigned int chunk;
        unsigned int got;
        char *dst;

        if (obj->fB0 != 0) {
            int r;

            obj->fB0 = 0;
            count++;
            if (count % obj->fB8 == 0) {
                func_001DE7AF();
            }
            r = func_0023FAA9(obj->f30);
            if (r != 0) {
                if (r != 6) {
                    hr = 0x80004005;
                }
                break;
            }
        }
        dst = buf + obj->f10 * done * 2;
        chunk = total - done;
        if (chunk > 0x800) {
            chunk = 0x800;
        }
        got = func_0023FC26(obj->f30, dst, 0, chunk);
        if (got < chunk) {
            obj->fB0 = 1;
        }
        done += got;
    }
    if (req->f8 != 0) {
        *req->f8 = obj->f10 * done * 2;
    }
    if (req->f10 != 0) {
        func_001DDC28(req->f10);
    }
    if (req->fC != 0) {
        *req->fC = hr;
    }
    return 0;
}

unsigned int C_0023EC0D::func_0023EC0D(unsigned int a, unsigned int b, int *out)
{
    if (f44 != 0) {
        return f44(f48, a, b, out);
    }
    _imp__RtlEnterCriticalSection(f6c);
    if (f94 + f3c > a && b <= f94 + f3c - a) {
        *out = f34 - f3c + a;
        f40 = a;
        _imp__RtlLeaveCriticalSection(f6c);
        return b;
    }
    return 0;
}

void __stdcall func_0023EB1F(C_0023EC71 *p, int *q);
extern char D_0000FFFF;
int C_0023EC71::func_0023EC71(int a0, int a1, S_0023EC71_Req *req)
{
    int n;
    unsigned int old = f3c;
    S_0023EA00_Link *next;
    S_0023EA00_Link *prev;
    S_0023EA00_Link *head;
    S_0023EA00_Link *first;

    if (f40 - old >= f94 >> 1) {
        f3c = f40;
    }
    if (old != f3c) {
        int r;
        func_001DD3A1(f50, f3c, 0, 0);
        f5c = f3c;
        r = func_001DD15A(f50, a0, a1, &n, req ? f54 : 0);
        if (req != 0)
            goto wait;
        if (r != 0)
            goto done;
        goto err;
    } else if (req != 0) {
wait:
        if (!func_001DD670(f50, f54, &n, 1)) {
err:
            if (func_001DD603() <= 0)
                return func_001DD603();
            return (func_001DD603() & (int)&D_0000FFFF) | 0x80070000;
        }
        ::func_0023EB1F(this, &req->fC);
        next = req->link.next;
        prev = req->link.prev;
        prev->next = next;
        next->prev = prev;
        head = &f9c;
        first = head->next;
        req->link.next = first;
        req->link.prev = head;
        first->prev = &req->link;
        head->next = &req->link;
        f90--;
    }
done:
    return 0x10000000;
}

#pragma optimize("y", on)
#pragma optimize("s", on)
int __stdcall func_0023ED4C(S_0023ED4C_Src *src, S_0023ED4C_Out *out)
{
    out->fC = 0;
    out->f0 = 3;
    out->f8 = src->f10 << 12;
    return 0;
}
int __stdcall func_0023ED71(S_0023ED71 *p, int *out)
{
    if (out != 0) {
        *out = 2;
        if (p->fb4 != 0) {
            _imp__RtlEnterCriticalSection(p->f6c);
            if (p->f9c.next == &p->f9c) {
                *out = 0;
            }
            _imp__RtlLeaveCriticalSection(p->f6c);
        }
    }
    return 0;
}

unsigned int __stdcall func_0023EDB5(S_0023EDB5 *p, int a)
{
    int __stdcall func_0023F84B(int h, int a);

    return func_0023F84B(p->f30, a) ? 0x80004005 : 0;
}

int __stdcall func_0023EE30(int fmt)
{
    int rate;

    switch (fmt) {
    case 6:
        rate = 8000;
        break;
    case 5:
        rate = 11025;
        break;
    case 4:
        rate = 16000;
        break;
    case 3:
        rate = 22050;
        break;
    case 2:
        rate = 32000;
        break;
    case 1:
        rate = 44100;
        break;
    case 0:
        rate = 48000;
        break;
    default:
        rate = 0;
        break;
    }
    return rate;
}

int C_0023EE81::func_0023EE81(unsigned int a, unsigned int b, int *out)
{
    unsigned int n = b;
    unsigned int blk = f50;
    unsigned int off = a % blk;

    if (off + b > blk) {
        n = blk - off;
    }
    if ((f40 & 0x10) != 0 && a + b > f5C - f4C) {
        return 0;
    }
    *out = f34 + off;
    f38 = a;
    return n;
}

void C_0023EA00::func_0023EED3(void)
{
    extern int D_0029016C;
    void __stdcall func_0023F63D(void **p);
    vtbl = (void *)&D_0029016C;
    func_0023EA00();
    if (f4C != 0) {
        func_001DDC28(f4C);
    }
    if (f88 != 0) {
        func_001DDDD6(f88, -1);
    }
    if (f30 != 0) {
        func_0023F63D(&f30);
    }
    if (f34 != 0) {
        func_001E891B(f34);
    }
    if (f38 != 0) {
        func_001E891B(f38);
    }
    if (f50 != -1 && fAC == 0) {
        func_001DD13C(f50);
    }
    if (f4C != 0) {
        func_001DD13C(f4C);
    }
    if (f64 != 0) {
        func_001DD13C(f64);
    }
}

extern "C" long __cdecl _InterlockedIncrement(long volatile *);
#pragma intrinsic(_InterlockedIncrement)
int __stdcall func_0023EF5D(char *self)
{
    return _InterlockedIncrement((long *)(self + 0x8c));
}

int __stdcall func_0023EF7B(S_0023EF7B_Src *src, S_0023EF7B_Out *out)
{
    memset(out, 0, sizeof(S_0023EF7B_Out));
    out->f0 = src->f8;
    out->f4 = src->fC;
    out->f8 = src->f10;
    out->fC = src->f14;
    out->f10 = src->f2C;
    return 0;
}

void C_0023EFB0_Pump::func_0023EFB0(int a0, int a1, int a2)
{
    int r;

    if (f8C > 0) {
        do {
            if (func_001DDDD6(f4C, 0) == 0) {
                break;
            }
            RtlEnterCriticalSection(f6c);
            if (fA4.next != &fA4) {
                r = func_0023EC71(f34, f94, fA4.next);
                RtlLeaveCriticalSection(f6c);
                if (r == 0x80004004) {
                    break;
                }
            } else {
                RtlLeaveCriticalSection(f6c);
            }
        } while (f8C > 0);
    }
    f68 = 0;
    func_001DE7C2(0);
}

unsigned int __stdcall func_0023F0F4(int p1, C_0023EC0D *obj, unsigned int a, unsigned int b, int *out)
{
    if (obj->f4 == 1) {
        return obj->func_0023EC0D(a, b, out);
    }
    return obj->func_0023EE81(a, b, out);
}

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)
int __stdcall func_0023F119(S_0023F119_Src *src, S_0023F119_Wfx *wfx)
{
    unsigned short ba;
    wfx->wFormatTag = 1;
    wfx->nSamplesPerSec = src->func_0023EE30(src->fC);
    wfx->nChannels = src->f10;
    wfx->cbSize = 0;
    ba = (unsigned short)(wfx->nChannels << 1);
    wfx->nBlockAlign = ba;
    _ReadWriteBarrier();
    wfx->nAvgBytesPerSec = ba * wfx->nSamplesPerSec;
    wfx->wBitsPerSample = 16;
    return 0;
}
int __stdcall func_0023F160(C_0023EFB0 *p)
{
    p->func_0023EFB0();
    return 0;
}

#pragma optimize("y", off)
int __stdcall func_0023F16E(C_0023EA00 *obj) {
    int *addend = (int *)&obj->f8C;
    int count = --*addend;
    if (!count && obj) {
        obj->func_0023EED3();
        func_001E891B(obj);
    }
    return count;
}
#pragma optimize("y", on)

S_0023F3F7_Obj *S_0023F3F7_Obj::func_0023F1AB(void)
{
    C_0023EC0D *p = (C_0023EC0D *)this;

    p->vtbl = &D_0029016C;
    p->f4 = 1;
    memset(&p->f30, 0, 4);
    memset(p->f8, 0, 0x28);
    p->f50 = -1;
    p->f34 = 0;
    p->f98 = 0;
    p->f38 = 0;
    p->fB4 = 0;
    p->fAC = 0;
    p->f8C = 0;
    p->f90 = 0;
    p->f3c = 0;
    p->f40 = 0;
    p->f44 = 0;
    p->f48 = 0;
    p->f88 = 0;
    p->f4c = 0;
    p->f68 = 0;
    p->fB8 = 1000;
    p->fB0 = 1;
    memset(p->f54, 0, 0x14);
    _imp__RtlInitializeCriticalSection(p->f6c);
    p->fA4.prev = &p->fA4;
    p->fA4.next = &p->fA4;
    return this;
}

int __stdcall func_0023F23E(S_0023F3F7_Obj *pobj, int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    S_0023F23E_Obj *obj = (S_0023F23E_Obj *)pobj;
    S_0023F23E_Link *list;
    int iosb[2];
    unsigned int sz;
    unsigned int cnt;
    int hr;
    obj->vtbl->v0(obj);
    obj->fB8 = a5;
    if (a1 == 0) {
        obj->fAC = 0;
        obj->f50 = func_001DCC3C(a0, 0x80000000, 1, 0, 3, a2 != 0 ? 0x40000000 : 0, 0);
    } else {
        obj->fAC = 1;
        obj->f50 = a1;
        _imp__NtQueryInformationFile(a1, iosb, &pobj, 4, 0x10);
    }
    if (obj->f50 == -1) {
        if (func_001DD603() <= 0)
            return func_001DD603();
        return (func_001DD603() & (int)&D_0000FFFF) | 0x80070000;
    }
    sz = 0x2000;
    if (*(volatile unsigned int *)&a3 >= 0x2000u)
        sz = a3;
    sz += sz;
    obj->f94 = sz;
    obj->f34 = (char *)func_001E8A44(sz);
    if (obj->f34 == 0)
        return 0x8007000e;
    cnt = a4;
    obj->fB4 = a2;
    if (cnt < 2) cnt = 2;
    obj->f98 = cnt;
    list = &obj->f9c;
    obj->f9c.prev = list;
    list->next = list;
    obj->fA4.prev = &obj->fA4;
    obj->fA4.next = &obj->fA4;
    if (a2 == 1) {
        obj->f38 = (S_0023F23E_Node *)func_001E8A44(cnt * 0x24);
        if (obj->f38 == 0) return 0x8007000e;
        unsigned int i = 0;
        if (obj->f98 > 0) {
            int off = 0;
            do {
                S_0023F23E_Node *p = (S_0023F23E_Node *)((char *)obj->f38 + off);
                off += 0x24;
                p->prev = p; p->next = p;
                S_0023F23E_Link *h = list->next;
                p->next = (S_0023F23E_Node *)h;
                p->prev = (S_0023F23E_Node *)list;
                h->prev = (S_0023F23E_Link *)p;
                list->next = (S_0023F23E_Link *)p;
                i++;
            } while (i < obj->f98);
        }
        obj->f88 = func_001DE8C7(0, 0x2000, (void *)func_0023F160, obj, 0, &obj->f68);
        if (obj->f88 == 0)
            return 0x8007000e;
        if ((obj->f4C = func_001DDBC7(0, 0, 0, 0)) == 0)
            return 0x8007000e;
        if ((obj->f64 = func_001DDBC7(0, 0, 0, 0)) == 0)
            return 0x8007000e;
    }
    hr = obj->vtbl->v6(obj);
    if (hr >= 0 && a6)
        func_0023F119((S_0023F119_Src *)obj, (S_0023F119_Wfx *)a6);
    return hr;
}

int __stdcall func_0023F3F7(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    S_0023F3F7_Obj *obj;
    S_0023F3F7_Obj *mem;
    int hr;

    if (a5 == 0) {
        a5 = 1000;
    }
    mem = (S_0023F3F7_Obj *)func_001E8A44(0xbc);
    obj = mem != 0 ? mem->func_0023F1AB() : 0;
    if (obj == 0) {
        return 0x8007000e;
    }
    hr = func_0023F23E(obj, a0, a1, a2, a3, a4, a5, a6);
    if (hr >= 0) {
        *(S_0023F3F7_Obj **)a7 = obj;
    } else {
        *(S_0023F3F7_Obj **)a7 = 0;
        obj->Release();
    }
    return hr;
}

#pragma optimize("y", off)
void __stdcall func_0023F469(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    func_0023F3F7(a0, a1, a2, a3, a4, a5, a6, a7);
}
#pragma optimize("", on)
