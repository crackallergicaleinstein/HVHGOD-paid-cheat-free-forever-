// FUN_1805b8400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b8400 */

ulonglong FUN_1805b8400(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    lVar3 = (longlong)*(int *)(param_1 + 0x1c) * (longlong)param_2;
    return (lVar3 >> 0x3f) + 0x8000 + lVar3 >> 0x10;
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar5 = *(int *)(param_1 + 0x20) - 1;
  if (uVar2 < uVar5) {
    uVar1 = uVar2;
    do {
      uVar1 = uVar1 + 1;
      if (param_2 < *(int *)((ulonglong)uVar1 * 0x20 + 0x38 + param_1)) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
  }
  if (uVar2 != 0) {
    piVar4 = (int *)((ulonglong)uVar2 * 0x20 + 0x38 + param_1);
    do {
      if (*piVar4 <= param_2) break;
      piVar4 = piVar4 + -8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if ((uVar2 == 0) && (param_2 < *(int *)(param_1 + 0x38))) {
    lVar3 = (longlong)(param_2 - *(int *)(param_1 + 0x38)) * (longlong)*(int *)(param_1 + 0x1c);
    return (ulonglong)
           (uint)((int)((ulonglong)((lVar3 >> 0x3f) + 0x8000 + lVar3) >> 0x10) +
                 *(int *)(param_1 + 0x3c));
  }
  lVar3 = (longlong)(param_2 - *(int *)((ulonglong)uVar2 * 0x20 + 0x38 + param_1)) *
          (longlong)*(int *)(((ulonglong)uVar2 + 2) * 0x20 + param_1);
  return (ulonglong)
         (uint)((int)((ulonglong)((lVar3 >> 0x3f) + 0x8000 + lVar3) >> 0x10) +
               *(int *)((ulonglong)uVar2 * 0x20 + 0x3c + param_1));
}



