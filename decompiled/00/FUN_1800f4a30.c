// FUN_1800f4a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f4a30 */

undefined8 * FUN_1800f4a30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)param_2 = 0;
  param_2[1] = 0;
  return param_1;
}



