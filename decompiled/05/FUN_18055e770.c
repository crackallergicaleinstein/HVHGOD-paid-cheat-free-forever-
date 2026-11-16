// FUN_18055e770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055e770 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_18055e770(longlong *param_1)

{
  longlong lVar1;
  longlong *local_18;
  undefined8 local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_18 = param_1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = (longlong *)0x180827288;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  lVar1 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



