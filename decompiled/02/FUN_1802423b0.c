// FUN_1802423b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802423b0 */

undefined8 * FUN_1802423b0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = FUN_18017ea70();
  *param_1 = *(undefined8 *)(lVar1 + 8);
  piVar2 = (int *)FUN_18017ea70();
  *piVar2 = *piVar2 + 1;
  *(undefined8 *)(piVar2 + 2) = param_2;
  return param_1;
}



