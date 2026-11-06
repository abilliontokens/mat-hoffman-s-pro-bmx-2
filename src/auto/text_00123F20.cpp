/* 1 function from 0x00123F20 to 0x00124760, found by Ghidra. */
#include "common.h"
struct Vec4 {
 float x,y,z,w;
 Vec4(){z=0;y=0;x=0;w=1;}
 Vec4(float a,float b,float c){x=a;y=b;z=c;w=1;}
 Vec4(float a,float b,float c,float d){x=a;y=b;z=c;w=d;}
 Vec4 operator*(float s)const{return Vec4(x*s,y*s,z*s);}
 Vec4 operator+(const Vec4 &b)const{return Vec4(x+b.x,y+b.y,z+b.z);}
};
extern float D_00275460;
void func_0011EFA0(Vec4 *,const Vec4 *);
static __forceinline float Fabs(volatile float f){volatile int i=*(volatile int*)&f&0x7fffffff;return *(volatile float*)&i;}
static __forceinline void Slice(Vec4 *P,Vec4 *N,const Vec4 *p,const Vec4 *a,const Vec4 *b,const Vec4 *c,const Vec4 *na,const Vec4 *nb,const Vec4 *nc,int k,const Vec4 **v,const Vec4 **vn){
 int count=0;
 const float *pa=&p->x,*va=&a->x,*vb=&b->x,*vc=&c->x;
 if(va[k]!=vb[k]&&((va[k]<=pa[k]&&vb[k]>=pa[k])||(va[k]>=pa[k]&&vb[k]<=pa[k]))){v[0]=a;v[1]=b;vn[0]=na;vn[1]=nb;count=2;}
 if(vb[k]!=vc[k]&&((vb[k]<=pa[k]&&vc[k]>=pa[k])||(vb[k]>=pa[k]&&vc[k]<=pa[k]))){v[count]=b;v[count+1]=c;vn[count]=nb;vn[count+1]=nc;count+=2;}
 if(vc[k]!=va[k]&&((vc[k]<=pa[k]&&va[k]>=pa[k])||(vc[k]>=pa[k]&&va[k]<=pa[k]))){v[count]=c;v[count+1]=a;vn[count]=nc;vn[count+1]=na;}
  float t,s;
 int i;
 for(i=0;i<2;i++){
  Vec4 A,B,C,D;
  t=(pa[k]-(&v[2*i]->x)[k])/((&v[2*i+1]->x)[k]-(&v[2*i]->x)[k]);
  s=D_00275460-t;
  A=*v[2*i]*s;
  B=*v[2*i+1]*t;
  P[i]=B+A;
  C=*vn[2*i]*s;
  D=*vn[2*i+1]*t;
  N[i]=D+C;
 }
 }
#include <math.h>

void func_00123F20(Vec4*out,const Vec4*p,const volatile Vec4*n,const Vec4*a,const Vec4*b,const Vec4*c,const Vec4*na,const Vec4*nb,const Vec4*nc){Vec4 N[2],P[2];const Vec4 *v[4],*vn[4];float t;if(Fabs(n->x)>Fabs(n->z)){Slice(P,N,p,a,b,c,na,nb,nc,2,v,vn);if(Fabs(n->y)>Fabs(n->x))t=(p->x-P[0].x)/(P[1].x-P[0].x);else t=(p->y-P[0].y)/(P[1].y-P[0].y);}else{Slice(P,N,p,a,b,c,na,nb,nc,0,v,vn);if(Fabs(n->y)>Fabs(n->z))t=(p->z-P[0].z)/(P[1].z-P[0].z);else t=(p->y-P[0].y)/(P[1].y-P[0].y);}*out=N[1]*t+N[0]*(D_00275460-t);func_0011EFA0(out,out);}
