/* 1 function from 0x000562C0 to 0x000590F0, found by Ghidra. */
#include "common.h"
#include "asm_helpers.h"

struct V4_000562C0 { float x, y, z, w; };
struct V4s_000562C0 : V4_000562C0 {
    V4s_000562C0() { z = 0.0f; y = 0.0f; x = 0.0f; w = 1.0f; }
};

extern void *D_002A7CB8;
extern float D_00277F44;
extern float D_00275460;
extern float D_00277D04;
extern float D_002A1A64, D_002A1A68, D_002A1A6C;
extern float D_002A1A84, D_002A1A88, D_002A1A8C, D_002A1A90;

void *__fastcall func_00026500(void *self, int guard, void *a, int b);
void __fastcall func_00108B00(void *self, V4_000562C0 *out);
void __fastcall func_001089C0(void *self, V4_000562C0 *out);
void __fastcall func_00199A70(void *self, int a, V4_000562C0 *out);
void __fastcall func_001994C0(void *self, int a, V4_000562C0 *b, V4_000562C0 *c);
void __fastcall func_000560A0(void *self);
void func_000110B0(void);
void func_0001EAB0(float *a, float *b, float *c);
void func_00158390(float *a, V4_000562C0 *b, V4_000562C0 *c, float *d);

void __fastcall _func_000562C0(void* self, int, float dt)
{
}
