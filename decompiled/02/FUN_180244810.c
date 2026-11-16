// FUN_180244810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180244810 */

ulonglong FUN_180244810(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1804513c0(param_1,1,2);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  bVar1 = FUN_1802449f0(param_1,param_2,param_3);
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  return (ulonglong)bVar1;
}



