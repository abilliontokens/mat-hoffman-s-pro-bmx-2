/* 1 function from 0x0006AA90 to 0x0006B4B0, found by Ghidra. */
#include "common.h"
#include <string.h>

struct Txt_6AA90 { char* str; float x; float y; char pad[0x38]; int frame; char pad2[6]; unsigned char flags; void func_001D6290(); void func_001D6600(); };
extern int D_0028F5DC;
struct S_6AA90 { char pad[0x90]; Txt_6AA90* objs[2]; char pad2[0x164-0x98]; int unk164; int unk168; char pad3[8]; Txt_6AA90* t174; Txt_6AA90* t178; Txt_6AA90* t17C; int pad180; int unk184; void func_0006AA90(); };
