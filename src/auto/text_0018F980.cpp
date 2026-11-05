/* 4 functions from 0x0018F980 to 0x001904E0, found by Ghidra. */
#include "common.h"
struct S { char pad[0x158]; char *p158; };
int __stdcall func_0018E7D0(int, char *, int *);
void __stdcall func_0018F4D0(int);
#include <string.h>
struct Node0018FF10 { char name[0x10c]; Node0018FF10 *next; };
struct Ent0018FF10 { char pad[0x48]; Node0018FF10 *node; char pad2[0x60 - 0x4c]; };
struct C_0013C9F0 { int func_0013C9F0(char *, char *); };
extern C_0013C9F0 *D_002BEAAC;
extern char D_00275630[];
extern char D_00275FB4[];
void *func_001E8A44(int size);
void func_001E891B(void *p);
void *func_001E8920(void *, const void *, int);
struct C_0018FF10 {
    char pad[0x150];
    Node0018FF10 *head;
    Node0018FF10 *tail;
    Ent0018FF10 *ents;
    int func_0018EB70(int, char *, Node0018FF10 *);
    int func_0018FF10(char *src, char *name, int idx, int *out);
};
