// FUN_18062163c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062163c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18062163c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_180d060d0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_180d060d0;
  if ((DAT_180d060d0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_180621488(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_1806b11b0,
                                     &DAT_1806b11b4), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}



