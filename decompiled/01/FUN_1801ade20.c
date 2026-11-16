// FUN_1801ade20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ade20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 *
FUN_1801ade20(undefined1 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  
  uVar1 = (*param_2)(param_3,param_4,param_5,param_6,2,0x485648);
  *param_1 = uVar1;
  param_1[1] = 1;
  return param_1;
}



