// FUN_18015b9b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015b9b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015b9b0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  pcVar2 = local_14 + 1;
  do {
    pcVar2 = pcVar2 + -1;
    uVar1 = param_2 / 10;
    *pcVar2 = (char)param_2 + (char)uVar1 * -10 + '0';
    param_2 = uVar1;
  } while (uVar1 != 0);
  local_30 = param_1;
  FUN_18015bdb0(param_1,pcVar2,local_14 + 1);
}



