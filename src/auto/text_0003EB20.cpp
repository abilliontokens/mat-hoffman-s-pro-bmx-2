/* 1 function from 0x0003EB20 to 0x00041560, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
struct V4 { float x,y,z,w; V4(){z=0;y=0;x=0;w=1;} };
struct Obj3EB20 { void func_00197E70(V4*); void func_00197B40(V4*,V4*); void func_001A4100(int,int,int); void func_000363E0(V4); void func_00198F50(V4*,V4*,int,int,int); void func_0019AC50(); void func_001824E0(V4*,float,float,float); void func_00133EF0(void*); void func_00038A70(void *, void **); int func_00038B10(void *, V4, V4, int *, int *, int *, int); };
extern float D_00276CA8;
extern float D_00275AEC;
int func_000262C0(V4 *,V4 *);
struct G3EB20 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int); virtual void v8(); };
extern G3EB20 *D_002EFDB8;
void __stdcall func_00038A70(void *, void **);
int __stdcall func_00038B10(void *, V4, V4, int *, int *, int *, int);

void __fastcall func_0003EB20(char* self, int edx, int a0)
{
    V4 a,b,c;
    int x=0,y=0,z=0;
    int left=*(int*)(self+0x428),top=*(int*)(self+0x430);
    int right=*(int*)(self+0x434),bottom=*(int*)(self+0x43c);
    void *block=0;
    float height=*(float*)(self+0x464);
    V4 p,q,r,s,t;
    float low=0,high=0;
    char *slot=*(char**)(self+0x564);
    if(!slot)return;
    if(*(int*)slot==2 && a0)return;
    D_002EFDB8->v7(1);
    D_002EFDB8->v8();
    slot=*(char**)(self+0x564);
    int type=*(int*)slot;
    if(type && type<3) {
        if(type==1) {
            a=*(V4*)(*(char**)(slot+16)+0x24);
            b=*(V4*)(self+0x4cc);
            c=*(V4*)(self+0x4dc);
            p=a;q=b;r=c;
        } else if(type==2 && !a0) {
            char *obj=*(char**)(*(char**)(slot+4)+0xe8);
            a=*(V4*)(obj+0x24);
            b.x=*(float*)(obj+0x58);b.y=*(float*)(obj+0x68);b.z=*(float*)(obj+0x78);
            c.x=*(float*)(obj+0x54);c.y=*(float*)(obj+0x64);c.z=*(float*)(obj+0x74);
            p=a;q=b;r=c;
        }
    } else {
        ((Obj3EB20*)*(void**)(slot+8))->func_00197E70(&a);
        ((Obj3EB20*)*(void**)(*(char**)(self+0x564)+8))->func_00197B40(&b,&c);
        if(*(int*)(self+0x2d4)) {
            *(int*)(self+0x574)=0;
            *(int*)(self+0x578)=-1;
            *(int*)(self+0x2d4)=0;
            a.y=*(float*)(self+0x440);
        }
        float f=a.x;int *out=&x;*out=_mm_cvt_ss2si(_mm_load_ss(&f));
        f=a.y;out=&y;*out=_mm_cvt_ss2si(_mm_load_ss(&f));
        f=a.z;out=&z;*out=_mm_cvt_ss2si(_mm_load_ss(&f));
        a.x=(float)x;a.y=(float)y;a.z=(float)z;
        p=a;q=b;r=c;
        ((Obj3EB20*)self)->func_00038A70(*(char**)(*(char**)(self+0x564)+8)+0x28,&block);
        ((Obj3EB20*)self)->func_00038B10(*(char**)(*(char**)(self+0x564)+8)+0x28,a,b,&x,&y,&z,1);
        if(!block)return;
        int w=*(int*)((char*)block+0x358), h=*(int*)((char*)block+0x35c);
        float offset=0;
        if(w>3)offset=(w-3)*D_00275AEC;
        else if(h>3)offset=(h-3)*D_00275AEC;
        height+=offset;
        if(*(float*)(self+0x4ac)==a.x)low=offset+*(float*)(self+0x468);
        else high=offset+*(float*)(self+0x468);
    }

    slot=*(char**)(self+0x564);
    if(*(int*)slot>=3) {
        ((Obj3EB20*)*(void**)(slot+8))->func_00198F50(&b,&c,0,1,0);
        ((Obj3EB20*)*(void**)(*(char**)(self+0x564)+8))->func_0019AC50();
        slot=*(char**)(self+0x564);
        if(*(int*)slot==3 || *(int*)slot==5) {
            ((Obj3EB20*)*(void**)(slot+12))->func_00198F50(&b,&c,0,1,0);
            ((Obj3EB20*)*(void**)(*(char**)(self+0x564)+12))->func_0019AC50();
        }
    }
    if(type==0 || type>=3) *(float*)(self+0x4b0)=a.y+height;
    if(a0 && p.x==a.x && p.y==a.y && p.z==a.z &&
       func_000262C0(&q,&b) && func_000262C0(&r,&c))
        ((Obj3EB20*)*(void**)(self+0x53c))->func_001A4100(1,1,0);
    if(**(int**)(self+0x564)==1)a.y-=*(float*)(self+0x4c0);
    *(V4*)(self+0x938)=a;
    ((Obj3EB20*)*(void**)(*(char**)(self+0x564)+8))->func_00197E70((V4*)(self+0x928));
    *(float*)(self+0x918)=D_00276CA8;
    *(int*)(self+0x924)=1;
    ((Obj3EB20*)self)->func_000363E0(*(V4*)(self+0x4ac));
    *(int*)(*(char**)(*(char**)(self+0x44)+0x5c)+4)=1;
}
