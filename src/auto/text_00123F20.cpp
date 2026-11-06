/* 1 function from 0x00123F20 to 0x00124760, found by Ghidra. */
#include "common.h"
struct Vec4 {
 float x,y,z,w;
 Vec4(){z=0;y=0;x=0;w=1;}
 Vec4(float a,float b,float c){x=a;y=b;z=c;w=1;}
 Vec4 &operator=(const Vec4 &v){((int*)this)[0]=((const int*)&v)[0];((int*)this)[1]=((const int*)&v)[1];((int*)this)[2]=((const int*)&v)[2];((int*)this)[3]=((const int*)&v)[3];return *this;}
 Vec4 operator*(float s)const{return Vec4(x*s,y*s,z*s);}
 Vec4 operator+(const Vec4 &b)const{return Vec4(x+b.x,y+b.y,z+b.z);}
};
extern float D_00275460;
void func_0011EFA0(Vec4 *,const Vec4 *);
static __forceinline float Fabs(volatile float f){int i=*(volatile int*)&f&0x7fffffff;return *(float*)&i;}
static __forceinline void Slice(Vec4 *P,Vec4 *N,const Vec4 *p,const Vec4 *a,const Vec4 *b,const Vec4 *c,const Vec4 *na,const Vec4 *nb,const Vec4 *nc,int k,const Vec4 **v,const Vec4 **vn){
 int count=0;
 const float *pa=&p->x,*va=&a->x,*vb=&b->x,*vc=&c->x;
 if(va[k]!=vb[k]&&((va[k]<=pa[k]&&vb[k]>=pa[k])||(va[k]>=pa[k]&&vb[k]<=pa[k]))){v[0]=a;v[1]=b;vn[0]=na;vn[1]=nb;count=2;}
 if(vb[k]!=vc[k]&&((vb[k]<=pa[k]&&vc[k]>=pa[k])||(vb[k]>=pa[k]&&vc[k]<=pa[k]))){v[count]=b;v[count+1]=c;vn[count]=nb;vn[count+1]=nc;count+=2;}
 if(vc[k]!=va[k]&&((vc[k]<=pa[k]&&va[k]>=pa[k])||(vc[k]>=pa[k]&&va[k]<=pa[k]))){v[count]=c;v[count+1]=a;vn[count]=nc;vn[count+1]=na;}
 float t=(pa[k]-(&v[0]->x)[k])/((&v[1]->x)[k]-(&v[0]->x)[k]);float s=D_00275460-t;
 P[0]=*v[1]*t+*v[0]*s;N[0]=*vn[1]*t+*vn[0]*s;
 t=(pa[k]-(&v[2]->x)[k])/((&v[3]->x)[k]-(&v[2]->x)[k]);s=D_00275460-t;
 P[1]=*v[3]*t+*v[2]*s;N[1]=*vn[3]*t+*vn[2]*s;
}
#include <math.h>
