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
