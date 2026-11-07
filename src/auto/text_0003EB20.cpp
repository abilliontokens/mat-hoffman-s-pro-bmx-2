/* 1 function from 0x0003EB20 to 0x00041560, found by Ghidra. */
#include "common.h"
struct V4 { float x,y,z,w; V4(){z=0;y=0;x=0;w=1;} };
struct Obj3EB20 { void func_00197E70(V4*); void func_00197B40(V4*,V4*); void func_001A4100(int,int,int); void func_000363E0(V4); };
extern float D_00276CA8;
int func_000262C0(V4 *,V4 *);
struct G3EB20 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int); virtual void v8(); };
extern G3EB20 *D_002EFDB8;
void __stdcall func_00038A70(void *, void **);
int __stdcall func_00038B10(void *, V4, V4, int *, int *, int *, int);

void __fastcall func_0003EB20(char* self, int edx, int a0)
{
    V4 a, b, c, d, e, f, g, h;
    int i0 = *(int*)(self + 0x428);
    int i1 = *(int*)(self + 0x434);
    int i2 = *(int*)(self + 0x430);
    int i3 = *(int*)(self + 0x43c);
    int i4 = *(int*)(self + 0x464);
    int *p = *(int**)(self + 0x564);
    if (p == 0)
        return;
    a.x = (float)i0;
    a.y = (float)i1;
    a.z = (float)i2;
    a.w = (float)i3;
    b.x = (float)i4;
    (void)e; (void)f; (void)g; (void)h; (void)c; (void)d;
}
