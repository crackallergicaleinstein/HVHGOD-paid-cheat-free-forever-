// FUN_180621a48 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621a48 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180621a48(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (DAT_180d06098 == (code *)0xffffffffffffffff) {
LAB_180621aad:
    FUN_1806310bc(param_1,param_2,param_3);
  }
  else {
    pcVar1 = DAT_180d06098;
    if (DAT_180d06098 == (code *)0x0) {
      pcVar1 = (code *)FUN_180621488(0x13,"LCIDToLocaleName",&DAT_1806b1148,"LCIDToLocaleName");
      if (pcVar1 == (code *)0x0) goto LAB_180621aad;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}



