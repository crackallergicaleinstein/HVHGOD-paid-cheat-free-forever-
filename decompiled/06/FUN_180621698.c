// FUN_180621698 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621698 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180621698(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_180d060d8 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_180d060d8;
  if ((DAT_180d060d8 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_180621488(0x1b,"AppPolicyGetThreadInitializationType",&DAT_1806b11e0,
                                     &DAT_1806b11e4), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}



