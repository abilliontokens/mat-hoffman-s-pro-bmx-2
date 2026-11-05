/* 12 functions from 0x001DC010 to 0x001DCDC7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" u32 *_imp__KeTickCount;
extern "C" void (__stdcall *_imp__KeQuerySystemTime)(void *time);
extern "C" void (__stdcall *_imp__RtlTimeToTimeFields)(void *time, void *fields);

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
