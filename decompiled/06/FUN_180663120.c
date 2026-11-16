// FUN_180663120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663120 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180663120(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180cd48f8;
  if (DAT_180cd48f8 != 0) {
    DAT_180cd48f8 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  return;
}



