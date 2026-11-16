// FUN_1803ffd80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ffd80 */

ulonglong FUN_1803ffd80(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar2 = FUN_18017ea70();
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  bVar1 = FUN_1804514c0(param_1,param_2,param_3);
  lVar2 = FUN_18017ea70();
  if (*(int *)(lVar2 + 4) != 0) {
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
  }
  return (ulonglong)bVar1;
}



