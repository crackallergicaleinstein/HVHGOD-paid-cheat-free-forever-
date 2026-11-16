// FUN_18015b580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015b580 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015b580(undefined8 param_1,undefined1 (*param_2) [16],undefined4 param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  char *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_20 = (char *)0x0;
  local_18 = FUN_1805fac2c(param_3,&local_20);
  if ((local_20 == (char *)0x0) || (local_18 == 0)) {
    lVar2 = 0xd;
    pcVar1 = "unknown error";
  }
  else {
    pcVar1 = local_20;
    lVar2 = local_18;
  }
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  FUN_18015ba30(param_2,pcVar1,lVar2);
  LocalFree(local_20);
}



