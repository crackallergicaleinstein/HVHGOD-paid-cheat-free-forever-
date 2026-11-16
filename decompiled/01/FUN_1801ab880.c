// FUN_1801ab880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ab880 */

undefined8 * FUN_1801ab880(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  return param_1;
}



