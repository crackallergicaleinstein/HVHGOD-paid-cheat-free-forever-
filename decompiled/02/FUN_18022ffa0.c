// FUN_18022ffa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022ffa0 */

undefined8 FUN_18022ffa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



