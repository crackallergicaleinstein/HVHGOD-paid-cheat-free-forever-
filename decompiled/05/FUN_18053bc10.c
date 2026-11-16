// FUN_18053bc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053bc10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053bc10(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  cVar1 = FUN_18048b0e0("Activation Key",&DAT_180829dc4,1);
  if (cVar1 != '\0') {
    FUN_1805303d0("##misc_activation",0x43af0000);
  }
  cVar1 = FUN_180488630("##misc_activation","Activation Key",0x43af0000);
  if (cVar1 != '\0') {
    FUN_1805302b0("Choose a shortcut and how it changes this option.");
    FUN_180488c60();
    FUN_18050e290(param_1);
    FUN_180488f10();
    FUN_1804aeac0();
  }
}



