// FUN_1806219e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806219e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1806219e0(undefined8 param_1)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_180d06088 == (code *)0xffffffffffffffff) {
LAB_180621a2a:
    Locale = FUN_180621bc4(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180621a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IsValidLocale(Locale,1);
    return;
  }
  pcVar1 = DAT_180d06088;
  if (DAT_180d06088 == (code *)0x0) {
    pcVar1 = (code *)FUN_180621488(0x11,"IsValidLocaleName",&DAT_1806b1110,"IsValidLocaleName");
    if (pcVar1 == (code *)0x0) goto LAB_180621a2a;
  }
  (*pcVar1)(param_1);
  return;
}



