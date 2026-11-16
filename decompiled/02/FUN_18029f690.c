// FUN_18029f690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029f690 */

undefined1 * FUN_18029f690(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_18015b360(param_1 + 0x20,param_2 + 0x20);
  FUN_18015b360(param_1 + 0x40,param_2 + 0x40);
  param_1[0x60] = param_2[0x60];
  return param_1;
}



