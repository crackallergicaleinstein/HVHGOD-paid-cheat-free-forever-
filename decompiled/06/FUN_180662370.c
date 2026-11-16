// FUN_180662370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662370 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180662370(void)

{
  longlong lVar1;
  
  FUN_1800f0160(&DAT_180b90988);
  FUN_1801c6ca0();
  FUN_1804547d0(DAT_180b90978,0x48);
  lVar1 = DAT_180b90968;
  if (DAT_180b90968 != 0) {
    DAT_180b90968 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  lVar1 = DAT_180b90960;
  if (DAT_180b90960 != 0) {
    DAT_180b90960 = 0;
    (**(code **)(*(longlong *)lVar1 + 0x10))();
  }
  return;
}



