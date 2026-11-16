// FUN_180244990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180244990 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 *
FUN_180244990(undefined1 *param_1,code *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  
  uVar1 = (*param_2)(param_3,param_4,param_5,param_6,param_7);
  *param_1 = uVar1;
  param_1[1] = 1;
  return param_1;
}



