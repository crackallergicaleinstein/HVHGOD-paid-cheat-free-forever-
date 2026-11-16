// FUN_1806218d4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806218d4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1806218d4(undefined8 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_180d06050 == (code *)0xffffffffffffffff) {
LAB_180621939:
    Locale = FUN_180621bc4(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    pcVar1 = DAT_180d06050;
    if (DAT_180d06050 == (code *)0x0) {
      pcVar1 = (code *)FUN_180621488(10,"GetLocaleInfoEx",&DAT_1806b10b8,"GetLocaleInfoEx");
      if (pcVar1 == (code *)0x0) goto LAB_180621939;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4);
  }
  return;
}



