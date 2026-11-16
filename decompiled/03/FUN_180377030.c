// FUN_180377030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180377030 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 *
FUN_180377030(undefined1 *param_1,code *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  
  uVar1 = (*param_2)(param_3,param_4,0,param_6,0);
  *param_1 = uVar1;
  param_1[1] = 1;
  return param_1;
}



