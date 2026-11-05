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

#define InitializeListHead(ListHead) \
    ((ListHead)->Flink = (ListHead)->Blink = (ListHead))

#define RemoveEntryList(Entry) { \
    S_ListEntry_F64 *_EX_Blink; \
    S_ListEntry_F64 *_EX_Flink; \
    _EX_Flink = (Entry)->Flink; \
    _EX_Blink = (Entry)->Blink; \
    _EX_Blink->Flink = _EX_Flink; \
    _EX_Flink->Blink = _EX_Blink; \
}

#define InsertTailList(ListHead, Entry) { \
    S_ListEntry_F64 *_EX_Blink; \
    S_ListEntry_F64 *_EX_ListHead; \
    _EX_ListHead = (ListHead); \
    _EX_Blink = _EX_ListHead->Blink; \
    (Entry)->Flink = _EX_ListHead; \
    (Entry)->Blink = _EX_Blink; \
    _EX_Blink->Flink = (Entry); \
    _EX_ListHead->Blink = (Entry); \
}

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

int __stdcall func_001F6427(void *handle)
{
    char dpc[28];
    S_ListEntry_F64 list;
    unsigned char irql;
    long status;
    S_ListEntry_F64 *e;
    S_ListEntry_F64 *next;
    S_ListEntry_F64 *flink;
    S_ListEntry_F64 *blink;
    S_IrpF64 *irp;

    list.Flink = list.Blink = &list;
    status = _imp__ObReferenceObjectByHandle(handle, _imp__IoFileObjectType, &handle);
    if (status < 0) {
        func_001DD659(status);
        return 0;
    }
    irql = _imp__KeRaiseIrqlToDpcLevel();
    for (e = IDEX_QUEUE->Flink; e != IDEX_QUEUE; e = next) {
        irp = (S_IrpF64 *)((char *)e - 0x3c);
        next = e->Flink;
        if (irp->f60 == handle && (irp->f5 & 0x10) == 0) {
            blink = irp->ListEntry.Blink;
            flink = irp->ListEntry.Flink;
            blink->Flink = flink;
            flink->Blink = blink;
            irp->ListEntry.Flink = &list;
            irp->ListEntry.Blink = list.Blink;
            list.Blink->Flink = &irp->ListEntry;
            list.Blink = &irp->ListEntry;
        }
    }
    _imp__KfLowerIrql(irql);
    if (list.Flink != &list) {
        _imp__KeInitializeDpc(dpc, (void *)func_001F6400, &list);
        _imp__KeInsertQueueDpc(dpc, 0, 0);
    }
    _imp__ObfDereferenceObject(handle);
    return 1;
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
