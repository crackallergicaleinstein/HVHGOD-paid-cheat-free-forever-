// FUN_180182c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180182c50 */

undefined1 FUN_180182c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18017ea70();
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
  uVar1 = FUN_1804514f0(param_1,param_2,param_3);
  lVar2 = FUN_18017ea70();
  if (*(int *)(lVar2 + 4) != 0) {
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
  }
  return uVar1;
}



