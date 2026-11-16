// FUN_180621968 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621968 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180621968(undefined8 param_1,undefined4 param_2)

{
  LCID LVar1;
  code *pcVar2;
  
  if (DAT_180d06070 == (code *)0xffffffffffffffff) {
LAB_1806219b7:
    LVar1 = GetUserDefaultLCID();
    FUN_180621a48(LVar1,param_1,param_2,0);
  }
  else {
    pcVar2 = DAT_180d06070;
    if (DAT_180d06070 == (code *)0x0) {
      pcVar2 = (code *)FUN_180621488(0xe,"GetUserDefaultLocaleName",&DAT_1806b10e8,
                                     "GetUserDefaultLocaleName");
      if (pcVar2 == (code *)0x0) goto LAB_1806219b7;
    }
    (*pcVar2)(param_1,param_2);
  }
  return;
}



