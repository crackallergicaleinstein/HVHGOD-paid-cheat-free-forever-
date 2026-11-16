// FUN_180391630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180391630 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180391630(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*param_2)(param_3,param_4,0);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



