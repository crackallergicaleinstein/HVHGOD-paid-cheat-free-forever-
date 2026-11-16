// FUN_1800aa3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aa3b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800aa3b0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  lVar1 = FUN_1800aa200();
  if (*(longlong *)(lVar1 + 8) == *(longlong *)(lVar1 + 0x10)) {
    FUN_1801200b0(lVar1,*(longlong *)(lVar1 + 8),param_1);
  }
  else {
    FUN_1801417a0();
    *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 0x70;
  }
  FUN_180111b90(param_1 + 0x58);
  FUN_18015c010(param_1 + 0x38);
  FUN_18015c010(param_1 + 0x18);
}



