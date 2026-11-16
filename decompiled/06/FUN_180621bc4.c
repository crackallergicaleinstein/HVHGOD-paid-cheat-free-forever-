// FUN_180621bc4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621bc4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180621bc4(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (DAT_180d060a0 == (code *)0xffffffffffffffff) {
LAB_180621c13:
    FUN_1806311a4(param_1);
  }
  else {
    pcVar1 = DAT_180d060a0;
    if (DAT_180d060a0 == (code *)0x0) {
      pcVar1 = (code *)FUN_180621488(0x14,"LocaleNameToLCID",&DAT_1806b1168,"LocaleNameToLCID");
      if (pcVar1 == (code *)0x0) goto LAB_180621c13;
    }
    (*pcVar1)(param_1,param_2);
  }
  return;
}



