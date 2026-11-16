// FUN_1803d64c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d64c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 *
FUN_1803d64c0(undefined1 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  
  uVar1 = (*param_2)(param_3,param_4,param_5,0);
  *param_1 = uVar1;
  param_1[1] = 1;
  return param_1;
}



