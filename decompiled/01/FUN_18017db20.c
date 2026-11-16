// FUN_18017db20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017db20 */

undefined8 * FUN_18017db20(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(undefined2 *)*(undefined1 (*) [16])(param_1 + 4) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  param_1[8] = uVar1;
  FUN_180176c30();
  FUN_18017d9c0(param_1,param_2 + 0x28);
  return param_1;
}



