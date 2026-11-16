// FUN_180662840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662840 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180662840(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180cd3a20;
  if (DAT_180cd3a20 != 0) {
    DAT_180cd3a20 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  return;
}



