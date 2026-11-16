// FUN_180414c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180414c70 */

ulonglong FUN_180414c70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar2 = FUN_18017ea70();
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  bVar1 = FUN_1801ad780(param_1,param_2,param_3);
  lVar2 = FUN_18017ea70();
  if (*(int *)(lVar2 + 4) != 0) {
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
  }
  return (ulonglong)bVar1;
}



