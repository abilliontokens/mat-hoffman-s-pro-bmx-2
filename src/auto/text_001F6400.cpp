/* 4 functions from 0x001F6400 to 0x001F6569, found by Ghidra. */
#include "common.h"

extern "C" void (__fastcall *_imp__IofCompleteRequest)(void *irp, char priorityBoost);

struct S_ListEntry_F64 {
    S_ListEntry_F64 *Flink;
    S_ListEntry_F64 *Blink;
};

/* IRP as the IDE channel queue sees it: the queue entry sits at +0x3c */
struct S_IrpF64 {
    char pad0[4];
    unsigned char f4;
    unsigned char f5;
    char pad6[0x36];
    S_ListEntry_F64 ListEntry;
    char pad44[0x1c];
    void *f60;
};

extern "C" void *_imp__IoFileObjectType;
extern "C" char *_imp__IdexChannelObject;
extern "C" long (__stdcall *_imp__ObReferenceObjectByHandle)(void *handle, void *type, void **object);
extern "C" unsigned char (__stdcall *_imp__KeRaiseIrqlToDpcLevel)(void);
extern "C" void (__fastcall *_imp__KfLowerIrql)(unsigned char irql);
extern "C" void (__stdcall *_imp__KeInitializeDpc)(void *dpc, void *routine, void *context);
extern "C" int (__stdcall *_imp__KeInsertQueueDpc)(void *dpc, void *arg1, void *arg2);
extern "C" void (__fastcall *_imp__ObfDereferenceObject)(void *object);

#define IDEX_QUEUE ((S_ListEntry_F64 *)(_imp__IdexChannelObject + 0x28))

void __stdcall func_001DD659(int code);
void __stdcall func_001F6400(int a0, S_ListEntry_F64 *head, int a2, int a3);

int __stdcall func_001F64F6(char *lp, unsigned int cb);

#pragma optimize("t", off)

void __stdcall func_001F6400(int a0, S_ListEntry_F64 *head, int a2, int a3)
{
    S_ListEntry_F64 *e = head->Flink;
    while (e != head) {
        char *irp = (char *)e - 0x3c;
        e = e->Flink;
        *(long *)(irp + 0x10) = 0xc0000120;
        _imp__IofCompleteRequest(irp, 0);
    }
}

int __stdcall func_001F64F6(char *lp, unsigned int cb)
{
    char *start;
    char *end;
    if (cb != 0) {
        if (lp == 0) {
            return 1;
        }
        start = lp;
        end = start + cb - 1;
        if (end < start) {
            return 1;
        }
        __try {
            *(volatile char *)start;
            start = (char *)((unsigned int)start & ~0xfff);
            end = (char *)((unsigned int)end & ~0xfff);
            while (start != end) {
                start += 0x1000;
                *(volatile char *)start;
            }
        } __except (1) {
            return 1;
        }
    }
    return 0;
}

int __stdcall func_001F655B(char *lp)
{
    return func_001F64F6(lp, 1);
}
