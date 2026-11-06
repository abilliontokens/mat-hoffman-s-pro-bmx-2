/* 1 function from 0x000F63D0 to 0x000F7400, found by Ghidra. */
#include "common.h"
struct ElemF63 {
 void func_001B2270(unsigned int);
 void func_001B1B30(float,int);
 void func_001B1860(int,float,int,float,int,int,float,int,float,int,float,float,int);
};
struct C_000F63D0 {
 char pad0[0x2a4]; int f2A4; char pad2A8[0x30];
 ElemF63 *items[23];
 void func_000CA940(); void func_000C9860(); void func_000C98D0();
 void func_000CA9B0(); void func_000CAA10(); void func_000CA8D0();
 void func_000F63D0();
};

void C_000F63D0::func_000F63D0() {
func_000CA940();func_000C9860();func_000C98D0();func_000CA9B0();func_000CAA10();func_000CA8D0();
if(f2A4==1){
items[7]->func_001B2270(0xffbfa35a);
items[7]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
items[21]->func_001B2270(0xffbfa35a);
items[21]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
items[8]->func_001B2270(0xffcccccc);
items[8]->func_001B1B30(1.15f,0);
items[8]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[22]->func_001B2270(0xffcccccc);
items[22]->func_001B1B30(1.15f,0);
items[22]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[5]->func_001B2270(0xffcccccc);
items[5]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[0]->func_001B2270(0xffcccccc);
items[0]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[9]->func_001B2270(0xffcccccc);
items[9]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[1]->func_001B2270(0xffcccccc);
items[1]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[10]->func_001B2270(0xffcccccc);
items[10]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[19]->func_001B2270(0xffcccccc);
items[19]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[11]->func_001B2270(0xffcccccc);
items[11]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[2]->func_001B2270(0xffcccccc);
items[2]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} else if(f2A4==2){
items[8]->func_001B2270(0xffbfa35a);
items[8]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
items[22]->func_001B2270(0xffbfa35a);
items[22]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
items[7]->func_001B2270(0xffcccccc);
items[7]->func_001B1B30(1.15f,0);
items[7]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[21]->func_001B2270(0xffcccccc);
items[21]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[5]->func_001B2270(0xffcccccc);
items[5]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[0]->func_001B2270(0xffcccccc);
items[0]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[9]->func_001B2270(0xffcccccc);
items[9]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[1]->func_001B2270(0xffcccccc);
items[1]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[10]->func_001B2270(0xffcccccc);
items[10]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[19]->func_001B2270(0xffcccccc);
items[19]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[11]->func_001B2270(0xffcccccc);
items[11]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[2]->func_001B2270(0xffcccccc);
items[2]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} else if(f2A4==0){
items[5]->func_001B2270(0xffbfa35a);
items[5]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
items[0]->func_001B2270(0xffbfa35a);
items[0]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
items[9]->func_001B2270(0xffcccccc);
items[9]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[1]->func_001B2270(0xffcccccc);
items[1]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[10]->func_001B2270(0xffcccccc);
items[10]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[19]->func_001B2270(0xffcccccc);
items[19]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
int i=0; do {
items[21+i]->func_001B2270(0xffcccccc);
items[21+i]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} while(++i<2);
items[8]->func_001B2270(0xffcccccc);
items[8]->func_001B1B30(1.15f,0);
items[8]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[7]->func_001B2270(0xffcccccc);
items[7]->func_001B1B30(1.15f,0);
items[7]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[11]->func_001B2270(0xffcccccc);
items[11]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[2]->func_001B2270(0xffcccccc);
items[2]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} else if(f2A4==3){
items[0]->func_001B2270(0xffcccccc);
items[0]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[5]->func_001B2270(0xffcccccc);
items[5]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[1]->func_001B2270(0xffbfa35a);
items[1]->func_001B1860(0,-1,0,1.0f,0,0,0,255,1.45f,0,0.25f,0,0);
items[9]->func_001B2270(0xffbfa35a);
items[9]->func_001B1860(0,-1,0,1.0f,0,0,0,255,1.45f,0,0.25f,0,0);
items[19]->func_001B2270(0xffcccccc);
items[19]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[10]->func_001B2270(0xffcccccc);
items[10]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
int i=0; do {
items[21+i]->func_001B2270(0xffcccccc);
items[21+i]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} while(++i<2);
items[8]->func_001B2270(0xffcccccc);
items[8]->func_001B1B30(1.15f,0);
items[8]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[7]->func_001B2270(0xffcccccc);
items[7]->func_001B1B30(1.15f,0);
items[7]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[2]->func_001B2270(0xffcccccc);
items[2]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[11]->func_001B2270(0xffcccccc);
items[11]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} else if(f2A4==4){
items[5]->func_001B2270(0xffcccccc);
items[5]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[0]->func_001B2270(0xffcccccc);
items[0]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[1]->func_001B2270(0xffcccccc);
items[1]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[9]->func_001B2270(0xffcccccc);
items[9]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[10]->func_001B2270(0xffbfa35a);
items[10]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
items[19]->func_001B2270(0xffbfa35a);
items[19]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
int i=0; do {
items[21+i]->func_001B2270(0xffcccccc);
items[21+i]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} while(++i<2);
items[8]->func_001B2270(0xffcccccc);
items[8]->func_001B1B30(1.15f,0);
items[8]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[8]->func_001B2270(0xffcccccc);
items[8]->func_001B1B30(1.15f,0);
items[8]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[7]->func_001B2270(0xffcccccc);
items[7]->func_001B1B30(1.15f,0);
items[7]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[11]->func_001B2270(0xffcccccc);
items[11]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[2]->func_001B2270(0xffcccccc);
items[2]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} else {
items[5]->func_001B2270(0xffcccccc);
items[5]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[0]->func_001B2270(0xffcccccc);
items[0]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[9]->func_001B2270(0xffcccccc);
items[9]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[1]->func_001B2270(0xffcccccc);
items[1]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[10]->func_001B2270(0xffcccccc);
items[10]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[19]->func_001B2270(0xffcccccc);
items[19]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
int i=0; do {
items[21+i]->func_001B2270(0xffcccccc);
items[21+i]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
} while(++i<2);
items[8]->func_001B2270(0xffcccccc);
items[8]->func_001B1B30(1.15f,0);
items[8]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[7]->func_001B2270(0xffcccccc);
items[7]->func_001B1B30(1.15f,0);
items[7]->func_001B1860(0,-1,0,1.15f,0,0,0,255,1.15f,0,0.25f,0,0);
items[11]->func_001B2270(0xffbfa35a);
items[11]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
items[2]->func_001B2270(0xffbfa35a);
items[2]->func_001B1860(0,-1,0,1.45f,0,0,0,255,1.45f,0,0,0.2f,0);
}
}
