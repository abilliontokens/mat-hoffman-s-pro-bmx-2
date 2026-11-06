/* 1 function from 0x0001EFA0 to 0x000212A0, found by Ghidra. */
#include "common.h"
struct AirVec { float x,y,z,w; void func_0001C5B0(AirVec*); };
struct AirMotion { void func_00197B40(AirVec*,AirVec*); };
struct AirBody {
 char pad0[0x8c]; float speed; float f90,f94; char pad98[0x140-0x98]; AirVec position;
 char pad150[0x210-0x150]; float f210; char pad214[0x18]; AirMotion *motion; char pad230[8]; AirVec direction; AirVec f248;
 char pad258[0x10]; AirVec velocity;
 void func_0001C710(AirVec);
};
struct AirRider {
 char pad0[0x1e8]; char *matrix; char pad1ec[0x490-0x1ec]; int f490; char pad494[0x60]; int f4f4,f4f8;
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
float func_0014F550(float);
float func_0014F510(float);
AirVec *func_000110E0(AirVec*,AirVec*,AirVec*);
