// FUN_180616280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180616280 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180616280(longlong param_1,longlong param_2,longlong param_3)

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
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
  else {
    uVar1 = FUN_180616328(param_1,param_2,local_328);
    FUN_1806122e0(uVar1,local_328,param_3);
    if ((*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) &&
       (*(longlong *)(param_2 + 0x10) == 0)) {
      **(undefined1 **)(param_2 + 0x18) = 0;
    }
  }
}



