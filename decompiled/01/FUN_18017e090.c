// FUN_18017e090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017e090 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017e090(longlong param_1,longlong param_2,longlong param_3,char param_4,ulonglong param_5
                  )

{
  char cVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  if ((((param_4 != '\0') && (param_2 != param_3)) && (param_2 != 0)) &&
     (param_5 < *(ulonglong *)(param_1 + 0x40))) {
    local_18 = param_2;
    cVar1 = FUN_1801acc90(param_1,&local_18);
    if (cVar1 != '\0') {
    }
  }
}



