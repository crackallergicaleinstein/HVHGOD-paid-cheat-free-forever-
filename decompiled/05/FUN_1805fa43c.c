// FUN_1805fa43c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa43c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805fa43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = DAT_180bb1398;
  if (DAT_180bb1398 < 2) {
    uVar1 = FUN_1805fa2a4(DAT_180bb1398);
  }
  if (uVar1 < 3) {
    FUN_1805fa4c0();
  }
  else {
    (*DAT_180bb1380)(param_1,param_2,param_3,param_4);
  }
  return;
}



