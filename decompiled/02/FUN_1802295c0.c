// FUN_1802295c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802295c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1802295c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_180bbed90 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)DAT_180bbed90)();
  }
  FUN_1802290d0(param_1,param_2);
  return uVar1;
}



