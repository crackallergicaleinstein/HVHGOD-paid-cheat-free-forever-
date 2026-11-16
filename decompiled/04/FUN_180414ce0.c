// FUN_180414ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180414ce0 */

ulonglong FUN_180414ce0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    bVar1 = FUN_1804160a0(param_1,param_2,param_3,param_4);
    lVar3 = FUN_18017ea70();
    if (*(int *)(lVar3 + 4) != 0) {
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
    }
    uVar2 = (ulonglong)bVar1;
  }
  return uVar2;
}



