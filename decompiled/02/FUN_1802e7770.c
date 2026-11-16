// FUN_1802e7770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e7770 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 *
FUN_1802e7770(undefined4 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = (*param_2)(param_3,param_4,param_5);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



