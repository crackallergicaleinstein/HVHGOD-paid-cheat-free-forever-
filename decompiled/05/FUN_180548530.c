// FUN_180548530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180548530 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180548530(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  lVar1 = *param_1;
  if (*(char *)(param_1[1] + 0xfd) != '\0') {
    FUN_180638e00(((float)param_2 /
                  (float)((*(longlong *)(lVar1 + 0x18) - *(longlong *)(lVar1 + 0x10) >> 2) - 1)) *
                  6.2831855 + *(float *)(lVar1 + 8));
  }
}



