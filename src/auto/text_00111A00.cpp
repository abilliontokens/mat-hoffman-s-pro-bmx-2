/* 1 function from 0x00111A00 to 0x00111C60, found by Ghidra. */
#include "common.h"
struct FadeManager_11A00 { void func_001C4D50(int); void func_001C4D10(int,int); };
struct Notify_11A00 { void func_00083B20(void*); };
struct BmxVehicle {
 char data[0x2010];
 void func_00111A00();
 void func_00157920();
 void func_0010E6D0();
 void func_0010C090(void*,void*,void*,int);
};
extern char *D_002A8490;
struct Reset_11A00 { int a,b,c,d; };
extern Reset_11A00 D_002A3A3C;
extern int D_002A3A40, D_002A3A44, D_002A3A48;
extern char D_002A3A5C[];
extern "C" int func_00026300(void*,void*);
#define I(p,o) (*(int*)((char*)(p)+(o)))
#define P(p,o) (*(char**)((char*)(p)+(o)))

void BmxVehicle::func_00111A00() {
 int active;
 char *v=P(this,0x950);
 if (I(v,0xbc)==3 || (I(v,0xc0)!=0 && I(v,0xbc)==0)) active=1; else active=0;
 if (I(D_002A8490,0x274)==I(this,0xa2c)) {
 if (active && !I(this,0x1050)) {
 I(this,0x11a8)=0;
startFade:
 if (!(*(unsigned char*)(P(this,0x24)+0x21)&4)) {
 if (I(P(D_002A8490,0x2e0),0)==1)
 ((FadeManager_11A00*)P(P(D_002A8490,0x2a4),0x158))->func_001C4D50(800);
 else ((FadeManager_11A00*)P(P(D_002A8490,0x2a4),0x158))->func_001C4D10(I(this,0xa2c),800);
 I(this,0x1050)=1;
 }
 } else {
 if (!I(this,0x1584) && !I(this,0x1050)) { I(this,0x11a8)=1; goto startFade; }
 if (!active && I(this,0x1584)==-1) goto done;
 func_0010E6D0();
 char *dest=(char*)this+0x2000;
 if (I(this,0x11a8)) {
 if(func_00026300(dest,&D_002A3A3C)) func_0010C090(dest,P(P(D_002A8490,0x2a4),0x24+I(this,0xa2c)*4)+0x180,D_002A3A5C,1);
 else { char *p=P(P(this,0x24),0x4dc)+I(this,0xa2c)*16; func_0010C090(p+0x24,p+0xa4,D_002A3A5C,1); }
 } else {
 if(func_00026300(dest,&D_002A3A3C)) func_0010C090(dest,P(P(D_002A8490,0x2a4),0x24+I(this,0xa2c)*4)+0x180,D_002A3A5C,1);
 else func_0010C090(P(this,0x950)+0x24,P(P(D_002A8490,0x2a4),0x24+I(this,0xa2c)*4)+0x180,D_002A3A5C,0);
 }
 I(this,0x1050)=0;
 if(I(this,0x1584)!=-1) {
 Notify_11A00 *n=(Notify_11A00*)P(P(D_002A8490,0x2a4),0x170+I(this,0xa2c)*4);
 if(n) n->func_00083B20((char*)this+0x1fc4);
 I(this,0x1584)=-1;
 }
 *((char*)this+0x1fc4)=0;
 I(dest,0)=D_002A3A3C.a; I(dest,4)=D_002A3A40; I(dest,8)=D_002A3A44; I(dest,12)=D_002A3A48;
 I(this,0x958)=0x3f000000;
 }
 }
done:
 func_00157920();
}
