// FUN_1801786b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801786b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801786b0(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_28._8_8_ = 0;
  local_28._0_8_ = param_1 + 0xc;
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
  if (*(char *)((longlong)param_1 + 0x102) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x102) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,local_28);
  }
  iVar1 = *(int *)((longlong)param_1 + 0xfc);
  while (iVar1 == 0) {
    FUN_1805f6a84(param_1 + 0x16,local_28._0_8_);
    iVar1 = *(int *)((longlong)param_1 + 0xfc);
  }
  if (local_28[8] != '\0') {
    FUN_1805f68fc(local_28._0_8_);
  }
}



