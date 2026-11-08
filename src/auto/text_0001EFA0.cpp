/* 1 function from 0x0001EFA0 to 0x000212A0, found by Ghidra. */
#include "common.h"
struct AirVec { float x,y,z,w; void func_0001C5B0(AirVec*); };
struct AirMotion { void func_00197B40(AirVec*,AirVec*); };
struct AirBody {
 char pad0[0x8c]; float speed; float f90,f94; char pad98[0x140-0x98]; AirVec position;
 char pad150[0x210-0x150]; float f210; char pad214[0x18]; AirMotion *motion; char pad230[8]; AirVec direction; AirVec f248;
 AirVec f258; AirVec velocity;
 void func_0001C710(AirVec);
};
struct AirPhysics { char pad0[0x2c]; float f2c; };
struct AirRider {
 char pad0[0x1e4]; AirPhysics *physics; char *matrix; char pad1ec[0x490-0x1ec]; int f490; char pad494[0x60]; int f4f4,f4f8; char pad4fc[0x684-0x4fc]; int f684;
 void func_00027C50(float);
};
struct BmxAirborneControlModel {
 char pad0[0x24]; AirBody *body; AirRider *rider; int active; int f30; int f34; int f38;
 int f3c,f40,f44,f48,f4c,f50,f54;
 float f58,f5c,f60,f64,f68,f6c,f70,f74,f78,f7c,f80,f84,f88,f8c,f90,f94; int f98;
 AirVec normal; int fac; char padb0[0xdc-0xb0]; int fdc,fe0,fe4,fe8; float fec,ff0; int ff4,ff8,ffc;
 float f100; AirVec f104; int f114,f118; char pad11c[8]; AirVec f124;
 int func_0001EFA0(float);
};
extern AirVec D_002A0E84,D_002B7DF8,D_002B7DE8,D_002B7DD8,D_002B7DC8;
extern float D_002A0E88, D_002A0E8C, D_002A0E90;
extern int D_002B7E08,D_002A0E70;
extern float D_002755F4;
AirVec *func_0001E9E0(AirVec*,AirVec*);
extern float D_002A0E78, D_00275994, D_002760A0, D_002A0E74, D_00275544;
AirVec *func_000110B0(AirVec*,AirVec*);
AirVec *func_0001C5E0(AirVec*,float,AirVec*);
extern float D_002756DC,D_00275F64,D_002A0E34,D_00276080;
extern AirVec D_002A0EA4;
extern float D_002A0E6C,D_002A0E68,D_002B7DC4,D_002A0E64,D_002A0E60,D_002A0E5C;
AirVec *func_0001C610(AirVec*,AirVec*,AirVec*);
float func_0014F7E0(float);
float func_00011170(AirVec*);
extern float D_002A0E58,D_00275460,D_002A0E54,D_002755EC,D_002A0E50;
extern float D_002B7DBC,D_002B7DB8,D_002B7DC0;
float func_00011000(float);
float func_0014F550(float);
float func_0014F510(float);
AirVec *func_000110E0(AirVec*,AirVec*,AirVec*);

