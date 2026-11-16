// FUN_180587bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180587bb0 */

void FUN_180587bb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x110) & 8) != 0) {
    lVar3 = (longlong)(int)param_1[10];
    lVar2 = *(short *)(lVar1 + 0x6a) * lVar3;
    *(uint *)((longlong)param_1 + 0x54) =
         (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar2 = *(short *)(lVar1 + 0x6c) * lVar3;
    *(uint *)(param_1 + 0xb) =
         (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar3 = *(short *)(lVar1 + 0x6e) * lVar3;
    *(uint *)((longlong)param_1 + 0x5c) =
         (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
  }
  return;
}



