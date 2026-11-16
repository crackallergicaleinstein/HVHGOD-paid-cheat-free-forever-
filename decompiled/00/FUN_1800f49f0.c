// FUN_1800f49f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f49f0 */

undefined1 * FUN_1800f49f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  puVar1 = (undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *puVar1;
  *puVar1 = uVar3;
  FUN_1801409d0(puVar1,*param_2);
  return param_1;
}



