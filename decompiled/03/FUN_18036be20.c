// FUN_18036be20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036be20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036be20(undefined1 (*param_1) [16])

{
  char cVar1;
  undefined1 auStack_88 [40];
  undefined1 (*local_60) [16];
  undefined1 local_50 [32];
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  FUN_18036b840(local_30);
  if (local_20 != 0) {
    FUN_1800f5370(local_50,local_30);
    cVar1 = FUN_180165ac0(local_50);
    if ((cVar1 != '\0') && (cVar1 = FUN_1800a9120(local_30), cVar1 != '\0')) {
      FUN_1800f5370(param_1,local_30);
      FUN_18015b930(local_30);
    }
  }
  FUN_18015b930(local_30);
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 7;
  *(undefined2 *)*param_1 = 0;
}



