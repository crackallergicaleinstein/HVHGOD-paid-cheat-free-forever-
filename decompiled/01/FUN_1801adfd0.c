// FUN_1801adfd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801adfd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 *
FUN_1801adfd0(undefined4 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = (*param_2)(param_3,0x485648,param_5,param_6);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



