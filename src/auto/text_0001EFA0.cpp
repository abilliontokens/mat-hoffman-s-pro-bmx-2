/* 1 function from 0x0001EFA0 to 0x000212A0, found by Ghidra. */
#include "common.h"
struct AirVec { float x,y,z,w; };
struct AirMotion { void func_00197B40(AirVec*,AirVec*); };
struct AirBody {
 char pad0[0x140]; AirVec position;
 char pad150[0x22c-0x150]; AirMotion *motion; char pad230[0x268-0x230]; AirVec velocity;
};
struct BmxAirborneControlModel {
 char pad0[0x24]; AirBody *body; void *rider; int active; int f30; int f34; int f38;
 char pad3c[0x50-0x3c]; int f50; int f54; char pad58[0x98-0x58]; int f98;
 char pad9c[0xdc-0x9c]; int fdc,fe0,fe4,fe8,fec,ff0,ff4,ff8,ffc;
 char pad100[0x118-0x100]; int f118; char pad11c[8]; AirVec f124;
 int func_0001EFA0(void*);
};
extern AirVec D_002A0E84;
extern float D_002A0E78;
