/* 1 function from 0x0001EFA0 to 0x000212A0, found by Ghidra. */
#include "common.h"
struct AirVec { float x,y,z,w; };
struct AirMotion { void func_00197B40(AirVec*,AirVec*); };
struct AirBody {
 char pad0[0x8c]; float speed; float f90,f94; char pad98[0x140-0x98]; AirVec position;
 char pad150[0x22c-0x150]; AirMotion *motion; char pad230[8]; AirVec direction; AirVec f248;
 char pad258[0x10]; AirVec velocity;
 void func_0001C710(AirVec);
};
struct BmxAirborneControlModel {
 char pad0[0x24]; AirBody *body; void *rider; int active; int f30; int f34; int f38;
 int f3c,f40,f44,f48,f4c,f50,f54;
 float f58,f5c,f60,f64,f68,f6c,f70,f74,f78,f7c,f80,f84,f88,f8c,f90,f94; int f98;
 AirVec normal; int fac; char padb0[0xdc-0xb0]; int fdc,fe0,fe4,fe8; float fec,ff0; int ff4,ff8,ffc;
 char pad100[0x118-0x100]; int f118; char pad11c[8]; AirVec f124;
 int func_0001EFA0(float);
};
extern AirVec D_002A0E84;
extern float D_002A0E78, D_00275994, D_002760A0, D_002A0E74, D_00275544;
AirVec *func_000110B0(AirVec*,AirVec*);
AirVec *func_0001C5E0(AirVec*,float,AirVec*);
