// FUN_18022f0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022f0e0 */

ulonglong FUN_18022f0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1804513c0(param_1,1,2);
  if ((char)uVar2 != '\0') {
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    bVar1 = FUN_180230090(param_1,param_2,param_3,param_4);
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    uVar2 = (ulonglong)bVar1;
  }
  return uVar2;
}



