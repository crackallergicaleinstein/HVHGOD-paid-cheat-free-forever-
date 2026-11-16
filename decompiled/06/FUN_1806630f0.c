// FUN_1806630f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806630f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1806630f0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180cd48e8;
  if (DAT_180cd48e8 != 0) {
    DAT_180cd48e8 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  return;
}



