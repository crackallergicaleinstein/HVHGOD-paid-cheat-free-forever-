// FUN_180598630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180598630 */

undefined8 FUN_180598630(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *param_2 = *(undefined8 *)(param_1 + 0xd8);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  param_2[2] = *(undefined8 *)(param_1 + 0xe8);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  param_2[4] = *(undefined8 *)(param_1 + 0xf8);
  param_2[5] = uVar1;
  param_2[6] = *(undefined8 *)(param_1 + 0x108);
  return 0;
}