int BmxAirborneControlModel::func_0001EFA0(float dt) {
 AirVec v={0,0,0,1},w={0,0,0,1};
 f54=0; f124=D_002A0E84;
 if(active) {
 body->motion->func_00197B40(&v,&w);
 if(f38) {
 AirBody *p=body;
 float delta[3];
 delta[0]=D_002A0E78*p->velocity.x;
 delta[1]=D_002A0E78*p->velocity.y;
 delta[2]=D_002A0E78*p->velocity.z;
 p->position.x+=delta[0]; p->position.y+=delta[1]; p->position.z+=delta[2];
 f98=0; f118=0; ff8=0;
 return 1;
 }
 if(f34 && !f50) {
 if(fe0) { fdc=1; fe4=1; fec=0; ff0=0; }
 f98=0; ff4=0; ff8=0; ffc=0; f118=0;
 return 1;
 }
 AirVec force=D_002A0E84;
 volatile float multiplier=1;
 if(f48) {
 force.x=(f78*body->speed-body->velocity.x)*f7c*D_00275994;
 force.y=0;force.z=0;
 float speed=body->speed; *(u32*)&speed &= 0x7fffffff;
 if(speed>D_002760A0) {
 AirVec tmp,scaled;
 func_000110B0(&tmp,&normal);
 body->func_0001C710(*func_0001C5E0(&scaled,f84,&tmp));
 }
 float dot=body->direction.y*normal.y+body->direction.x*normal.x+body->direction.z*normal.z;
 volatile float x=dot*normal.x,z=dot*normal.z;
 AirVec damping;
 damping.x=(body->direction.x-x)*D_002A0E74;
 damping.y=D_002A0E74*D_00275544;
 damping.z=(body->direction.z-z)*D_002A0E74; damping.w=1;
 body->func_0001C710(damping);
 }
 else if(f50) {
 if(!(D_002B7E08&1)) { D_002B7E08|=1;D_002B7DF8=D_002A0E84; }
 if(f34) {
 ffc=0;
 if(fe0) { fdc=1; fec=0; }
 rider->f490=0;
 if(ff8) { rider->func_00027C50(0.5f);ff8=0; }
 AirVec src=*(AirVec*)(rider->matrix+0x190),out;
 AirVec direction=*func_0001E9E0(&out,&src);
 if(direction.y>=D_002755F4 && direction.y>D_00275F64) { D_002B7DF8=direction;ff4=1; }
 } else {
 if(!(D_002B7E08&2)) { D_002B7E08|=2;D_002B7DE8.x=D_002B7DE8.y=D_002B7DE8.z=0;D_002B7DE8.w=1; }
 if(!(D_002B7E08&4)) { D_002B7E08|=4;D_002B7DD8.x=D_002B7DD8.y=D_002B7DD8.z=0;D_002B7DD8.w=1; }
 if(!(D_002B7E08&8)) { D_002B7E08|=8;D_002B7DC8.x=D_002B7DC8.y=D_002B7DC8.z=0;D_002B7DC8.w=1; }
 if(ff4) {
 if(ffc<D_002A0E70) ++ffc;
 if(ffc>=D_002A0E70) {
 ff4=0;
 AirVec t0,t1,t2,t3;
 D_002B7DE8=*func_0001E9E0(&t1,func_0001C610(&t0,&D_002A0EA4,&D_002B7DF8));
 D_002B7DD8=*func_0001E9E0(&t3,func_0001C610(&t2,&D_002A0EA4,&D_002B7DE8));
 AirVec velocity=body->direction;
 float dot=velocity.y*D_002B7DE8.y+velocity.x*D_002B7DE8.x+velocity.z*D_002B7DE8.z;
 velocity.func_0001C5B0(func_0001C5E0(&t0,dot,&D_002B7DE8));
 AirVec dir=*func_0001E9E0(&t1,&velocity);
 float angle=func_0014F7E0(D_002A0EA4.x*dir.x+D_002A0EA4.y*dir.y+D_002A0EA4.z*dir.z);
 if(angle<=D_002A0E6C) {
 AirVec b={0,0,0,1},c={0,0,0,1};
 body->motion->func_00197B40(&b,&c);
 b=*func_0001E9E0(&t1,&b);
 dot=b.y*D_002B7DE8.y+b.x*D_002B7DE8.x+b.z*D_002B7DE8.z;
 b.func_0001C5B0(func_0001C5E0(&t0,dot,&D_002B7DE8));
 angle=func_0014F7E0(D_002A0EA4.x*b.x+D_002A0EA4.y*b.y+D_002A0EA4.z*b.z);
 if(angle<=D_002A0E68) {
 D_002B7DC4=func_00011170(&velocity);
 if(D_002B7DC4<=D_002A0E64) D_002B7DC4=D_002A0E64;
 if(rider->f4f8||rider->f4f4) D_002B7DC4*=D_002A0E60;
 D_002B7DC8=*func_000110E0(&t2,func_0001C5E0(&t0,func_0014F510(D_002A0E5C),&D_002B7DD8),func_0001C5E0(&t1,func_0014F550(D_002A0E5C),&D_002A0EA4));
 body->direction=*func_0001C5E0(&t3,D_002B7DC4,&D_002B7DC8);
 D_002B7DC0=func_0014F7E0(D_002A0EA4.x*velocity.x+D_002A0EA4.y*velocity.y+D_002A0EA4.z*velocity.z);
 float g=rider->physics->f2c;
 float side=body->direction.y*D_002B7DD8.y+body->direction.x*D_002B7DD8.x;
 float back=body->direction.z*D_002B7DD8.z;
 float vertical=body->direction.y;
 D_002B7DBC=(func_00011000((2*g*D_002A0E58)/(vertical*vertical)+D_00275460)+D_00275460)*(vertical/g);
 f100=0;ff8=1;rider->f490=1;body->f258=D_002A0E84;
 D_002B7DB8=((body->f210+side)*D_002B7DBC-D_002A0E54)*g*D_002755EC/(D_002B7DBC*D_002B7DBC*D_002B7DBC);
 }
 }
 }
 }
 }
 }
 if(!f48&&!fac) {
 if(!f4c&&!f50) {
 if(f40) { force.y-=f90*f64; if(fe0) fdc=0; }
 else if(f44) { force.y+=f90*f64; if(fe0) fdc=0; }
 else {
 float abs5c=f5c; *(u32*)&abs5c &= 0x7fffffff;
 if(abs5c>D_002756DC) ff0+=dt; else ff0=0;
 if(ff0>D_00275F64) fe4=0;
 if(fe4 && body->speed>D_00275544)
 force.x+=(f78*body->speed-body->velocity.x)*f7c*D_00275994;
 else force.x-=f6c*f5c;
 float abs58=f58; *(u32*)&abs58 &= 0x7fffffff;
 if(abs58>D_002A0E34&&!f98) f98=f58>D_00275544?2:1;
 }
 } else {
 if(f40) { force.y-=f90*f68; if(fe0) fdc=0; }
 else if(f44) { force.y+=f90*f68; if(fe0) fdc=0; }
 else force.y+=f68*f58;
 }
 }

 float scale=multiplier*((f4c||f50)&&!fdc?f74:f70);
 AirVec velocity;
 velocity.x=scale*body->velocity.x;velocity.y=scale*body->velocity.y;velocity.z=scale*body->velocity.z;
 force.x+=velocity.x;force.y+=velocity.y;force.z+=velocity.z;
 body->position.x+=force.x;body->position.y+=force.y;body->position.z+=force.z;
 float abs58=f58; *(u32*)&abs58 &= 0x7fffffff;
 float absX=v.x; *(u32*)&absX &= 0x7fffffff;
 if(((abs58<=D_002756DC&&absX<=D_00276080)&&(f4c||ff8))||f48||fac) {
 AirBody *p=body;
 float z=(p->f94*f78-p->velocity.z)*f7c*D_00275994;
 p->position.z+=z;
 }
 }
 return 1;
}
