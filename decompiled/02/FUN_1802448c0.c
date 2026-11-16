// FUN_1802448c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802448c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_1802448c0(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = (*param_2)(param_3,param_4,param_5,8,0,0,0,0);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



