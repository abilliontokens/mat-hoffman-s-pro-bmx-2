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

struct C_001DC540 {
    undefined4 func_001DC540(byte param_1);
};


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

