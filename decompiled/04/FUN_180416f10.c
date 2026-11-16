// FUN_180416f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180416f10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180416f10(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  local_18[0] = *param_2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x38);
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa874();
  }
  cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,local_18);
  if (cVar2 == '\0') {
    cVar2 = FUN_1804130e0(*(undefined8 *)(param_1 + 0x10));
    if (cVar2 == '\0') {
      **(undefined1 **)(param_1 + 0x18) = 1;
    }
  }
}



