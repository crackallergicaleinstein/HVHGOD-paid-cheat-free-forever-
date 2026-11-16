// FUN_18054e530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054e530 */

void FUN_18054e530(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)*param_1;
  FUN_180488c60();
  FUN_180517040("History Window",lVar1 + 0x140,0,200,"%.0f ms");
  FUN_180488f10();
  uVar2 = param_1[1];
  FUN_180488c60();
  FUN_180516d20(uVar2);
  FUN_180488f10();
  return;
}



