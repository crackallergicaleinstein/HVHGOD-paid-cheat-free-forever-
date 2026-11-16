// FUN_180194900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180194900 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180194900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_658 [48];
  int *local_628;
  undefined8 *local_620;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  uVar1 = *param_1;
  local_628 = (int *)*param_2;
  if (local_628 != (int *)0x0) {
    LOCK();
    *local_628 = *local_628 + 1;
    UNLOCK();
  }
  local_620 = param_2;
  FUN_18018fb10(uVar1,&local_628);
  FUN_18017cdd0(param_2);
}



