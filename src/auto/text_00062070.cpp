/* 1 function from 0x00062070 to 0x00062CD0, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
#include "asm_helpers.h"

static __forceinline float Min_00062070(float a, float b) { float r; _mm_store_ss(&r, _mm_min_ss(_mm_load_ss(&a), _mm_load_ss(&b))); return r; }

struct V4_62070 { float x, y, z, w; };
extern float D_002A1D04;
extern float D_00275460;
extern float D_002755EC;
extern V4_62070 D_002A1D98, D_002A1DA8, D_002A1DB8;
extern V4_62070 D_002A1DE8, D_002A1DF8, D_002A1E08;
struct C_Elem_62070 {
    char pad0[4];
    float f4;
    float f8;
    char padC[0x1C];
    float f28;
    float f2C;
    float f30;
    float f34;
    char pad38[0x20];
    unsigned char f58;
    void func_0005E7C0(float, float);
    __forceinline void pos(float x,float y) { if(f4!=x || f8!=y) {f4=x;f8=y;f58|=1;} }
    __forceinline void size(float z) { if(f2C!=z) {f2C=z;f58|=1;} if(f28!=z) {f28=z;f58|=1;} }
    __forceinline void layer(float z) { if(*(int *)&f34!=*(int *)&z) {f34=z;f58|=1;} }
};
extern V4_62070 D_002A1D88, D_002A1DD8, D_002A1D10;
extern float D_002A1E28, D_002A1E2C, D_002A1E30, D_002A1E34, D_002755E8, D_00278650, D_00278788, D_00278784;
struct S_62070_Control { void func_00052C10(int); };
struct C_00062070 {
    char pad0[0x12C];
    C_Elem_62070 *f12C[30];
    C_Elem_62070 *f1A4[32];
    int f224;
    int f228;
    int f22C;
    char pad230[0x234 - 0x230];
    float f234;
    char pad238[0x284 - 0x238];
    int f284;
    float func_0012BAE0(float t, float p0, float p1, float p2, float p3);
    void func_00062070(int a);
};

void C_00062070::func_00062070(int a)
{
 if(f224<=1 || !f22C) return;
 if(f234==D_002A1D04) f22C=0;
 float inv=D_00275460/D_002A1D04;
 AsmFloatToInt(inv*f234*D_002755EC,&f284);
 float m=AsmMinF(1.0f,inv*f234);
 V4_62070 v,w;
 if(f224==2) {w=D_002A1DE8;v=D_002A1D98;}
 else if(f224==3) {w=D_002A1DF8;v=D_002A1DA8;}
 else {w=D_002A1E08;v=D_002A1DB8;}
 float dy=w.y-D_002A1DD8.y, vy=v.y-D_002A1D88.y;
 float z[4],q[4];
 z[0]=D_002A1D10.x*D_002A1D88.z;z[1]=D_002A1D10.y*D_002A1D88.z;z[2]=D_002A1D10.z*D_002A1D88.z;z[3]=D_002A1D10.w*v.z;
 q[0]=D_002A1DD8.z*D_002A1D10.x;q[1]=D_002A1DD8.z*D_002A1D10.y;q[2]=D_002A1DD8.z*D_002A1D10.z;q[3]=w.z*D_002A1D10.w;
 v.x=w.x=D_002A1E28;v.y=w.y=D_002A1E2C;v.z=w.z=D_002A1E30;
 v.w=w.w=(f224-1)*D_002A1E34;
 int i=f284, i0=i-1,i2=i+1,i3=i+2;
 float tt=inv*f234*D_002755EC-i;
 if(i==0)i0=0;else if(i==2)i3=i2;else if(i==3)i2=i3=i;
 float x=func_0012BAE0(tt,((float*)&w)[i0],((float*)&v)[i],((float*)&v)[i2],((float*)&v)[i3]);
 float y=func_0012BAE0(tt,((float*)&v)[i0],((float*)&w)[i],((float*)&w)[i2],((float*)&w)[i3]);
 volatile float zs=func_0012BAE0(tt,z[i0],z[i],z[i2],z[i3]);
 volatile float qs=func_0012BAE0(tt,q[i0],q[i],q[i2],q[i3]);
 x+=D_00278788-zs*D_00278650;
 y+=D_00278788-qs*D_00278650;
 f12C[f228]->pos(x,D_002A1D88.y+vy*m);
 f12C[f228]->size(zs*D_00278784);
 f1A4[f228]->pos(y,D_002A1DD8.y+dy*m);
 f1A4[f228]->size(qs*D_00278784);
 if(m>=D_002755E8){f12C[f228]->layer(7.0f);f1A4[f228]->layer(8.0f);}
 int n=f228+1;if(n>=f224)n=0;
 if(n!=f228) {
 V4_62070 l,r;
 l.x=(D_002A1D88.x-D_002A1D98.x)*m+D_002A1D98.x;l.y=(D_002A1D88.y-D_002A1D98.y)*m+D_002A1D98.y;l.z=(D_002A1D88.z-D_002A1D98.z)*m+D_002A1D98.z;
 r.x=(D_002A1DD8.x-D_002A1DE8.x)*m+D_002A1DE8.x;r.y=(D_002A1DD8.y-D_002A1DE8.y)*m+D_002A1DE8.y;r.z=(D_002A1DD8.z-D_002A1DE8.z)*m+D_002A1DE8.z;
 f12C[n]->pos(l.x,l.y);
 f12C[n]->size(l.z*D_00278784);
 f1A4[n]->pos(r.x,r.y);
 f1A4[n]->size(r.z*D_00278784);
 if(m>=D_002755E8){f12C[n]->layer(1.0f);f1A4[n]->layer(2.0f);}
 if(++n>=f224)n=0;
 }
 if(n!=f228) {
 V4_62070 l,r;
 l.x=(D_002A1D98.x-D_002A1DA8.x)*m+D_002A1DA8.x;l.y=(D_002A1D98.y-D_002A1DA8.y)*m+D_002A1DA8.y;l.z=(D_002A1D98.z-D_002A1DA8.z)*m+D_002A1DA8.z;
 r.x=(D_002A1DE8.x-D_002A1DF8.x)*m+D_002A1DF8.x;r.y=(D_002A1DE8.y-D_002A1DF8.y)*m+D_002A1DF8.y;r.z=(D_002A1DE8.z-D_002A1DF8.z)*m+D_002A1DF8.z;
 f12C[n]->func_0005E7C0(l.x,l.y);
 f12C[n]->size(l.z*D_00278784);
 f1A4[n]->func_0005E7C0(r.x,r.y);
 f1A4[n]->size(r.z*D_00278784);
 if(m>=D_002755E8){f12C[n]->layer(3.0f);f1A4[n]->layer(4.0f);}
 if(++n>=f224)n=0;
 }
 if(n!=f228) {
 V4_62070 l,r;
 l.x=(D_002A1DA8.x-D_002A1DB8.x)*m+D_002A1DB8.x;l.y=(D_002A1DA8.y-D_002A1DB8.y)*m+D_002A1DB8.y;l.z=(D_002A1DA8.z-D_002A1DB8.z)*m+D_002A1DB8.z;
 r.x=(D_002A1DF8.x-D_002A1E08.x)*m+D_002A1E08.x;r.y=(D_002A1DF8.y-D_002A1E08.y)*m+D_002A1E08.y;r.z=(D_002A1DF8.z-D_002A1E08.z)*m+D_002A1E08.z;
 f12C[n]->func_0005E7C0(l.x,l.y);
 f12C[n]->size(l.z*D_00278784);
 f1A4[n]->func_0005E7C0(r.x,r.y);
 f1A4[n]->size(r.z*D_00278784);
 if(m>=D_002755E8){f12C[n]->layer(5.0f);f1A4[n]->layer(6.0f);}
 
 }
 if(!f22C){f234=0;f284=0;++f228;((S_62070_Control *)f1A4[11])->func_00052C10(0);if(f228>=f224)f228=0;}
 else {f234+=*(float *)&a;if(f234>=D_002A1D04)f234=D_002A1D04;}
}
