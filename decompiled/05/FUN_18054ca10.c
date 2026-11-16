// FUN_18054ca10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054ca10 */

undefined4 * FUN_18054ca10(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *param_1 = *param_2;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[1] = param_2[1];
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  return param_1;
}



