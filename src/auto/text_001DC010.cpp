/* 12 functions from 0x001DC010 to 0x001DCDC7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include <string.h>
extern "C" u32 *_imp__KeTickCount;
extern "C" void (__stdcall *_imp__KeQuerySystemTime)(void *time);
extern "C" void (__stdcall *_imp__RtlTimeToTimeFields)(void *time, void *fields);

extern "C" unsigned long __readfsdword(unsigned long Offset);
extern "C" long (__stdcall *_imp__HalReturnToFirmware)(int mode);
extern "C" u32 (__stdcall *_imp__RtlNtStatusToDosError)(long status);
extern "C" void (__stdcall *_imp__MmFreeContiguousMemory)(void *base);

struct S_LaunchDataPage {
    int launchType;
    int titleId;
};
extern "C" S_LaunchDataPage **_imp__LaunchDataPage;

struct S_XbeCertificate {
    char pad0[8];
    int titleId;
};
extern S_XbeCertificate *D_00010118;

struct S_Prcb250 {
    char pad0[0x14];
    void (__stdcall *fn14)(int a, int b);
};

long __stdcall func_001DC97C(int a, int b, int c, int d, int e);

extern "C" void *(__stdcall *_imp__MmAllocateContiguousMemory)(unsigned int);
extern "C" void (__stdcall *_imp__MmPersistContiguousMemory)(void *, unsigned int, int);
extern char D_0028FA30[];
void __stdcall func_001DF4E1(char *, const char *, unsigned int);

struct S_AnsiString {
    unsigned short Length;
    unsigned short MaximumLength;
    char *Buffer;
};

struct S_ObjectAttributes {
    void *RootDirectory;
    S_AnsiString *ObjectName;
    unsigned long Attributes;
};

extern S_AnsiString D_0028FA28;
extern "C" long (__stdcall *_imp__NtOpenSymbolicLinkObject)(void **handle, S_ObjectAttributes *oa);
extern "C" long (__stdcall *_imp__NtQuerySymbolicLinkObject)(void *handle, S_AnsiString *target, unsigned long *returnedLength);
extern "C" long (__stdcall *_imp__NtClose)(void *handle);

typedef u32 (__stdcall *PFN_LaunchCallback)(const char *path, void *data);
struct S_IoStatusBlock {
    long Status;
    unsigned long Information;
};
extern "C" long (__stdcall *_imp__NtCreateFile)(void **handle, u32 access, S_ObjectAttributes *oa, S_IoStatusBlock *iosb, void *allocSize, u32 attrs, u32 share, u32 disposition, u32 options);
extern "C" void (__stdcall *_imp__RtlInitAnsiString)(S_AnsiString *dst, const char *src);
extern char D_00010000[];
extern char D_00100080[];
void __stdcall func_001DD659(int code);
void __stdcall func_001DD62B(int code);

extern PFN_LaunchCallback D_002A0440[];
extern PFN_LaunchCallback D_002A0444[];
extern char D_0028FA24;
extern char D_001DC7F0;
extern char D_001DC810;

struct S_TimeFields {
    s16 year;
    s16 month;
    s16 day;
    s16 hour;
    s16 minute;
    s16 second;
    s16 milliseconds;
    s16 weekday;
};

struct S_SystemTime {
    s16 year;
    s16 month;
    s16 dayOfWeek;
    s16 day;
    s16 hour;
    s16 minute;
    s16 second;
    s16 milliseconds;
};

struct S_001DC820 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    void *f20;
    void *f24;
    int f28;
    int f2C;
    int f30;
    int f34;
};

int func_00210FE0(S_001DC820 *, int, void *, int);
int func_0021004A(S_001DC820 *, int);
int func_00210279(S_001DC820 *);
int func_00211163(S_001DC820 *, void *, int);
int func_0021117A(S_001DC820 *, int);
int func_00211040(S_001DC820 *);

#pragma optimize("g", off)
struct S_WaterVector { int x,y,z,w; __forceinline S_WaterVector &operator=(const S_WaterVector &b) { x=b.x; y=b.y; z=b.z; w=b.w; return *this; } };
#pragma optimize("", on)
#pragma optimize("", on)
struct S_WaterVirtual {
virtual void slot0();
virtual void slot1();
virtual void slot2();
virtual void slot3();
virtual void slot4();
virtual void slot5();
virtual void slot6();
virtual void slot7();
virtual void slot8();
virtual void slot9();
virtual void slot10();
virtual void slot11();
virtual void slot12();
virtual void slot13();
virtual void slot14();
virtual void slot15();
virtual void slot16();
virtual void slot17();
virtual void slot18();
virtual void slot19();
virtual void slot20();
virtual void slot21();
virtual void slot22();
virtual void slot23();
virtual void slot24();
virtual void slot25();
virtual void slot26();
virtual void slot27();
virtual void slot28();
};
struct XboxWaterDisplacement {
    int v[65];
    void func_001DC560();
    void func_00157960();
    void func_001DAC10();
    void func_001DB080();
    void func_001DC010();
    void func_001DA4C0(int);
    int func_001CA480(int *a, int *b);
    void func_001DA500();
};
extern int D_002AC720, D_002AB7F0, D_002A99B0, D_002AC5C0;
extern int *D_002A8490, *D_002F08BC;
extern int **D_002EFDB8;
int __stdcall func_001FFE40(int);
int func_00200210();
void __stdcall func_001FF940(void *, void *);
void __stdcall func_001FF4E0(int,int,unsigned int,unsigned int,int,int);
void __stdcall func_00201100(int);
void __stdcall func_00200230(void *);
#include <xmmintrin.h>
struct V4_001DC010 { float x, y, z, w; V4_001DC010(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; } };
struct Vtx_001DC010 { float f[5]; void func_001D8AE0(float x, float y, float z, float u, float v); };
struct Obj_001DC010 { void func_00143BF0(XboxWaterDisplacement *w); };
S_WaterVector *func_0001C610(S_WaterVector *out, const void *a, const void *b);
S_WaterVector *func_0001E9E0(S_WaterVector *out, const S_WaterVector *in);
float func_0014F4B0(int a);
float func_0014F450(int a);
float func_0014F590(float a);
float func_0014F990(float a);
int __stdcall func_001FE490(int a);
void __stdcall func_001FD450(int a);
void __stdcall func_001FD770(int a);
void __stdcall func_001DAAD0(int a, Vtx_001DC010 *v, V4_001DC010 *c);
extern int D_002AC750[];
extern float D_00275460, D_0028FA18, D_0028AC40, D_00289080, D_002F08D0, D_0028F8E0, D_002755E4;
extern float D_002AC82C, D_002AC830, D_002AC834, D_002AC838;
extern int D_002AC7A0[], D_002AC790[];
extern int D_002AC794, D_002F0BD0, D_0020C6DC, D_0020CA78, D_0020CA50;
#define W_001DC010(p, off, T) (*(T *)((char *)(p) + (off)))
extern "C" float __cdecl sqrtf(float);
static __forceinline float Max_001DC010(float a, float b) { return a > b ? a : b; }
static __forceinline float Min_001DC010(float a, float b) { return a < b ? a : b; }
static __forceinline float Abs_001DC010(float a) { int i = *(int *)&a & 0x7fffffff; return *(float *)&i; }
static __forceinline float Sqrt_001DC010(float x) { return sqrtf(x); }

struct C_001DC540 {
    undefined4 func_001DC540(byte param_1);
};


void XboxWaterDisplacement::func_001DC010()
{
    XboxWaterDisplacement * volatile self = this;
    char *cam = (char *)D_002EFDB8[1];
    S_WaterVector t1, t2, t3, t4;
    Vtx_001DC010 verts[4];
    float d, s, a, b, x, y, k, p, q, w, h, hy;
    int *g;
    int i;

    W_001DC010(self, 0x54, S_WaterVector) = *func_0001E9E0(&t2, func_0001C610(&t1, D_002AC750, cam + 0x180));
    W_001DC010(self, 0x64, S_WaterVector) = *func_0001E9E0(&t4, func_0001C610(&t3, cam + 0x180, &W_001DC010(self, 0x54, S_WaterVector)));
    {
        XboxWaterDisplacement *t = self;
        d = W_001DC010(t, 0x6c, float) * W_001DC010(t, 0xbc, float)
          + W_001DC010(t, 0x64, float) * W_001DC010(t, 0xb4, float)
          + W_001DC010(t, 0x68, float) * W_001DC010(t, 0xb8, float);
    }
    d = _mm_max_ss(_mm_set_ss(-1.0f), _mm_set_ss(d)).m128_f32[0];
    d = _mm_min_ss(_mm_set_ss(1.0f), _mm_set_ss(d)).m128_f32[0];
    d = Abs_001DC010(d);
    s = _mm_sqrt_ss(_mm_set_ss(D_00275460 - d * d)).m128_f32[0];
    a = Abs_001DC010(func_0014F4B0(W_001DC010(self, 0xc4, int)));
    b = Abs_001DC010(func_0014F450(W_001DC010(self, 0xc4, int)));
    x = a * d - b * s;
    y = a * s + b * d;
    k = W_001DC010(self, 0xcc, float) * D_0028FA18;
    p = k * y + x;
    q = k * x + y;
    W_001DC010(cam, 0x1d0, float) = func_0014F990(func_0014F590(W_001DC010(self, 0xc8, float) * D_0028AC40) * p) * D_00289080 + D_002F08D0;
    W_001DC010(cam, 0x190, S_WaterVector) = W_001DC010(self, 0x64, S_WaterVector);
    W_001DC010(cam, 0x1d4, int) = 0;
    W_001DC010(cam, 0x1f8, float) = q;
    W_001DC010(cam, 0x1dc, float) = D_00275460 / q;
    ((S_WaterVirtual *)cam)->slot28();

    D_002AC794 = D_002F08BC[0x28 / 4];
    if (self->func_001CA480(D_002AC790, D_002AC7A0) && D_002F0BD0 != 0) {
        func_001FE490(2);
        D_0020C6DC |= 0x1200;
        D_0020CA78 = 0;
        func_001FD450(0);
        func_001FD770(0x1b02);
        D_0020C6DC |= 0x2000;
        D_0020CA50 = 0;
        if (D_002AB7F0 != 0)
            self->func_001DA500();
        for (i = 0; W_001DC010(self, 0x48, Obj_001DC010 **)[i] != 0; i++)
            W_001DC010(self, 0x48, Obj_001DC010 **)[i]->func_00143BF0(self);
        if (W_001DC010(cam, 0x184, float) > D_0028F8E0) {
            g = D_002F08BC;
            w = (float)(unsigned int)g[0x304 / 4];
            h = (float)(unsigned int)g[0x308 / 4];
            hy = h - D_002AC834;
            verts[0].func_001D8AE0(0.0f, hy, D_002AC838, 0.0f, 0.0f);
            verts[1].func_001D8AE0(w, hy, D_002AC838, 1.0f, 0.0f);
            verts[2].func_001D8AE0(0.0f, h, D_002AC830, 0.0f, 1.0f);
            verts[3].func_001D8AE0(w, h, D_002AC830, 1.0f, 1.0f);
            func_001FF940(g + 0x228 / 4, g + 0x258 / 4);
            func_001FE490(1);
            {
                static V4_001DC010 c1(0.0f, 0.0f, 0.0f, 1.0f);
                func_001DAAD0(W_001DC010(W_001DC010(self, 0x4a0, char *), 0xb8, int), verts, &c1);
            }
            hy = h - D_002AC82C;
            verts[0].func_001D8AE0(0.0f, hy, D_002AC838, 0.0f, 0.0f);
            verts[1].func_001D8AE0(w, hy, D_002AC838, 1.0f, 0.0f);
            verts[2].func_001D8AE0(0.0f, h, D_002AC830, 0.0f, 1.0f);
            verts[3].func_001D8AE0(w, h, D_002AC830, 1.0f, 1.0f);
            func_001FF940(D_002F08BC + 0x240 / 4, D_002F08BC + 0x258 / 4);
            func_001FE490(0);
            {
                static V4_001DC010 c2(1.0f, 1.0f, 0.0f, 1.0f);
                func_001DAAD0(W_001DC010(W_001DC010(self, 0x4a0, char *), 0xb8, int), verts, &c2);
            }
        }
    }
}

undefined4 C_001DC540::func_001DC540(byte param_1)
{
  int func_001DBA40(...);
  int func_001E891B(...);
  undefined4 in_ECX = (undefined4)this;
  
  func_001DBA40();
  if ((param_1 & 1) != 0) {
    func_001E891B(in_ECX);
  }
  return in_ECX;
}

void XboxWaterDisplacement::func_001DC560() {
 if (!D_002AC720) {func_00157960(); return;}
 if (D_002A8490[0x274/4] <= v[0xd8/4]) v[0xd4/4]=0; else ++v[0xd4/4];
 v[0xd8/4]=D_002A8490[0x274/4];
 int a=func_001FFE40(0);
 int b=func_00200210();
 unsigned int color=D_002AB7F0 ? 0xff000000 : 0xff800000;
 func_001FF940(D_002F08BC+0x228/4,D_002F08BC+0x258/4);
 func_001FF4E0(0,0,0xf3,color,0x3f800000,0);
 color=D_002AB7F0 ? 0xff000000 : 0xff808000;
 func_001FF940(D_002F08BC+0x240/4,D_002F08BC+0x258/4);
 func_001FF4E0(0,0,0xf0,color,0x3f800000,0);
 int *p=D_002EFDB8[1];
 v[0xc8/4]=p[0x1d0/4];
 S_WaterVector *src=(S_WaterVector*)(p+0x190/4), *dst=(S_WaterVector*)(v+0xb4/4);
 memcpy(dst,src,16);
 v[0xc4/4]=p[0x1d4/4]; v[0xcc/4]=p[0x1f8/4]; v[0xd0/4]=*(int *)((char *)p + 0x1dc);
 if(D_002AB7F0 && !D_002A8490[0x124/4]) {func_001DAC10(); if(D_002A99B0) func_001DB080();}
 func_001DC010();
 if(D_002AC5C0 && v[0x4c/4]) {
 func_001FF940(D_002F08BC+0x228/4,D_002F08BC+0x258/4);
 func_001DA4C0(((int*)v[0x100/4])[v[0xd4/4]+0x58/4]);
 func_001FF940(D_002F08BC+0x240/4,D_002F08BC+0x258/4);
 func_001DA4C0(((int*)v[0x100/4])[v[0xd4/4]+0x60/4]);
 }
 p[0x1d0/4]=v[0xc8/4];
 memcpy(src,dst,16);
 p[0x1d4/4]=v[0xc4/4];p[0x1f8/4]=v[0xcc/4];p[0x1dc/4]=v[0xd0/4];
 ((S_WaterVirtual*)p)->slot28();
 func_001FF940((void*)a,(void*)b);
 func_00201100(a);func_00201100(b);
 func_00200230(D_002EFDB8[1]+0x1e0/4);
 ((S_WaterVirtual*)D_002A8490)->slot7();
 func_00157960();
}

int func_001DC820(int a, int b, int c)
{
    S_001DC820 s;
    int result;
    memset(&s, 0, sizeof(s));
    s.f0 = a;
    s.f4 = c;
    s.fC = b;
    s.f10 = c;
    s.f20 = &D_001DC7F0;
    s.f24 = &D_001DC810;
    func_00210FE0(&s, -1, &D_0028FA24, sizeof(s));
    func_0021004A(&s, 4);
    result = s.f14;
    func_00210279(&s);
    return result;
}

void func_001DC8A0(int a, int b, int c)
{
    S_001DC820 s;
    memset(&s, 0, sizeof(s));
    s.f0 = b;
    s.f4 = c;
    s.fC = a;
    s.f10 = c;
    s.f20 = &D_001DC7F0;
    s.f24 = &D_001DC810;
    func_00211163(&s, &D_0028FA24, sizeof(s));
    func_0021117A(&s, 4);
    func_00211040(&s);
}

#pragma optimize("s", on)
#pragma optimize("y", off)
void __stdcall func_001DC910(S_SystemTime *out)
{
    S_TimeFields fields;
    s64 time;
    _imp__KeQuerySystemTime(&time);
    _imp__RtlTimeToTimeFields(&time, &fields);
    out->year = fields.year;
    out->month = fields.month;
    out->dayOfWeek = fields.weekday;
    out->day = fields.day;
    out->hour = fields.hour;
    out->minute = fields.minute;
    out->second = fields.second;
    out->milliseconds = fields.milliseconds;
}
#pragma optimize("", on)
u32 func_001DC974(void)
{
    return *_imp__KeTickCount;
}

#pragma intrinsic(memset, memcpy, strlen)
#pragma optimize("s", on)
#pragma optimize("y", off)
long __stdcall func_001DC97C(int a, int b, int c, int d, int e)
{
    if (*(S_LaunchDataPage *volatile *)_imp__LaunchDataPage == 0)
        *_imp__LaunchDataPage = (S_LaunchDataPage *)_imp__MmAllocateContiguousMemory(0x1000);
    if (*_imp__LaunchDataPage == 0)
        return 0xC0000017;
    _imp__MmPersistContiguousMemory(*_imp__LaunchDataPage, 0x1000, 1);
    if (b == 0) b = (int)&D_0028FA30;
    char *path = (char *)*_imp__LaunchDataPage + 8;
    memset(*_imp__LaunchDataPage, 0, 0x1000);
    (*_imp__LaunchDataPage)->launchType = c;
    (*_imp__LaunchDataPage)->titleId = d;
    if (c != -1)
        memcpy((char *)*_imp__LaunchDataPage + 0x400, (void *)e, 0xC00);
    if (a) {
        func_001DF4E1(path, (char *)b, 0x207);
        unsigned int length = strlen(path);
        path[length++] = ';';
        func_001DF4E1(path + length, (char *)a, 0x208 - length);
    }
    return 0;
}
#pragma optimize("", on)

#pragma intrinsic(memcpy)
#pragma optimize("sy", on)
int __stdcall func_001DCA56(int *outType, void *outData)
{
    S_LaunchDataPage *page = *_imp__LaunchDataPage;
    int type;

    if (page != 0) {
        type = page->launchType;
        if (type == 2 || type == 3 || page->titleId == (*(S_XbeCertificate * volatile *)&D_00010118)->titleId) {
            *outType = type;
            memcpy(outData, (char *)*_imp__LaunchDataPage + 0x400, 0xC00);
            page = *_imp__LaunchDataPage;
            *_imp__LaunchDataPage = 0;
            _imp__MmFreeContiguousMemory(page);
            return 0;
        }
    }
    return 0x490;
}
u32 __stdcall func_001DCABA(int a, int b, int c, int d, int e)
{
    long status = func_001DC97C(a, b, c, d, e);

    if (status >= 0) {
        S_Prcb250 *p = *(S_Prcb250 **)(__readfsdword(0x20) + 0x250);
        if (p != 0)
            p->fn14(2, 0);
        status = _imp__HalReturnToFirmware(2);
    }
    return _imp__RtlNtStatusToDosError(status);
}

u32 __stdcall func_001DCAFF(const char *path, void *data)
{
    S_AnsiString target;
    S_ObjectAttributes oa;
    char devicePath[0x168];
    char targetBuf[0x208];
    PFN_LaunchCallback *cb;
    void *h;
    long status;
    u32 result;

    for (cb = D_002A0440; cb < D_002A0444; cb++) {
        if (*cb != 0) {
            return (*cb)(path, data);
        }
    }
    if (path != 0 && ((*path != 'D' && *path != 'd') || path[1] != ':' || path[2] != '\\')) {
        return 0x57;
    }
    if (path == 0) {
        result = func_001DCABA(0, 0, (data != 0) * 2 - 1, D_00010118->titleId, (int)data);
    } else {
        devicePath[0] = 0;
        oa.RootDirectory = 0;
        oa.Attributes = 0x40;
        oa.ObjectName = &D_0028FA28;
        status = _imp__NtOpenSymbolicLinkObject(&h, &oa);
        if (status >= 0) {
            target.Buffer = targetBuf;
            target.Length = 0;
            target.MaximumLength = 0x208;
            status = _imp__NtQuerySymbolicLinkObject(h, &target, 0);
            _imp__NtClose(h);
        }
        if (status >= 0) {
            func_001DF4E1(devicePath, targetBuf, (0x168u < (unsigned int)target.Length + 1) ? 0x168u : (unsigned int)target.Length + 1);
        } else {
            int i = 0;
            char c;
            do {
                c = D_0028FA30[i];
                devicePath[i] = c;
                i++;
            } while (c != 0);
        }
        result = func_001DCABA((int)(path + 3), (int)devicePath, (data != 0) - 1, D_00010118->titleId, (int)data);
    }
    return result;
}

#pragma optimize("sy", on)
#pragma optimize("y", off)
void * __stdcall func_001DCC3C(const char *path, u32 access, u32 share, void *sa, u32 disp, u32 flags, void *tmpl)
{
    void *handle;
    S_AnsiString str;
    S_IoStatusBlock iosb;
    S_ObjectAttributes oa;
    u32 ntDisp;
    u32 options;
    long status;
    int trailingSlash;

    switch (disp) {
    case 1:
        ntDisp = 2;
        break;
    case 2:
        ntDisp = 5;
        break;
    case 3:
        ntDisp = 1;
        break;
    case 4:
        ntDisp = 3;
        break;
    case 5:
        ntDisp = 4;
        if (access & 0x40000000)
            break;
    default:
        func_001DD659(0xc000000d);
        return (void *)-1;
    }
    _imp__RtlInitAnsiString(&str, path);
    if (str.Length > 1 && path[str.Length - 1] == '\\')
        trailingSlash = 1;
    else
        trailingSlash = 0;
    oa.RootDirectory = (void *)-3;
    oa.ObjectName = &str;
    oa.Attributes = 0x40;
    options = ((flags & 0x80000000) ? 2 : 0) | ((flags & 0x20000000) ? 8 : 0) | ((flags & 0x8000000) ? 4 : 0) | ((flags & 0x10000000) ? 0x800 : 0) | ((flags & 0x2000000) ? 0x4000 : 0) | ((flags & 0x40000000) ? 0 : 0x20);
    if (flags & 0x4000000) {
        options |= 0x1000;
        access |= (u32)D_00010000;
    }
    if (!(flags & 0x2000000))
        options |= 0x40;
    status = _imp__NtCreateFile(&handle, access | (u32)D_00100080, &oa, &iosb, 0, flags & 0x7fa7, share, ntDisp, options);
    if (status < 0) {
        func_001DD659(status);
        if (status == (long)0xc0000035) {
            func_001DD62B(0x50);
        } else if (status == (long)0xc00000ba) {
            if (trailingSlash)
                func_001DD62B(3);
            else
                func_001DD62B(5);
        }
        return (void *)-1;
    }
    if ((disp == 2 && iosb.Information == 3) || (disp == 4 && iosb.Information == 1))
        func_001DD62B(0xb7);
    else
        func_001DD62B(0);
    return handle;
}
