// FUN_18015bea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015bea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015bea0(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar4;
  char *pcVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  char local_15 [5];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  pcVar3 = local_15 + 2;
  uVar2 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + -1;
      *pcVar3 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
      param_2 = (uint)((ulonglong)param_2 / 10);
    } while (param_2 != 0);
    pcVar3 = pcVar4 + -2;
    *pcVar3 = '-';
  }
  else {
    do {
      pcVar3 = pcVar3 + -1;
      uVar1 = uVar2 / 10;
      *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
      uVar2 = uVar1;
    } while ((int)uVar1 != 0);
  }
  local_30 = param_1;
  FUN_18015bdb0(param_1,pcVar3,local_15 + 2);
}



