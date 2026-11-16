// FUN_1805fa36c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa36c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805fa36c(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = DAT_180bb1398;
  if (DAT_180bb1398 < 2) {
    uVar1 = FUN_1805fa2a4(DAT_180bb1398);
  }
  if (uVar1 < 3) {
    FUN_1805fa3b0();
    return;
  }
  (*DAT_180bb1390)(param_1);
  return;
}



