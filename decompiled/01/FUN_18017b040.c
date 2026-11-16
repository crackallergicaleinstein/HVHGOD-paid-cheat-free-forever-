// FUN_18017b040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b040 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017b040(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_28._8_8_ = 0;
  local_28._0_8_ = param_1 + 0xc;
  local_30 = param_2;
  iVar1 = FUN_1805f68d0(param_1 + 0xc);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)((longlong)param_1 + 0xac) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_28[8] = 1;
  local_48 = (undefined1  [16])0x0;
  FUN_1805fd294(local_48,param_2);
  local_38 = local_48;
  if (*(char *)((longlong)param_1 + 0x101) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1801647e0(3);
  }
  thunk_FUN_1805fcb30(param_1 + 10,local_48);
  (**(code **)(*param_1 + 0x28))(param_1,local_28,0);
  FUN_1805fd358(local_48);
  if (local_28[8] != '\0') {
    FUN_1805f68fc(local_28._0_8_);
  }
  FUN_1805fd358(param_2);
}



