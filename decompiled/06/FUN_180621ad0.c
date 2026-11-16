// FUN_180621ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621ad0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180621ad0(undefined8 param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  if (DAT_180d06090 == (code *)0xffffffffffffffff) {
LAB_180621b7b:
    Locale = FUN_180621bc4(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = DAT_180d06090;
    if (DAT_180d06090 == (code *)0x0) {
      pcVar1 = (code *)FUN_180621488(0x12,"LCMapStringEx",&DAT_1806b1130,"LCMapStringEx");
      if (pcVar1 == (code *)0x0) goto LAB_180621b7b;
    }
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



