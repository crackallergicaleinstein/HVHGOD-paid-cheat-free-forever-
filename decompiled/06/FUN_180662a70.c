// FUN_180662a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662a70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180662a70(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180cd3d10;
  if (DAT_180cd3d10 != 0) {
    DAT_180cd3d10 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  return;
}



