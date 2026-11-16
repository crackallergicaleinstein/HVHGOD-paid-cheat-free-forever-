// FUN_1805fc8b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc8b4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805fc8b4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if ((longlong *)param_2[7] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa874();
  }
  (**(code **)(*(longlong *)param_2[7] + 0x10))();
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
}



