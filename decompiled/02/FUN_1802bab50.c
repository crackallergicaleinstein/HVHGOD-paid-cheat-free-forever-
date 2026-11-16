// FUN_1802bab50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bab50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1802bab50(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*param_2)(param_3,0x564c4954,0);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



