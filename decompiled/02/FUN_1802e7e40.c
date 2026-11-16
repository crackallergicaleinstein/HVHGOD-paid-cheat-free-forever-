// FUN_1802e7e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e7e40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 *
FUN_1802e7e40(undefined1 *param_1,code *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  
  uVar1 = (*param_2)(param_3,param_4,param_5,param_6,1,0,param_9,1,0);
  *param_1 = uVar1;
  param_1[1] = 1;
  return param_1;
}



