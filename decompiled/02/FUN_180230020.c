// FUN_180230020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180230020 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180230020(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*param_2)();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



