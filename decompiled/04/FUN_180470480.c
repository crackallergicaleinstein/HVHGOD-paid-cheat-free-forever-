// FUN_180470480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180470480 */

undefined8 FUN_180470480(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar3 = (int)param_2 - *(int *)(param_1 + 0x28);
    uVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
    if (param_3 <= ~uVar3) {
      for (; uVar1 < uVar3 + param_3; uVar1 = uVar1 * 2) {
        if (0x7fffffff < uVar1) {
          return 0;
        }
      }
      lVar2 = _realloc_base(*(undefined8 *)(param_1 + 0x28),uVar1);
      if (lVar2 != 0) {
        *(longlong *)(param_1 + 0x28) = lVar2;
        *(ulonglong *)(param_1 + 0x20) = (ulonglong)uVar3 + lVar2;
        *(ulonglong *)(param_1 + 0x30) = lVar2 + (ulonglong)uVar1;
        return 1;
      }
    }
  }
  return 0;
}



