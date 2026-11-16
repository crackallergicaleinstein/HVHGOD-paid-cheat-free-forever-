// FUN_1802447f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802447f0 */

undefined8 * FUN_1802447f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



