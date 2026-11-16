// FUN_180611854 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180611854 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180611854(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18060fe00();
    *puVar2 = 0x16;
    FUN_18060aad4();
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
  else {
    uVar1 = FUN_1806118f4(param_1,param_2,local_328);
    FUN_1806122e0(uVar1,local_328,param_3);
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
}



