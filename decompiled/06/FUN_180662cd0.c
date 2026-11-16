// FUN_180662cd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662cd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180662cd0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180cd3e08;
  if (DAT_180cd3e08 != 0) {
    DAT_180cd3e08 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  return;
}



